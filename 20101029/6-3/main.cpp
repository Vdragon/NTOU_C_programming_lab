//程式框架(Program Frame)
//-------------------------------------------------------------------
//程式名稱(Program Name)：C Programming Practice 6-3 [Advanced] Getting Prime Numbers 。
//程式敘述(Program Description)：Write a program to find the first 100 prime numbers and save them in an array.。
//程式版本(Program Version)：1.00(1)
//程式框架版本(Program Frame Version)：A
//程式框架修訂號(Program Frame Revision Number)：14
//最新更新紀錄(Latest Update Log)：改善。
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

//--------------主要程式碼(Main Code)--------------

//主函數架構
//版本：1.00(5)
//軟體的運行從main函數開始
	int main(void)
	{
      //宣告與定義(Declaration & Definition)
    int scanfTriggered = 0, primeTotal = 1 , count1 = 0, testNum = 3;
    int array[100] = {2};
//標題
//版本：1.00(3)
      printf("程式名稱(Program Name)：C Programming Practice 6-3 [Advanced] Getting Prime Numbers 。\n");
      printf("程式敘述(Program Description)：\nWrite a program to find the first 100 prime numbers and save them in an array.。\n");
      printf("程式版本(Program Version)：1.00(0)\n");
      printf("Ｂｕｉｌｄ　ｂｙ　Ｖｄｒａｇｏｎ＠２０１０\nＡｌｌ　ｒｉｇｈｔｓ　ＲＥＳＥＲＶＥＤ\n");
      printf("－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n");

    while(1)
    {
        //count1歸零
        count1 = 0;
        		//test
				//printf("for %d", testNum);
		while( 1 )
		{		//確定所有的質數都跑完
				//test
				//printf("while %d", testNum);
			if(testNum % array[ count1 ] == 0)
				{//測試是否為已知質數的倍數
					break;
				}
			if( count1 + 1 == primeTotal)
				{//已測試到最後一個質數均不是質數的倍數
					//test
					//printf("if %d\n", testNum);
				//assign 下一個陣列為該質數
				array[ count1 + 1 ] = testNum;//（testNum是質數）
				//up Count//
				primeTotal++;
				//break while
				break;
				}
            //換下一個已知質數
			count1++;
		}
		if(primeTotal == 100)
			{//如果得到100個質數
				break;
			}
    //測試值更換
    testNum++;
    }

//debug
	for( count1 = 0 ; count1 < 100 ; count1++)
	{
		printf("%3.d  %d\n",count1 + 1, array[count1]);
	}























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
