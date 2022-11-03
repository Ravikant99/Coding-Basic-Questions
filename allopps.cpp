#include<iostream> 
using namespace std; 
 
/* Class : Data Abstraction */ 
class vechile 
{ 
	/* use some private information for ENCAPSULATION */ 
    int a ,b;
	/* access modifiers : public, protected, private */ 
	public: 
		 
		/* Virtual function : Polymorphism */ 
		virtual void speed()  /* Virtual function : late or dynamic binding */ 
		{ 
			cout<<"\nIn speed of vechile\n"; 
		} 
		virtual void maintenance() 
		{ 
			cout<<"\nIn maintenance of vechile\n"; 
		} 
		void price()  /* class function : early or static binding */ 
		{ 
			cout<<"\nIn price of vechile\n"; 
		} 
}; 
 
class four_wheeler : public vechile  /* Inheritance */ 
{ 
	public: 
		void speed()  /* Function Over-Riding */ 
		{ 
			cout<<"\nIn speed of 4-wheeler\n"; 
		} 
		void maintenance() 
		{ 
			cout<<"\nIn maintenance of 4-wheeler\n"; 
		} 
}; 
class two_wheeler : public vechile  /* Inheritance */ 
{ 
	public: 
		void speed() 
		{ 
			cout<<"\nIn speed of 2-wheeler\n"; 
		} 
		void maintenance() 
		{ 
			cout<<"\nIn maintenance of 2-wheeler\n"; 
		} 
		void price() 
		{ 
			cout<<endl<<"In price of 2-wheeler\n"; 
		} 
}; 
class airborne : public vechile  /* Inheritance */ 
{ 
	void speed() 
		{ 
			cout<<"\nIn speed of airborne\n"; 
		} 
}; 
 
int main() 
{ 
	vechile *p1,*p2,*p3,*p4; 
	 
	/* Objects of classes */ 
	vechile v; 
	four_wheeler bmw; 
	two_wheeler yamaha; 
	airborne jumbo; 
	 
	p1=&v; 
	p2=&bmw; 
	p3=&yamaha; 
	p4=&jumbo; 
	 
	/* Early binding cases are mentioned explicitly, else there is late binding */ 
 
	p1->speed(); 
	p1->maintenance(); 
	p1->price(); //early binding 
	 
	p2->speed(); 
	p2->maintenance(); 
 
	p3->speed(); 
	p3->maintenance(); 
	 
	p4->speed(); 
	p4->maintenance(); 
	 
	p2->price();  //early binding 
	p3->price();  //early binding 
	 
	return 0; 
} 
