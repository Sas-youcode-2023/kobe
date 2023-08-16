#include <stdio.h>
#include <stdlib.h>

float grades[20];
float TOTAL;
int Total_Of_Grades;
int i;
int GradePosition=1;
int main() {

    printf("how many grades you have ? (between 1-20) : ");
    scanf("%d",&Total_Of_Grades);

    if(Total_Of_Grades<1 || Total_Of_Grades>20){
        printf("\nYOU CAN ONLY PUT BETWEEN 1 AND 20 GRADES\n\n");
        exit(EXIT_FAILURE);
    } else {
        int helper=Total_Of_Grades;
        for(i=0;Total_Of_Grades>0;i++){
            printf("set your grade number %d : ",GradePosition);
            scanf("%f",&grades[i]);
            TOTAL = TOTAL + grades[i];
            Total_Of_Grades--;
            GradePosition++;
            
        }
    for (i = 0;GradePosition>1; i++)
    {
        printf("grade number %d : %0.2f\n",i+1,grades[i]);
        GradePosition--;
    }
    int last_Position=i;
    float AveraGeGrade=(TOTAL/i);
    printf("\nThe average grade is : %0.2f\n\n",AveraGeGrade);
    
    int MaxCounter=0;
    for (i = 0; last_Position>0; i++)
    {
        if(grades[i]<AveraGeGrade){
            printf("grade number %d : (%0.2f) is low than the average (%0.2f)\n",i+1,grades[i],AveraGeGrade);
        } else if(grades[i]>AveraGeGrade){
            printf("grade number %d : (%0.2f) is higher than the average (%0.2f)\n",i+1,grades[i],AveraGeGrade);
            MaxCounter++;
        }
    last_Position--;
    }
    printf("\nthere is %d grade(s) higher thatn the average .\n\n",MaxCounter);
    float higher_Grade=grades[0];
    int index = 0;
     for(i=1;i < helper;i++){
        if (grades[i]>higher_Grade){
            higher_Grade=grades[i];
            index=i;
           
        }
    }
    printf("the higher grade is : %0.2f ith index number %d\n",higher_Grade,index);
    float lower_Grade=grades[0];
    index=0;
    for(i=1;i < helper;i++){
        if (grades[i]<lower_Grade){
            lower_Grade=grades[i];
            index=i;
            
        }
    }
    printf("the lower grade is : %0.2f with index number %d\n",lower_Grade,index);

    
    
    }

	return 0;
}
