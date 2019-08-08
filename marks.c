#include<stdio.h>
 
 struct studentinfo
 {
 	char name[30];
 	char usn[20];
 	float coa,dm,ds,ld,java,mp;
 }
 main()
 {
 	struct studentinfo s1;
 	printf("\nEnter the name of the student:");
 	scanf("%s",&s1.name)
 	printf("\nEnter the usn of the student:");
 	scanf("%s",&s1.usn);
 	printf("\nEnter the marks of 6 subjects");
 	scanf("%f",&s1.coa);
 	scanf("%f",&s1.dm);
 	scanf("%f",&s1.ds);
 	scanf("%f",&s1.ld);
 	scanf("%f",&s1.java);
 	scanf("%f",&s1.mp);
 	printf("%f\n%f\n%f\n%f\n%f\n%f\n",&s1.coa,&s1.dm,&s1.ds,&s1.ld,&s1.java,&s1.mp);
 }
