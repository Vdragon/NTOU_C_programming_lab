//程式框架(Program Frame)
//-------------------------------------------------------------------
//程式名稱(Program Name)：C Programming Practice 6-2 [Basic] Multi-Dimensional Arrays  。
//程式敘述(Program Description)：Try to find the sum of the scores of each subject in each class in each year.。
//程式版本(Program Version)：1.00(2)
//程式框架版本(Program Frame Version)：A
//程式框架修訂號(Program Frame Revision Number)：14
//最新更新紀錄(Latest Update Log)：修正固定變數、debug、增加Step4。
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
int scanfTriggered = 0, sum = 0, year = 0, clas = 0, seatNo = 0, subject = 0;
float avg;
            //array
            const char * subname[3] = {"國文", "英文","數學"};
int score[2][3][5][3] =  // score[year][class][seatNo][subject = {Chinese, English, Math}]
	{ { {{98, 95, 92}, {89, 78, 82}, {88, 64, 64}, {61, 43, 44}, {48, 57, 58}},
	    {{86, 78, 44}, {65, 65, 63}, {56, 67, 77}, {47, 78, 43}, {54, 56, 58}},
	    {{46, 50, 76}, {65, 87, 66}, {64, 56, 66}, {92, 49, 86}, {45, 73, 83}} },

	  { {{77, 52, 91}, {40, 45, 69}, {89, 70, 82}, {75, 94, 60}, {78, 86, 63}},
	    {{85, 50, 91}, {92, 70, 82}, {72, 64, 93}, {86, 75, 52}, {43, 40, 83}},
	    {{89, 92, 67}, {55, 61, 91}, {40, 54, 48}, {75, 79, 47}, {47, 44, 97}} } };


//標題
//版本：1.00(3)
      printf("程式名稱(Program Name)：C Programming Practice 6-2 [Basic] Multi-Dimensional Arrays 。\n");
      printf("程式敘述(Program Description)：\nTry to find the sum of the scores of each subject in each class in each year.。\n");
      printf("程式版本(Program Version)：1.00(2)\n");
      printf("Ｂｕｉｌｄ　ｂｙ　Ｖｄｒａｇｏｎ＠２０１０\nＡｌｌ　ｒｉｇｈｔｓ　ＲＥＳＥＲＶＥＤ\n");
      printf("－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n");
//Step1
printf("Step1\n");

    //calc
    for(subject = 0; subject < 3; subject++)
    {
        for(year = 0; year < 1; year++)
        {
            for(clas = 0; clas < 3; clas++)
            {
                for(seatNo = 0; seatNo < 5; seatNo++)
                {
                    //test
                        //printf("I'n \n");
                    sum = sum + score[year][clas][seatNo][subject];
                }
            }
        }
        //output
            printf("%d年級學生%s成績總和為 %d\n",year, subname[subject], sum);
        //zero
            sum = 0;
    }
//Step2
    year = 0, clas = 0, seatNo = 0, subject = 0;
printf("Step2\n");

    //calc
    for(subject = 0; subject < 3; subject++)
    {
        for(year = 0; year < 2; year++)
        {
            for(clas = 0; clas < 3; clas++)
            {
                for(seatNo = 0; seatNo < 5; seatNo++)
                {
                    //test
                        //printf("I'n \n");
                    sum = sum + score[year][clas][seatNo][subject];
                }
            }
        //output
            printf("%d年級學生%s成績總和為 %d\n",year + 1 , subname[subject], sum);
        //zero
            sum = 0;
        }
    }
//step3
    year = 0, clas = 0, seatNo = 0, subject = 0;
printf("Step3\n");

    //calc
    for(subject = 0; subject < 3; subject++)
    {
        for(year = 0; year < 2; year++)
        {
            for(clas = 0; clas < 3; clas++)
            {
                for(seatNo = 0; seatNo < 5; seatNo++)
                {
                    //test
                        //printf("I'n \n");
                    sum = sum + score[year][clas][seatNo][subject];
                }
            //output
                printf("%d年%d班學生%s成績總和為 %d\n",year + 1 ,clas + 1, subname[subject], sum);
            //zero
                sum = 0;
            }
        }
    }

//step4
year = 0, clas = 0, seatNo = 0, subject = 0;
	printf("Step4\n");

    //calc
    for(subject = 0; subject < 3; subject++)
    {
        for(year = 0; year < 2; year++)
        {
            for(clas = 0; clas < 3; clas++)
            {
                for(seatNo = 0; seatNo < 5; seatNo++)
                {
                    //test
                        //printf("I'n \n");
                    sum = sum + score[year][clas][seatNo][subject];
                    avg = sum / 5.0;
                }
            //output
                printf("%d年%d班學生%s成績平均為 %.2f\n",year + 1 ,clas + 1, subname[subject], avg);
            //zero
                sum = 0;
            }
        }
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
