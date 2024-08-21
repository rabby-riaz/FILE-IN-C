
#include <stdio.h>
#include <string.h>

int main() {

    FILE *file;
    file = fopen("STUDENT INFORMATION.txt","a");
    char name[43];
    int roll,age,num;

    if(file == NULL){
        printf("FILE IS NOT CREATED");
    }
    else{

        printf("FILE CREATED SUCCESFULLY\n");
        printf("HOW MANY STUDNETS INFO YOU WANT TO ADD? : ");
        scanf("%d",&num);
    for(int i =1;i<=num;i++){
        printf("NAME: ");
        scanf("%s",name);
        printf("age: ");
        scanf("%d",&age);
        printf("roll: ");
        scanf("%d",&roll);
        fprintf(file , "\n%s\t\t%d\t%d\n",name,age,roll);
        printf("Successfully added these information");





        }




     }

        return 0;

}
