
//
//  cat_dog.h
//  LLC1
//
//  Created by 6272 on 22/3/2562 BE.
//  Copyright © 2562 6272. All rights reserved.
//
//#ifndef cat_dog_h
//#define cat_dog_h
#include <iomanip>

class cat:public NODE{
    int size;
public:
  cat(int a,int b):NODE(b){
    size = a;
    cout<<"Construct CAT SIZE -> "<<a<<endl;
  }
  ~cat(){
    cout<<"Destruct CAT SIZE -- "<<size<<endl;
  }
    void show_node(){
        cout<<"Meaw Meaw "<<setw(3)<<size<<" | ";// cout<<NODE::size; CANNOT
        NODE::show_node();
    }

};

class dog:public NODE{
    float height;
public:
    dog(float a,int b):NODE(b){
      height = a;
      cout<<"Construct DOG HEIGHT -> "<<a<<endl;
    }
    ~dog(){
      cout<<"Destruct DOG HEIGHT -- "<<height<<endl;
    }
    void show_node(){
        cout<<"Hong Hong "<<setw(3)<<height<<" | ";
        NODE::show_node();
    }

};



