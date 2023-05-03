#include<stdio.h>
void function(int x) 
{ 
    if(x>=0) 
    {  
        function(--x); 
        printf("%d",x); 
        function(--x); 
    } 
} 
int main() 
{ 
    function(3);
    return 0; 
} 