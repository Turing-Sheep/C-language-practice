#define  _CRT_SECURE_NO_WARNINGS 1
////scanf和printf
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	printf("%d",a);
//	return 0;
//}
// 
// 
// 
////fprintf和fscanf
//struct stu
//{
//	char name[30];
//	int age;
//	float score;
//};
//int main()
//{
//	struct stu s = {"denny",18,95.5f};
//	FILE*pf=fopen("test.txt","w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//	}
//	fprintf(pf,"%s %d %f",s.name,s.age,s.score);
//	fclose(pf);
//	pf = NULL;
//	
//	struct stu a = {0};
//	FILE* pfr = fopen("test.txt","r");
//	if (pfr == NULL)
//	{
//		perror("fopen");
//	}
//	fscanf(pfr,"%s %d %f",a.name,&a.age,&a.score);
//	printf("%s %d %f", a.name, a.age, a.score);
//	fclose(pfr);
//	pfr = NULL;
//	return 0;
//}

//#include<stdio.h>
//struct stu
//{
//	char name[30];
//	int age;
//	float score;
//};
//int main()
//{
//	FILE*fwb=fopen("test.txt","wb");
//	if (fwb == NULL)
//	{
//		perror("fopen");
//	}
//	struct stu s = {"zhangsan",18,90.5f};
//	fwrite(&s,sizeof(struct stu),1,fwb);
//	fclose(fwb);
//	fwb = NULL;
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	FILE*pfw=fopen("test.txt","w");
//	if (pfw == NULL)
//	{
//		perror("fopen");
//	}
//	for (int i = 0; i < 26; i++)
//	{
//		fprintf(pfw,"%c",'a'+i);
//	}
//	fclose(pfw);
//	pfw = NULL;
//
//	FILE* pfr = fopen("test.txt","r");
//	if (pfr == NULL)
//	{
//		perror("fopen");
//	}
//	fseek(pfr,2,SEEK_CUR);
//	char c=fgetc(pfr);
//	printf("%c",c);
//	printf("%c", fgetc(pfr));
//
//	int a = ftell(pfr);
//	printf("\n当前指针相对文件头的偏移量是：%d",a);
//	rewind(pfr);
//	int b = ftell(pfr);
//	printf("\n当前指针相对文件头的偏移量是：%d", b);
//	fclose(pfr);
//	pfr = NULL;
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	FILE*pf=fopen("Test.txt","wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//	}
//	int a = 10000;
//	fwrite(&a,sizeof(int),1,pf);
//	
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	//创建一个文件并写入26个字母
//	FILE*pf=fopen("test.txt","w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//	}
//	for (int i = 0; i < 26; i++)
//	{
//		fputc('a'+i,pf);
//	}
//	fclose(pf);
//	pf = NULL;
//	//读取这个文件中的26个字母
//	FILE* pfr = fopen("test.txt","r");
//	if (pfr == NULL)
//	{
//		perror("fopen");
//	}
//	int a = 0;
//	//读取字母，判断是否到文件尾
//	while ((a = fgetc(pfr)) != EOF)
//	{
//		printf("%c",a);
//	}
//	printf("\n");
//	//判断文件读取结束的原因：出错或者读完
//	if (ferror(pfr))
//	{
//		printf("I/O error when reading\n");
//	}
//	if (feof(pfr))
//	{
//		printf("End of file reached successfully\n");
//	}
//	//关闭文件
//	fclose(pfr);
//	pfr = NULL;
//
//	return 0;
//}

//#include<stdio.h>
//#define MAX_NUM 5
//int main()
//{
//    double arr[MAX_NUM] = { 1.,2.,3.,4.,5. };
//    FILE*pfw = fopen("test.txt","wb");
//    if (pfw == NULL)
//    {
//        perror("fopen");
//    }
//    fwrite(arr,sizeof(double),MAX_NUM,pfw);
//    fclose(pfw);
//
//    double emp[MAX_NUM];
//    FILE* pfr = fopen("test.txt","rb");
//    if (pfr == NULL)
//    {
//        perror("fopen");
//    }
//    size_t read_num = fread(emp,sizeof(double),MAX_NUM,pfr);
//    if (read_num == MAX_NUM)
//    {
//        puts("Array read successfully, contents: ");
//        for (int n = 0; n < MAX_NUM; ++n)
//        {
//            printf("%f ", emp[n]);
//            putchar('\n');
//        }
//    }
//    else 
//    { // error handling
//        if (feof(pfr))
//        {
//            printf("Error reading test.bin: unexpected end of file\n");
//        }   
//        else if (ferror(pfr))
//        {
//            perror("Error reading test.bin");
//        }
//    }
//
//
//    return 0;
//}