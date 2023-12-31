//
//  GameData.h
//  Project
//
//  Created by Richard on 2023/11/21.
//

#ifndef GameData_h
#define GameData_h
#define Q 16

const char* FontAddr[] = {"./Font/lazy.ttf", "./Font/CaviarDreams.ttf", "./Font/CaviarDreams_Italic.ttf", "./Font/CaviarDreams_BoldItalic.ttf", "./Font/Caviar_Dreams_Bold.ttf"};
const char* SoundEffectAddr[] = {"./SoundEffect/hitsound.mp3"};
const char* NoteAddr[] = {"./Element/hit.png", "./Element/hold.png"};
const char* ButtonAddr[] = {"./Element/continue.png", "./Element/close.png"};
const char* JudgelineAddr[] = {"./Element/judgeline.png", "./Element/judgeline.png", "./Element/judgeline.png", "./Element/judgeline.png"};
const char* SongfileAddr[] = {"./Element/judgeline.png"};
const char* MaingameMusicAddr[] = {"./Music/M000.mp3"};
const char* BackgroundAddr[] = {"./Background/title.bmp", "./Background/selecting.bmp", "./Background/maingame.bmp", "./Background/result.bmp"};
const char* BeatmapAddr[][3] = {{"./Beatmap/001.1.txt", "./Beatmap/001.2.txt", "./Beatmap/danger.txt"}};
//"./Background/select.bmp"
int BEATMAPPARAMS_TOTAL = 9;

/*
const char* MaingameMusicName[] = {"UmUsic"};
const char* MaingameMusicSubName[] = {"Bigbee"};
const char* MaingameMusicDifficulty[] = {"Easy", "Hard", "Insane"};
*/

//int BPMlist[] = {175}; //Unit: beats per minute
//int durationlist[] = {123}; //Unit: s (不含開頭準備3秒)
//int maxcombo[][3] = {{300}};
//long double Mi[] = {60000.0/(175*16)};//Unit: ms
//Mi註解：1Mi是1/16拍（64分音符）
//以一首44拍的音樂為例，第三小節的第二拍為64*3+16=208Mi

//int JudgelineInit[][2] = {{75, 360}, {205, 360}, {335, 360}, {465, 360}};
/*
i0: 曲目
i1: 0: Easy, 1: Hard, 2: Insane
i2: 音符數量
i3: 0: 出現時間(以Mi[i]為單位) 1: 接觸時間(以Mi[i]為單位), 2: note類型（0:hit, 1:hold）3: 接觸按鍵序號(DFJK->0123), 4:接觸位置x, 5:接觸位置y, 6:移動速度(1單位=80px/s)
*/
/*
int notedata[][3][1500][7] =
{
    {//000.mp3 從-140Mi開始
        {//Easy
            {-50, 0, 0, 0, 75, 360, 5},
            {2*Q-50, 2*Q, 0, 1, 205, 360, 5},
            {4*Q-50, 4*Q, 0, 3, 465, 360, 5},
            {6*Q-50, 6*Q, 0, 2, 335, 360, 5},
            {6*Q-50, 6*Q, 0, 0, 335, 360, 5},
            {8*Q-50, 8*Q, 0, 3, 465, 360, 5},
            {10*Q-50, 10*Q, 0, 0, 75, 360, 5},
            {10*Q-50, 10*Q, 0, 2, 335, 360, 5},
            {11*Q-50, 11*Q, 0, 1, 205, 360, 5},
            {11*Q-50, 11*Q, 0, 3, 465, 360, 5},
            {12*Q-50, 12*Q, 0, 0, 75, 360, 5},
            {12*Q-50, 12*Q, 0, 2, 335, 360, 5},
            {16*Q-50, 16*Q, 0, 0, 75, 360, 5},
            {18*Q-50, 18*Q, 0, 1, 205, 360, 5},
            {20*Q-50, 20*Q, 0, 3, 465, 360, 5},
            {22*Q-50, 22*Q, 0, 2, 335, 360, 5},
            {24*Q-50, 24*Q, 0, 1, 205, 360, 5},
            {24*Q-50, 24*Q, 0, 3, 465, 360, 5},
            {26*Q-50, 26*Q, 0, 0, 75, 360, 5},
            {26*Q-50, 26*Q, 0, 2, 335, 360, 5},
            {28*Q-50, 28*Q, 0, 1, 205, 360, 5},
            {28*Q-50, 28*Q, 0, 3, 465, 360, 5},
            {36*Q-50, 36*Q, 0, 0, 75, 360, 5},
            {36*Q-50, 36*Q, 0, 3, 465, 360, 5},
            {40*Q-50, 40*Q, 0, 1, 205, 360, 5},
            {40*Q-50, 40*Q, 0, 2, 335, 360, 5},
            {44*Q-50, 44*Q, 0, 0, 75, 360, 5},
            {44*Q-50, 44*Q, 0, 2, 335, 360, 5},
            {48*Q-50, 48*Q, 0, 1, 205, 360, 5},
            {48*Q-50, 48*Q, 0, 3, 465, 360, 5},
            {52*Q-50, 52*Q, 0, 0, 75, 360, 5},
            {52*Q-50, 52*Q, 0, 3, 465, 360, 5},
            {56*Q-50, 56*Q, 0, 1, 205, 360, 5},
            {56*Q-50, 56*Q, 0, 2, 335, 360, 5},
            {59*Q-50, 59*Q, 0, 1, 205, 360, 5},
            {60*Q-50, 60*Q, 0, 0, 75, 360, 5},
            {60*Q-50, 60*Q, 0, 2, 335, 360, 5},
            {63*Q-50, 63*Q, 0, 2, 335, 360, 5},
            {64*Q-50, 64*Q, 0, 1, 205, 360, 5},
            {64*Q-50, 64*Q, 0, 3, 465, 360, 5},
            {68*Q-50, 68*Q, 0, 0, 75, 360, 5},
            {69*Q-50, 69*Q, 0, 0, 75, 360, 5},
            {70*Q-50, 70*Q, 0, 0, 75, 360, 5},
            {72*Q-50, 72*Q, 0, 3, 465, 360, 5},
            {73*Q-50, 73*Q, 0, 3, 465, 360, 5},
            {74*Q-50, 74*Q, 0, 3, 465, 360, 5},
            {76*Q-50, 76*Q, 0, 1, 205, 360, 5},
            {77*Q-50, 77*Q, 0, 1, 205, 360, 5},
            {78*Q-50, 78*Q, 0, 1, 205, 360, 5},
            {80*Q-50, 80*Q, 0, 2, 335, 360, 5},
            {81*Q-50, 81*Q, 0, 2, 335, 360, 5},
            {82*Q-50, 82*Q, 0, 2, 335, 360, 5},
            {84*Q-50, 84*Q, 0, 1, 205, 360, 5},
            {85*Q-50, 85*Q, 0, 1, 205, 360, 5},
            {86*Q-50, 86*Q, 0, 1, 205, 360, 5},
            {88*Q-50, 88*Q, 0, 3, 465, 360, 5},
            {89*Q-50, 89*Q, 0, 3, 465, 360, 5},
            {90*Q-50, 90*Q, 0, 3, 465, 360, 5},
            {92*Q-50, 92*Q, 0, 2, 335, 360, 5},
            {93*Q-50, 93*Q, 0, 2, 335, 360, 5},
            {94*Q-50, 94*Q, 0, 2, 335, 360, 5},
            {96*Q-50, 96*Q, 0, 0, 75, 360, 5},
            {97*Q-50, 97*Q, 0, 0, 75, 360, 5},
            {98*Q-50, 98*Q, 0, 0, 75, 360, 5},
            {99*Q-50, 99*Q, 0, 0, 75, 360, 5},
            {101*Q-50, 101*Q, 0, 0, 75, 360, 5},
            {101*Q-50, 101*Q, 0, 1, 205, 360, 5},
            {101*Q-50, 101*Q, 0, 2, 335, 360, 5},
            {101*Q-50, 101*Q, 0, 3, 465, 360, 5},
            {102*Q-50, 102*Q, 0, 1, 205, 360, 5},
            {103*Q-50, 103*Q, 0, 1, 205, 360, 5},
            {104*Q-50, 104*Q, 0, 1, 205, 360, 5},
            {106*Q-50, 106*Q, 0, 3, 465, 360, 5},
            {108*Q-50, 108*Q, 0, 0, 75, 360, 5},
            {109*Q-50, 109*Q, 0, 0, 75, 360, 5},
            {109*Q+8-50, 109*Q+8, 0, 0, 75, 360, 5},
            {112*Q-50, 112*Q, 0, 2, 335, 360, 5},
            {114*Q-50, 114*Q, 0, 3, 465, 360, 5},
            {115*Q-50, 115*Q, 0, 1, 205, 360, 5},
            {117*Q-50, 117*Q, 0, 0, 75, 360, 5},
            {117*Q-50, 117*Q, 0, 1, 205, 360, 5},
            {117*Q-50, 117*Q, 0, 2, 335, 360, 5},
            {117*Q-50, 117*Q, 0, 3, 465, 360, 5},
            {118*Q-50, 118*Q, 0, 0, 75, 360, 5},
            {119*Q-50, 119*Q, 0, 0, 75, 360, 5},
            {120*Q-50, 120*Q, 0, 0, 75, 360, 5},
            {122*Q-50, 122*Q, 0, 2, 335, 360, 5},
            {124*Q-50, 124*Q, 0, 3, 465, 360, 5},
            {125*Q+8-50, 125*Q+8, 0, 1, 205, 360, 5},
            {126*Q+8-50, 126*Q+8, 0, 1, 205, 360, 5},
            {127*Q+8-50, 127*Q+8, 0, 1, 205, 360, 5},
            {128*Q+8-50, 128*Q+8, 0, 1, 205, 360, 5},
            {130*Q-50, 130*Q, 0, 0, 75, 360, 5},
            {130*Q-50, 130*Q, 0, 2, 335, 360, 5},
            {131*Q-50, 131*Q, 0, 0, 75, 360, 5},
            {131*Q-50, 131*Q, 0, 2, 335, 360, 5},
            {132*Q-50, 132*Q, 0, 0, 75, 360, 5},
            {132*Q-50, 132*Q, 0, 1, 205, 360, 5},
            {132*Q-50, 132*Q, 0, 2, 335, 360, 5},
            {132*Q-50, 132*Q, 0, 3, 465, 360, 5},
            {134*Q-50, 134*Q, 0, 1, 205, 360, 5},
            {135*Q-50, 135*Q, 0, 3, 465, 360, 5},
            {136*Q-50, 136*Q, 0, 0, 75, 360, 5},
            {136*Q-50, 136*Q, 0, 1, 205, 360, 5},
            {136*Q-50, 136*Q, 0, 2, 335, 360, 5},
            {136*Q-50, 136*Q, 0, 3, 465, 360, 5},
            {138*Q-50, 138*Q, 0, 0, 75, 360, 5},
            {139*Q-50, 139*Q, 0, 2, 335, 360, 5},
            {140*Q-50, 140*Q, 0, 0, 75, 360, 5},
            {140*Q-50, 140*Q, 0, 1, 205, 360, 5},
            {140*Q-50, 140*Q, 0, 2, 335, 360, 5},
            {140*Q-50, 140*Q, 0, 3, 465, 360, 5},
            {142*Q-50, 142*Q, 0, 3, 465, 360, 5},
            {143*Q-50, 143*Q, 0, 0, 75, 360, 5},
            {144*Q-50, 144*Q, 0, 0, 75, 360, 5},
            {144*Q-50, 144*Q, 0, 1, 205, 360, 5},
            {144*Q-50, 144*Q, 0, 2, 335, 360, 5},
            {144*Q-50, 144*Q, 0, 3, 465, 360, 5},
            {146*Q-50, 146*Q, 0, 1, 205, 360, 5},
            {147*Q-50, 147*Q, 0, 2, 335, 360, 5},
            {148*Q-50, 148*Q, 0, 0, 75, 360, 5},
            {148*Q-50, 148*Q, 0, 1, 205, 360, 5},
            {150*Q-50, 150*Q, 0, 2, 335, 360, 5},
            {150*Q-50, 150*Q, 0, 3, 465, 360, 5},
            {152*Q-50, 152*Q, 0, 2, 335, 360, 5},
            {152*Q-50, 152*Q, 0, 3, 465, 360, 5},
            {154*Q-50, 154*Q, 0, 0, 75, 360, 5},
            {154*Q-50, 154*Q, 0, 1, 205, 360, 5},
            {156*Q-50, 156*Q, 0, 0, 75, 360, 5},
            {156*Q-50, 156*Q, 0, 1, 205, 360, 5},
            {157*Q-50, 157*Q, 0, 0, 75, 360, 5},
            {157*Q-50, 157*Q, 0, 1, 205, 360, 5},
            {158*Q-50, 158*Q, 0, 2, 335, 360, 5},
            {158*Q-50, 158*Q, 0, 3, 465, 360, 5},
            {159*Q-50, 159*Q, 0, 2, 335, 360, 5},
            {159*Q-50, 159*Q, 0, 3, 465, 360, 5},
            {160*Q-50, 160*Q, 0, 0, 75, 360, 5},
            {160*Q-50, 160*Q, 0, 1, 205, 360, 5},
            {161*Q-50, 161*Q, 0, 0, 75, 360, 5},
            {161*Q-50, 161*Q, 0, 1, 205, 360, 5},
            {162*Q-50, 162*Q, 0, 2, 335, 360, 5},
            {162*Q-50, 162*Q, 0, 3, 465, 360, 5},//transition
            {164*Q-50, 164*Q, 0, 0, 75, 360, 5},
            {164*Q-50, 164*Q, 0, 1, 205, 360, 5},
            {164*Q-50, 164*Q, 0, 2, 335, 360, 5},
            {164*Q-50, 164*Q, 0, 3, 465, 360, 5},
            {166*Q-50, 166*Q, 0, 1, 205, 360, 5},
            {168*Q-50, 168*Q, 0, 3, 465, 360, 5},
            {170*Q-50, 170*Q, 0, 2, 335, 360, 5},
            {172*Q-50, 172*Q, 0, 3, 465, 360, 5},
            {174*Q-50, 174*Q, 0, 0, 75, 360, 5},
            {174*Q-50, 174*Q, 0, 2, 335, 360, 5},
            {176*Q-50, 176*Q, 0, 0, 75, 360, 5},
            {176*Q-50, 176*Q, 0, 2, 335, 360, 5},
            {178*Q-50, 178*Q, 0, 0, 75, 360, 5},
            {178*Q-50, 178*Q, 0, 2, 335, 360, 5},
            {180*Q-50, 180*Q, 0, 0, 75, 360, 5},
            {180*Q-50, 180*Q, 0, 1, 205, 360, 5},
            {180*Q-50, 180*Q, 0, 2, 335, 360, 5},
            {180*Q-50, 180*Q, 0, 3, 465, 360, 5},
            {182*Q-50, 182*Q, 0, 1, 205, 360, 5},
            {184*Q-50, 184*Q, 0, 3, 465, 360, 5},
            {186*Q-50, 186*Q, 0, 2, 335, 360, 5},
            {188*Q-50, 188*Q, 0, 1, 205, 360, 5},
            {188*Q-50, 188*Q, 0, 3, 465, 360, 5},
            {190*Q-50, 190*Q, 0, 0, 75, 360, 5},
            {190*Q-50, 190*Q, 0, 2, 335, 360, 5},
            {192*Q-50, 192*Q, 0, 1, 205, 360, 5},
            {192*Q-50, 192*Q, 0, 3, 465, 360, 5},//196
            {196*Q-50, 196*Q, 0, 1, 205, 360, 5},
            {197*Q-50, 197*Q, 0, 1, 205, 360, 5},
            {198*Q-50, 198*Q, 0, 1, 205, 360, 5},
            {200*Q-50, 200*Q, 0, 2, 335, 360, 5},
            {201*Q-50, 201*Q, 0, 2, 335, 360, 5},
            {202*Q-50, 202*Q, 0, 2, 335, 360, 5},
            {204*Q-50, 204*Q, 0, 0, 75, 360, 5},
            {205*Q-50, 205*Q, 0, 0, 75, 360, 5},
            {206*Q-50, 206*Q, 0, 0, 75, 360, 5},
            {208*Q-50, 208*Q, 0, 1, 205, 360, 5},
            {208*Q-50, 208*Q, 0, 3, 465, 360, 5},
            {210*Q-50, 210*Q, 0, 1, 205, 360, 5},
            {210*Q-50, 210*Q, 0, 3, 465, 360, 5},
            {212*Q-50, 212*Q, 0, 3, 465, 360, 5},
            {213*Q-50, 213*Q, 0, 3, 465, 360, 5},
            {214*Q-50, 214*Q, 0, 3, 465, 360, 5},
            {216*Q-50, 216*Q, 0, 1, 205, 360, 5},
            {217*Q-50, 217*Q, 0, 1, 205, 360, 5},
            {218*Q-50, 218*Q, 0, 1, 205, 360, 5},
            {220*Q-50, 220*Q, 0, 0, 75, 360, 5},
            {220*Q-50, 220*Q, 0, 1, 205, 360, 5},
            {220*Q-50, 220*Q, 0, 2, 335, 360, 5},
            {220*Q-50, 220*Q, 0, 3, 465, 360, 5},
            {222*Q-50, 222*Q, 0, 0, 75, 360, 5},
            {222*Q-50, 222*Q, 0, 1, 205, 360, 5},
            {222*Q-50, 222*Q, 0, 2, 335, 360, 5},
            {222*Q-50, 222*Q, 0, 3, 465, 360, 5},
            {224*Q-50, 224*Q, 0, 0, 75, 360, 5},
            {224*Q-50, 224*Q, 0, 1, 205, 360, 5},
            {224*Q-50, 224*Q, 0, 2, 335, 360, 5},
            {224*Q-50, 224*Q, 0, 3, 465, 360, 5},//228
            {228*Q-50, 228*Q, 0, 1, 205, 360, 5},
            {229*Q-50, 229*Q, 0, 1, 205, 360, 5},
            {230*Q-50, 230*Q, 0, 1, 205, 360, 5},
            {232*Q-50, 232*Q, 0, 2, 335, 360, 5},
            {233*Q-50, 233*Q, 0, 2, 335, 360, 5},
            {234*Q-50, 234*Q, 0, 2, 335, 360, 5},
            {236*Q-50, 236*Q, 0, 0, 75, 360, 5},
            {237*Q-50, 237*Q, 0, 0, 75, 360, 5},
            {238*Q-50, 238*Q, 0, 0, 75, 360, 5},
            {240*Q-50, 240*Q, 0, 1, 205, 360, 5},
            {240*Q-50, 240*Q, 0, 3, 465, 360, 5},
            {242*Q-50, 242*Q, 0, 1, 205, 360, 5},
            {242*Q-50, 242*Q, 0, 3, 465, 360, 5},
            {244*Q-50, 244*Q, 0, 3, 465, 360, 5},
            {245*Q-50, 245*Q, 0, 3, 465, 360, 5},
            {246*Q-50, 246*Q, 0, 3, 465, 360, 5},
            {248*Q-50, 248*Q, 0, 1, 205, 360, 5},
            {249*Q-50, 249*Q, 0, 1, 205, 360, 5},
            {250*Q-50, 250*Q, 0, 1, 205, 360, 5},
            {252*Q-50, 252*Q, 0, 0, 75, 360, 5},
            {252*Q-50, 252*Q, 0, 1, 205, 360, 5},
            {252*Q-50, 252*Q, 0, 2, 335, 360, 5},
            {252*Q-50, 252*Q, 0, 3, 465, 360, 5},
            {254*Q-50, 254*Q, 0, 0, 75, 360, 5},
            {254*Q-50, 254*Q, 0, 1, 205, 360, 5},
            {254*Q-50, 254*Q, 0, 2, 335, 360, 5},
            {254*Q-50, 254*Q, 0, 3, 465, 360, 5},
            {256*Q-50, 256*Q, 0, 0, 75, 360, 5},
            {256*Q-50, 256*Q, 0, 1, 205, 360, 5},
            {256*Q-50, 256*Q, 0, 2, 335, 360, 5},
            {256*Q-50, 256*Q, 0, 3, 465, 360, 5},
            {258*Q-50, 258*Q, 0, 3, 465, 360, 5},
            {259*Q-50, 259*Q, 0, 3, 465, 360, 5},//260
            {260*Q-50, 260*Q, 0, 1, 205, 360, 5},
            {261*Q-50, 261*Q, 0, 1, 205, 360, 5},
            {262*Q-50, 262*Q, 0, 1, 205, 360, 5},
            {264*Q-50, 264*Q, 0, 2, 335, 360, 5},
            {265*Q-50, 265*Q, 0, 2, 335, 360, 5},
            {266*Q-50, 266*Q, 0, 2, 335, 360, 5},
            {268*Q-50, 268*Q, 0, 0, 75, 360, 5},
            {269*Q-50, 269*Q, 0, 0, 75, 360, 5},
            {270*Q-50, 270*Q, 0, 0, 75, 360, 5},
            {272*Q-50, 272*Q, 0, 1, 205, 360, 5},
            {272*Q-50, 272*Q, 0, 3, 465, 360, 5},
            {274*Q-50, 274*Q, 0, 1, 205, 360, 5},
            {274*Q-50, 274*Q, 0, 3, 465, 360, 5},
            {276*Q-50, 276*Q, 0, 3, 465, 360, 5},
            {277*Q-50, 277*Q, 0, 3, 465, 360, 5},
            {278*Q-50, 278*Q, 0, 3, 465, 360, 5},
            {280*Q-50, 280*Q, 0, 1, 205, 360, 5},
            {281*Q-50, 281*Q, 0, 1, 205, 360, 5},
            {282*Q-50, 282*Q, 0, 1, 205, 360, 5},
            {284*Q-50, 284*Q, 0, 0, 75, 360, 5},
            {284*Q-50, 284*Q, 0, 1, 205, 360, 5},
            {284*Q-50, 284*Q, 0, 2, 335, 360, 5},
            {284*Q-50, 284*Q, 0, 3, 465, 360, 5},
            {286*Q-50, 286*Q, 0, 0, 75, 360, 5},
            {286*Q-50, 286*Q, 0, 1, 205, 360, 5},
            {286*Q-50, 286*Q, 0, 2, 335, 360, 5},
            {286*Q-50, 286*Q, 0, 3, 465, 360, 5},
            {288*Q-50, 288*Q, 0, 0, 75, 360, 5},
            {289*Q-50, 289*Q, 0, 1, 205, 360, 5},
            {290*Q-50, 290*Q, 0, 2, 335, 360, 5},
            {291*Q-50, 291*Q, 0, 3, 465, 360, 5},
            {292*Q-50, 292*Q, 0, 3, 465, 360, 5},
            {293*Q-50, 293*Q, 0, 2, 335, 360, 5},
            {294*Q-50, 294*Q, 0, 1, 205, 360, 5},
            {295*Q-50, 295*Q, 0, 0, 75, 360, 5},
            {296*Q-50, 296*Q, 0, 0, 75, 360, 5},
            {296*Q-50, 296*Q, 0, 1, 205, 360, 5},
            {296*Q-50, 296*Q, 0, 2, 335, 360, 5},
            {296*Q-50, 296*Q, 0, 3, 465, 360, 5},//休11拍
            {307*Q-50, 307*Q, 0, 0, 75, 360, 5},
            {309*Q-50, 309*Q, 0, 1, 205, 360, 5},
            {311*Q-50, 311*Q, 0, 3, 465, 360, 5},
            {313*Q-50, 313*Q, 0, 2, 335, 360, 5},
            {313*Q-50, 313*Q, 0, 0, 335, 360, 5},
            {315*Q-50, 315*Q, 0, 3, 465, 360, 5},
            {317*Q-50, 317*Q, 0, 0, 75, 360, 5},
            {317*Q-50, 317*Q, 0, 2, 335, 360, 5},
            {318*Q-50, 318*Q, 0, 1, 205, 360, 5},
            {318*Q-50, 318*Q, 0, 3, 465, 360, 5},
            {319*Q-50, 319*Q, 0, 0, 75, 360, 5},
            {319*Q-50, 319*Q, 0, 2, 335, 360, 5},
            {321*Q-50, 321*Q, 0, 1, 205, 360, 5},
            {321*Q-50, 321*Q, 0, 3, 465, 360, 5},
            {323*Q-50, 323*Q, 0, 0, 75, 360, 5},
            {325*Q-50, 325*Q, 0, 1, 205, 360, 5},
            {327*Q-50, 327*Q, 0, 3, 465, 360, 5},
            {329*Q-50, 329*Q, 0, 2, 335, 360, 5},
            {331*Q-50, 331*Q, 0, 1, 205, 360, 5},
            {331*Q-50, 331*Q, 0, 3, 465, 360, 5},
            {333*Q-50, 333*Q, 0, 0, 75, 360, 5},
            {333*Q-50, 333*Q, 0, 2, 335, 360, 5},
            {335*Q-50, 335*Q, 0, 1, 205, 360, 5},
            {335*Q-50, 335*Q, 0, 3, 465, 360, 5},
            {339*Q-50, 339*Q, 0, 0, 75, 360, 5},
            {339*Q-50, 339*Q, 0, 1, 205, 360, 5},
            {339*Q-50, 339*Q, 0, 2, 335, 360, 5},
            {339*Q-50, 339*Q, 0, 3, 465, 360, 5},
        }
    }
};
*/

#endif /* GameData_h */
