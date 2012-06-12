//程式框架(Program Frame)
//-------------------------------------------------------------------
//程式名稱(Program Name)：C Programming Practice 7-3。
//程式敘述(Program Description)：[Advanced] Guessing Number by m-A-n-B hints。The hidden answer is a four-digit no-repetition number. (0 can be its leading digit.)The program will ask the user to guess a number and response a hint.m-A means m digits in the guessing number are correct, and their positions are correct, too.n-B means n digits in the guessing number are correct, but their positions are incorrect.
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

//C Standard General Utilities Library
//版本：1.00(0)
	#include <stdlib.h>
	/*
	for SYSTEM("pause") if working
	非Windows系統確定不能使用（因為無該系統指令）
	*/

//Date and time functions Library
//版本：1.00(0)
	/*
	for srand()
	*/
	#include <time.h>
//--------------主要程式碼(Main Code)--------------
//func. for assign rand array  +srand need time &syslib（我記得陣列好像是Ｃａｌｌ　ｂｙ　ａｄｄｒｅｓｓ．．．）OK
//input var. numInArray
//return single Rand
short int setHidden(void)
	{
			/*bad
			short int counterA;//for loop -assign
			short int hidden[numInArray];//assign
			*/


			/*bad
			//for loop -assign
			for(counterA = 0;counterA < numInArray ;counterA++)//run array times
			{
				//assign
				hidden[counterA] = rand() %10;
																								//test ok
																								printf("%hd",hidden[counterA]  );
			}
			*/

			//test ok
			//printf("               %hd", rand());

			//return single Rand
			return (rand() % 10);
	}
//主函數架構
//版本：1.00(5)
//軟體的運行從main函數開始
	int main(void)
	{
      //宣告與定義(Declaration & Definition)
short int scanfTriggered = 0;//使程式暫停運行
short int input;//prompt var. input 4num int(ok)
short int numInArray = 4, hidden[numInArray];//prompt var. input 4num int(ok)
short int counterTest = 0;//for test
			//init rand(main裡面才有用= =)
			srand((unsigned)time(NULL));
//標題
//版本：1.00(3)
      printf("程式名稱(Program Name)：C Programming Practice 7-3。\n");
      printf("程式敘述(Program Description)：\n[Advanced] Guessing Number by m-A-n-B hints\nThe hidden answer is a four-digit no-repetition number. (0 can be its leading digit.)\nThe program will ask the user to guess a number and response a hint.\nm-A means m digits in the guessing number are correct, and their positions are correct, too.\nn-B means n digits in the guessing number are correct, but their positions are incorrect.。\n");
      printf("程式版本(Program Version)：1.00(0)\n");
      printf("Ｂｕｉｌｄ　ｂｙ　Ｖｄｒａｇｏｎ＠２０１０\nＡｌｌ　ｒｉｇｈｔｓ　ＲＥＳＥＲＶＥＤ\n");
      printf("－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n");

//call set hiddenfunc. func
short int counterA;//for loop -assign
			for(counterA = 0;counterA < numInArray ;counterA++)//run array times
			{
			hidden[counterA] = setHidden();
			//test
			//printf("            %hd\n", setHidden() );
			}

//test

for(counterTest = 0; counterTest < numInArray; counterTest++)
{
printf("            %hd",hidden[counterTest] );
}


/*
//prompt var. input 4num int(ok)
	printf("請猜一個四位數不重覆的數字：");//ask
		scanfTriggered = 1;
		scanf("%hd", &input);//assign to input



//output correct(ok)
	printf("猜對了！ ");//cong.message

*/






//－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－
//使程式暫停運行
//版本：1.00(15)
	//方法一︰執行系統指令（部份系統有效、需#include <stdlib.h>）
      //printf("\n－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n顯示運行結果，程式暫停運行\n");
		//system("pause");
	//方法二：運用輸入function（需#include <stdio.h>）
      printf("\n－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n顯示運行結果，程式暫停運行\n請按Enter繼續");
		//先清除imput buffer
         //方法一
         /*
            short int ch;
            while ((ch = getchar()) != EOF && ch != '\n');
         */
         //方法二
         //需全域定義
         //short int scanfTriggered = 0;

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
