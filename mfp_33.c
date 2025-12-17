#include<stdio.h>
#include<windows.h>
void save();
void draw();
int count=0,t;
int main()
{
        printf("\t-------------------------\n");
        printf("\t|----存取钱程序菜单-----|\n");
        printf("\t|t1：存钱\t\t|\n");
        printf("\t|t2：取钱\t\t|\n");
        printf("\t|t0：退出\t\t|\n");
        printf("\t-------------------------\n");
        printf("您的总余额为：%d\n",count);
        while(1)
        {
            printf("请输入您的选项：");
            scanf("%d",&t);
            switch(t)
           {
               case 1:save();break;
               case 2:draw();break;
               case 0:printf("退出\n");return 0;
               default:printf("输入错误请重新输入\n");break;
           }
        }
    return 0;
}
void save(int)
{
    int n2=0,n22=0,mo_1;
    printf("请放入存放金额：");
    scanf("%d",&mo_1);
    if(mo_1%100==0)
    {
        count+=mo_1;
        printf("您的总余额为：%d\n",count);
    }
    else
    {
        printf("输入错误，请输入正确金额\n");
        n2++;
        if(n2=3)
        {
            Sleep(3000);
            n2=0;
        }
        save(mo_1);
    }
    printf("请输入下一步,\n");
    return;
}
void draw(int)
{
    int mo_2,n3=0,n33=0;
    printf("请输入取钱金额：\n");
    scanf("%d",&mo_2);
    if(mo_2%100==0&&count>=mo_2)
    {
        count-=mo_2;
        printf("您的总余额为：%d\n",count);
    }
    else
    {
        printf("输入错误，请重新输入正确金额\n");
        n3++;
        if(n3=3)
        {
            Sleep(3000);
            n3=0;
        }
        draw(mo_2);
    }
    printf("请输入下一步,\n");
    return;
}
