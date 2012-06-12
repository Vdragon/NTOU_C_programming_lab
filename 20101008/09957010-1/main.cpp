//程式框架(Program Frame)
//-------------------------------------------------------------------
//程式名稱(Program Name)：C Programming Practice 3-1。
//程式敘述(Program Description)：[Basic] Beaufort Scale Write a program that asks the use rto enter a wind speed (in knots), the display the corresponding description. (Selected from the text book, Program Project 4, Chapter 5, p96.)Here's a simplified version of the Beaufort scale: 。
//程式版本(Program Version)：1.00(1)
//程式修訂號(Program Revision Number)：
//程式框架版本(Program Frame Version)：A
//程式框架修訂號(Program Frame Revision Number)：9
//最新更新紀錄(Latest Update Log)：debug imput。
/*
其他(Other)：。
*/
//更新紀錄(Change Log)：。
//--------------注意事項--------------
/*
１.每一句Statement後面必接『;』
２.記得Return 0;
*/
//--------------程式碼開始(Code Started)--------------
//--------------前置處理器選項(Preprocessor Code)--------------
//standard input/output library
//版本：1.00(0)
	#include <stdio.h> //for printf(), scanf(), fgetc()

//--------------宣告與定義(Declaration & Definition)--------------
int windSpeed;
//--------------主要程式碼(Main Code)--------------
//主函數架構
//版本：1.00(3)
	int main(void)
	{
 //標題
//版本：1.00(1)
printf("程式名稱(Program Name)：C Programming Practice 3。\n");
printf("程式敘述(Program Description)：\n[Basic] Beaufort Scale Write a program that asks the use rto enter a wind speed (in knots), the display the corresponding description. (Selected from the text book, Program Project 4, Chapter 5, p96.)Here's a simplified version of the Beaufort scale:。\n");
printf("程式版本(Program Version)：1.00(0)\n");
printf("Ｂｕｉｌｄ　ｂｙ　Ｖｄｒａｇｏｎ＠２０１０\nＡｌｌ　ｒｉｇｈｔｓ　ＲＥＳＥＲＶＥＤ\n");
printf("－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n");

//input
	printf("請輸入風速：");
	scanf("%d", &windSpeed);
	
//think

if(windSpeed<1)
      {
	printf("無風 Calm\n煙直上\n");
      }
else if(windSpeed <= 3)
{
	printf("軟風 Light Air\n僅煙能表示風向，但不能轉動風標。\n");
}
else if(windSpeed <= 27)
{
	printf("微風 Breeze\n塵土及碎紙被風吹揚，樹之枝葉搖動。\n");
}
else if(windSpeed <= 47)
{
	printf("大風 Gale\n全樹搖動，小樹枝被吹折，行走困難。\n");
}
else if(windSpeed <= 63)
{
	printf("狂風 Storm\n樹被風拔起，屋頂可能會被吹翻。\n");
}
else 
{
	printf("颶風 Hurricane\n颱風來啦！Here comes a typhoon!!\n");
}
//使程式暫停運行
//版本：1.00(7)

	//方法一︰執行系統指令（部份系統有效、需#include <stdlib.h>）
      //printf("\n－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n顯示運行結果，程式暫停運行\n");
		//system("pause");

	//方法二：運用輸入function（需#include <stdio.h>）
      printf("\n－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n顯示運行結果，程式暫停運行\n請按Enter繼續");
		//先清除imput buffer
         //方法一
            int ch;
            while ((ch = getchar()) != EOF && ch != '\n');
         //方法二
            //scanf("%*[^\n]");
            //scanf("%*c");
		fgetc(stdin); //參數stdin表鍵盤(stream來源)輸入（有scanf()就會無效，須清除inputbuffer）

		//傳回數字０（表程式運行成功）
		//版本：1.00(1)
		//return後面不可加註解！
			return 0;
	}
