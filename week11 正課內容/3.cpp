<<<<<<< HEAD:week11 甇�隤脣�批捆/3.cpp
#include <stdio.h>
#include <stdlib.h>
int compare(const void*p1,const void*p2)
{///轉成(整數的指標)/望遠鏡，準星看到的整數
    int d1=*( (int*)p1 );
    int d2=*( (int*)p2 );
    if(d1>d2) return 1;
    if(d1==d2) return 0;
    if(d1<d2) return -1;
}
int a[10]={4,8,3,7,5,2,9,1,6,10};
int main()
{
    qsort(a,10,sizeof(int),compare);
    for(int i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
}
=======
3. 隢�閰� qsort() 撠文�嗆�臬����� compare() ��賢��

#include <stdio.h>
#include <stdlib.h>
int compare(const void*p1,const void*p2)
{///頧����(��湔�貊�����璅�)/��������∴��皞���������啁����湔��
    int d1=*( (int*)p1 );
    int d2=*( (int*)p2 );
    if(d1>d2) return 1;
    if(d1==d2) return 0;
    if(d1<d2) return -1;
}
int a[10]={4,8,3,7,5,2,9,1,6,10};
int main()
{
    qsort(a,10,sizeof(int),compare);
    for(int i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
}
>>>>>>> 18f93cf07612ee2c347b20c71cee295b49343788:3.cpp
