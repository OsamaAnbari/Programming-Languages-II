// You have to find the sum of digits of a number given that the number is always greater than 0. Which of the following base cases can replace the base case for the below code?

int recursive_sum_of_digits(int n){
 if(n == 0)
 return 0;
 return n % 10 + recursive_sum_of_digits(n/10);
}
void main(){
 int n = 1201;
 int ans = recursive_sum_of_digits(n);
 printf("%d",ans);
}

/*
Outputs:

4
Solution : D. if(n == 0) return 0
*/
