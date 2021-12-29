# 第16週

```c
#include <stdio.h>
int a[100];
char s[20];

int main()
{
    printf("請輸入你的名字: ");
    scanf("%s",s);

    printf("你剛剛輸入:%s\n",s);
}
```
```c
#include <stdio.h>
char line[100];

int main()
{
    printf("Please input a line: ");
    scanf("%s", line);

    printf("%s\n",line);
}
```
```c
#include <stdio.h>
char line[300];
int main()
{
    printf("請照著打: -256 0.0000 101010010101010101\n");
    int n;
    float f;
    scanf("%d %f %s", &n, &f, line);

    printf("我們讀到了整數:%d\n", n);
    printf("我們讀到了整數:%f\n", f);
    printf("很長很長的字串:%s\n", line);
}
```
```c
#include <stdio.h>
char line[300]="1010101010010101010010110";
int main()
{
    int ans=0;

    int i=0;
    while(line[i] != '\0'){
        if(line[i]== '1') ans++;

        i++;
    }
    printf("¦³%d­Ó1\n", ans);
}
```
```c
#include <stdio.h>
char line[300]="1010101010010101010010110";
int main()
{
    int ans=0;

    for(int i=0;line[i] != '\0';i++){
    //int i=0;
    //while(line[i] != '\0'){
        if(line[i]== '1') ans++;

        //i++;
    }
    printf("¦³%d­Ó1\n", ans);
}
```
```c
#include <stdio.h>
#include <string.h>
char line[3000];
int main()
{
	scanf("%s",line);
	int n=strlen(line);
	int bad=0;
	for(int i=0;i<n;i++){
		if(line[i]!=line[n-1-i])bad=1;
	}
	if(bad==0)printf("YES");
	else printf("NO");
}
```
