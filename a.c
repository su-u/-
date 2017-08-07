#define NUMBER_OF_MAIN_MENU 3
#define PI 3.14159265358979323846

struct MainMenu{ 
 int gh[NUMBER_OF_MAIN_MENU]; 
 int numer_of; 
 int x; 
 int y; 
 double sinx; 
 double cosy; 
 double rate; 
 double ratecos; 
 double theta; 
 double g; 
 int isleft; 
 int isright; 
};

//c
MainMenu mmenu;

mmenu.gh[0] = LoadGraph("攻撃.png");	
 mmenu.gh[1] = LoadGraph("アイテム.png");	
 mmenu.gh[2] = LoadGraph("逃げる.png");	//回転させる画像を取り込む 
 mmenu.numer_of = NUMBER_OF_MAIN_MENU;	//コマンド選択のUI数 
 mmenu.x = MAIN_MENU_BASIC_X;	//コマンド選択の初期X座標の位置 
 mmenu.y = MAIN_MENU_BASIC_Y;	//コマンド選択の初期Y座標の位置 
 mmenu.sinx = 150;	//各コマンド選択のX座標の距離 
 mmenu.cosy = 70;	//各コマンド選択のY座標の距離 
 mmenu.rate = 100;	//コマンド選択の基本拡大率 
 mmenu.ratecos = 35;	//前後の拡大率の差 
 mmenu.theta = 2 * PI / mmenu.numer_of;	//各コマンドの角度を求める式 
 mmenu.g = 0; 
 mmenu.h = 100; 
 mmenu.isleft = 0; 
 mmenu.isright = 0;
 
 
for (int i = 1; i <= mmenu.numer_of; i++) { 
  DrawRotaGraph(mmenu.x+ mmenu.sinx*sin(i * mmenu.theta + mmenu.g), 
   mmenu.y - mmenu.cosy + mmenu.cosy * cos(i* mmenu.theta + mmenu.g), 
   (100 - mmenu.ratecos + mmenu.ratecos * cos(i * mmenu.theta + mmenu.g)) / 10000 * mmenu.rate, PI * 2, mmenu.gh[i - 1], TRUE); 
 }
 
 //http://dxlib.o.oo7.jp/function/dxfunc_graph1.html#R3N10