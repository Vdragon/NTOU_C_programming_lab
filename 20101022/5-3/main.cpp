//程式框架(Program Frame)
//-------------------------------------------------------------------
//程式名稱(Program Name)：C Programming Practice 5-3[Advanced] Astrology。
//程式敘述(Program Description)：Write a program to determine the astrological sign (星座) of a user.。
//程式版本(Program Version)：1.00(0)
//程式框架版本(Program Frame Version)：A
//程式框架修訂號(Program Frame Revision Number)：14
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
//版本：1.00(5)
//軟體的運行從main函數開始
	int main(void)
	{
      //宣告與定義(Declaration & Definition)
      int scanfTriggered = 0;
      int inputMonth, inputDay, beginningDay[12] = {21,21,21,22,23,23,23,23,22,22,20,20};
      int zodiacCode;
    char * chiName[12] = {"牡羊座","金牛座","雙子座","巨蟹座", "獅子座", "處女座", "天秤座","天蠍座","射手座", "摩羯座", "水瓶座","雙魚座"};
//標題
//版本：1.00(3)
      printf("程式名稱(Program Name)：C Programming Practice 5-3[Advanced] Astrology。\n");
      printf("程式敘述(Program Description)：\nWrite a program to determine the astrological sign (星座) of a user.。\n");
      printf("程式版本(Program Version)：1.00(0)\n");
      printf("Ｂｕｉｌｄ　ｂｙ　Ｖｄｒａｇｏｎ＠２０１０\nＡｌｌ　ｒｉｇｈｔｓ　ＲＥＳＥＲＶＥＤ\n");
      printf("－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n");

//prompt
    printf("請輸入日期 (以 月/日 的格式)：");
    scanfTriggered = 1;
    scanf("%d/%d", &inputMonth, &inputDay);
//test ok
//printf("%d\n%d", inputMonth, inputDay);

//think
if(inputDay < beginningDay[inputMonth - 1])
{
    inputMonth--;
}

zodiacCode = (inputMonth - 3 + 12) %12 ;

//test ok
//printf("%d", zodiacCode);

//output
    printf("你是%s的，星座代碼是 %d。",chiName[zodiacCode], zodiacCode);
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

