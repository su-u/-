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

mmenu.gh[0] = LoadGraph("�U��.png");	
 mmenu.gh[1] = LoadGraph("�A�C�e��.png");	
 mmenu.gh[2] = LoadGraph("������.png");	//��]������摜����荞�� 
 mmenu.numer_of = NUMBER_OF_MAIN_MENU;	//�R�}���h�I����UI�� 
 mmenu.x = MAIN_MENU_BASIC_X;	//�R�}���h�I���̏���X���W�̈ʒu 
 mmenu.y = MAIN_MENU_BASIC_Y;	//�R�}���h�I���̏���Y���W�̈ʒu 
 mmenu.sinx = 150;	//�e�R�}���h�I����X���W�̋��� 
 mmenu.cosy = 70;	//�e�R�}���h�I����Y���W�̋��� 
 mmenu.rate = 100;	//�R�}���h�I���̊�{�g�嗦 
 mmenu.ratecos = 35;	//�O��̊g�嗦�̍� 
 mmenu.theta = 2 * PI / mmenu.numer_of;	//�e�R�}���h�̊p�x�����߂鎮 
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