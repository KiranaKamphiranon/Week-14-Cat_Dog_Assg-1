#include <iostream>
using namespace std;
#include"NODE.h"

NODE::NODE(int x){
      size=x;
      next=NULL;
      cout<<"adding "<< x<<endl;
}
  NODE:: ~NODE(){
      cout<<"Node "<<size<<" is being deleted"<<endl;
}
NODE* NODE::move_next(){
      return next;
}
void  NODE:: show_node(){
      if(size!=0) cout<<"Node size: "<<size<<endl;
      else cout<<"Node size: DEAD "<<endl;
 }
void NODE::insert(NODE*& x){
     x->next=this;

     }
int NODE::krand(){
  if(size!=0){
    int s = size;
    size=0;
    return s;
  }
  else return size;
}
