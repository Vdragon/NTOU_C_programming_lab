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

//C Standard General Utilities Library
//版本：1.00(2)
	/*
	for srand()
	for SYSTEM("pause") if working
	非Windows系統確定不能使用（因為無該系統指令）
	*/
	#include <stdlib.h>
//--------------環境設定(Enviroment Settings)--------------
    //system(0 for dos 1 for LINUX
        #define SYSTEM 0
//--------------全域宣告與定義(Global Declaration & Definition)--------------
	//Pframe
		short int scanfTriggered = 0;
    //wait a keyIn(Global)
        char keyIn;
    //mail Menu func
        void mailMenu();
    //Talk Menu func
        void talkMenu();
    //xyz Menu func
        void xyzMenu();
    //game Menu func
        void gameMenu();
//--------------主要程式碼(Main Code)--------------
//main函數架構
//版本：1.00(8)
//軟體的運行從main函數開始
int main(void)//mainMenu
	{
	//main()宣告與定義(Declaration & Definition)


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

//while loop(always)
while(true)
	{
	    //clean screen
            //if DOS
                if(SYSTEM == 0)
                    {
                        //run command cls
                            system("cls");
                    }
            //if LINUX
                else if(SYSTEM == 1)
                    {
                        //run command clear
                            system("clear");
                    }
        //print mainMenu
            printf("\t(A)nnounce  ξ 精華公佈欄 ξ\n");
            printf("\t(B)oards    Ω 佈告討論區 Ω\n");
            printf("\t(C)lass     φ 分組討論集 φ\n");
            printf("\t(F)avorite  η 我的最愛群 η\n");
            printf("\t(M)ail      μ 信件典藏盒 μ\n");
            printf("\t(T)alk      ω 休閒聊天地 ω\n");
            printf("\t(U)ser      π 個人工具坊 π\n");
            printf("\t(X)yz       θ 特殊招待所 θ\n");
            printf("\t(G)oodbye   δ 下次再會吧 δ\n");
        //wait a keyIn(Global)
            keyIn = getch();
        //switch options
            switch(keyIn)
                {   //every case with state
                        case 'A': case 'a':break;
                        case 'B': case 'b':break;
                        case 'C': case 'c':break;
                        case 'F': case 'f':break;
                        case 'M': case 'm':mailMenu();break;
                        case 'T': case 't':talkMenu();break;
                        case 'U': case 'u':break;
                        case 'X': case 'x':xyzMenu();break;
                        case 'G': case 'g':break;
                }
	}




	//－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－
	//使程式暫停運行
	//版本：1.00(16)
	//方法一︰執行系統指令（僅Windows系統有效、需#include <stdlib.h>）
      //printf("\n－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n顯示運行結果，程式暫停運行\n");
		//system("pause");
	//方法二：運用輸入function（需#include <stdio.h>）
        printf("\n－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n顯示運行結果，程式暫停運行\n請按Enter繼續");
         //方法二
         //需全域定義
         //short int scanfTriggered = 0;

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

//mail Menu func
    //其他函數架構
    //版本：1.00(0)
    /*
    returnType functionName(auguments)
    */
    void mailMenu()
        {
            //宣告與定義(Declaration & Definition)


            //－－－－－－－－－－－－－－－－－－－－－
            //while loop(always)
            while(true)
                {
                    //clean screen
                        //if DOS
                            if(SYSTEM == 0)
                                {
                                    //run command cls
                                        system("cls");
                                }
                        //if LINUX
                            else if(SYSTEM == 1)
                                {
                                    //run command clear
                                        system("clear");
                                }
                        //print menu(unknown warning '\305')
                            printf("\t(R)ead       ├ 閱讀信件 ┤\n");
                            printf("\t(M)ail       ├ 站內寄信 ┤\n");
                            printf("\t(L)ist       ├ 群組寄信 ┤\n");
                            printf("\t(I)nternet   ├ 寄依妹兒 ┤\n");
                            printf("\t(Z)ip        ├ 打包資料 ┤\n");
                            printf("\t(Y)es Sir!   ├ 投書站長 ┤\n");
                        //wait a keyIn(Global)
                            keyIn = getch();
                            //if keyIn == '\xe0' or '\0'
                                if(keyIn == '\xe0' || keyIn == '\0')
                                    {
                                        //get next char
                                            keyIn = getch();
                                        //if next char == 'K'
                                            if(keyIn == 'K')
                                                {
                                                    return;
                                                }
                                    }
                        //switch options
                            switch(keyIn)
                                {   //every case with state
                                        case 'R': case 'r':break;
                                        case 'M': case 'm':break;
                                        case 'L': case 'l':break;
                                        case 'I': case 'i':break;
                                        case 'Z': case 'z':break;
                                        case 'Y': case 'y':break;
                                        //backsp case
                                            case '\x08': return;
                                }
                }

        }

//Talk Menu func
    //其他函數架構
    //版本：1.00(0)
    /*
    returnType functionName(auguments)
    */
    void talkMenu()
        {
            //宣告與定義(Declaration & Definition)


            //－－－－－－－－－－－－－－－－－－－－－
            //while loop(always)
            while(true)
                {
                    //clean screen
                        //if DOS
                            if(SYSTEM == 0)
                                {
                                    //run command cls
                                        system("cls");
                                }
                        //if LINUX
                            else if(SYSTEM == 1)
                                {
                                    //run command clear
                                        system("clear");
                                }
                        //print menu(unknown warning '\305')
                            printf("\t(U)sers      → 遊客名單 ←\n");
                            printf("\t(L)istMenu   → 設定名單 ←\n");
                            printf("\t(P)ager      → 切換呼叫 ←\n");
                            printf("\t(I)nvis      → 隱身密法 ←\n");
                            printf("\t(Q)uery      → 查詢網友 ←\n");
                            printf("\t(T)alk       → 情話綿綿 ←\n");
                            printf("\t(C)hatRoom   → 眾口鑠金 ←\n");
                            printf("\t(D)isplay    → 瀏覽水球 ←\n");
                            printf("\t(W)rite      → 回顧水球 ←\n");
                        //wait a keyIn(Global)
                            keyIn = getch();
                            //if keyIn == '\xe0' or '\0'
                                if(keyIn == '\xe0' || keyIn == '\0')
                                    {
                                        //get next char
                                            keyIn = getch();
                                        //if next char == 'K'
                                            if(keyIn == 'K')
                                                {
                                                    return;
                                                }
                                    }
                        //switch options
                            switch(keyIn)
                                {   //every case with state
                                        case 'U': case 'u':break;
                                        case 'L': case 'l':break;
                                        case 'P': case 'p':break;
                                        case 'I': case 'i':break;
                                        case 'Q': case 'q':break;
                                        case 'T': case 't':break;
                                        case 'C': case 'c':break;
                                        case 'D': case 'd':break;
                                        case 'W': case 'w':break;
                                        //backsp case
                                            case '\x08': return;
                                }
                }

        }

//xyz Menu func
    //其他函數架構
    //版本：1.00(0)
    /*
    returnType functionName(auguments)
    */
    void xyzMenu()
        {
            //宣告與定義(Declaration & Definition)


            //－－－－－－－－－－－－－－－－－－－－－
            //while loop(always)
            while(true)
                {
                //clean screen
                    //if DOS
                        if(SYSTEM == 0)
                            {
                                //run command cls
                                    system("cls");
                            }
                    //if LINUX
                        else if(SYSTEM == 1)
                            {
                                //run command clear
                                    system("clear");
                            }
                            //print menu(unknown warning '\305')
                                printf("\t(N)et        【 網路服務 】\n");
                                printf("\t(K)TV        【 真情點歌 】\n");
                                printf("\t(J)oin       【 看板連署 】\n");
                                printf("\t(G)ame       【 遊戲人生 】\n");
                                printf("\t(M)arket     【 金融市場 】\n");
                                printf("\t(O)ther      【 雜七雜八 】\n");
                            //wait a keyIn(Global)
                                keyIn = getch();
                            //if keyIn == '\xe0' or '\0'
                                if(keyIn == '\xe0' || keyIn == '\0')
                                    {
                                        //get next char
                                            keyIn = getch();
                                        //if next char == 'K'
                                            if(keyIn == 'K')
                                                {
                                                    return;
                                                }
                                    }
                            //switch options
                                switch(keyIn)
                                    {   //every case with state
                                            case 'N': case 'n':break;
                                            case 'K': case 'k':break;
                                            case 'J': case 'j':break;
                                            case 'G': case 'g':gameMenu();break;
                                            case 'M': case 'm':break;
                                            case 'O': case 'o':break;
                                            //backsp case
                                                case '\x08': return;
                                    }
            }

        }


//game Menu func
    //其他函數架構
    //版本：1.00(0)
    /*
    returnType functionName(auguments)
    */
    void gameMenu()
        {
            //宣告與定義(Declaration & Definition)


            //－－－－－－－－－－－－－－－－－－－－－
            //while loop(always)
            while(true)
                {
                    //clean screen
                        //if DOS
                            if(SYSTEM == 0)
                                {
                                    //run command cls
                                        system("cls");
                                }
                        //if LINUX
                            else if(SYSTEM == 1)
                                {
                                    //run command clear
                                        system("clear");
                                }
                                //print menu(unknown warning '\305')
                                    printf("\t(1)GuessNum  【  猜數字  】\n");
                                    printf("\t(2)Game      【 遊戲樂園 】\n");
                                    printf("\t(3)Game      【 反斗特區 】\n");
                                //wait a keyIn(Global)
                                    keyIn = getch();
                            //if keyIn == '\xe0' or '\0'
                                if(keyIn == '\xe0' || keyIn == '\0')
                                    {
                                        //get next char
                                            keyIn = getch();
                                        //if next char == 'K'
                                            if(keyIn == 'K')
                                                {
                                                    return;
                                                }
                                    }
                                //switch options
                                    switch(keyIn)
                                        {   //every case with state
                                                case '1':break;
                                                case '2':break;
                                                case '3':break;
                                                //backsp case
                                                    case '\x08': return;break;
                                        }
                    }

        }


