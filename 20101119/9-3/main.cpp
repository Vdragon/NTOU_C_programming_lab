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



















	//－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－
	//使程式暫停運行
	//版本：1.00(16)
	//方法一︰執行系統指令（僅Windows系統有效、需#include <stdlib.h>）
      //printf("\n－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n顯示運行結果，程式暫停運行\n");
		//system("pause");
	//方法二：運用輸入function（需#include <stdio.h>）
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

