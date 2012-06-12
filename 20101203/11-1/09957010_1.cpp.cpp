//程式框架(Program Frame)
//-------------------------------------------------------------------
//程式名稱(Program Name)：11-1。
//程式敘述(Program Description)：。
//程式版本(Program Version)：1.00(0)
//程式框架版本(Program Frame Version)：A
//程式框架修訂號(Program Frame Revision Number)：19
//最新更新紀錄(Latest Update Log)：build ok。
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
    void strangeFunc(int a[], int size);
    void swapInt(int * a,int * b);
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
int main()
	{
	//宣告與定義(Declaration & Definition)


	//－－－－－－－－－－－－－－－－－－－－－
    //printTitle
        //printTitle();
    //code from problem
        //data given
            int a[13] = {65, 0, -5, -22, 9, 231, 43, -7, 11, -65, 0, -18, 65};
            int b[14] = {65, 0, -5, -22, 9, 231, 43, -7, 11, 65, 0, -18, 65, 88};
            int c[14] = {65, 0, 5, 22, 9, 231, 43, 7, 11, 65, 0, 18, 65, 88};

        //print the original list in a[];
            printf("原先 a[] 為 {65, 0, -5, -22, 9, 231, 43, -7, 11, -65, 0, -18, 65}\n");
        //print the original list in b[];
            printf("原先 b[] 為 {65, 0, -5, -22, 9, 231, 43, -7, 11, 65, 0, -18, 65, 88}\n");
        //print the original list in c[];
            printf("原先 c[] 為 {65, 0, 5, 22, 9, 231, 43, 7, 11, 65, 0, 18, 65, 88}\n");
        //call func.
            strangeFunc(a, 13);
            strangeFunc(b, 14);
            strangeFunc(c, 14);

        //print blank line
            printf("\n");
        //print the modified list in a[];
            printf("後來 a[] 為 {%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d}\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12]);
        //print the modified list in b[];
            printf("後來 b[] 為 {%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d}\n", b[0], b[1], b[2], b[3], b[4], b[5], b[6], b[7], b[8], b[9], b[10], b[11], b[12], b[13]);
        //print the modified list in c[];
            printf("後來 c[] 為 {%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d}\n", c[0], c[1], c[2], c[3], c[4], c[5], c[6], c[7], c[8], c[9], c[10], c[11], c[12], c[13]);
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
void strangeFunc(int a[], int size)
	{
		//宣告與定義(Declaration & Definition)
        //let p, q be the first, last position of array
            int * p = &a[0], * q = &a[size - 1];

		//－－－－－－－－－－－－－－－－－－－－－
		//while p's position is before q's
            while(p < q)
                {
                    if(*p < 0)
                        {
                            //if *p && *q < 0
                                if(*q < 0)
                                    {
                                        //swap
                                            swapInt(p, q);
                                        //move both
                                            p++;
                                            q--;
                                        //continue
                                            continue;
                                    }
                                else//if only *p < 0
                                    {
                                        //move q
                                            q--;
                                        //continue
                                            continue;
                                    }
                        }
                    else//if !(*p < 0)
                        {
                            //if only *q < 0
                                if(*q < 0)
                                    {
                                        //move p
                                            p++;
                                        //continue
                                            continue;
                                    }
                                else//if all not < 0
                                    {
                                        //move both
                                            p++;
                                            q--;
                                        //continue
                                            continue;
                                    }
                        }
                }





		//－－－－－－－－－－－－－－－－－－－－－
		//傳回內容
		return ;

	}
//swap func.(整數專用版本)
//版本：1.00(0)
/*
returnType functionName(auguments)
*/
void swapInt(int * a,int * b)
	{
		//宣告與定義(Declaration & Definition)
        //mem
            int mem;

		//－－－－－－－－－－－－－－－－－－－－－
        //swap
            //backup a
                mem = *a;
            //assign a with *b
                *a = *b;
            //assign *b with backuped a
                *b = mem;
		//－－－－－－－－－－－－－－－－－－－－－
		//傳回內容
		return;
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
