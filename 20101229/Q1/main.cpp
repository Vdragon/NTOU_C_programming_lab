#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main()
    {
restart:
        //prompt array to put value
            double inputValue[50];
        //prompt n
            short int inputNumber;
            scanf("%hd", &inputNumber);
        {//assign
            //declare a counter for for loop
                unsigned short int forLoopC;
            //for n times read value
                for(forLoopC = 0; forLoopC < inputNumber; forLoopC++)
                    {
                        scanf("%lf", &inputValue[forLoopC]);
                    }
        }
        {//output max, min
            //declare maxCurrent = first num
                double maxCurrent = inputValue[0];
            //declare minCurrent = first num
                double minCurrent = inputValue[0];
            //declare counter for forLoop
                unsigned short int forLoopC;
            //for loop read & compare
                for(forLoopC = 1; forLoopC < inputNumber; forLoopC++)
                    {
                        //if greater then maxcurrent
                            if(inputValue[forLoopC] > maxCurrent)
                                {
                                    //assign it
                                        maxCurrent = inputValue[forLoopC];
                                }
                        //if greater then mincurrent
                            if(inputValue[forLoopC] < minCurrent)
                                {
                                    //assign it
                                        minCurrent = inputValue[forLoopC];
                                }
                    }
            //output
                printf("程%.2lf\n", maxCurrent);
                printf("程%.2lf\n", minCurrent);

        }
        {//output average
            //declare sum
                double sum = 0;
            //declare counter for forLoop
                unsigned short int forLoopC;
            //for loop add
                for(forLoopC = 0; forLoopC < inputNumber; forLoopC++)
                    {
                        //add to sum
                            sum = sum + inputValue[forLoopC];
                    }
            //output
                printf("キА计%.2lf\n", sum / inputNumber);
        }
        {//output渤计
            //declare int array for known number initial with 0
                double knownNum[50];
            //declare array for knownNumberCount default -1
                short int knownNumC[50];
                    {//assign
                        //counter for initial for loop
                            unsigned short int initLoopC;
                        //for loop to init
                            for(initLoopC = 0; initLoopC < 50; initLoopC++)
                                {
                                    knownNumC[initLoopC] = -1;
                                }
                    }
            //read knwon from array
                {
                    //declare counter for forLoop
                        unsigned short int forLoopC;
                    //for loop find known
                        for(forLoopC = 0; forLoopC < inputNumber; forLoopC++)
                            {
                                //counter for reading known number
                                    unsigned short int readLoopC;
                                //bool for found known num
                                    bool foundKnown = false;
                                //read known loop
                                    for(readLoopC = 0; knownNumC[readLoopC] != -1; readLoopC++)
                                        {
                                            //if found known
                                                if(knownNum[readLoopC] == inputValue[forLoopC])
                                                    {
                                                        knownNumC[readLoopC]++;
                                                        foundKnown = true;
                                                    }
                                        }
                                //if don't found
                                    if(foundKnown == false)
                                        {
                                            //assign
                                                knownNum[readLoopC] = inputValue[forLoopC];
                                            //change counter
                                                knownNumC[readLoopC] = 1;
                                        }
                            }

                }
            //find the max known
                //declare maxCount
                    unsigned short int maxCount = 0;
                {
                    //declare counter for for loop
                        unsigned short int readLoopC;
                    //for loop for finding the max count
                        for(readLoopC = 0; knownNumC[readLoopC] != -1; readLoopC++)
                            {
                                //if found greater count
                                    if(maxCount < knownNumC[readLoopC])
                                        {
                                            //assign it
                                                maxCount = knownNumC[readLoopC];
                                        }
                            }
                }
            {//output
                printf("渤计");
                //print the number if max Count equals
                    //declare counter for read count loop
                        unsigned short int readLoopC;
                    //for loop for read count
                        for(readLoopC = 0; knownNumC[readLoopC] != -1; readLoopC++)
                            {
                                //if count same
                                    if(maxCount == knownNumC[readLoopC])
                                        {
                                            //print numKnown & tab
                                                printf("%.2lf\t", knownNum[readLoopC]);
                                        }
                            }
                //last print new line
                    printf("\n");
            }
        }

        {//

            //pause
                printf("q挡祘Αr穝秨﹍");
                char pauseChar;
                while((pauseChar = getch()) != 'q')
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
