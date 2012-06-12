//程式框架(Program Frame)
//-------------------------------------------------------------------
//程式名稱(Program Name)：C Programming Practice 6-1 [Basic] Random Permutation 。
//程式敘述(Program Description)：Random permutation is commonly used to start a new game.Write a program to create a random permutation of the sequence 0 ~ N-1 in the arrayand use it to shuffle poker cards.。
//程式版本(Program Version)：1.00(2)
//程式框架版本(Program Frame Version)：A
//程式框架修訂號(Program Frame Revision Number)：14
//最新更新紀錄(Latest Update Log)：變數閱讀性增幅。
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
	#include <stdlib.h>
	/*
	for SYSTEM("pause") if working
	非Windows系統確定不能使用（因為無該系統指令）
	*/

    #include <time.h>

    #define allCards 52
//--------------主要程式碼(Main Code)--------------

//主函數架構
//版本：1.00(5)
//軟體的運行從main函數開始
	int main(void)
	{
      //宣告與定義(Declaration & Definition)
int scanfTriggered = 0, counterCard,count1, memRand, mem1;

            //card
            int card[allCards];
            char suitSymbol[4] = {'\x05','\x04','\x03','\x06'};
            char cardSymbol[allCards];
            const char * Rank[13] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q","K", "A"};
            /*字串非變量，以常數定義之：
					原來char *背後的含義是：給我個字符串，我要修改它。
					而理論上，我們傳給函數的字面常量是沒法被修改的。
					所以說，比較和理的辦法是把參數類型修改為const char *。
					這個類型說背後的含義是：給我個字符串，我只要讀取它。
             */
//標題
//版本：1.00(3)
      printf("程式名稱(Program Name)：C Programming Practice 6-1 [Basic] Random Permutation 。");
      printf("程式敘述(Program Description)：\nRandom permutation is commonly used to start a new game.Write a program to create a random permutation of the sequence 0 ~ N-1 in the arrayand use it to shuffle poker cards.。\n");
      printf("程式版本(Program Version)：1.00(0)\n");
      printf("Ｂｕｉｌｄ　ｂｙ　Ｖｄｒａｇｏｎ＠２０１０\nＡｌｌ　ｒｉｇｈｔｓ　ＲＥＳＥＲＶＥＤ\n");
      printf("－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n");

//rand Init
    srand((unsigned)time(NULL));

//assign
for(counterCard = 0;counterCard < allCards;counterCard++)//iEnd = 52
    {
    card[counterCard] = counterCard;
    //test
    //printf("%d\t", counterCard);
    }

//swap
    //printf("%d", card[rand() % counterCard]);
while(counterCard > 1)//iInit = 52
    {
        //backup
        memRand = rand() % counterCard;
            //test
            //printf("%d",counterCard);
		  //counterCard should be 51
		  mem1 = card[counterCard - 1];
            //change
            card[counterCard - 1] = card[memRand];
            card[memRand] = mem1;
        counterCard--;
    }
/*
        //test
            for(counterCard = 0;counterCard < allCards;counterCard++)
                {
                //test
                printf("%d\t", card[counterCard]);
                }


*/
//find color
    for (counterCard = 0; counterCard < allCards; counterCard++)
    {
        cardSymbol[counterCard] = suitSymbol[card[counterCard] / 13];
        //test
        //    printf("%c", cardSymbol[counterCard]);
    }

//output

counterCard = 0;

for(count1 = 0;count1 < 4;count1++)
{
    	printf("Player%d : ", count1 + 1);
    	for(; counterCard < 13 * (count1 + 1); counterCard++)
            {
                    printf("%c%s ", cardSymbol[counterCard], Rank[(card[counterCard] + 1) % 13]);
                    //test
                    //printf("%s", Rank[(card[counterCard] + 1)% 13]);

            }
        printf("\n");

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
