<<<<<<< HEAD:week11 甇�隤脣�批捆/4.cpp
#include <stdio.h>
#include <stdlib.h> //qsort()
#include <string.h> //strcmp()
char name[2000][80];
char others[80];
int compare( const void *p1, const void *p2 )
{//            轉成「字串的指標」
	char*s1=(char*)p1;
	char*s2=(char*)p2;
	if(strcmp(s1,s2)> 0) return 1;
	if(strcmp(s1,s2)==0) return 0;
	if(strcmp(s1,s2)< 0) return -1;
	//return strcmp(s1,s2);//我們在第一次教的時候，這樣寫
	//return strcmp((char*)p1,(char*)p2);
}
int main()
{
	int N;
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%s", name[i] );
		gets( others );
	}

	qsort( name, N, 80, compare );

	printf("%s ", name[0] );//開頭
	int ans=1;

	for(int i=0; i<N-1; i++){
		if( strcmp( name[i], name[i+1] ) == 0 ){
			ans++;
		}else{
			printf("%d\n", ans );//結尾
			printf("%s ", name[i+1] );//新的開頭
			ans=1;
		}
	}
	printf("%d\n", ans );//結尾
}
=======
4. ���撣急�� week11-4.cpp ���靘�蝯虫��, ���隞�憭抵��閰衣��憿����, ��函毀蝧�璅∪��, ��典�喲��, 鋆�銝�5銵���� compare() ��批捆, 銝血��銝�閮餉圾���

#include <stdio.h>
#include <stdlib.h> //qsort()
#include <string.h> //strcmp()
char name[2000][80];
char others[80];
int compare( const void *p1, const void *p2 )
{//            頧�������摮�銝脩�����璅����
	char*s1=(char*)p1;
	char*s2=(char*)p2;
	if(strcmp(s1,s2)> 0) return 1;
	if(strcmp(s1,s2)==0) return 0;
	if(strcmp(s1,s2)< 0) return -1;
	//return strcmp(s1,s2);//��������函洵銝�甈⊥�����������嚗����璅�撖�
	//return strcmp((char*)p1,(char*)p2);
}
int main()
{
	int N;
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%s", name[i] );
		gets( others );
	}

	qsort( name, N, 80, compare );

	printf("%s ", name[0] );//������
	int ans=1;

	for(int i=0; i<N-1; i++){
		if( strcmp( name[i], name[i+1] ) == 0 ){
			ans++;
		}else{
			printf("%d\n", ans );//蝯�撠�
			printf("%s ", name[i+1] );//��啁��������
			ans=1;
		}
	}
	printf("%d\n", ans );//蝯�撠�
}
>>>>>>> 18f93cf07612ee2c347b20c71cee295b49343788:4.cpp
