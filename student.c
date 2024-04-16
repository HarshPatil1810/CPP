#include<stdio.h>

struct student{
	int studRoll;
	long studPhone;
	char studName[50];
	char studDOB[30];
};



void main(){
	
	struct student stud1={2201, 893456, "XYZ", "22/09/2004" };
	
	printf("Info of Student %s \n", stud1.studName);
	printf("Student Roll number: %d \n", stud1.studRoll);
	printf("Student Phone number: %ld \n ", stud1.studPhone);
	printf("Student name: %s", stud1.studName);
	printf("Student DOB: %s", stud1.studDOB);
	
	
	struct student stud2={2202, 756432, "PQR", "08/12/2004"};
	printf("\n\nInfo of Student %s \n", stud2.studName);
	printf("Student Roll number: %d \n", stud2.studRoll);
	printf("Student Phone number: %ld \n ", stud2.studPhone);
	printf("Student name: %s", stud2.studName);
	printf("Student DOB: %s", stud2.studDOB);
	
}
