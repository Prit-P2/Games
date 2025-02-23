#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int i=0,a,b,c=0;
    char q,w,e,r,t,y,u,o,p;
    
    q='1';
    w='2'; 
    e='3';
    r='4';
    t='5';
    y='6';
    u='7';
    o='8';
    p='9';
    printf("Hello world!");
    for(i=1;i>=0;i++)
    { 
      if(i%2!=0)
      { c=0;
        printf("\nEnter numher to place x ");
        scanf("%d",&a);
        if(q=='o' && a==1)
        {
         printf("don't try to overwrite");
         a=0;
         i=0;
        }
        else if(w=='o' && a==2)
        {
         printf("don't try to overwrite");
         a=0;
         i=0;
        }
        else if(e=='o' && a==3)
        {
         printf("don't try to overwrite");
         a=0;
         i=0;
        }
        else if(r=='o' && a==4)
        {
         printf("don't try to overwrite");
         a=0;
         i=0;
        }
        else if(t=='o' && a==5)
        {
         printf("don't try to overwrite");
         a=0;
         i=0;
        }
        else if(y=='o' && a==6)
        {
         printf("don't try to overwrite");
         a=0;
         i=0;
        }
        else if(u=='o' && a==7)
        {
         printf("don't try to overwrite");
         a=0;
         i=0;
        }
        else if(o=='o' && a==8)
        {
         printf("don't try to overwrite");
         a=0;
         i=0;
        }
        else if(p=='o' && a==9)
        {
         printf("don't try to overwrite");
         a=0;
         i=0;
        }
        else if(q=='x' && a==1)
        {
         printf("don't try to overwrite");
         a=0;
         i=0;
        }
        else if(w=='x' && a==2)
        {
         printf("don't try to overwrite");
         a=0;
         i=0;
        }
        else if(e=='x' && a==3)
        {
         printf("don't try to overwrite");
         a=0;
         i=0;
        }
        else if(r=='x' && a==4)
        {
         printf("don't try to overwrite");
         a=0;
         i=0;
        }
        else if(t=='x' && a==5)
        {
         printf("don't try to overwrite");
         a=0;
         i=0;
        }
        else if(y=='x' && a==6)
        {
         printf("don't try to overwrite");
         a=0;
         i=0;
        }
        else if(u=='x' && a==7)
        {
         printf("don't try to overwrite");
         a=0;
         i=0;
        }
        else if(o=='x' && a==8)
        {
         printf("don't try to overwrite");
         a=0;
         i=0;
        }
        else if(p=='x' && a==9)
        {
         printf("don't try to overwrite");
         a=0;
         i=0;
        }
      }
      else
      { 
        c=0;
        srand(time(0));
        b=rand()%9+1;
        
        
         //  win confirm
        if(q=='o' && w=='o' && e!='x' && e!='o')
        { 
         b=3;
         }else if(r=='o' && t=='o' && y!='x' && y!='o')
        { 
         b=6;
         }else if(u=='o' && o=='o' && p!='x' && p!='o')
        { 
         b=9;
         }else if(q=='o' && e=='o' && w!='x' && w!='o')
        { 
         b=2;
         }else if(r=='o' && y=='o' && t!='x' && t!='o')
        { 
         b=5;
         }else if(u=='o' && p=='o' && o!='x' && o!='o')
        { 
         b=8;
         }else if(w=='o' && e=='o' && q!='x' && q!='o')
        { 
         b=1;
         }else if(t=='o' && y=='o' && r!='x' && r!='o')
        { 
         b=4;
         }else if(o=='o' && p=='o' && u!='x' && u!='o')
        { 
         b=7;
         }else if(q=='o' && r=='o' && u!='x' && u!='o')
        { 
         b=7;
         }else if(w=='o' && t=='o' && o!='x' && o!='o')
        { 
         b=8;
         }else if(e=='o' && y=='o' && p!='x' && p!='o')
        { 
         b=9;
         }else if(q=='o' && u=='o' && r!='x' && r!='o')
        { 
         b=4;
         }else if(w=='o' && o=='o' && t!='x' && t!='o')
        { 
         b=5;
         }else if(e=='o' && p=='o' && y!='x' && y!='o')
        { 
         b=6;
         }else if(r=='o' && u=='o' && q!='x' && q!='o')
        { 
         b=1;
         }else if(t=='o' && o=='o' && w!='x' && w!='o')
        { 
         b=2;
         }else if(y=='o' && p=='o' && e!='x' && e!='o')
        { 
         b=3;
         }else if(q=='o' && t=='o' && p!='x' && p!='o')
        { 
         b=9;
         }else if(u=='o' && t=='o' && e!='x' && e!='o')
        { 
         b=3;
         }else if(q=='o' && p=='o' && t!='x' && t!='o')
        { 
         b=5;
         }else if(u=='o' && e=='o' && t!='x' && t!='o')
        { 
         b=5;
         }else if(t=='o' && p=='o' && q!='x' && q!='o')
        { 
         b=1;
         }else if(t=='o' && e=='o' && u!='x' && u!='o')
        { 
         b=7;
         }
         // placing to not to lose 
        else if(q=='x' && w=='x' && e!='o')
        {
         b=3;
         }
        else if(r=='x' && t=='x' && y!='o')
        {
         b=6;
        }else if(u=='x' && o=='x' && p!='o')
        {
         b=9;
        }else if(q=='x' && e=='x' && w!='o')
        {
         b=2;
        }else if(r=='x' && y=='x' && t!='o')
        {
         b=5;
        }else if(u=='x' && p=='x' && o!='o')
        {
         b=8;
        }else if(w=='x' && e=='x' && q!='o')
        {
         b=1;
        }else if(t=='x' && y=='x' && r!='o')
        {
         b=4;
        }else if(o=='x' && p=='x' && u!='o')
        {
         b=7;
        }else if(q=='x' && r=='x' && u!='o')
        {
         b=7;
        }else if(w=='x' && t=='x' && o!='o')
        {
         b=8;
        }else if(e=='x' && y=='x' && p!='o')
        {
         b=9;
        }else if(q=='x' && u=='x' && r!='o')
        {
         b=4;
        }else if(w=='x' && o=='x' && t!='o')
        {
         b=5;
        }else if(e=='x' && p=='x' && y!='o')
        {
         b=6;
        }else if(r=='x' && u=='x' && q!='o')
        {
         b=1;
        }else if(t=='x' && o=='x' && w!='o')
        {
         b=2;
        }else if(y=='x' && p=='x' && e!='o')
        {
         b=3;
        }
        else if(q=='x' && t=='x' && p!='o')
        {
         b=9;
        }else if(e=='x' && t=='x' && u!='o')
        {
         b=7;
        }else if(q=='x' && p=='x' && t!='o')
        {
         b=5;
        }else if(e=='x' && u=='x' && t!='o')
        {
         b=5;
        }else if(t=='x' && p=='x' && q!='o')
        {
         b=1;
        }
        else if(t=='x' && u=='x' && e!='o')
        {
         b=3;
         // placing to win
        }else if(q=='x' && t!='o' && t!='x')
        {
         b=5;
        }else if(w=='x' && t!='o' && t!='x')
        {
         b=5;
        }else if(e=='x' && t!='o' && t!='x')
        {
         b=5;
        }else if(r=='x' && t!='o' && t!='x')
        {
         b=5;
        }else if(y=='x' && t!='o' && t!='x')
        {
         b=5;
        }else if(u=='x' && t!='o' && t!='x')
        {
         b=5;
        }else if(o=='x' && t!='o' && t!='x')
        {
         b=5;
        }else if(p=='x' && t!='o' && t!='x')
        {
         b=5;
        }else if(t=='x' && q!='o' && q!='x')
        {
         b=1;
        }else if(t=='x' && e!='o' && e!='x')
        {
         b=3;
        }else if(t=='x' && u!='o' && u!='x')
        {
         b=7;
        }else if(t=='x' && p!='o' && p!='x')
        {
         b=9;
        }else if(q=='x' && p=='x' && w!='o')
        {
         b=2;
        }else if(e=='x' && u=='x' && w!='o')
        {
         b=2;
        }else if(q=='x' && p=='x' && r!='o')
        {
         b=4;
        }else if(e=='x' && u=='x' && r!='o')
        {
         b=4;
        }else if(q=='x' && p=='x' && y!='o')
        {
         b=6;
        }else if(e=='x' && u=='x' && y!='o')
        {
         b=6;
        }else if(q=='x' && p=='x' && o!='o')
        {
         b=8;
        }else if(e=='x' && u=='x' && o!='o')
        {
         b=8;
        }
        
        
        
        
        if(q=='x' && b==1)
        {
         
         b=0;
         i=1;
        }
        else if(w=='x' && b==2)
        {
         
         b=0;
         i=1;
        }
        else if(e=='x' && b==3)
        {
         
         b=0;
         i=1;
        }
        else if(r=='x' && b==4)
        {
         
         b=0;
         i=1;
        }
        else if(t=='x' && b==5)
        {
         
         b=0;
         i=1;
        }
        else if(y=='x' && b==6)
        {
         
         b=0;
         i=1;
        }
        else if(u=='x' && b==7)
        {
         
         b=0;
         i=1;
        }
        else if(o=='x' && b==8)
        {
         b=0;
         i=1;
        }
        else if(p=='x' && b==9)
        {
         
         b=0;
         i=1;
        }
         else if(q=='o' && b==1)
        {
         b=0;
         i=1;
        }
        else if(w=='o' && b==2)
        {
         
         b=0;
         i=1;
        }
        else if(e=='o' && b==3)
        {
         
         b=0;
         i=1;
        }
        else if(r=='o' && b==4)
        {
         
         b=0;
         i=1;
        }
        else if(t=='o' && b==5)
        {
         
         b=0;
         i=1;
        }
        else if(y=='o' && b==6)
        {
         
         b=0;
         i=1;
        }
        else if(u=='o' && b==7)
        {
         
         b=0;
         i=1;
        }
        else if(o=='o' && b==8)
        {
         
         b=0;
         i=1;
        }
        else if(p=='o' && b==9)
        {
         
         b=0;
         i=1;
        }
      }
      if(a==1)
      {
        q='x';
        c=1;
      }
      else if(a==2)
      {
        w='x';
        c=1;
      }
      else if(a==3)
      {
       e='x';
       c=1;
      }
      else if(a==4)
      {
       r='x';
       c=1;
      }
      else if(a==5)
      {
       t='x';
       c=1;
      }
      else if(a==6)
      {
       y='x';
       c=1;
      }
      else if(a==7)
      {
       u='x';
       c=1;
      }
      else if(a==8)
      {
       o='x';
       c=1;
      }
      else if(a==9)
      {
       p='x';
       c=1;
      }
      if(b==1)
      {
        q='o';
        c=1;
      }
      else if(b==2)
      {
        w='o';
        c=1;
      }
      else if(b==3)
      {
       e='o';
       c=1;
      }
      else if(b==4)
      {
       r='o';
       c=1;
      }
      else if(b==5)
      {
       t='o';
       c=1;
      }
      else if(b==6)
      {
       y='o';
       c=1;
      }
      else if(b==7)
      {
       u='o';
       c=1;
      }
      else if(b==8)
      {
       o='o';
       c=1;
      }
      else if(b==9)
      {
       p='o';
       c=1;
      }
    if(b>0 || a>0)
      {
      printf("\n%c | %c | %c",q,w,e);
      printf("\n-----------");
      printf("\n%c | %c | %c",r,t,y);
      printf("\n-----------");
      printf("\n%c | %c | %c",u,o,p);
      printf("\n                   ");
      a=0;
      b=0;
      }
  
    
    if(q=='x' && w=='x' && e=='x')
    {
     printf("\nx won");
     break;
    }
    else if(r=='x' && t=='x' && y=='x')
    {
     printf("\nx won");
     break;
    }
    else if(u=='x' && o=='x' && p=='x')
    {
     printf("\nx won");
     break;
    }
    else if(q=='x' && t=='x' && p=='x')
    {
     printf("\nx won");
     break;
    }
    else if(u=='x' && t=='x' && e=='x')
    {
     printf("\nx won");
     break;
    }
    else if(q=='x' && r=='x' && u=='x')
    {
     printf("\nx won");
     break;
    }
    else if(w=='x' && t=='x' && o=='x')
    {
     printf("\nx won");
     break;
    }
    else if(e=='x' && y=='x' && p=='x')
    {
     printf("\nx won");
     break;
     }
    else if(q=='o' && w=='o' && e=='o')
    {
     printf("\no won");
     break;
    }
    else if(r=='o' && t=='o' && y=='o')
    {
     printf("\no won");
     break;
    }
    else if(u=='o' && o=='o' && p=='o')
    {
     printf("\no won");
     break;
    }
    else if(q=='o' && t=='o' && p=='o')
    {
     printf("\no won");
     break;
    }
    else if(u=='o' && t=='o' && e=='o')
    {
     printf("\no won");
     break;
    }
    else if(q=='o' && r=='o' && u=='o')
    {
     printf("\no won");
     break;
    }
    else if(w=='o' && t=='o' && o=='o')
    {
     printf("\no won");
     break;
    }
    else if(e=='o' && y=='o' && p=='o')
    {
     printf("\no won");
     break;
    }else if(q>'a' && w>'a' && e>'a' && r>'a' && t>'a' && y>'a' && u>'a' && o>'a' && p>'a')
    {
     printf("\n No one Won ");
     break;
    }
    
    }
    return 0;
}