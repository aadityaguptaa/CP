/*The sieve of Eratosthenes is one of the most efficient ways to find all primes smaller than n when n is smaller than 10 million or so*/

/*To find all the prime numbers less than or equal to n, we create a list of n integers

    initialise everything to 1. So basically we are saying that initially, everything is prime number

    Then we run a loop;
    
    here's the code

    */

   int arr[10001];

   //initialising everything with 1 saying all the values from 0 to 10000 are prime
   for(int i = 0; i <= 10000; i++){
       arr[i] = 1;
   }

    //manually saying that 0 and 1 are not prime
   arr[0] = 0;
   arr[1] = 0;

    //we select a prime, lets start with 2, set all the numbers divisible by 2 to non prime;
    //then we select 3 and do the same and continue 
    //the final list obtained will have value 1 only if that number is actually prime;
   void seive(int n){
       for(int i = 2; i <= 1000; i++){
           if(arr[i] == 1){
               for(int j = 2; i*j <= 10000; j++){
                   arr[i*j] = 0;
               }
           }
       }
   }

