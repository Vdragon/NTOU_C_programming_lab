//程式框架(Program Frame)
//-------------------------------------------------------------------
//程式名稱(Program Name)：。
//程式敘述(Program Description)：。
//程式版本(Program Version)：1.00(0)
//程式框架版本(Program Frame Version)：A
//程式框架修訂號(Program Frame Revision Number)：15
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
//Console IO library(Unknown)
//版本：1.00(0)
	#include <conio.h>
//--------------環境設定(Enviroment Settings)--------------
//--------------全域宣告與定義(Global Declaration & Definition)--------------
	//Pframe
		short int scanfTriggered = 0;
//--------------主要程式碼(Main Code)--------------
//main函數架構
//版本：1.00(8)
//軟體的運行從main函數開始
	int main(void)
	{
	//main()宣告與定義(Declaration & Definition)
        //show the initial value
            double answer = 0;
        //get keyIn
            short int keyIn;
        //get amount
            double amount;
	//－－－－－－－－－－－－－－－－－－－－－
//標題
//版本：1.00(3)
/*
      printf("程式名稱(Program Name)：。\n");
      printf("程式敘述(Program Description)：\n。\n");
      printf("程式版本(Program Version)：1.00(0)\n");
      printf("Ｂｕｉｌｄ　ｂｙ　Ｖｄｒａｇｏｎ＠２０１０\nＡｌｌ　ｒｉｇｈｔｓ　ＲＥＳＥＲＶＥＤ\n");
      printf("－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n");
*/


//loop to check action(keyIn)+show value
    //while (always)
        while(true)
            {
                //show the value
                    printf("%.6lf\t", answer);
                //get keyIn
                    keyIn = getche();
                    //if keyIn == equal
                        if(keyIn == '=')
                            {
                                //new line
                                    printf("\n");
                                //then break
                                    break;
                            }

                    //else if keyIn == operator
                        else if(keyIn == '+')
                            {
                                //print space
                                    printf(" ");
                            }
                        else if(keyIn == '-')
                            {
                                //print space
                                    printf(" ");
                            }
                        else if(keyIn == '*')
                            {
                                //print space
                                    printf(" ");
                            }
                        else if(keyIn == '/')
                            {
                                //print space
                                    printf(" ");
                            }
                    //else other keyIn
                        else
                            {
                                //newline
                                    printf("\n");
                                //continue loop
                                    continue;
                            }
                //get amount
                    scanfTriggered = 1;
                    scanf("%lf", &amount);
                //calculate amount
                    if(keyIn == '+')
                        {
                            //assign new ans
                                answer = answer + amount;
                        }
                    if(keyIn == '-')
                        {
                            //assign new ans
                                answer = answer - amount;
                        }
                    if(keyIn == '*')
                        {
                            //assign new ans
                                answer = answer * amount;
                        }
                    if(keyIn == '/')
                        {
                            //check if div 0
                                if(amount == 0)
                                    {
                                        //continue
                                            continue;
                                    }
                            //assign new ans
                                answer = answer / amount;
                        }

    //while end
            }





//show ans
    //print ans
        printf("結果：%.6lf\n", answer);













    //end
	//－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－
	//使程式暫停運行
	//版本：1.00(16)
	//方法一︰執行系統指令（僅Windows系統有效、需#include <stdlib.h>）
      //printf("\n－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n顯示運行結果，程式暫停運行\n請按Enter繼續");
		//system("pause");
	//方法二：運用輸入function（需#include <stdio.h>）
         //方法二
         //需全域定義
         //short int scanfTriggered = 0;
      printf("\n－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n顯示運行結果，程式暫停運行\n請按Enter繼續");
         if (scanfTriggered ==1)
         {
		  scanf("%*[^\n]");
            scanf("%*c");
		 }

		fgetc(stdin); //參數stdin表鍵盤(stream來源)輸入（有scanf()就會無效，須清除inputbuffer）


	//－－－－－－－－－－－－－－－－－－－－－
		//傳回數字０（表程式運行成功）
		//版本：1.00(1)
		//return後面不可加註解！
			return 0;
	}

