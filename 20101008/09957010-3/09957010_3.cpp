//程式框架(Program Frame)
//-------------------------------------------------------------------
//程式名稱(Program Name)：C Programming Practice 3-3。
//程式敘述(Program Description)：[Advanced] 統一發票對獎系統 Uniform-Invoice Prize .Ask the user to enter a number on a uniform-invoice. Check if he or she has won any prize.。
//程式版本(Program Version)：1.00(0)
//程式修訂號(Program Revision Number)：
//程式框架版本(Program Frame Version)：A
//程式框架修訂號(Program Frame Revision Number)：9
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
#define FIRST_PRIZE 81674526
//--------------宣告與定義(Declaration & Definition)--------------
int imput = 100000000;
//--------------主要程式碼(Main Code)--------------
//主函數架構
//版本：1.00(3)
	int main(void)
	{
 //標題
//版本：1.00(1)
printf("程式名稱(Program Name)：C Programming Practice 3。\n");
printf("程式敘述(Program Description)：\n[Advanced] 統一發票對獎系統 Uniform-Invoice Prize 。Ask the user to enter a number on a uniform-invoice. Check if he or she has won any prize.\n");
printf("程式版本(Program Version)：1.00(0)\n");
printf("Ｂｕｉｌｄ　ｂｙ　Ｖｄｒａｇｏｎ＠２０１０\nＡｌｌ　ｒｉｇｈｔｓ　ＲＥＳＥＲＶＥＤ\n");
printf("－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n");

//input
printf("請輸入你的發票號碼：");
scanf("%d", &imput); 
while(imput >99999999)
{
printf("發票號碼不可以超過八位數。\n");      
printf("請輸入你的發票號碼：");
scanf("%d", &imput); 
}

//think output
if(imput == FIRST_PRIZE)
      {
    printf("恭喜！你中了頭獎！ \n");  
      }
else if(imput %10000000 == FIRST_PRIZE%10000000)
{
    printf("恭喜！你中了二獎！ \n");  
}
else if(imput %1000000 == FIRST_PRIZE%1000000)
{
    printf("恭喜！你中了三獎！ \n");  
}
else if(imput %100000 == FIRST_PRIZE%100000)
{
    printf("恭喜！你中了四獎！ \n");  
}
else if(imput %10000 == FIRST_PRIZE%10000)
{
    printf("恭喜！你中了五獎！ \n");  
}

else if(imput %1000 == FIRST_PRIZE%1000)
{
    printf("恭喜！你中了六獎！ \n");  
}
else
      {

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
            scanf("%*[^\n]");
            scanf("%*c");
		fgetc(stdin); //參數stdin表鍵盤(stream來源)輸入（有scanf()就會無效，須清除inputbuffer）

		//傳回數字０（表程式運行成功）
		//版本：1.00(1)
		//return後面不可加註解！
			return 0;
	}
