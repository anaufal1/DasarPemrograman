#include <stdio.h>

int main(int argc,char *argv[])
{
	FILE *finp, *fout;
	if (argc<5)
	{
		printf("usage : copybin.exe -i <inputfile> -o <outputfile>\n");
		return 0;
	}
	else if (strcmp(argv[1],"-i")==0&&strcmp(argv[3],"-o")==0)
	{
		finp=fopen(argv[2],"rb");
		fout=fopen(argv[4],"wb");
	}
	else if (strcmp(argv[3],"-i")==0&&strcmp(argv[1],"-o")==0)
	{
		finp=fopen(argv[4],"rb");
		fout=fopen(argv[2],"wb");
	}
	else
	{
		printf("usage : copybin.exe -i <inputfile> -o <outputfile>\n");
		return 0;
	}
	char a;
	while(fread(&a,sizeof(char),1,finp)>0)
	{
		fwrite(&a,sizeof(char),1,fout);
	}
	printf("Data selesai disalin");
	fclose(finp);
	fclose(fout);
}
