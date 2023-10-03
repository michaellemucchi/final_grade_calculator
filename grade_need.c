#include <stdio.h>


int main() {

  char WantedGrade;
  double WantedPercent;
  double CurrentGrade;
  double FinalPercent;
  double FinalTestGrade;

  printf("Enter the grade you want in the class: ");
  scanf("%c", &WantedGrade);
  printf("Enter the percent you need to get that grade: ");
  scanf("%lf", &WantedPercent);
  printf("Enter your current percent in the class: ");
  scanf("%lf", &CurrentGrade);
  printf("Enter the weight of the final: ");
  scanf("%lf", &FinalPercent);

  FinalTestGrade = (WantedPercent - ((1 - FinalPercent / 100) * CurrentGrade)) / (FinalPercent / 100);
  printf("You need to get at least %.2f%% on the final to get a %c in the class.\n", FinalTestGrade, WantedGrade);

  return 0;
}
