//程式框架(Program Frame)
//-------------------------------------------------------------------
//程式名稱(Program Name)： Getting Digits in a Three-digit Number 。
//程式敘述(Program Description)：Ask the user to give a three-digit number and print the number with white spaces between digits.。
//程式版本(Program Version)：1.00(1)
//程式修訂號(Program Revision Number)：
//程式框架版本(Program Frame Version)：A
//程式框架修訂號(Program Frame Revision Number)：8
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

//--------------主要程式碼(Main Code)--------------
//主函數架構
//版本：1.00(2)
	int main(void)
	{
        int oriInput,num1,oriOutput1,oriOutput2,num2,num3;
              int scanfTriggered = 0;
        //pre
        printf("[Basic] Getting Digits in a Three-digit Number\nAsk the user to give a three-digit number and print the number with white spaces between digits.\n");
        //input
        printf("請輸入一個三位數的數字：");
        scanfTriggered = 1;
       	scanf("%d", &oriInput);
       	//num1
       	num1 = oriInput % 10;
       	//printf("%d",num1);
       	//num
       	oriOutput1 = oriInput / 10;
       	num2 = oriOutput1 % 10;
       	//printf("%d",num2);
       	//num3
       	oriOutput2 = oriOutput1 /10;
       	num3 = oriOutput2 % 10;
       	//printf("%d",num3);
       	//print
       	printf("%d %d %d",num3,num2,num1);

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
