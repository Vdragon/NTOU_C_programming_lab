#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct playerData
{
       char name[50];
       int experience;
       int life;
       int mana;
       int speed;
       int attack;
};

struct monsterData
{
       char type[50];
       int life;
       int speed;
       int attack;
       int provideExp;
};

void initialPlayer(playerData *p)
{
     printf("請輸入名稱:");
     scanf("%s",p->name);
     /*p->experience=0;
     p->life=rand()%251+350;
     p->mana=rand()%21+100;
     p->speed=rand()%16+35;
     p->attack=rand()%21+40;*/
     FILE *fuck;
        fuck = fopen("D:\\debug\\playerData.dat","r");
        char line[20];
        bool davidx = false;
        while(fgets(line, sizeof(line), fuck)!=NULL)
        {
                          strtok(line,"\r\n");

                    //printf("%s\n",line);
                    if (!strncmp(line, "NAME=", strlen("NAME=") )&&(!(strcmp(line+strlen("NAME="),p->name))))
                    {
                    davidx = true;
                    }
                    if (!strncmp(line, "EXP=", strlen("EXP="))&&davidx==true)
                    {
                    p->experience = atoi(line+strlen("EXP="));
                    }
                    if (!strncmp(line, "LIFE=", strlen("LIFE="))&&davidx==true)
                    {
                    p->life =  atoi(line+strlen("LIFE="));
                    }
                    if (!strncmp(line, "MANA=", strlen("MANA="))&&davidx==true)
                    {
                    p->mana =  atoi(line+strlen("MANA="));
                    }
                    if (!strncmp(line, "SPEED=", strlen("SPEED="))&&davidx==true)
                    {
                    p->speed =  atoi(line+strlen("SPEED="));
                    }
                    if (!strncmp(line, "ATTACK=", strlen("ATTACK="))&&davidx==true)
                    {
                    p->attack =  atoi(line+strlen("ATTACK="));
                    break;
                    }
        }
        fclose(fuck);
}
void initialMonster(monsterData *m)
{
     strcpy((*m).type,"半獸人");
     (*m).life=rand()%21+150;
     (*m).speed=rand()%16+35;
     (*m).attack=rand()%11+20;
     (*m).provideExp=15;
}
void printPlayerData(playerData p)
{
     printf("\n%s\n",p.name);
     printf("體力 %d,速度 %d,攻擊力 %d,經驗值 %d\n\n",p.life,p.speed,p.attack,p.experience);
}

void battle(playerData *p,monsterData *m)
{
     printf("幹~野生的%s出現了!!\n\n",m->type);
     printf("DavidX:%s，就決定是你了!!\n丟出寶貝球!\n",p->name);
     printf("Battle Start!!!\n\n");
     if(p->speed>m->speed)
     while(p->life>0&&m->life>0)
     {
     printf("%s攻擊，造成%s失血 %d 點。\n",p->name,m->type,p->attack);
     m->life = m->life - p->attack;
     if(m->life<=0)
     {
                   printf("\n%s被幹幹幹掉了!!\n%s被姦屍了!!\n",m->type,m->type);
                   printf("%s獲得了經驗值%d\n",p->name,m->provideExp);
                   p->experience = p->experience + m->provideExp;
                   break;
     }
     printf("%s攻擊，造成%s失血 %d 點。\n",m->type,p->name,m->attack);
     p->life = p->life - m->attack;
     if(p->life<=0)
     {
                   printf("\n%s被幹幹幹掉了!!\n%s被姦屍了!!\n",p->name,p->name);
     }
     }
     else if(m->speed>p->speed)
     while(p->life>0&&m->life>0)
     {
     printf("%s攻擊，造成%s失血 %d 點。\n",m->type,p->name,m->attack);
     p->life = p->life - m->attack;
     if(p->life<=0)
     {
                   printf("\n%s被幹幹幹掉了!!\n%s被姦屍了!!\n",p->name,p->name);
                   break;
     }
     printf("%s攻擊，造成%s失血 %d 點。\n",p->name,m->type,p->attack);
     m->life = m->life - p->attack;
     if(m->life<=0)
     {
                   printf("\n%s被幹幹幹掉了!!\n%s被姦屍了!!\n",m->type,m->type);
                   printf("%s獲得了經驗值%d\n",p->name,m->provideExp);
                   p->experience = p->experience + m->provideExp;
     }
     }
     else
     while(p->life>0&&m->life>0)
     {
                                int c=rand()%1;
                                if(c==0)
                                {
                                printf("%s攻擊，造成%s失血 %d 點。\n",p->name,m->type,p->attack);
                                m->life = m->life - p->attack;
                                if(m->life<=0)
     {
                   printf("\n%s被幹幹幹掉了!!\n%s被姦屍了!!\n",m->type,m->type);
                   printf("%s獲得了經驗值%d\n",p->name,m->provideExp);
                   p->experience = p->experience + m->provideExp;
                   break;
     }
                                printf("%s攻擊，造成%s失血 %d 點。\n",m->type,p->name,m->attack);
                                p->life = p->life - m->attack;
                                if(p->life<=0)
     {
                   printf("\n%s被幹幹幹掉了!!\n%s被姦屍了!!\n",p->name,p->name);
     }
                                }
                                if(c==1)
                                {
                                       printf("%s攻擊，造成%s失血 %d 點。\n",m->type,p->name,m->attack);
                                       p->life = p->life - m->attack;
                                       if(p->life<=0)
     {
                   printf("\n%s被幹幹幹掉了!!\n%s被姦屍了!!\n",p->name,p->name);
                   break;
     }
                                       printf("%s攻擊，造成%s失血 %d 點。\n",p->name,m->type,p->attack);
                                       m->life = m->life - p->attack;
                                       if(m->life<=0)
     {
                   printf("\n%s被幹幹幹掉了!!\n%s被姦屍了!!\n",m->type,m->type);
                   printf("%s獲得了經驗值%d\n",p->name,m->provideExp);
                   p->experience = p->experience + m->provideExp;
     }
                                }
     }
}

int main()
{
    srand((signed)time(NULL));
    playerData player;
    const int monsterTotal=10;
    int i;

    initialPlayer(&player);
    monsterData monster[monsterTotal];
    for(i=0;i<monsterTotal; i++)
    initialMonster(&monster[i]);

    for(i=0;i<monsterTotal;i++)
    {
                               printPlayerData(player);
                               battle(&player,&monster[i]);
                               if(player.life<=0)break;
    }
    if(player.life>0)
    printf("\n%s完成姦屍%d隻%s的壯舉了!!\n可喜可賀呀!!\n\nDavidX將其收回寶貝球!!\n\nBattle End\n\n",player.name,monsterTotal,monster[i-1].type);
    else
    printf("\n%s雖然死了，但也姦屍了%d隻%s!!\n有享受到呀!!\n\nDavidX毫不留情地將其與剩下的%s燒毀!!\n\nBattle End\n\n",player.name,i,monster[i].type,monster[i].type);
    system("pause");
    return 0;
}
