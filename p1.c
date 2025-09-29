//program to find the sum all the multiples of 3 and 5 that below 1000

int main() {
   int sum=0,i;
    for(i=1;i<1000;i++){
        if(i % 3 == 0 || i % 5 == 0)
        {
            sum = sum+i;
        }
    }
    printf("Sum of multiples of 3 or 5 below 1000 is: %d",sum);
}