//程式框架(Program Frame)
//-------------------------------------------------------------------
//程式名稱(Program Name)：C Programming Practice 4-1。
//程式敘述(Program Description)：[Basic] 韓信點兵 General Han Counting Soldiers韓信點兵，兵不知數，三三數之剩二，五五數之剩三，七七數之剩二。問兵幾人？Ask the user to guess a number whose remainders when divided by 3, 5, and 7 are 2, 3, and 2, respectively.how many times does the user guess until he gives the correct answer.Give an appropriate comment accoring to hus guessing time.。
//程式版本(Program Version)：1.00(1)
//程式修訂號(Program Revision Number)：
//程式框架版本(Program Frame Version)：A
//程式框架修訂號(Program Frame Revision Number)：9
//最新更新紀錄(Latest Update Log)：build ok。
/*
其他(Other)：。
*/
/*更新紀錄(Change Log)：。
1.00(0)build ok
1.00(1)revise title
*/
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

//--------------宣告與定義(Declaration & Definition)--------------
int scanfTriggered = 0;
//--------------主要程式碼(Main Code)--------------
//主函數架構
//版本：1.00(3)
	int main(void)
	{

//標題
//版本：1.00(1)
printf("程式名稱(Program Name)：C Programming Practice 4-1。\n");
printf("程式敘述(Program Description)：\n[Basic] 韓信點兵 General Han Counting Soldiers\n韓信點兵，兵不知數，三三數之剩二，五五數之剩三，七七數之剩二。問兵幾人？\nAsk the user to guess a number whose remainders when divided by 3, 5, and 7 are 2, 3, and 2, respectively.Count how many times does the user guess until he gives the correct answer.Give an appropriate comment accoring to hus guessing time.。\n");
printf("程式版本(Program Version)：1.00(1)\n");
printf("Ｂｕｉｌｄ　ｂｙ　Ｖｄｒａｇｏｎ＠２０１０\nＡｌｌ　ｒｉｇｈｔｓ　ＲＥＳＥＲＶＥＤ\n");
printf("－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n");

//def
int inputAns, counterAsk = 0;

//counter 1st
counterAsk++;
//prompt
//螢幕輸出
//版本：1.00(4)
//功能：在游標位置處輸出字串
/*用法（全形符號跟其內之內容皆為註解）：
printf("『螢幕輸出之內容（包括Format conversion格式轉換字元或Escape sequence跳脫序列字元）」, 「格式轉換字元代表之變數名（多個變數則以逗號分開，前後變數分別對應前後不同的格式轉換符）』");
*/
/*Escape sequence範例：
   \n→(new line)換行字元，相當於鍵入〔Ｅｎｔｅｒ／〕鍵
   \t→(tab)輸出一個[tab]
   \a→(alarm)發出一個系統聲音
   \\→(black slash)輸出一個反斜線 (\)
   \"→(double quote)輸出一個double quote(")
*/
/*Format conversion範例：
   %d→(decimal number)十進位整數
   %f→(float number)浮點數
   %lf
   %.2f
*/
printf("請猜一個被 3 除餘 2、被 5 除餘 3、被 7 除餘 2 的數：");
//從鍵盤輸入
//版本：1.00(3)
//功能：在游標位置處輸出字串
/*用法（全形符號跟其內之內容皆為註解）：
scanf("『鍵盤輸入的內容（包括Format conversion格式轉換字元）」,  &「格式轉換字元代表之變數名』");
*/
/*Format conversion範例：
   %d→(decimal number)十進位整數
   %f→(float number)浮點數
   %lf
   %.2f
*/
//確認scanf有執行，造成鍵盤buffer中有換行符號的存在
scanfTriggered = 1;
//
scanf("%d", &inputAns);
//test
//printf("%d", inputAns);

//think
while(!(inputAns % 3 == 2 && inputAns % 5 == 3 && inputAns % 5 == 3))
{
//counter
counterAsk++;

//wrong output
//螢幕輸出
//版本：1.00(4)
//功能：在游標位置處輸出字串
/*用法（全形符號跟其內之內容皆為註解）：
printf("『螢幕輸出之內容（包括Format conversion格式轉換字元或Escape sequence跳脫序列字元）」, 「格式轉換字元代表之變數名（多個變數則以逗號分開，前後變數分別對應前後不同的格式轉換符）』");
*/
/*Escape sequence範例：
   \n→(new line)換行字元，相當於鍵入〔Ｅｎｔｅｒ／〕鍵
   \t→(tab)輸出一個[tab]
   \a→(alarm)發出一個系統聲音
   \\→(black slash)輸出一個反斜線 (\)
   \"→(double quote)輸出一個double quote(")
*/
/*Format conversion範例：
   %d→(decimal number)十進位整數
   %f→(float number)浮點數
   %lf
   %.2f
*/
printf("錯！\n");
//prompt
//螢幕輸出
//版本：1.00(4)
//功能：在游標位置處輸出字串
/*用法（全形符號跟其內之內容皆為註解）：
printf("『螢幕輸出之內容（包括Format conversion格式轉換字元或Escape sequence跳脫序列字元）」, 「格式轉換字元代表之變數名（多個變數則以逗號分開，前後變數分別對應前後不同的格式轉換符）』");
*/
/*Escape sequence範例：
   \n→(new line)換行字元，相當於鍵入〔Ｅｎｔｅｒ／〕鍵
   \t→(tab)輸出一個[tab]
   \a→(alarm)發出一個系統聲音
   \\→(black slash)輸出一個反斜線 (\)
   \"→(double quote)輸出一個double quote(")
*/
/*Format conversion範例：
   %d→(decimal number)十進位整數
   %f→(float number)浮點數
   %lf
   %.2f
*/
printf("請猜一個被 3 除餘 2、被 5 除餘 3、被 7 除餘 2 的數：");
//從鍵盤輸入
//版本：1.00(3)
//功能：在游標位置處輸出字串
/*用法（全形符號跟其內之內容皆為註解）：
scanf("『鍵盤輸入的內容（包括Format conversion格式轉換字元）」,  &「格式轉換字元代表之變數名』");
*/
/*Format conversion範例：
   %d→(decimal number)十進位整數
   %f→(float number)浮點數
   %lf
   %.2f
*/
//確認scanf有執行，造成鍵盤buffer中有換行符號的存在
scanfTriggered = 1;
//
scanf("%d", &inputAns);
}
//finish
if(counterAsk == 1)
{
    //螢幕輸出
//版本：1.00(4)
//功能：在游標位置處輸出字串
/*用法（全形符號跟其內之內容皆為註解）：
printf("『螢幕輸出之內容（包括Format conversion格式轉換字元或Escape sequence跳脫序列字元）」, 「格式轉換字元代表之變數名（多個變數則以逗號分開，前後變數分別對應前後不同的格式轉換符）』");
*/
/*Escape sequence範例：
   \n→(new line)換行字元，相當於鍵入〔Ｅｎｔｅｒ／〕鍵
   \t→(tab)輸出一個[tab]
   \a→(alarm)發出一個系統聲音
   \\→(black slash)輸出一個反斜線 (\)
   \"→(double quote)輸出一個double quote(")
*/
/*Format conversion範例：
   %d→(decimal number)十進位整數
   %f→(float number)浮點數
   %lf
   %.2f
*/
printf("哇！一次就猜中！超強！");
}
else if(counterAsk >= 2 && counterAsk <= 5)
{
        //螢幕輸出
//版本：1.00(4)
//功能：在游標位置處輸出字串
/*用法（全形符號跟其內之內容皆為註解）：
printf("『螢幕輸出之內容（包括Format conversion格式轉換字元或Escape sequence跳脫序列字元）」, 「格式轉換字元代表之變數名（多個變數則以逗號分開，前後變數分別對應前後不同的格式轉換符）』");
*/
/*Escape sequence範例：
   \n→(new line)換行字元，相當於鍵入〔Ｅｎｔｅｒ／〕鍵
   \t→(tab)輸出一個[tab]
   \a→(alarm)發出一個系統聲音
   \\→(black slash)輸出一個反斜線 (\)
   \"→(double quote)輸出一個double quote(")
*/
/*Format conversion範例：
   %d→(decimal number)十進位整數
   %f→(float number)浮點數
   %lf
   %.2f
*/
printf("猜了%d次才猜對，有待加強。", counterAsk);
}
else
{
//螢幕輸出
//版本：1.00(4)
//功能：在游標位置處輸出字串
/*用法（全形符號跟其內之內容皆為註解）：
printf("『螢幕輸出之內容（包括Format conversion格式轉換字元或Escape sequence跳脫序列字元）」, 「格式轉換字元代表之變數名（多個變數則以逗號分開，前後變數分別對應前後不同的格式轉換符）』");
*/
/*Escape sequence範例：
   \n→(new line)換行字元，相當於鍵入〔Ｅｎｔｅｒ／〕鍵
   \t→(tab)輸出一個[tab]
   \a→(alarm)發出一個系統聲音
   \\→(black slash)輸出一個反斜線 (\)
   \"→(double quote)輸出一個double quote(")
*/
/*Format conversion範例：
   %d→(decimal number)十進位整數
   %f→(float number)浮點數
   %lf
   %.2f
*/
printf("猜了%d次才猜對，沒人比你強。", counterAsk);
}
//使程式暫停運行
//版本：1.00(7)
	//方法一︰執行系統指令（部份系統有效、需#include <stdlib.h>）
      //printf("\n－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n顯示運行結果，程式暫停運行\n");
		//system("pause");

	//方法二：運用輸入function（需#include <stdio.h>）
      printf("\n－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n顯示運行結果，程式暫停運行\n請按Enter繼續");
		//先清除imput buffer
         //方法一
            //int ch;
            //while ((ch = getchar()) != EOF && ch != '\n');
         //方法二
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
