#include <stdio.h>
 struct student
{
int age;
char name[20];
float total_marks;
};
  int main(void) {
struct student std;
  printf("Enter the name of the student\n");
  scanf("%s",std.name);
  printf("Enter the age of the student\n");
  scanf("%d",&std.age);
  printf("Enter the total marks of the student\n");
  scanf("%f",&std.total_marks);
  printf("The name of the student is %s\n",std.name);
  printf("The age of the student is %d\n",std.age);
  printf("The total marks of the student is %f\n",std.total_marks);
   return 0;
}