#include"stdio.h"
main()
{
	FILE *fp;
	char path[50];
	int n=5;
	int a[]={  1,  4,  5,  6,  2};
	printf("\nNhap duong dan: ");
	fflush(stdin);
	gets(path);
	fp=fopen(path,"wt");
	if(fp==NULL)
	{
		printf("\nLoi mo file");
		
	}
	else
	{
		fprintf(fp,"%d\n",n);
		for(int i=0;i<n;i++)
		{
			fprintf(fp,"%2d",a[i]);
		}
		fclose(fp);
	}
}
