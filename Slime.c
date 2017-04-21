#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "battle.h"

int enemyhp = 8; //エネミーのHP
int enemyd; //エネミーへのダメージ
int select; //選択
int dm; //ダメージ

int k,i;

void Slime(void)
{

	srand((unsigned int)time(NULL));

	while(hp > 0){

		//プレイヤー
		do {
		DrawWindow(0);
		printf("数字を入力してください:");
		scanf("%d",&select);
		} while(select > 2);
		if(select == 1)
		{
			//Mgm = 2;
			do {	//攻撃windowの表示
			DrawWindow(2);
			printf("数字を入力してください:");
			scanf("%d",&select);
			} while(select > 2);

			if(select == 1) A();
			if(select == 2) i = 1;
		}else if(select == 2){
			do {
			k = rand();
			k %= 8;
			}while(k <= 5);
			//Mgm = k;
			DrawWindow(k);
			sleep(1000);
			if(k == 6) break;
		}

		//エネミー
		//Mgm = 5;
		DrawWindow(5);
		sleep(1500);
		//Mgm = 8;
		DrawWindow(8);
		sleep(500);
		DM();
		//Mgm = 4;
		hp -= dm;
		DrawWindow(4);
		sleep(1000);

		//Mgm = 0;
	}
}

void Mg(int Mgm)
{
	if(hp >= 10)
	{
		if(Mgm == 0)
		{
			printf("□□□□□□□□□□□□□□□□□□□□□□□□□\n"); //18
			printf("□戦う:1　　　□　　　　　　　　　　　　　　　　□\n"); //19
			printf("□逃げる:2　　□　　コマンド？　　　　　　　　　□\n"); //20
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //21
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //22
			printf("□Lv48　HP%d  □　　　　　　　　　　　　　　　　□\n",hp); //23
			printf("□もょもと　　□　　　　　　　　　　　　　　　　□"); //23
		}

		else if(Mgm == 1)
		{
			printf("□□□□□□□□□□□□□□□□□□□□□□□□□\n"); //18
			printf("□戦う:1　　　□　　　　　　　　　　　　　　　　□\n"); //19
			printf("□逃げる:2　　□　　敵が現れた！　　　　　　　　□\n"); //20
			printf("□　　　　　　□　　コマンド？　　　　　　　　　□\n"); //21
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //22
			printf("□Lv48　HP%d  □　　　　　　　　　　　　　　　　□\n",hp); //23
			printf("□もょもと　　□　　　　　　　　　　　　　　　　□"); //23
		}

		else if(Mgm == 2)
		{
			printf("□□□□□□□□□□□□□□□□□□□□□□□□□\n"); //18
			printf("□攻撃:1　　　□　　　　　　　　　　　　　　　　□\n"); //19
			printf("□防御:2　　　□　　コマンド？　　　　　　　　　□\n"); //20
			printf("□魔法:3　　　□　　　　　　　　　　　　　　　　□\n"); //21
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //22
			printf("□Lv48　HP%d  □　　　　　　　　　　　　　　　　□\n",hp); //23
			printf("□もょもと　　□　　　　　　　　　　　　　　　　□"); //23
		}

		else if(Mgm == 3)
		{
			printf("□□□□□□□□□□□□□□□□□□□□□□□□□\n"); //18
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //19
			printf("□　　　　　　□　　もょもとの攻撃！　　　　　　□\n"); //20
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //21
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //22
			printf("□Lv48　HP%d  □　　　　　　　　　　　　　　　　□\n",hp); //23
			printf("□もょもと　　□　　　　　　　　　　　　　　　　□"); //23
		}

		else if(Mgm == 4 && dm != 0)
		{
			printf("□□□□□□□□□□□□□□□□□□□□□□□□□\n"); //18
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //19
			printf("□　　　　　　□　　%dのダメージ！ 　　　　　　　□\n",dm); //20
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //21
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //22
			printf("□Lv48　HP%d  □　　　　　　　　　　　　　　　　□\n",hp); //23
			printf("□もょもと　　□　　　　　　　　　　　　　　　　□"); //23
		}

		else if(Mgm == 5)
		{
			printf("□□□□□□□□□□□□□□□□□□□□□□□□□\n"); //18
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //19
			printf("□　　　　　　□　　敵の攻撃！　　　　　　　　　□\n"); //20
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //21
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //22
			printf("□Lv48　HP%d  □　　　　　　　　　　　　　　　　□\n",hp); //23
			printf("□もょもと　　□　　　　　　　　　　　　　　　　□"); //23
		}

		else if(Mgm == 4 && dm == 0)
		{
			printf("□□□□□□□□□□□□□□□□□□□□□□□□□\n"); //18
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //19
			printf("□　　　　　　□　　MISS　　　　　　　　　　　　□\n"); //20
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //21
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //22
			printf("□Lv48　HP%d  □　　　　　　　　　　　　　　　　□\n",hp); //23
			printf("□もょもと　　□　　　　　　　　　　　　　　　　□"); //23
		}
		else if(Mgm == 6)
		{
			printf("□□□□□□□□□□□□□□□□□□□□□□□□□\n"); //18
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //19
			printf("□　　　　　　□　　うまく逃げ切れた！　　　　　□\n"); //20
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //21
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //22
			printf("□Lv48　HP%d  □　　　　　　　　　　　　　　　　□\n",hp); //23
			printf("□もょもと　　□　　　　　　　　　　　　　　　　□"); //23
		}
		else if(Mgm == 7)
		{
			printf("□□□□□□□□□□□□□□□□□□□□□□□□□\n"); //18
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //19
			printf("□　　　　　　□　　逃げ切れなかった　　　　　　□\n"); //20
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //21
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //22
			printf("□Lv48　HP%d  □　　　　　　　　　　　　　　　　□\n",hp); //23
			printf("□もょもと　　□　　　　　　　　　　　　　　　　□"); //23
		}
		if(Mgm == 8)
		{
			printf("□□□□□□□□□□□□□□□□□□□□□□□□□\n"); //18
			printf("□戻る:9　　　□ホイミ:1　　　　　　　　　　　　□\n"); //19
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //20
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //21
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //22
			printf("□Lv48　HP%d  □　　　　　　　　　　　　　　　　□\n",hp); //23
			printf("□もょもと　　□　　　　　　　　　　　　　　　　□"); //23
		}
	}

	else
	{
		if(Mgm == 0)
		{
			printf("□□□□□□□□□□□□□□□□□□□□□□□□□\n"); //18
			printf("□戦う:1　　　□　　　　　　　　　　　　　　　　□\n"); //19
			printf("□逃げる:2　　□　　コマンド？　　　　　　　　　□\n"); //20
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //21
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //22
			printf("□Lv48　HP%d　 □　　　　　　　　　　　　　　　　□\n",hp); //23
			printf("□もょもと　　□　　　　　　　　　　　　　　　　□"); //23
		}

		else if(Mgm == 1)
		{
			printf("□□□□□□□□□□□□□□□□□□□□□□□□□\n"); //18
			printf("□戦う:1　　　□　　　　　　　　　　　　　　　　□\n"); //19
			printf("□逃げる:2　　□　　敵が現れた！　　　　　　　　□\n"); //20
			printf("□　　　　　　□　　どうする？　　　　　　　　　□\n"); //21
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //22
			printf("□Lv48　HP%d　 □　　　　　　　　　　　　　　　　□\n",hp); //23
			printf("□もょもと　　□　　　　　　　　　　　　　　　　□"); //23
		}

		else if(Mgm == 2)
		{
			printf("□□□□□□□□□□□□□□□□□□□□□□□□□\n"); //18
			printf("□攻撃:1　　　□　　　　　　　　　　　　　　　　□\n"); //19
			printf("□防御:2　　　□　　コマンド？　　　　　　　　　□\n"); //20
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //21
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //22
			printf("□Lv48　HP%d　 □　　　　　　　　　　　　　　　　□\n",hp); //23
			printf("□もょもと　　□　　　　　　　　　　　　　　　　□"); //23
		}

		else if(Mgm == 3)
		{
			printf("□□□□□□□□□□□□□□□□□□□□□□□□□\n"); //18
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //19
			printf("□　　　　　　□　　もょもとの攻撃！　　　　　　□\n"); //20
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //21
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //22
			printf("□Lv48　HP%d   □　　　　　　　　　　　　　　　　□\n",hp); //23
			printf("□もょもと　　□　　　　　　　　　　　　　　　　□"); //23
		}

		else if(Mgm == 4 && dm != 0)
		{
			printf("□□□□□□□□□□□□□□□□□□□□□□□□□\n"); //18
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //19
			printf("□　　　　　□　　%dのダメージ！   　　　　　　□\n",dm); //20
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //21
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //22
			printf("□Lv48　HP%d　 □　　　　　　　　　　　　　　　　□\n",hp); //23
			printf("□もょもと　　□　　　　　　　　　　　　　　　　□"); //23
		}

		else if(Mgm == 5)
		{
			printf("□□□□□□□□□□□□□□□□□□□□□□□□□\n"); //18
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //19
			printf("□　　　　　　□　　敵の攻撃！　　　　　　　　　□\n"); //20
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //21
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //22
			printf("□Lv48　HP%d　 □　　　　　　　　　　　　　　　　□\n",hp); //23
			printf("□もょもと　　□　　　　　　　　　　　　　　　　□"); //23
		}

		else if(Mgm == 4 && dm == 0)
		{
			printf("□□□□□□□□□□□□□□□□□□□□□□□□□\n"); //18
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //19
			printf("□　　　　　　□　　MISS　　　　　　　　　　　　□\n"); //20
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //21
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //22
			printf("□Lv48　HP%d　 □　　　　　　　　　　　　　　　　□\n",hp); //23
			printf("□もょもと　　□　　　　　　　　　　　　　　　　□"); //23
		}
		else if(Mgm == 6)
		{
			printf("□□□□□□□□□□□□□□□□□□□□□□□□□\n"); //18
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //19
			printf("□　　　　　　□　　うまく逃げ切れた！　　　　　□\n"); //20
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //21
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //22
			printf("□Lv48　HP%d   □　　　　　　　　　　　　　　　　□\n",hp); //23
			printf("□もょもと　　□　　　　　　　　　　　　　　　　□"); //23
		}
		else if(Mgm == 7)
		{
			printf("□□□□□□□□□□□□□□□□□□□□□□□□□\n"); //18
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //19
			printf("□　　　　　　□　　逃げ切れなかった　　　　　　□\n"); //20
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //21
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //22
			printf("□Lv48　HP%d   □　　　　　　　　　　　　　　　　□\n",hp); //23
			printf("□もょもと　　□　　　　　　　　　　　　　　　　□"); //23
		}
		if(Mgm == 8)
		{
			printf("□□□□□□□□□□□□□□□□□□□□□□□□□\n"); //18
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //19
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //20
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //21
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //22
			printf("□Lv48　HP%d   □　　　　　　　　　　　　　　　　□\n",hp); //23
			printf("□もょもと　　□　　　　　　　　　　　　　　　　□"); //23
		}
		if(Mgm == 9)
		{
			printf("□□□□□□□□□□□□□□□□□□□□□□□□□\n"); //18
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //19
			printf("□　　　　　　□　　%dのダメージ！　　　　　　　□\n",dm); //20
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //21
			printf("□　　　　　　□　　　　　　　　　　　　　　　　□\n"); //22
			printf("□Lv48　HP%d   □　　　　　　　　　　　　　　　　□\n",hp); //23
			printf("□もょもと　　□　　　　　　　　　　　　　　　　□"); //23
		}
	}
}

void SlimeDraw()
{
	if(enemyd == 0)
	{
		printf("□　　　　　　　　　　　人　　　　　　　　　　　□\n"); //7
		printf("□　　　　　　　　　　(ﾟДﾟ)　　　　　　　　　　□"); //8
	}

	if(enemyd == 1)
	{
		printf("□　　　　　　　　　　　  　　　　　　　　　　　□\n"); //7
		printf("□　　　　　　　　　　      　　　　　　　　　　□"); //8
	}
}

void DrawWindow(int Mgm)
{


	int height,width;  //枠の大きさ
	int Loop = 0;

	system("cls");

	for(width=0;width<=15;width++) //横
	{
		if (width == 1)printf("□□□□□□□□□□□□□□□□□□□□□□□□□");

		else if(width == 14)
		{
			Mg(Mgm);
		}

		else if(width == 7)SlimeDraw();

		else if(width >=2 && width <=14 && width != 7)
		{
			printf("□");
			while(Loop <=22)
			{
				printf("　");
				Loop++;
			}
			printf("□");
			Loop = 0;
		}
		else if(width == 15)printf("□□□□□□□□□□□□□□□□□□□□□□□□□\n");
		printf("\n");
	}
}

void A()
{


	DrawWindow(3);
	sleep(500);

	DM();

	if (dm != 0) //敵点滅
	{

		//Mgm = 8;
		enemyd = 1;
		DrawWindow(8);
		sleep(100);

		enemyd = 0;
		DrawWindow(8);
		sleep(100);

		enemyd = 1;
		DrawWindow(8);
		sleep(100);

		enemyd = 0;
		DrawWindow(8);
		sleep(100);
	}

	enemyhp = enemyhp - dm; //敵残りHP

	//Mgm = 4;
	sleep(1000);
	DrawWindow(4);

	sleep(1500);
}

int sleep(unsigned long x) //wait
{
    clock_t  s = clock();
    clock_t  c;

    do {
        if ((c = clock()) == (clock_t)-1)       /* エラー */
            return (0);
    } while (1000UL * (c - s) / CLOCKS_PER_SEC <= x); 
    return (1);
}

void DM()
{
	k = rand();
	k = k % 64;
	if (k == 63)
	{
		dm = 5 - i;
	}

	else
	{
		dm = rand();
		dm = dm % (3 - i);
	}
}
