#include <iostream>
#include"NODE.h"
#include"LL.h"
using namespace std;
LL::LL(){
       hol=NULL;
       size=0;
}

LL::~LL(){
       int i;
	NODE *t;
	for(i=0;i<size;i++){
		t=hol;
		hol=hol->move_next();
		delete t;
	}
	
}

void LL::show_all(){
     NODE* t=hol;
     int i;
     for(i=0;i<size;i++){
        t->show_node();
	      t=t->move_next();    
     }
}
void LL::add_node(NODE *&A){
          hol->insert(A);
          hol=A;
       size++;
 }

void LL::snap_finger(){
 int kill,i=0,sum=0;
    while(sum<(size/2)){
      int j=0;
      NODE* t=hol;
      kill=rand()%size; //สุ่มฆ่า
      while(kill!=j){
	      t=t->move_next();    
        j++;
      }
      if(t->krand()!=0) sum++;
     }
}