#include<stdio.h>

int main(){
  int a,b,c,d,e;
  char ready;

  printf("_____________________________________________________\n\n");
  printf("                    G.K. QUIZ                          \n");
  printf("_____________________________________________________\n\n");
  printf("~This is a simple quiz game consists of 5 multiple choice questions on G.K.\n~You will get 1 mark for each correct answer.\n~There is no negative marking.\n~Your total score will be displayed at end.\n\n");

  printf(" Ready ?\n Press Enter");
  scanf("%c",&ready);

  printf("\nQuestion:1\n");
  printf("How many moons does Earth have?\n1.) One\n2.) Two\n3.) Three\n4.) Four\n\nYour choice: ");
  scanf("%d",&a);

  if(a==1){
    a=1;
  }
  else{
    a=0;
  }

  printf("\nQuestion:2\n");
  printf("Which planet in our solar system is known as the 'Blue Planet'?\n1.) Mars\n2.) Jupiter\n3.) Venus\n4.) Earth\n\nYour choice: ");
  scanf("%d",&b);

  if(b==4){
    b=1;
  }
  else{
    b=0;
  }

  printf("\nQuestion:3\n");
  printf("Which gas is most popular as laughing gas?\n1.) Nitrogen\n2.) Sulphorous oxide\n3.) Nitrous oxide\n4.) Sulphur dioxide\n\nYour choice: ");
  scanf("%d",&c);

  if(c==3){
    c=1;
  }
  else{
    c=0;
  }

  printf("\nQuestion:4\n");
  printf("Which was the first satellite of India sent to space?\n1.) SROSS-2\n2.) Aryabhatta\n3.) Chandrayaan\n4.) Cartosat-3\n\nYour choice: ");
  scanf("%d",&d);

  if(d==2){
    d=1;
  }
  else{
    d=0;
  }

  printf("\nQuestion:5 (The Toughest)\n");
  printf("Which one is heavier 1kg SUGAR or 1kg COTTON?\n1.) SUGAR\n2.) COTTON\n3.) ANYTHING ELSE\n\nYour choice: ");
  scanf("%d",&e);

  if(e==3){
    e=1;
  }
  else{
    e=0;
  }
  printf("\nYour Total Score is %d out of 5.",a+b+c+d+e);

  return 0;
}