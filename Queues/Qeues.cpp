#include <iostream>

//PreProcessor
#define MAXQUEUES 20

// Type Defination
typedef int elementType;

struct QueuesType{
	int Front , Rear; // Store the Value if User Reference Parameter
    elementType element[ MAXQUEUES ];
};
// Data Structure 

void Clear_Start(QueuesType& s){
	
	s.Front = 0;
	s.Rear = -1;
}
// This is Clear_Start Function

void Push(QueuesType& s, elementType elementPush){
   	if (s.Rear == MAXQUEUES-1){
   		std::cout<< "\n\t.Queues OverFlow..." << std::endl;
	}else{
	   	s.Rear++;
	   	s.element[ s.Rear ] = elementPush;
	   }
}
//this is Push Function


elementType Pop(QueuesType& s){
	if (s.Front > s.Rear){
		std::cout<<"\n\tQueues UnderFlow"<<std::endl;
		return -1;
	}else{
	   elementType x = s.element [ s.Front ];
	   s.Front++;
	   return x;
	}
}
// This Pop Function

void Empty(QueuesType& s){
	if (s.Front > s.Rear){
		std::cout<<"\n\tThis Queues is empty."<<std::endl;
	}else{
		std::cout<<"\n\tThis Queues are Store [ " << (s.Rear - s.Front + 1) << " ]"<<std::endl;
	}
}
// Check Queues Have Element or not 

void FullQueues(QueuesType& s){
	if (s.Rear == MAXQUEUES-1){
		std::cout<<"\n\tQueues Full"<<std::endl;
	}else{
		std::cout<<"\n\tQueues Avalible size is [ " << MAXQUEUES - (s.Rear + 1) << " ]" <<std::endl;
	}
}

int main(){
	QueuesType s;
	Clear_Start(s);
	Push(s , 12);
	Push(s,23);
	
	std::cout<<"\t\tElement is : " << Pop(s) << std::endl;
	
	return 0;
	
}
