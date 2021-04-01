#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//二进制的形式写到文件中
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	int ch = fgetc(stdin);
//	fputc(ch, stdout);
//
//	return 0;
//
//}

//void main(void)
//{
//	char strptr1[] = "This is a test of fputc!!\n";
//	char strptr2[] = "This is a test of _fputchar!!\n";
//	char *p;
//
//	/* Print line to stream using fputc. */
//	p = strptr1;
//	while ((*p != '\0') && fputc(*(p++), stdout) != EOF);
//
//	/* Print line to stream using _fputchar. */
//	p = strptr2;
//	while ((*p != '\0') && _fputchar(*(p++)) != EOF)
//		;
//}





//void main(void)
//{
//	FILE *stream;
//	char buffer[81];
//	int  i = 0;
//    char ch;
//
//	/* Open file to read line from: */
//	stream = fopen("fgetc.txt", "w");
//	fputs("Read in first 80 characters and place them in ",stream);
//
//	/* Read in first 80 characters and place them in "buffer": */
//	ch = fgetc(stream);
//	for (i = 0; (i < 80) && (feof(stream) == 0); i++)
//	{
//		buffer[i] = (char)ch;
//		ch = fgetc(stream);
//	}
//
//	/* Add null to end string */
//	buffer[i] = '\0';
//	printf("%s\n", buffer);
//	fclose(stream);
//}

//int main()
//{
//	FILE * pFile;
//	pFile = fopen("my.txt", "r+");
//	char line[20];
//	if (pFile != NULL)
//	{
//		fputs("12312313", pFile);
//		
//	} 
//	
//	fclose(pFile);
//	pFile = NULL;
//	pFile = fopen("my.txt", "r");
//	printf("%s\n", fgets(line, 20, pFile));
//	fclose(pFile);
//	pFile = NULL;
//	return 0;
//}

//int main()
//{
//	FILE * pFile;
//	pFile = fopen("myfile.txt", "r");
//	char line[20];
//	if (pFile != NULL)
//	{
//		printf("%s\n", fgets(line, 20, pFile));
//		fclose(pFile);
//	}
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("ile.txt", "r");
//	/*if (pf == NULL);
//	return 0;*/
//	rewind(pf);
//	int ch = fgetc(pf);
//	printf("%d\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//
//}

//
//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//int main()
//{
//	struct S s = {"zhangsan", 20, 55.6};
//	struct S tmp;
//	FILE* pf = fopen("text.txt", "wb");
//	//fwrite(&s, sizeof(struct S), 1, pf);
//	//fread(&tmp, sizeof(struct S), 1, pf);
//	//printf("%s %d %lf\n", tmp.name, tmp.age, tmp.score);
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//void main(void)
//{
//	FILE *stream;
//	char *p, buffer[] = "This is the line of output\n";
//	int  ch;
//
//	ch = 0;
//	/* Make standard out the stream and write to it. */
//	stream = stdout;
//	for (p = buffer; (ch != EOF) && (*p != '\0'); p++)
//		ch = putc(*p, stdout);
//}


//Output
//
//This is the line of output

//void main(void)
//{
//	char buffer[81];
//	int i, ch;
//
//	printf("Enter a line: ");
//
//	/* Read in single line from "stdin": */
//	for (i = 0; (i < 80) && ((ch = getchar()) != EOF)
//		&& (ch != '\n'); i++)
//		buffer[i] = (char)ch;
//
//	/* Terminate string with null character: */
//	buffer[i] = '\0';
//	printf("%s\n", buffer);
//}
//
//#include <stdio.h>
//#include <conio.h>
//
//void main(void)
//{
//	int integer;
//	char string[81];
//
//	/* Read each word as a string. */
//	printf("Enter a sentence of four words with scanf: ");
//	for (integer = 0; integer < 4; integer++)
//	{
//		scanf("%s", string);
//		printf("%s\n", string);
//	}
//
//	/* You must flush the input buffer before using gets. */
//	fflush(stdin);
//	printf("Enter the same sentence with gets: ");
//	gets(string);
//	printf("%s\n", string);
//}


typedef struct 
{
	char name[20];
	int age;
	double score;
}S;

int main()
{
	S ss= { "张三", 25, 99 };
	printf("%s %d %lf\n", ss.name);

	return 0;
}