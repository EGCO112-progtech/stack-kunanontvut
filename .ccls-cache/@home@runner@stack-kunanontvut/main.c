#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include "node.h"
#include "stack.h"

int main(int argc, char **argv){
  
  int i,n,j,c;
  Stack s;
  s.top = NULL;
  s.size = 0;
  
  for(i=1;i<argc;i++){
    n=0;
    c=0;
    for(j=0;j<strlen(argv[i]);j++){
      
      switch(argv[i][j]){
        case '[' : push(&s,argv[i][j]);break;
        
        case '{' : push(&s,argv[i][j]);break;
        
        case ']' :  if(s.top == NULL){c++;n--;}
                    else if(pop(&s)!='['){
                       n=1;}
                    break;
        
        case '}' : if(s.top == NULL){c++;n--;}
                    else if(pop(&s)!='{')
                          n=1;
                    break;
        
      }
      
      if(n==1)break; 
    }
    
    if(s.size > 0){
      printf("Argc %d Incollect ; too many open parenthesis\n",i);
      pop_all(&s);
      n--;
      }
    if(c > 1)printf("Argc %d Incollect ; too many close parenthesis\n",i);
    if(n==0)printf("Argc %d Collect\n",i);
    if(n==1) printf("Argc %d Incollect ; Missmatch\n",i);
  }
  

 


     


  




   return 0;
}
