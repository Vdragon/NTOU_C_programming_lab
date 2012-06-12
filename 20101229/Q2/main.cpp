#include <stdio.h>
/*#include <conio.h>*/
#include <stdlib.h>

int main()
    {
restart:
        //declare int for input
            unsigned short int inputNum;


        //prompt
            scanf("%hud", &inputNum);
        //xValue array&y
            short int xValue[20] = {0};
            short int yValue[20] = {0};
        //double for storing max length
            double maxLength;
        //int for storing the 2 longest point
            unsigned short int longestPoint[2] = {0};
        //counter for counting data length
            unsigned short int dataLength = 0;
        {//output #1
            //counter for print loop
                unsigned short int printLoopC;
            //print out first first
                printf("(%d,%d)", xValue[0], yValue[0]);
            //for loop to print out other
                for(printLoopC = 1; printLoopC < dataLength; printLoopC++)
                    {
                        printf(",(%d,%d)", xValue[printLoopC], yValue[printLoopC]);
                    }
            //last print a newline
                printf("\n");
        }
        {//output #2

        }
        {//pause

            //prompt
                printf("按q結束程式、r重新開始");
                char pauseChar;
                while((pauseChar = getchar()) != 'q')
                    {
                        //restart
                            if(pauseChar == 'r')
                                {
                                    system("cls");
                                    goto restart;
                                }
                    }

        }
        return 0;
    }
