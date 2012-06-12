//程式框架(Program Frame)
//-------------------------------------------------------------------
//程式名稱(Program Name)：[Advanced] Reducing a Fraction to Lowest Terms (Programming Project 6.3 in the text book)。
//程式敘述(Program Description)：Write a program that asks the user to enter a fraction, then reduces the fraction to lowest terms:。
//程式版本(Program Version)：1.00(1)
//程式框架版本(Program Frame Version)：A
//程式框架修訂號(Program Frame Revision Number)：12
//最新更新紀錄(Latest Update Log)：去除多餘變數。
/*
其他(Other)：未加入除零排除。
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

//--------------全域宣告與定義(Global Declaration & Definition)--------------
int scanfTriggered =  0;
//--------------主要程式碼(Main Code)--------------
//主函數架構
//版本：1.00(4)
//軟體的運行從main函數開始
	int main(void)
	{
//標題
//版本：1.00(2)
printf("程式名稱(Program Name)：[Advanced] Reducing a Fraction to Lowest Terms (Programming Project 6.3 in the text book)。\n");
printf("程式敘述(Program Description)：\nWrite a program that asks the user to enter a fraction, then reduces the fraction to lowest terms:。\n");
printf("程式版本(Program Version)：1.00(1)\n");
printf("Ｂｕｉｌｄ　ｂｙ　Ｖｄｒａｇｏｎ＠２０１０\nＡｌｌ　ｒｉｇｈｔｓ　ＲＥＳＥＲＶＥＤ\n");
printf("－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n");

//宣告與定義(Declaration & Definition)
   int oriBeDivided, oriDividedBy;
   int n1, n2;
   int mem;
   int gcd;
//1-1prompt
   printf("請輸入一個分數 (格式 a/b)：");
   scanf("%d/%d", &oriBeDivided, &oriDividedBy);
      //test→ok
      //printf("%d/%d\n", oriBeDivided, oriDividedBy);

//1-2made a changeable copy, the old one for calc the output
   n1 = oriBeDivided;
   n2 = oriDividedBy;

//2-1輾轉相除法
//2-1.1等於→GCD是任一數
   if(n1 == n2)
      {
         gcd = n1;
         //test→ok
         //printf("2-1.1\n");
         //printf("%d\n", gcd);
      }
      //2-1.2n1大於n2→while loop
      else if(n1 > n2)
         {
            while(n1 % n2 != 0)
            {
               //test→ok
               //printf("while in\n");
               //備份n1
               mem = n1;
               n1 = n2;
               n2 = mem % n2;
            }
            //test→ok
            //printf("while out\n");
            gcd = n2;
         }
      //2-1-3n1小於n2→while loop
      else
         {
            while(n2 % n1 != 0)
            {
               //test→ok
               //printf("while in\n");
               //備份n1
               mem = n2;
               n2 = n1;
               n1 = mem % n1;
            }
            //test→ok
            //printf("while out\n");
            gcd = n1;
         }
//3-1 讓原分母子分別除以GCD，輸出最簡分數
printf("約分後成為 %d/%d", oriBeDivided / gcd, oriDividedBy / gcd);
//－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－
//使程式暫停運行
//版本：1.00(13)
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
         //需全域定義int scanfTriggered = 1;

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
