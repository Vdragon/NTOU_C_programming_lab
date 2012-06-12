//µ{Š¡®Ø¬[(Program Frame)
//-------------------------------------------------------------------
//µ{Š¡ŠWºÙ(Program Name)¡G11-1¡C
//µ{Š¡±Ô­z(Program Description)¡G¡C
//µ{Š¡ª©¥»(Program Version)¡G1.00(0)
//µ{Š¡®Ø¬[ª©¥»(Program Frame Version)¡GA
//µ{Š¡®Ø¬[­×­qž¹(Program Frame Revision Number)¡G19
//³Ì·s§ó·s¬ö¿ý(Latest Update Log)¡Gbuild ok¡C
/*
šä¥L(Other)¡G¡C
*/
//§ó·s¬ö¿ý(Change Log)¡G¡C
//--------------ª`·NšÆ¶µ--------------
/*
¢°.šC€@¥yStatement«á­±¥²±µ¡y;¡z¡C
¢±.°O±oReturn 0;¡C
¢².Š³BUG¥ýÀË¬dscanf¡C
¢³.compiler¥i¯àŠ³³B²zšçŒÆ¡BÅÜŒÆ€§¥ý«á¡A€£­nŠP®É³B²zšâªÌ¡C
¢Ž.¹BŠæšçŒÆ­nª`·N¬O§_Š³return­È¡C
*/
//--------------µ{Š¡œX¶}©l(Code Started)--------------
//--------------«ežm³B²zŸ¹¿ï¶µ(Preprocessor Code)--------------
//standard input/output library
//ª©¥»¡G1.00(0)
	#include <stdio.h> //for printf(), scanf(), fgetc()

//--------------Àô¹Ò³]©w(Enviroment Settings)--------------
//define debug var
	#define debug 0
//--------------¥þ°ì«Å§i»P©wžq(Global Declaration & Definition)--------------
//global variable for €èªk€G¡G¹B¥Î¿é€Jfunction¡]»Ý#include <stdio.h>¡^
	short int scanfTriggered = 0;
//function prototype
	void pauseProgram();
    void strangeFunc(int a[], int size);
    void swapInt(int * a,int * b);
//--------------¥D­nµ{Š¡œX(Main Code)--------------
//ŒÐÃD¿é¥XšçŒÆ
//ª©¥»¡G1.00(5)
void printTitle()
    {
          printf("µ{Š¡ŠWºÙ(Program Name)¡G¡C\n");
          printf("µ{Š¡±Ô­z(Program Description)¡G\n¡C\n");
          printf("µ{Š¡ª©¥»(Program Version)¡G1.00(0)\n");
          printf("¢Ð¢ý¢ñ¢ô¢ì¡@¢ê£B¡@¢ä¢ì¢ú¢é¢ï¢÷¢ö¢I¢±¢¯¢°¢¯\n¢Ï¢ô¢ô¡@¢ú¢ñ¢ï¢ð¢ü¢û¡@¢à¢Ó¢á¢Ó¢à¢ä¢Ó¢Ò\n");
          printf("¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð\n");
    }

//mainšçŒÆ¬[ºc
//ª©¥»¡G1.00(9)
//³nÅéªº¹BŠæ±qmainšçŒÆ¶}©l
int main()
	{
	//«Å§i»P©wžq(Declaration & Definition)


	//¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð
    //printTitle
        //printTitle();
    //code from problem
        //data given
            int a[13] = {65, 0, -5, -22, 9, 231, 43, -7, 11, -65, 0, -18, 65};
            int b[14] = {65, 0, -5, -22, 9, 231, 43, -7, 11, 65, 0, -18, 65, 88};
            int c[14] = {65, 0, 5, 22, 9, 231, 43, 7, 11, 65, 0, 18, 65, 88};

        //print the original list in a[];
            printf("­ì¥ý a[] ¬° {65, 0, -5, -22, 9, 231, 43, -7, 11, -65, 0, -18, 65}\n");
        //print the original list in b[];
            printf("­ì¥ý b[] ¬° {65, 0, -5, -22, 9, 231, 43, -7, 11, 65, 0, -18, 65, 88}\n");
        //print the original list in c[];
            printf("­ì¥ý c[] ¬° {65, 0, 5, 22, 9, 231, 43, 7, 11, 65, 0, 18, 65, 88}\n");
        //call func.
            strangeFunc(a, 13);
            strangeFunc(b, 14);
            strangeFunc(c, 14);

        //print blank line
            printf("\n");
        //print the modified list in a[];
            printf("«ášÓ a[] ¬° {%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d}\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12]);
        //print the modified list in b[];
            printf("«ášÓ b[] ¬° {%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d}\n", b[0], b[1], b[2], b[3], b[4], b[5], b[6], b[7], b[8], b[9], b[10], b[11], b[12], b[13]);
        //print the modified list in c[];
            printf("«ášÓ c[] ¬° {%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d}\n", c[0], c[1], c[2], c[3], c[4], c[5], c[6], c[7], c[8], c[9], c[10], c[11], c[12], c[13]);
	//pause
		pauseProgram();
	//¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð
    //¶ÇŠ^ŒÆŠr¢¯¡]ªíµ{Š¡¹BŠæŠš¥\¡^
    //ª©¥»¡G1.00(1)
    //return«á­±€£¥i¥[µùžÑ¡I
			return 0;
	}
//šä¥LšçŒÆ¬[ºc
//ª©¥»¡G1.00(1)
/*
returnType functionName(auguments)
*/
void strangeFunc(int a[], int size)
	{
		//«Å§i»P©wžq(Declaration & Definition)
        //let p, q be the first, last position of array
            int * p = &a[0], * q = &a[size - 1];

		//¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð
		//while p's position is before q's
            while(p < q)
                {
                    if(*p < 0)
                        {
                            //if *p && *q < 0
                                if(*q < 0)
                                    {
                                        //swap
                                            swapInt(p, q);
                                        //move both
                                            p++;
                                            q--;
                                        //continue
                                            continue;
                                    }
                                else//if only *p < 0
                                    {
                                        //move q
                                            q--;
                                        //continue
                                            continue;
                                    }
                        }
                    else//if !(*p < 0)
                        {
                            //if only *q < 0
                                if(*q < 0)
                                    {
                                        //move p
                                            p++;
                                        //continue
                                            continue;
                                    }
                                else//if all not < 0
                                    {
                                        //move both
                                            p++;
                                            q--;
                                        //continue
                                            continue;
                                    }
                        }
                }





		//¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð
		//¶ÇŠ^€º®e
		return ;

	}
//swap func.(ŸãŒÆ±M¥Îª©¥»)
//ª©¥»¡G1.00(0)
/*
returnType functionName(auguments)
*/
void swapInt(int * a,int * b)
	{
		//«Å§i»P©wžq(Declaration & Definition)
        //mem
            int mem;

		//¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð
        //swap
            //backup a
                mem = *a;
            //assign a with *b
                *a = *b;
            //assign *b with backuped a
                *b = mem;
		//¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð
		//¶ÇŠ^€º®e
		return;
	}

//¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð
//šÏµ{Š¡ŒÈ°±¹BŠæ
//ª©¥»¡G1.00(27)
void pauseProgram()
    {
        //make a line
            printf("\n¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð¡Ð\n");
        /*¶}Ãö
            //€èªk€@¡J°õŠæšt²Î«ü¥O¡]¶ÈWindowsšt²ÎŠ³®Ä¡B»Ý#include <stdlib.h>¡^
                printf("Åã¥Ü¹BŠæµ²ªG¡Aµ{Š¡ŒÈ°±¹BŠæ\n");
                system("pause");
        */
            //€èªk€G¡G¹B¥Î¿é€Jfunction¡]»Ý#include <stdio.h>¡^
                //¥ý²M°£input buffer
                //»Ý¥þ°ì©wžqshort int scanfTriggered = 0;
                    //€èªk€@
                    /*¶}Ãö
                        if (scanfTriggered == 1)
                            {
                                  short int ch;
                                  while ((ch = getchar()) != EOF && ch != '\n');
                            }
                    */
                    //€èªk€G
                    //¶}Ãö
                        if (scanfTriggered == 1)
                            {
                                scanf("%*[^\n]");
                                scanf("%*c");
                            }
                    //
                //¶}Ãö
                //print message
                    printf("Åã¥Ü¹BŠæµ²ªG¡Aµ{Š¡ŒÈ°±¹BŠæ\nœÐ«öEnterÄ~Äò");
                //get char from keyboard
                    fgetc(stdin); //°ÑŒÆstdinªíÁäœL(streamšÓ·œ)¿é€J¡]Š³scanf()ŽN·|µL®Ä¡A¶·²M°£inputbuffer¡^
                  //
    }
