//程式框架(Program Frame)
//-------------------------------------------------------------------
//程式名稱(Program Name)：C Programming Practice 5-2-Estimating the Value of Base-e Exponential Function, ex。
//程式敘述(Program Description)：Ask the user to give the value of a real number x.Estimate the value of ex with an error less than 10-6, ie. 0.000001.。
//程式版本(Program Version)：1.00(0)
//程式框架版本(Program Frame Version)：A
//程式框架修訂號(Program Frame Revision Number)：14
//最新更新紀錄(Latest Update Log)：。
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
    #define TOLERANCE 0.000001
//--------------主要程式碼(Main Code)--------------
//主函數架構
//版本：1.00(5)
//軟體的運行從main函數開始
	int main(void)
	{
      //宣告與定義(Declaration & Definition)
      int scanfTriggered = 0;
      float inputX, ans, up, down;
      int i;

//標題
//版本：1.00(3)
      printf("程式名稱(Program Name)：C Programming Practice 5-2Estimating the Value of Base-e Exponential Function, ex。\n");
      printf("程式敘述(Program Description)：\nAsk the user to give the value of a real number x.Estimate the value of ex with an error less than 10-6, ie. 0.000001.。\n");
      printf("程式版本(Program Version)：1.00(0)\n");
      printf("Ｂｕｉｌｄ　ｂｙ　Ｖｄｒａｇｏｎ＠２０１０\nＡｌｌ　ｒｉｇｈｔｓ　ＲＥＳＥＲＶＥＤ\n");
      printf("－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n");

//prompt
printf("請輸入 x：");
scanfTriggered = 1;
scanf("%f", &inputX);

//calc
for(i = 1, up = 1, down = 1, ans = 1; ; i++)
{

    up = up * inputX;
    down = down * i;
    ans = ans + (up / down);
    if(up / down <TOLERANCE)
    {
    break;
    }
}
//output
printf("e^%.1f=%.8f", inputX, ans);

//－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－
//使程式暫停運行
//版本：1.00(14)
	//方法一︰執行系統指令（部份系統有效、需#include <stdlib.h>）
      //printf("\n－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n顯示運行結果，程式暫停運行\n");
		//system("pause");
	//方法二：運用輸入function（需#include <stdio.h>）
      printf("\n－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n顯示運行結果，程式暫停運行\n請按Enter繼續");
		//先清除imput buffer
         //方法一
         /*
            int ch;
            while ((ch = getchar()) != EOF && ch != '\n');
         */
         //方法二
         //需全域定義int scanfTriggered = 0;
         if (scanfTriggered ==1)
         {
			scanf("%*[^\n]");
            scanf("%*c");
		 }


		fgetc(stdin); //參數stdin表鍵盤(stream來源)輸入（有scanf()就會無效，須清除inputbuffer）


		//傳回數字０（表程式運行成功）
		//版本：1.00(1)
		//return後面不可加註解！
			return 0;
	}

