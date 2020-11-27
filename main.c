#include <stdio.h>

int main()
{
float l,w,h,gsm,pr,hdr,ex;
double ss,len,pw,pc,ch,pcar,wtb; 

printf("L\n");
scanf("%f",&l);

printf("W\n");
scanf("%f",&w);

printf("H\n");
scanf("%f",&h);

printf("GSM\n");
scanf("%f",&gsm);

printf("Paper Rate\n");
scanf("%f",&pr);

printf("HD Rate\n");
scanf("%f",&hdr);

printf("Extra Cost\n");
scanf("%f",&ex);

ss=(w+h);
//printf("Sheet Size is=%.2lf\n",ss);

len=((l+w)*2+2);
//printf("Length is=%.2lf\n",len);

pw=(ss*len*gsm/1521);
//printf("Paper wt is=%.2lf\n",pw);

pc=(pw*pr/1000)*1.45;
//printf("Paper Cost is=%.2lf\n",pc);

ch=(ss*len*hdr/1521)*1.05;
//printf("Cost of HD is=%.2lf\n",ch);

pcar=pc+ch+ex;
printf("Carton cost is=%.2lf\n",pcar);

wtb=(ss*len*(gsm+100))/1521;
printf("Box Wt is=%.2lf\n",wtb);



return 0;
}
//written by KHUSHAL JAIN (c) ALL RIGHTS RESERVED
