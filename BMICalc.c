#include <stdio.h>

float BMICalc(float weight, float height){
    float result = weight / (height * height);
    return result;
}

float weight;
float height;
void getUserDetails(){

    char name[20];
    int age;

    printf("Enter your name: ");
    scanf(" %s", &name[20]);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your weight in kg: ");
    scanf("%f", &weight);

    printf("Enter your height in m: ");
    scanf("%f", &height);
}

void feedback(){
    float bmi = BMICalc(weight, height);
    if(bmi <=18.4){
            printf("\n");
            printf("BMI: %.2f (Underweight)", bmi);
            printf("\n");
        } else if (bmi >=18.5 && bmi <=24.9){
            printf("\n");
            printf("BMI: %.2f (Normal weight)", bmi);
            printf("\n");
        } else if (bmi >=25.0 && bmi <=39.9){
            printf("\n");
            printf("BMI: %.2f (Overweight)", bmi);
            printf("\n");
        } else if (bmi >=40.0){
            printf("\n");
            printf("BMI: %.2f (Obese)", bmi);
            printf("\n");
        } else {
            printf("Invalid details");
        }
}

int noOfUsers;
int main(){
    printf("Enter the no. of users: ");
    scanf("%d", &noOfUsers);

    for(int i=1; i<=noOfUsers; i++){
        printf("\n----------------------------------\n");
        printf("\n");
        getUserDetails();
        feedback();
    }
    return 0;
}
