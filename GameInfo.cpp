//
//  GameInfo.cpp
//  Project
//
//  Created by Richard on 2023/11/21.
//

#include "GameInfo.h"
#include <iostream>
#include <fstream>
using namespace std;

extern int maxcombo[][3];
extern const char* BeatmapAddr[][3];
extern int BEATMAPPARAMS_TOTAL;

void GameInfo::calculate()
{
    score = perfect * basicscore + great * (2 * basicscore / 3) + good * (basicscore / 3) + fair * (basicscore / 6);
    bestCombo = (bestCombo <= currentCombo) ? currentCombo : bestCombo;
    
    cout << "perfect: " << perfect << endl;
    cout << "great: " << great << endl;
    cout << "good: " << good << endl;
    cout << "fair: " << fair << endl;
    cout << "miss: " << miss << endl;
    cout << "combo: " << currentCombo << endl;
    cout << "beatCombo: " << bestCombo << endl;
    cout << "score: " << score << endl;
    
}

void GameInfo::cutCombo()
{
    currentCombo = 0;
}

void GameInfo::getBeatmap(int index, int difficulty)
{
    ifstream in;
    in.open(BeatmapAddr[index][difficulty]);
    string temps;
    in >> temps;
    MusicName = temps;
    in >> temps;
    MusicSubName = temps;
    in >> temps;
    MusicDifficultyName = temps;
    int temp;
    in >> temp;
    MusicDifficultyParam = temp;
    in >> temp;
    BPM = temp;
    in >> temp;
    duration = temp;
    in >> temp;
    maxCombo = temp;
    in >> temp;
    maxObject = temp;
    beatmap = new int* [maxObject];
    for(int i = 0; i < JUDGELINE_TOTAL; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            in >> temp;
            JudgelineInit[i][j] = temp;
        }
    }
    for(int i = 0; i < JUDGELINE_TOTAL; i++)
    {
        in >> temp;
        JudgelineInit[i][2] = temp;
    }
    for(int i = 0; i < maxObject; i++)
    {
        beatmap[i] = new int [BEATMAPPARAMS_TOTAL];
        for(int j = 0; ; j++)
        {
            in >> temp;
            if(temp == -1)
            {
                //cout << endl;
                if(j != 2) break;
                else beatmap[i][j] = temp;
            }
            else
            {
                beatmap[i][j] = temp;
                cout << beatmap[i][j] << " ";
            }
        }
    }
}

void GameInfo::printMusicdatas()
{
    cout << "MusicName: " << MusicName << endl;
    cout << "MusicSubName: " << MusicSubName << endl;
    cout << "MusicDifficultyName: " << MusicDifficultyName << endl;
    cout << "MusicDifficultyParam: " << MusicDifficultyParam << endl;
    cout << "BPM: " << BPM << endl;
    cout << "duration: " << duration << endl;
    cout << "basicscore: " << basicscore << endl;
    cout << "Mi: " << Mi << endl;
    cout << "maxCombo: " << maxCombo << endl;
    cout << "maxObject: " << maxObject << endl;
}

void GameInfo::printBeatmap()
{
    for(int i = 0; i < maxObject; i++)
    {
        for(int j = 0; j < BEATMAPPARAMS_TOTAL; j++)
        {
            cout << beatmap[i][j] << " ";
        }
        cout << endl;
    }
}

void GameInfo::showResult()
{
	
	static Text ResultData[] = {Text(120, 100, 200, 30), Text(120, 150, 200, 30), Text(120, 200, 200, 30), Text(120, 230, 200, 30), Text(120, 260, 200, 30), Text(120, 290, 200, 30), Text(120, 320, 200, 30), Text(260, 250, 200, 30), Text(400, 220, 200, 30)};
    //0: MusicName, 1: Score, 2: Perfect, 3: Great, 4: Good, 5: Fair, 6: Miss, 7: BestCombo, 8: grade
	
	ResultData[0].loadFromRenderedText(getMusicName(), ResultData[0].textColor = { 255, 255, 255 }, 1, 9);
    ResultData[1].loadFromRenderedText(getString(getScore()), ResultData[2].textColor = { 255, 255, 255 }, 1, 7);
    ResultData[2].loadFromRenderedText(getString(getPerfect()), ResultData[3].textColor = { 255, 255, 255 }, 1, 5);
    ResultData[3].loadFromRenderedText(getString(getGreat()), ResultData[4].textColor = { 255, 255, 255 }, 1, 5);
    ResultData[4].loadFromRenderedText(getString(getGood()), ResultData[5].textColor = { 255, 255, 255 }, 1, 5);
    ResultData[5].loadFromRenderedText(getString(getFair()), ResultData[6].textColor = { 255, 255, 255 }, 1, 5);
    ResultData[6].loadFromRenderedText(getString(getMiss()), ResultData[7].textColor = { 255, 255, 255 }, 1, 5);
    ResultData[7].loadFromRenderedText(getString(getBestCombo()), ResultData[8].textColor = { 255, 255, 255 }, 1, 5);
    ResultData[8].loadFromRenderedText(getString(getGrade()), ResultData[8].textColor = { 255, 255, 255 }, 1, 9);
    for(int i = 0; i < 9; i++)
    {
        ResultData[i].changeVisible(1);
        ResultData[i].setAlpha(ResultData[i].getTrans());
        ResultData[i].render(ResultData[i].getPosx(), ResultData[i].getPosy());
    }
}
