//程式框架(Program Frame)
//-------------------------------------------------------------------
//程式名稱(Program Name)：C Programming Practice 7-1。
//程式敘述(Program Description)：[Basic] Writing Functions 。
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
bool isLeapYear(short int year)
{
if (year % 4 == 0)
{
    	//printf("4 in\n");
    if(year % 100 == 0)
    {
        //printf("100 in\n");
        if(year % 400 == 0)
        {
            //printf("400 in\n");
            return true;
        }
        return false;
    }
    return true;
}
else
{
    return false;
}
}

//check legal func.
//input YMD
bool isLegalDate(short int year, short int month, short int day)
{
	//allday of month array
    short int fineDate[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if(isLeapYear(year))//if is Leap year
    {
        fineDate[1] = 29;	//assign Feb to 29 days
    }

//legal?
    if(month < 1 || month > 12)//if month illegal
    {
																							//歸零
																							//fineDate[1] = 28;//cause func.init everytime so not ness.
        return false;//illegal date
    }

    if(day < 1 || day > fineDate[month - 1])//if day illegal
    {
																									//歸零
																									//fineDate[1] = 28;//cause func.init everytime so not ness.
		  return false;//illegal date
    }
    //歸零
    fineDate[1] = 28;

    //output bool
    return true;
}
	int main(void)
	{
      //宣告與定義(Declaration & Definition)

const char * trueWord[2] = {"不是","是"};
short int scanfTriggered = 0;
short int month, day, year;

//標題
//版本：1.00(3)
      printf("程式名稱(Program Name)：C Programming Practice 7-1。\n");
      printf("程式敘述(Program Description)：\n[Basic] Writing Functions 。\n");
      printf("程式版本(Program Version)：1.00(0)\n");
      printf("Ｂｕｉｌｄ　ｂｙ　Ｖｄｒａｇｏｎ＠２０１０\nＡｌｌ　ｒｉｇｈｔｓ　ＲＥＳＥＲＶＥＤ\n");
      printf("－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n");
//test
/*
printf("請輸入欲測試的年份：");
scanfTriggered = 1;
scanf("%d", &year);

if(isLeapYear(year) == true)
{
    printf("LY!");

}
else
{
        printf("noLY!");
}
*/

//input
/*
printf("請輸入欲測試的日期(yy,dd)：");
scanfTriggered = 1;
scanf("%d/%d", &month, &day);
    //think
        printf("%d年%d月%d日%S合法日期。\n", year, month, day, trueWord[isLegalDate(year, month, day)]);
*/

//prompt par month day
printf("請輸入欲測試的日期(yr = 1899~1905)(mm/dd)：");
scanfTriggered = 1;
scanf("%hd/%hd", &month, &day);

//loop output1-par year
for( year = 1899; year <= 1905;year++ )
{
																																				 //test
																																				 //printf("%d", trueword)
	 //call check and word func
    printf("%hd年%hd月%hd日%s合法日期。\n", year, month, day, trueWord[isLegalDate(year, month, day)]);
}

//newline
printf("\n");

//output2

for( year = 1995; year <= 2001;year++ )
{
    //printf("%d", trueword)
    printf("%hd年%hd月%hd日%s合法日期。\n", year, month, day, trueWord[isLegalDate(year, month, day)]);
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
