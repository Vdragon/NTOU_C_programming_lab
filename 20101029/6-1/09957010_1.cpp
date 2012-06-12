//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�GC Programming Practice 6-1 [Basic] Random Permutation �C
//�{���ԭz(Program Description)�GRandom permutation is commonly used to start a new game.Write a program to create a random permutation of the sequence 0 ~ N-1 in the arrayand use it to shuffle poker cards.�C
//�{������(Program Version)�G1.00(2)
//�{���ج[����(Program Frame Version)�GA
//�{���ج[�׭q��(Program Frame Revision Number)�G14
//�̷s��s����(Latest Update Log)�G�ܼƾ\Ū�ʼW�T�C
/*
��L(Other)�G�C
*/
//��s����(Change Log)�G�C
//--------------�`�N�ƶ�--------------
/*
��.�C�@�yStatement�᭱�����y;�z
��.�O�oReturn 0;
*/
//--------------�{���X�}�l(Code Started)--------------
//--------------�e�m�B�z���ﶵ(Preprocessor Code)--------------
//standard input/output library
//�����G1.00(0)
	#include <stdio.h> //for printf(), scanf(), fgetc()

//C Standard General Utilities Library
//�����G1.00(0)
	#include <stdlib.h>
	/*
	for SYSTEM("pause") if working
	�DWindows�t�νT�w����ϥΡ]�]���L�Өt�Ϋ��O�^
	*/

    #include <time.h>

    #define allCards 52
//--------------�D�n�{���X(Main Code)--------------

//�D��Ƭ[�c
//�����G1.00(5)
//�n�骺�B��qmain��ƶ}�l
	int main(void)
	{
      //�ŧi�P�w�q(Declaration & Definition)
int scanfTriggered = 0, counterCard,count1, memRand, mem1;

            //card
            int card[allCards];
            char suitSymbol[4] = {'\x05','\x04','\x03','\x06'};
            char cardSymbol[allCards];
            const char * Rank[13] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q","K", "A"};
            /*�r��D�ܶq�A�H�`�Ʃw�q���G
					���char *�I�᪺�t�q�O�G���ڭӦr�Ŧ�A�ڭn�ק復�C
					�Ӳz�פW�A�ڭ̶ǵ���ƪ��r���`�q�O�S�k�Q�ק諸�C
					�ҥH���A����M�z����k�O��Ѽ������קאּconst char *�C
					�o���������I�᪺�t�q�O�G���ڭӦr�Ŧ�A�ڥu�nŪ�����C
             */
//���D
//�����G1.00(3)
      printf("�{���W��(Program Name)�GC Programming Practice 6-1 [Basic] Random Permutation �C");
      printf("�{���ԭz(Program Description)�G\nRandom permutation is commonly used to start a new game.Write a program to create a random permutation of the sequence 0 ~ N-1 in the arrayand use it to shuffle poker cards.�C\n");
      printf("�{������(Program Version)�G1.00(0)\n");
      printf("�Т������@��B�@�����������I��������\n�Ϣ����@����������@��Ӣ�Ӣ��Ӣ�\n");
      printf("�СССССССССССССССССССССССССССССССС�\n");

//rand Init
    srand((unsigned)time(NULL));

//assign
for(counterCard = 0;counterCard < allCards;counterCard++)//iEnd = 52
    {
    card[counterCard] = counterCard;
    //test
    //printf("%d\t", counterCard);
    }

//swap
    //printf("%d", card[rand() % counterCard]);
while(counterCard > 1)//iInit = 52
    {
        //backup
        memRand = rand() % counterCard;
            //test
            //printf("%d",counterCard);
		  //counterCard should be 51
		  mem1 = card[counterCard - 1];
            //change
            card[counterCard - 1] = card[memRand];
            card[memRand] = mem1;
        counterCard--;
    }
/*
        //test
            for(counterCard = 0;counterCard < allCards;counterCard++)
                {
                //test
                printf("%d\t", card[counterCard]);
                }


*/
//find color
    for (counterCard = 0; counterCard < allCards; counterCard++)
    {
        cardSymbol[counterCard] = suitSymbol[card[counterCard] / 13];
        //test
        //    printf("%c", cardSymbol[counterCard]);
    }

//output

counterCard = 0;

for(count1 = 0;count1 < 4;count1++)
{
    	printf("Player%d : ", count1 + 1);
    	for(; counterCard < 13 * (count1 + 1); counterCard++)
            {
                    printf("%c%s ", cardSymbol[counterCard], Rank[(card[counterCard] + 1) % 13]);
                    //test
                    //printf("%s", Rank[(card[counterCard] + 1)% 13]);

            }
        printf("\n");

}
















//�СССССССССССССССССССССССССССССССССССССССС�
//�ϵ{���Ȱ��B��
//�����G1.00(14)
	//��k�@�J����t�Ϋ��O�]�����t�Φ��ġB��#include <stdlib.h>�^
      //printf("\n�СССССССССССССССССССССССССССССССС�\n��ܹB�浲�G�A�{���Ȱ��B��\n");
		//system("pause");
	//��k�G�G�B�ο�Jfunction�]��#include <stdio.h>�^
      printf("\n�СССССССССССССССССССССССССССССССС�\n��ܹB�浲�G�A�{���Ȱ��B��\n�Ы�Enter�~��");
		//���M��imput buffer
         //��k�@
         /*
            int ch;
            while ((ch = getchar()) != EOF && ch != '\n');
         */
         //��k�G
         //�ݥ���w�qint scanfTriggered = 0;

         if (scanfTriggered ==1)
         {
			scanf("%*[^\n]");
            scanf("%*c");
		 }


		fgetc(stdin); //�Ѽ�stdin����L(stream�ӷ�)��J�]��scanf()�N�|�L�ġA���M��inputbuffer�^






		//�Ǧ^�Ʀr���]��{���B�榨�\�^
		//�����G1.00(1)
		//return�᭱���i�[���ѡI
			return 0;
	}
