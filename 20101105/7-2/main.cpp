//程式框架(Program Frame)
//-------------------------------------------------------------------
//程式名稱(Program Name)：C Programming Practice 7-2[Basic] Printing a Calendar for a Year 。
//程式敘述(Program Description)：Write a program that prints a one-year calendar.The user enters which year's calendar he wants, and specifies the day of the week on which the year begins. 。
//程式版本(Program Version)：1.00(0)
//程式框架版本(Program Frame Version)：A
//程式框架修訂號(Program Frame Revision Number)：14
//最新更新紀錄(Latest Update Log)：。
/*
其他(Other)：

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


//閏年確定模塊
//輸入year年分
//傳回是否
bool isLeapYear(int year)
{
	//判斷逢四則閏
    if (year % 4 == 0)//如果4
    {
																																						//test
																																						//printf("4 in\n");
			//判斷逢百不閏
        if(year % 100 == 0)//如果100
        {
																																						//test
																																						//printf("100 in\n");
            //判斷逢400閏
            if(year % 400 == 0)//如果400
            {
																																									 //test
																																									 //printf("400 in\n");
                return true;//是閏break
            }
            return false;//不閏break
        }
        return true;//是閏break
    }
    else//非則
    {
        return false;//4不閏break
    }
}


//輸出最後日模塊
//接收 year年 month 月
short int lastDate(int year,int month)
{
	//定義所有月陣列
    short int allDate[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	//調動確認閏年
    if(isLeapYear(year))//如果是閏
    {
        allDate[1] = 29;//2月有29日
    }

    //回傳最後日編號
    return allDate[month - 1];

}


//輸出日曆模塊
//接收參數 days(這個月的天數) startWkDay (星期幾代表的位置)
short int printMonthCaldr(short int days, short int startWkDay)
{
short int counterBlank, countDate;
//int calDate, counterBlank, date;

	//輸出前方之空白 參數 counterBlank空白數  startWkDay 輸出位置
    for(counterBlank = 0 ; counterBlank < startWkDay ; counterBlank++)
    {
            printf("   ");
    }

//for loop 1~last -output 日期 參數 countDate startWkDay 輸出位置
    for(countDate = 1 ; countDate <= days ; countDate++)
			{
				//判斷輸出位置
			   if(startWkDay > 6)//如果目前輸出位置到7
						 {
						 	 printf("\n");//就換行
						 	 startWkDay = 0;//輸出位置歸零
						 }
				//print日
			 printf("%2hd ", countDate);
			 //位置遞增成未印的位置
			 startWkDay++;
			}
	  //結束換行
	  printf("\n\n");

//判斷下月位置
			   if(startWkDay > 6)//如果下個輸出位置到7
						 {
						 	 startWkDay = 0;//輸出位置歸零
						 }

 //傳回下月位置
 return startWkDay;
}



	int main(void)
	{
      //宣告與定義(Declaration & Definition)
        short int scanfTriggered = 0;
        short int year, startWkDay;
        short int month;

//標題
//版本：1.00(3)
      printf("程式名稱(Program Name)：C Programming Practice 7-2[Basic] Printing a Calendar for a Year 。\n");
      printf("程式敘述(Program Description)：\nWrite a program that prints a one-year calendar.\nThe user enters which year's calendar he wants, and specifies the day of the week on which the year begins.。\n");
      printf("程式版本(Program Version)：1.00(0)\n");
      printf("Ｂｕｉｌｄ　ｂｙ　Ｖｄｒａｇｏｎ＠２０１０\nＡｌｌ　ｒｉｇｈｔｓ　ＲＥＳＥＲＶＥＤ\n");
      printf("－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n");


//詢問year年 startWkday星期幾代表的位置
printf("請問要印哪一年的月曆：");
scanfTriggered = 1;
scanf("%hd", &year);
printf("2000 年 1 月 1 日是星期幾(0 表示星期天、1 表示星期一，依此類推)？");
scanfTriggered = 1;
scanf("%hd", &startWkDay);

//output 上方的文字
printf("\n%d 年月曆\n\n", year);


//調動輸出日曆模塊
//從一月到12月
for(month = 1 ;month <= 12 ;month++ )
{
	//輸出標頭 參數 月名
	const char * monthName[12] = {"一","二","三","四", "五", "六", "七", "八", "九", "十", "十一", "十二"};
    printf("【%s月】\n日 一 二 三 四 五 六\n", monthName[month - 1]);
	//模塊*12
	//接收新位置
   startWkDay = printMonthCaldr(lastDate(year, month), startWkDay);
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
