#include<stdio.h>
#include<string.h>

int main()
{
	int flag=0;
	FILE * inp;
	FILE * out;
	char back[21],ch;
	char input[51];
	char output[51];
	scanf("%s",input);getchar();
	scanf("%s",output);getchar();
	inp=fopen(input,"r");
	out=fopen(output,"w");
	while(1)
	{
		fscanf(inp,"%s",back);
		fprintf(out,"%s",back);
		if(fscanf(inp,"%c",&ch)==EOF)
		{
			break;
		}
		fprintf(out,"%c",ch);
	}
	printf("\n\ndone");
	fclose(inp);
	fclose(out);
}
