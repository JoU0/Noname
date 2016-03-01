#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct t_rec{
 int id;
 char name[16];
 double ave;
 int game;
 struct t_rec *next;
 struct t_rec *prev;
} Student;
Student *head = NULL;
Student *tail = NULL;


void ShowList(){
 Student *p;
 printf("Items in the list\n");
 p = head;
 while(p!= NULL){
  printf("%4d %16s %4.3lf %4d \n",p->id, p->name, p->ave, p->game);
  p = p->next;
 }
 return;
}
void ShowList2(){
 Student *p;
 printf("Items in the list\n");
 p = tail;
 while(p!= NULL){
  printf("%4d %16s %4.3lf %4d \n",p->id, p->name, p->ave, p->game);
  p = p->prev;
 }
 return;
}
Student *TwoAve(char *s){

 double myave=0;
 Student *p;
 p = head;

 if(!strcmp(s,head->name)) myave+= head->ave;


 else while(p != NULL){
  if(!strcmp(p->next->name,s)){                       
   myave += p->next->ave;

 
 myave+= p->ave;
break;
  }  

  p= p->next;
 }


 printf("%4.3lf",myave);

 return NULL;


}

void InsertAfterMax(int n,char *s, double d,int g){

 double maxave = head->ave;

 Student *p, *q;
 p = head;
 printf("%4.3lf",maxave);

 while(p != NULL){
  if(p->ave >= maxave){
   maxave = p ->ave;
   
 
  }
  p= p->next;
 }

 p=head;

 while(p->ave != maxave){
  p= p->next;
 }


  q = (Student *)malloc(sizeof(Student));
  q -> id = p ->id;
  q -> game = p ->game;
  q -> ave =p ->ave;
  strcpy(q-> name, p->name);
  q ->next = p->next ;
 

  
  p -> id = n;
  p -> game = g;
  p -> ave =d;
  strcpy(p-> name, s);
  p ->next = q ;
 
  /*
 while(p->ave != maxave){
  p= p->next;
 }

  q = p->next;
  p->next = (Student *)malloc(sizeof(Student));
  p->next -> id = n;
  p->next -> game = g;
  p->next -> ave =d;
  strcpy(p-> next -> name, s);
  p -> next ->next = q ;
  */
 /*
 while(p!= NULL){
  printf("%4d %16s %4.3lf %4d \n",p->id, p->name, p->ave, p->game);
  p->next->next = p->next;
 }
 return;
 */
}
 

 
void Append(int n, char *s, double d, int g){
 Student *p;

 if(head == NULL) {
  head = (Student *)malloc(sizeof(Student));
  head -> id = n;
  head -> game = g;
  head ->ave =d;
  strcpy(head -> name, s);
  head ->prev = NULL;
  head ->next = NULL;

 }
 else{
  p= head;
  while (p->next != NULL)
  	  p = p->next;
  p->next =(Student *)malloc(sizeof(Student));
  p->next->prev = p;
  p = p->next;
  p ->id = n;
  p ->game = g;
  p ->ave = d;
  strcpy(p->name,s);
  p->next = NULL;
  
 }
 
 tail = p;
 return;
}
main() {
//Student *m;
//char myname[16];
Append(1, "�ִ����ν�Ʈ", 0.986, 8);
Append(4, "�踻��", 0.567, 43);
Append(3, "�����Ϸ�", 0.876, 43);
Append(8, "��׸���", 0.365, 89);
Append(9, "�귻�ٸ�����", 0.789, 43);
Append(6, "Į����Ʈ��", 0.212, 69);
Append(5, "������������", 0.333, 38);
Append(7, "�ø���ƺ���", 0.756, 67);
Append(10, "�����������̺�", 0.555, 54);
ShowList();
/*
gets(myname);

TwoAve(myname);*/

//InsertAfterMax(99, "�Ѷ��", 0.9, 75);

//ShowList2();
//Insert("�踻��", 11, "�߽ż�", 0.333, 55);
//Insert("�����������̺�", 22, "�齺", 0.777, 66);
//ShowList();

//printf("%s %d %lf\n", m->name, m->id, m->ave);
//FreeAll();
//getchar();
}
