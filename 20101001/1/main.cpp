//程式框架(Program Frame)
//-------------------------------------------------------------------
//程式名稱(Program Name)：C Programming Practice 2 [Basic]-1 if-statement 。
//程式敘述(Program Description)：cal.&if.。
//程式版本(Program Version)：1.00(1)
//程式修訂號(Program Revision Number)：
//程式框架版本(Program Frame Version)：A
//程式框架修訂號(Program Frame Revision Number)：8
//最新更新紀錄(Latest Update Log)：修正跨平台。
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
//C Standard General Utilities Library
//版本：1.00(0)

//--------------主要程式碼(Main Code)--------------
//主函數架構
//版本：1.00(2)
	int main(void)
	{   int feeInput,timeInput,timeOutput;
	    double feeOutput, sumOutput;
	    int scanfTriggered = 0;
    //ask1
        printf("Taxi fee is determined by the distance of a ride. The original fee is shown on a distance meter.\n At nighttime, a 10％ service fee is also charged.\nIn order to encourage long-distance rides, there is a discount of 20％ for the prices larger than $100.\n");
        printf("請輸入跳表上的金額（正整數）\n");
        printf("您輸入：");
        scanfTriggered = 1;
        scanf("%d", &feeInput);
   //ask2
        printf("是否夜間搭車？\n１：是　　２：否\n");
        printf("您輸入：");
   //convert
        scanfTriggered = 1;
        scanf("%d", &timeInput);

        if(timeInput == 1)
           {
              timeOutput=1;
           }
        else
            {
               timeOutput=0;
            }
        //
        feeOutput = feeInput + timeOutput * feeInput * 0.1;

        if(feeOutput > 100)
        {
           sumOutput = 100 + (feeOutput - 100) * 0.8;
        }
        else
        {
           sumOutput = feeOutput;
        }

        printf("您需要付的金額為：%lf元新台幣",sumOutput);

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
         if (scanfTriggered == 1)
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
