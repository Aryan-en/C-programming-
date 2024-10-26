#include <stdio.h>  

int myfunc()  
{  
  static int i=0;  
  i++;  
  return i;  
}
// A static variable is known to retain the value even after they exit the scope. 
// Static variables retain their value and are not initialized again in the new scope. 
// The static variable until the end of the program is kept in the memory, 
// whereas a normal variable is destroyed when a function is over. 
// They can be defined inside or outside the function. 
// Static variables are local to the block.
//  The default value of static variables is zero. 
//  The keyword static is used to declare a static variable.
int main()  
{  
printf("Value:%d",myfunc()); 
printf("\nValue:%d",myfunc()); 

    return 0; 
}