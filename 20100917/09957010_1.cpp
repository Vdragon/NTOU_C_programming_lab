//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�G�C
//�{���ԭz(Program Description)�G�C
//�{������(Program Version)�G1.00(1)
//�{���ج[����(Program Frame Version)�GA
//�{���ج[�׭q��(Program Frame Revision Number)�G14
//�̷s��s����(Latest Update Log)�G�ץ��󥭥x�C
/*
��L(Other)�G�C
Bug:�L�k�ѨMLinux�U���`Output�A�h�ìO�t�Φr�������e�y���C
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

//--------------�D�n�{���X(Main Code)--------------
//�D��Ƭ[�c
//�����G1.00(5)
//�n�骺�B��qmain��ƶ}�l
	int main(void)
	{
      //�ŧi�P�w�q(Declaration & Definition)
      int scanfTriggered = 0;
//���D
//�����G1.00(3)
      printf("�{���W��(Program Name)�G�C\n");
      printf("�{���ԭz(Program Description)�G\n�C\n");
      printf("�{������(Program Version)�G1.00(1)\n");
      printf("�Т������@��B�@�����������I��������\n�Ϣ����@����������@��Ӣ�Ӣ��Ӣ�\n");
      printf("�СССССССССССССССССССССССССССССССС�\n");

//print
   printf("�@�@�p�p�p�p�p�p�p�p�p�p�p�p�p�p�p�p�p�p�p�p�p�p�p�p�p�p�p�p�p�p�p�@�@\n");
   printf("�@�@�p�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�p�@�@\n");
   printf("�p�p�p�p�p�@�@�@�@�@ :�@�@ `.  .�@:``````:``````: �@�@�@�@�@�p�p�p�p�p\n");
   printf("�p�@�p�@�p�@�@�@�@...:..````````` :  ````:````  : �@�@�@�@�@�p�@�p�@�p\n");
   printf("�p�@�p�p�p�@�@�@�@�@.:�@ .` �@`.. : ``````````` : �@�@�@�@�@�p�p�p�@�p\n");
   printf("�p�@�@�@�@�@�@�@�@ .`:`.` :   : ` :  :```````:  : �@�@�@�@�@�@�@�@�@�p\n");
   printf("�p�@�@�@�@�@�@�@�@.` :     `.`    :  `::``:`:`  :                   �p\n");
   printf("�p                   :    .` `.   : .` :  .`.   :                   �p\n");
   printf("�p                   :  .``   `:` :...::::...::.:                   �p\n");
   printf("�p�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�p\n");
   printf("�p�@�@�@ �@�@`.�@ �@`.�@�@�@�@�@   :````:       .`````.             �p\n");
   printf("�p�@�@�@ �@�@ ` :`````````:        :````:     .` ````` `.           �p\n");
   printf("�p�@�@�@�@�@`..` ````:````  :```:  ``````   ``:`:``:``:`:``         �p\n");
   printf("�p�@�@�@�@�@�@ .`:```:```:  :   : :``````:    :..:.:.:..:           �p\n");
   printf("�p�@�p�p�p�@..:  :```:```:  :   : :......:     .........    �p�p�p  �p\n");   
   printf("�p�@�p�@�p�@  :  ``:```:``  :...: :      :     :.......:    �p  �p  �p\n");  
   printf("�p�p�p�p�p�@  :  .``    `:  `   ` :``````:     :.......:    �p�p�p�p�p\n");  
   printf("�@�@�p�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�p�@�@\n");
   printf("�@�@�p�p�p�p�p�p�p�p�p�p�p�p�p�p�p�p�p�p�p�p�p�p�p�p�p�p�p�p�p�p�p�@�@\n");


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


