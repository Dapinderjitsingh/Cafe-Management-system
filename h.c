
// #include <stdio.h>
// int main() {
//     int a = , b = 0, c;
//     c = a > b ? a : b > 1 ? b : 0;
//     printf("%d\n", c);
//     return 0;
// }
// #include<stdio.h>
// #include<string.h>
// int main(){
//     struct student {
//         int rollno;
//         char name [50];
//         float marks;

//     };
//     int main(){
//         struct Student s1;
//         s1.rollno=101;
//         strcpy(s1.name,"john doe");
//         s1.marks=85.5;
//         printf("Roll no:%d\n",s1.rollno);
//         printf("name:%s\n",s1.name);
//         printf("marks:%.2f\n",s1.marks);
//     }
//     return 0;
// }
#include<stdio.h>
int main(){
    struct student
    {
        int roll_no;
        char name[80];
        float fees;
        char DOB[80];

    };
    struct student stud[50];
    int n,i;
    printf("\n Enter the number of students:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\n enter the roll_no");
        scanf("%d",stud[i].name);
        printf("\n enter the fees:");
        printf("\n enter the dob:");
        for(i=0;i<n;i++){
            printf("\n roll no. =%d,stud[i].roll_no");
            printf("\n roll no. =%s,stud[i].name");
            printf("\n roll no. =%s,stud[i].fees");
            printf("\n roll no. =%s,stud[i].dob");
        }
    }
}