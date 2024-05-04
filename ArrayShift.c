#include <stdio.h>

#define N 37

int main()
{
	
	int array1[37] = {0,32,15,19,4,21,2,25,17,34,6,27,13,36,11,30,8,23,10,5,24,16,33,1,20,14,31,9,22,18,29,7,28,12,35,3,26} ;
	
	int array2[37] ;
	
	int a , b , i , j , pos1 , pos2 ,pos3 ,temp ,temp2 , num ,c ,temp3 , dir;
	
	int spin[] = {7 ,7 ,7 ,7 ,8 ,7 ,7 ,7 ,7 ,8 ,7 ,7 ,7 ,7 ,8 } ;
	
	int ball[] = {34 ,31 ,29 ,26 ,24 ,22 ,19, 17 ,14 ,12,10 ,7 ,5 ,2 ,1};
	
	printf(" Array  \n\n") ;
	
	for(i =0 ; i < N ; i++)
	{
		
	    printf(" %d", array1[i]) ;
		
	}
	
	printf("\n") ;
	
	for(j =0 ; j < N ; j++)
	{
		 array2[j] = j ;
		
		printf(" %d", array2[j]) ;
		
		
	}
	printf("\nEnter Last number : ") ;
	scanf("%d\n",&num) ;
	
	printf("\nEnter spin direction\n ") ;
	printf("1 = right , 0 = left : ") ;
 	scanf("%d\n",&dir) ;
	
	for(i=0; i < N ;i++)
	    {
	 	
	 	if(array1[i] == num)
	 	{
	 		
	  printf("\n\n Last number at Index %d " ,i) ;
	 	 
	 	 c = i ;
	 	 
	 	}
	 	
	 	}
	 	
	while(c){
	 	
	{
		temp3 = array1[0];
            
            for(i = 0; i < N - 1; i++)
		
            array1[i] = array1[i + 1];
            
            array1[N - 1] = temp3;
            
      }
            
        c--;
        
        }
        
     printf("\n\n") ;
        
	 for(i=0 ; i < N ; i++)
	 {
	 	
	 	printf(" %d", array1[i]) ;
	 	
	 }
	 
	if(dir)
	
	{
	
	for(b = 0 ; b < 15 ; b++)
	
	{
		
	pos1 = spin[b] ;
	pos2 = ball[b] ;
	
	while(pos1)
    {
        
        {
            temp = array1[N - 1];
            
            for(i = N - 1; i > 0; i--)
            
            array1[i] = array1[i - 1];

            array1[0] = temp;
            
        }
            
            pos1--;
	 }
	 
	 printf("\n\n") ;
	 for(i=0 ; i < N ; i++)
	 {
	 	
	 	printf(" %d", array1[i]) ;
	 	
	 }
		
	 while(pos2)
    {
        
        {
            temp2 = array2[0];
            
            for(i = 0; i < N - 1; i++)
            
            array2[i] = array2[i + 1];
           
            array2[N - 1] = temp2;
            
        }
            
            pos2--;
	 }
	 
	 printf("\n") ;
	
	
	 for(i=0; i < N ;i++){
	 	
	 	if(array2[i] == 0)
	 	{
	 		
	 	 printf("\n\n 0 at Index %d " ,i) ;
	 	 
	 	 a = i  ;
	 	 
	 	}
	 	
	 	pos3 = a ;
	 	
	 	}

	    printf("\n Array1[%d] = %d",a,array1[a]);
	 	
	    
	 	
	 	while(pos3)
        {
        {
            temp = array1[0];
            
            for(i = 0; i < N - 1; i++)
            
            array1[i] = array1[i + 1];
           
            array1[N - 1] = temp;
           
        }
             pos3--;
             
	    }
	 	
	 	printf("\n\n") ;
	    for(i=0 ; i < N ; i++)
	    {
	 	
	 	printf(" %d", array1[i]) ;
	 	
	    }
	    
	    printf("\n");
	    
	    for(j =0 ; j < N ; j++)
	    {
		 array2[j] = j ;
		
		
		
	    }
	    
	    }
	    }
	    
	    else
	    {
	    	
	for(b = 0 ; b < 15 ; b++)
	
	{
		
	pos1 = spin[b] ;
	pos2 = ball[b] ;
	
	while(pos1)
    {
        
        {
            temp = array1[0];
            
            for(i = 0; i < N - 1; i++)
            
            array1[i] = array1[i + 1];
           
            array1[N - 1] = temp;
            
        }
            
            pos1--;
	 }
	 
	 printf("\n\n") ;
	 for(i=0 ; i < N ; i++)
	 {
	 	
	 	printf(" %d", array1[i]) ;
	 	
	 }
		
	 while(pos2)
    {
        
        {
            
            temp2 = array2[N - 1];
            
            for(i = N - 1; i > 0; i--)
            
            array2[i] = array2[i - 1];

            array2[0] = temp2;
            
        }
            
            pos2--;
	 }
	 
	 printf("\n") ;
	 
	
	 for(i=0; i < N ;i++){
	 	
	 	if(array2[i] == 0)
	 	{
	 		
	 	 printf("\n\n 0 at Index %d " ,i) ;
	 	 
	 	 a = i  ;
	 	 
	 	}
	 	
	 	pos3 = a ;
	 	
	 	}

	    printf("\n Array1[%d] = %d",a,array1[a]);
	 	
	    
	 	
	 	while(pos3)
        {
        {
            temp = array1[0];
            
            for(i = 0; i < N - 1; i++)
            
            array1[i] = array1[i + 1];
           
            array1[N - 1] = temp;
           
        }
             pos3--;
             
	    }
	 	
	 	printf("\n\n") ;
	    for(i=0 ; i < N ; i++)
	    {
	 	
	 	printf(" %d", array1[i]) ;
	 	
	    }
	    
	    printf("\n");
	    
	    for(j =0 ; j < N ; j++)
	    {
		 array2[j] = j ;
		
		 
		
	    }
	    
	    }
	    }
	    
	    
	    
	 }
