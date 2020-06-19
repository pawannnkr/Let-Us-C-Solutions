#include <stdio.h>
int main()
{
  int l,w,n,temp;//l=length of paper,w=width of paper,n=type of paper
  l = 1189; w = 841;
  for(n = 0; n <= 8; n++)
  {
    printf("A%d paper has size %d mm X %d mm\n",n,l,w);  
    if(l>w)
    {
    temp = l;
    l = w;
    w = temp/2;
    }
    else
   {
    temp = w;
    w = l;
    l = temp/2;
   }
  }
return 0;
}
