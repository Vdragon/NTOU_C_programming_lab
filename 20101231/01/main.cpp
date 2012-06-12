//程式框架(Program Frame)
//-------------------------------------------------------------------
//程式名稱(Program Name)：。
//程式敘述(Program Description)：。
//程式版本(Program Version)：1.00(0)
//程式框架版本(Program Frame Version)：A
//程式框架修訂號(Program Frame Revision Number)：21
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
６.在condition statement 中要使用多個AND、OR混合之判斷句時宜將AND分隔之各OR句用括號括起來。
７.不明原因：需int main(){}才能用偵錯工具。
*/
//--------------程式碼開始(Code Started)--------------
//--------------前置處理器選項(Preprocessor Code)--------------
//standard input/output library
//版本：1.00(0)
	#include <stdio.h> //for printf(), scanf(), fgetc()
//string.h
//版本：1.00(0)
    #include <string.h>
//C Standard General Utilities Library
//版本：1.00(2)
	/*
	for srand()
	for SYSTEM("pause") if working
	非Windows系統確定不能使用（因為無該系統指令）
	*/
	#include <stdlib.h>
//--------------環境設定(Enviroment Settings)--------------
//define debug functionality
	#define debug 0
//OS Catergory
	#define SYSTEM 0//Windows console = 0, Linux console = 1
//--------------全域宣告與定義(Global Declaration & Definition)--------------
//structure for data
    struct userData
        {
            char ID[13];//max 12ASC
            char nickname[21];//MAX 20 ASC
            int loginTimes;
            int articles;
            int money;
            char lastLogin[9];//yyyymmdd+1
            char gender;//1char帥哥(B) / 美女(G) / 動物(A) / 植物(P) / 礦物(R) / 未知(U)
            bool verified;
            bool hidden;
        };
//global variable
//global variable for 方法二：運用輸入function（需#include <stdio.h>）
	short int scanfTriggered = 0;
//assign int for storing data size
    unsigned short int dataSizeI;
//function prototype
//function prototype for//使程式暫停運行
	void pauseProgram();
//--------------主要程式碼(Main Code)--------------
//main函數架構
//版本：1.00(10)
//軟體的運行從main函數開始
//void會使debugger無法啟動！
int main(void)
	{restart:
	//宣告與定義(Declaration & Definition)


	//－－－－－－－－－－－－－－－－－－－－－
    //open binary save
        FILE *filePtr = fopen("G:\\DEBUG\\20101231\\01\\bin\\Debug\\userData.binary", "rb");
    ////open binary save
    //check if read success!
        if(filePtr == NULL)
            {
                printf("資料庫讀取失敗！\n");
            }
    ////check if read success!
        //for-loop for searching &break
            //find user size
                fseek(filePtr, 0, SEEK_END);
                dataSizeI = (ftell(filePtr) / sizeof(userData));
                rewind(filePtr);
            //debug
                printf("Debug:%d\n", dataSizeI);
            ////debug

    //declare a userData
        userData users[100];
    //declare
        unsigned short fileReadC;
    //read block
        for(fileReadC = 0; filePtr != NULL && fileReadC < 100; fileReadC++)
            {
                fread(&users[fileReadC], sizeof(userData), 1, filePtr);
            }

    /*
        printf("Read finished!\n");
    *///
    //close file
        fclose(filePtr);
    ////close file
    //output
    {
        unsigned short int printC;
        for(printC = 0; printC < dataSizeI; printC++)
            {
                printf("[user]\nID=%s\nnickname=%s\nloginTimes=%d\narticles=%d\nmoney=%d\nlastLogin=%s\n", users[printC].ID, users[printC].nickname, users[printC].loginTimes, users[printC].articles, users[printC].money, users[printC].lastLogin);
                printf("gender=%c\n", users[printC].gender);
                /*switch
                switch(users[printC].gender)
                    {
                        case B : printf("gender="):break;
                    }
                *///switch

                printf("verified=%s\nhidden=%s\n\n", users[printC].verified ? "是" : "否", users[printC].hidden ? "是":"否");
            ////output
            }


    }

    {//Q2

        //assign string for inputID
            char inputID[13];
        //assign counter for assigning
            unsigned short int searchC;

        //prompt
        //版本：1.00(0)
            printf("【 查詢網友 】\n請輸入代號：");
            scanfTriggered = 1;
            scanf("%s", &inputID);


            //for loop
                for(searchC = 0; searchC < dataSizeI && searchC < 100; searchC++)
                    {
                        //if cmp return 0 shows found
                            if(!strcmp(users[searchC].ID, inputID))
                                {
                                    break;
                                }
                    }
            //if searchC is 24 means not found
                if(searchC == dataSizeI)
                      {
                            printf("查無此人！\n");
                            exit(1);
                      }

        ////prompt
        {//print data
            int year, month, day;
            char * genderS[6] = {"帥哥", "美女", "動物", "植物", "礦物", "未知"};

            printf("[帳號] %-12s [暱稱] %-20s [上站] %8d [文章] %8d\n", users[searchC].ID, users[searchC].nickname, users[searchC].loginTimes, users[searchC].articles);
            sscanf(users[searchC].lastLogin, "%4d%2d%2d", &year, &month, &day);
            printf("[認證] %-12s [上次] %d 年 %2d 月 %2d 日 ", users[searchC].verified == true ? "已經通過認證":"尚未通過認證", year, month, day);
            printf(" [性別] 我是");
            switch(users[searchC].gender)
                {
                    case 'B': printf("%-4s", genderS[0]) ; break;
                    case 'G': printf("%-4s", genderS[1]) ; break;
                    case 'A': printf("%-4s", genderS[2]) ; break;
                    case 'P': printf("%-4s", genderS[3]) ; break;
                    case 'R': printf("%-4s", genderS[4]) ; break;
                    default: printf("%-4s", genderS[5]) ; break;
                }
            printf(" [財產] ");
            if(users[searchC].money < 0)
                  {
                        printf("負債累累");
                  }
            else if(users[searchC].money < 1000)
                  {
                        printf("家境清寒");
                  }
            else if(users[searchC].money < 10000)
                  {
                        printf("家境普通");
                  }
            else if(users[searchC].money < 20000)
                  {
                        printf("家境小康");
                  }
            else if(users[searchC].money < 30000)
                  {
                        printf("家境富有");
                  }
            else
                  {
                        printf("家財萬貫");
                  }
        }

    }
    {//Q3
    //open file
        FILE *filePtr = fopen("G:\\DEBUG\\20101231\\01\\bin\\Debug\\userData.binary", "wb");
        unsigned short int editC;
        for(editC = dataSizeI; true; editC++)
            {
                printf("【新帳號註冊頁面】\n");
                //prompt
                //版本：1.00(0)
                    printf("ID=");
                    scanfTriggered = 1;
                    scanf("%s", &users[editC].ID);
                //prompt
                //版本：1.00(0)
                    printf("nickname=");
                    scanfTriggered = 1;
                    scanf("%s", &users[editC].nickname);
                /*prompt
                //版本：1.00(0)
                    printf("loginTimes=");
                    scanfTriggered = 1;
                    scanf("%d", &users[editC].loginTimes);
                *///prompt
                //default
                    users[editC].loginTimes = 0;
                /*prompt
                //版本：1.00(0)
                    printf("loginTimes=");
                    scanfTriggered = 1;
                    scanf("%d", &users[editC].loginTimes);
                *///prompt
                users[editC].articles = 0;
                /*prompt
                //版本：1.00(0)
                    printf("loginTimes=");
                    scanfTriggered = 1;
                    scanf("%d", &users[editC].loginTimes);
                *///prompt
                users[editC].money = 0;
                /*prompt
                //版本：1.00(0)
                    printf("loginTimes=");
                    scanfTriggered = 1;
                    scanf("%d", &users[editC].loginTimes);
                *///prompt
                //prompt
                //版本：1.00(0)
                    printf("防機器人式問題，請輸入今日日期(yyyymmdd)：");
                    scanfTriggered = 1;
                    scanf("%s", &users[editC].lastLogin);
                //prompt
                //版本：1.00(0)
                    printf("帥哥(B) / 美女(G) / 動物(A) / 植物(P) / 礦物(R) / 未知(U)？");
                    scanfTriggered = 1;
                    //scanf("*%c", NULL);
                    scanf("\n%c", &users[editC].gender);

                /*prompt
                //版本：1.00(0)
                    printf("");
                    scanfTriggered = 1;
                    scanf("", &);
                *///prompt
                users[editC].verified = false;
                users[editC].hidden = false;
                //fwrite
                    fwrite(users, sizeof(userData), editC +1, filePtr);

                //prompt
                //版本：1.00(0)
                    printf("註冊完成，請重新上站！\n");
                    scanfTriggered = 1;
                    getchar();
                ////prompt
                if(editC == 25)
                    {
                        system("cls");
                        fclose(filePtr);
                        break;
                    }
            }
    }

    goto restart;

    //pause
        pauseProgram();
	//－－－－－－－－－－－－－－－－－－－－－
		//傳回數字０（表程式運行成功）
		//版本：1.00(1)
		//return後面不可加註解！
			return 0;
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

