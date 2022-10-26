#include <stdio.h>

int main()
 {
     int p;
     char op[2];
double first, second;

  scanf("%d",&p);
  if (p==1)
    {
  printf("Enter an operator (+, -, *, /): \n");
  scanf("%s",&op[0]);
  printf("Enter two operands: \n");
  scanf("%lf %lf", &first, &second);

  switch (op[0]) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
      break;
    // operator doesn't match any case constant
    default:
      printf("Error! operator is not correct");
  }
  }
  else{
    printf("nothing");
  }

  return 0;
}
