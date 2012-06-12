//程式框架(Program Frame)
//-------------------------------------------------------------------
//程式名稱(Program Name)：11-3。
//程式敘述(Program Description)：。
//程式版本(Program Version)：1.00(0)
//程式框架版本(Program Frame Version)：A
//程式框架修訂號(Program Frame Revision Number)：19
//最新更新紀錄(Latest Update Log)：。
/*
其他(Other)：。
*/
//更新紀錄(Change Log)：。
//--------------注意事項--------------
/*
１.每一句Statement後面必接『;』。
２.記得Return 0;。
３.有BUG先檢查scanf。
４.compiler可能有處理函數、變數之先後，不要同時處理兩者。
５.運行函數要注意是否有return值。
*/
//--------------程式碼開始(Code Started)--------------
//--------------前置處理器選項(Preprocessor Code)--------------
//standard input/output library
//版本：1.00(0)
	#include <stdio.h> //for printf(), scanf(), fgetc()

//--------------環境設定(Enviroment Settings)--------------
//define debug var
	#define debug 0
//--------------全域宣告與定義(Global Declaration & Definition)--------------
//global variable for 方法二：運用輸入function（需#include <stdio.h>）
	short int scanfTriggered = 0;
//function prototype
	void pauseProgram();
    int consecLength(int a[], int size);
//--------------主要程式碼(Main Code)--------------
//標題輸出函數
//版本：1.00(5)
void printTitle()
    {
          printf("程式名稱(Program Name)：。\n");
          printf("程式敘述(Program Description)：\n。\n");
          printf("程式版本(Program Version)：1.00(0)\n");
          printf("Ｂｕｉｌｄ　ｂｙ　Ｖｄｒａｇｏｎ＠２０１０\nＡｌｌ　ｒｉｇｈｔｓ　ＲＥＳＥＲＶＥＤ\n");
          printf("－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n");
    }

//main函數架構
//版本：1.00(9)
//軟體的運行從main函數開始
int main(void)
	{
	//宣告與定義(Declaration & Definition)
    //FROM PROBLEM
    /*
        const int aSize = 12;
        int num[aSize] ={3, 4, 5, 5, 7, 5, 6, 2, 3, 4, 5, 9};*/
    //FROM DEMO
        const int aSize = 100;
        int num[aSize] = {4, 1, 4, 8, 9, 7, 5, 4, 4, 5, 4, 5, 8, 4, 1, 4, 7, 8, 4, 5, 6, 8, 8, 1, 10, 1, 2, 7, 10, 10, 1, 2, 4, 7, 1, 2, 7, 8, 9, 10, 4, 10, 11, 12, 8, 9, 5, 1, 10, 1, 2, 2, 4, 10, 8, 8, 9, 10, 2, 7, 4, 5, 6, 7, 8, 9, 10, 2, 2, 8, 5, 2, 2, 2, 5, 8, 9, 10, 11, 12, 4, 2, 10, 8, 9, 8, 9, 10, 4, 5, 1, 2, 3, 5, 4, 5, 6, 7, 10, 4};
                                                        //TEST
                                                            //int num[3] ={3, 4, 5};
    //pointer for changing
        int * p;
    //pointer for the longest place
        int * pointLong = num;
    //maxLength
        int maxLength = 1;
    //counter
        int counterA;
    //mem for abdundant consecLength
        short int memconsecLength;
	//－－－－－－－－－－－－－－－－－－－－－
    //printTitle
        //printTitle();
    //first step
        //printf("%d\n", consecLength(num, 12));
                                                        //TEST
                                                            //printf("%d\n", consecLength(num, 3));
    //second step
        //for loop move pointer
            for(p = num; p < num + aSize; p++)
                {
                    //backup
                        memconsecLength = consecLength(p, aSize - (p - num));
                    if(maxLength < memconsecLength)
                        {
                             //change the max length
                                maxLength = memconsecLength;
                             //change the pointLong
                                pointLong = p;
                        }
                }
    //print output
        printf("{%d", *pointLong);
        for(counterA = 1; counterA < maxLength; counterA++)
            {
                printf(", %d", *(pointLong + counterA));
            }
        printf("}");
    //debug
        if(debug == 1)
            {
                printf("%d", maxLength);
            }
    //pause
		pauseProgram();
	//－－－－－－－－－－－－－－－－－－－－－
    //傳回數字０（表程式運行成功）
    //版本：1.00(1)
    //return後面不可加註解！
			return 0;
	}

//其他函數架構
//版本：1.00(1)
/*
returnType functionName(auguments)
*/
int consecLength(int a[], int size)
	{
		//宣告與定義(Declaration & Definition)
        //counterConsec
            short int counterConsec;
        //num Current know
            int numCurrent = a[0];
		//－－－－－－－－－－－－－－－－－－－－－
		//for loop checking
            for(counterConsec = 2; counterConsec < size; counterConsec++)
                {
                    //if next number not conseq
                        if(numCurrent + 1 != a[counterConsec - 1])
                            {
                                //counterConsec should less one
                                    counterConsec--;
                                //break
                                    break;

                            }
                        else//next number conseq
                            {
                                //numCurrent++
                                    numCurrent++;
                            }

                }



		//－－－－－－－－－－－－－－－－－－－－－
		//傳回內容
		return counterConsec;
	}
//－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－
//使程式暫停運行
//版本：1.00(27)
void pauseProgram()
    {
        //make a line
            printf("\n－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n");
        /*開關
            //方法一︰執行系統指令（僅Windows系統有效、需#include <stdlib.h>）
                printf("顯示運行結果，程式暫停運行\n");
                system("pause");
        */
            //方法二：運用輸入function（需#include <stdio.h>）
                //先清除input buffer
                //需全域定義short int scanfTriggered = 0;
                    //方法一
                    /*開關
                        if (scanfTriggered == 1)
                            {
                                  short int ch;
                                  while ((ch = getchar()) != EOF && ch != '\n');
                            }
                    */
                    //方法二
                    //開關
                        if (scanfTriggered == 1)
                            {
                                scanf("%*[^\n]");
                                scanf("%*c");
                            }
                    //
                //開關
                //print message
                    printf("顯示運行結果，程式暫停運行\n請按Enter繼續");
                //get char from keyboard
                    fgetc(stdin); //參數stdin表鍵盤(stream來源)輸入（有scanf()就會無效，須清除inputbuffer）
                  //
    }
