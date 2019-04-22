#pragma once
#include"rectangle.h"
#include<conio.h>
#include"triangle.h"
#include"shape.h"
#include"circle.h"
float sumArea (shape &shape1,shape &shape2)
{
	float   s1=shape1.area();
	float s2=shape2.area();
	 float sumArea= s1+s2;
	 return sumArea;
}
int main(){
triangle t1(1.0,9.0, "Red");
circle c1(2, "Blue");
rectangle r1(6,2, "Orange");
cout<<t1.area()<<endl;
cout<<t1.color<<endl;
cout<<c1.area()<<endl;
cout<<r1.area()<<endl;
 cout<<endl;
shape *sptr= &t1;
shape &sref=r1;
cout<< sptr->area()<<endl;
cout<< sptr->color<<endl;
cout<< sref.color<<endl;
cout<< sref.area()<<endl;
cout<<endl;
//excercise 1/////////
//4.5
//Red
//12.56
//12
//
//0
//Red
//Orange
//0
//
///////////////exercise2/////////
//4.5
//Red
//12.56
//12
//
//4.5
//Red
//Orange
//12

////exercise 3(a)////////



shape s1("Purple");
 
cout<<sumArea(t1,c1);
cout<<sumArea(s1,r1);
cout<<sumArea(s1,t1);
 //   sumArea =17.06124.5. . .

///////exercise 3(b)///////////
int count = 5;
	shape **shapearray=new shape*[count];
	int a;
	float b,h;
	string c;
	for(int i=0;i<count;)
	{

		cout << "Press 1 for a triangle, 2 for rectangle and 3 for a circle.   \n";
        cin>>a;
		if(a==1)
		{
			//get base from user as input
              	//get height from user as input
              	//get color from user as input
              	// create new triangle object and add to shapesArray[i]
			  cout<<"enter base : \n";
			  cin>>b;
			  cout<<"enter height: \n";
			  cin>>h;
			  cout<<"enter color : \n";
			  cin>>c;
			  triangle t(b,h,c);
			  shapearray[i]=&t;
			  cout<<"area of tri. is: "<<shapearray[i]->area()<<endl;
			  i++;
		}
		else if(a==2)
		{
			//get length from user as input
              	//get width from user as input
              	//get color from user as input
              	// create new rectangle object and add to shapesArray[i]
              cout<<"enter length : \n";
			  cin>>b;
			  cout<<"enter height: \n";
			  cin>>h;
			  cout<<"enter color : \n";
			  cin>>c;    	

			  rectangle r(b,h,c);
			   shapearray[i]=&r;
			    cout<<"area of rect. is: "<<shapearray[i]->area()<<endl;
			  i++;
		}
		else if(a==3)
		{
			//get radius from user as input
              	// create new circle object and add to shapesArray[i]
                        cout<<"enter radius : \n";
			  cin>>b;     
			   cout<<"enter color : \n";
			  cin>>c; 
			  circle c(b,c);
			   shapearray[i]=&c;
			    cout<<"area of circle is: "<<shapearray[i]->area()<<endl;
			  i++;
		}
		else
		{
			cout<<"invalid input  \n";
		}
	}
	shape *S=new triangle(1.0,9.0,"red");

	delete S;

system("pause");
}



