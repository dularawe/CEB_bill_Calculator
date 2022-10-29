#include <stdio.h>
#include <stdlib.h>

int main()
{
    float point;
    float pointup;
    float days;
    float light;
    float tv;

    printf("\n");
    printf("\n");
    printf("\t\t Domestic E-Bill Calculator V.1.0 \n");
    printf("\t\t ################################\n");
    printf("\t\t     Created By Dulara Pramod \n");
    printf("\t\t ################################\n\n\n");

    printf("01.Enter Number Of Point:- ");
    scanf("%f", &point);
    if(point<=31){
    printf("02.Your Monthly Cost:- %f ",point*8+120);
    printf("\n");
     printf("\n");
     printf("#########################################################\n");
     printf("Thank You For Save Energy  \n");
     printf("#########################################################\n");
     printf("\n");
     printf("\n");
    }
    else if(point<=62){
     printf("02.Your Monthly Cost:- LKR.%.2f \n",pointup=248+(point-31)*10+240);
    printf("\n");
     printf("\n");
     printf("#########################################################\n");
     printf("If you Want Bill < LKR 490.00 , please Follow This Step \n");
     printf("#########################################################\n");
     printf("\n");
     printf("\n");
     days=((25*(point-31))/(24*30))*60;
     printf("01. Reduce  Fan %.2f min per day OR \n",days);
     light=((40*(point-31))/(30*24))*60;
     printf("02. Reduce Light %.2f min per day OR \n",light);
     tv=((17*(point-31))/(30*24))*60;
     printf("03. Reduce TV %.2f min per day \n",tv);
  }
    else if(point<=93){
     printf("02.Your Monthly Cost:- LKR.%.2f \n",pointup=1008+(point-63)*16+360);
     printf("\n");
     printf("\n");
     printf("#########################################################\n");
     printf("If you Want Bill < LKR 790.00 , please Follow This Step \n");
     printf("#########################################################\n");
     printf("\n");
     printf("\n");
     days=((25*(point-63))/(24*30))*60;
     printf("01. Reduce  Fan %.2f min per day OR \n",days);
     light=((40*(point-63))/(30*24))*60;
     printf("02. Reduce Light %.2f min per day  OR \n",light);
     tv=((17*(point-63))/(30*24))*60;
     printf("03. Reduce TV %.2f min per day \n",tv);

    }
      else if(point<=186){
      printf("02.Your Monthly Cost:- LKR.%.2f \n",pointup=1488+(point-93)*50+960);
           printf("\n");
     printf("\n");
     printf("#########################################################\n");
     printf("If you Want Bill < LKR 1848.00 , please Follow This Step \n");
     printf("#########################################################\n");
     printf("\n");
     printf("\n");
     days=((25*(point-93))/(24*30))*60;
     printf("01. Reduce  Fan %.2f min per day OR \n",days);
     light=((40*(point-93))/(30*24))*60;
     printf("02. Reduce Light  %.2f min per day OR \n",light);
     tv=((17*(point-93))/(30*24))*60;
     printf("03. Reduce TV  %.2f min per day \n",tv);
    }
    else if(point<=200){
        printf("02.Your Monthly Cost:- LKR.%.2f \n",pointup=6213+(point-186)*75+1500);
             printf("\n");
     printf("\n");
     printf("#########################################################\n");
     printf("If you Want Bill < LKR 7900.00  \n");
     printf("#########################################################\n");
     printf("\n");
     printf("\n");
     days=((25*(point-186))/(24*30))*60;
     printf("01. Reduce  Fan %.2f min per day OR \n",days);
     light=((40*(point-186))/(30*24))*60;
     printf("02. Reduce Light %.2f min per day OR \n",light);
     tv=((17*(point-186))/(30*24))*60;
     printf("03. Reduce TV %.2f min per day \n",tv);
    }
    printf("\n");
    printf("\n");

    printf("Hey Dear.\n");
    printf("Please Report Any Bugs Or problems:- \n");
    printf("Linkedin: linkedin.com/in/dulara-pramod-072107209/ \n");
    printf("Email: dularapramod88@gmail.com");
    printf("\n");
    printf("\n");
    system("pause");
    return 0;
}
