//#include<iostream>
//
//// Data Structure of Stack [.....]
//#define MAXSTACK 20
//typedef int elementType;
//struct stackType{
//	int top;
//	elementType element[MAXSTACK];
//	// int       NameDataType[size] : size Array
//};
//
//void clearStack(stackType &st){
//	st.top = -1; // Like to starting use Stack in programming 
//	             // Give top = -1 size and Note : Array is start From 0 Index
//}
//void push(stackType &s , elementType x){
//	if (s.top == MAXSTACK-1){
//		std::cout << "\n\tStack Overflow"<<std::endl;
//	}else{
//		s.top++;
//		s.element[s.top] = x;
//	}
//}
//elementType pop(stackType &st){
//	elementType x;
//	if (st.top == -1){
//		std::cout << "Stack Underflow"<<std::endl;
//		return 0;
//	}else{
//		x = st.element[st.top];
//		st.top--;
//		return x;
//	}
//}
//int empty(stackType& s){
//    return (s.top == -1);
//    
//    // in this it mean Return to break end the function .
//}
//int fullstack(stackType &s){
//	return(s.top == MAXSTACK - 1);
//}
//
//
//int main(){
//	stackType s;
//	clearStack(s);
//	push(s , 10);
//	std::cout << "\n\t" << pop(s) << std::endl;
//	return 0;
//}
#include<iostream>
#define MAXSTACK 20

template <typename T>


struct stackType{
	int top = -1; // why not T because top it always store as integers because it like index of arrrays
	T element[ MAXSTACK ];
};
template <typename T>
void push(stackType<T> &s , T value){
	if(s.top == MAXSTACK-1){
		std::cout<<"\n\tStack Overflow"<<std::endl;
		return;
	}
	s.top++;
	s.element[s.top] = value;
}
template <typename T>
T pop(stackType<T> &s){
   if(s.top == -1){
   	std::cout<<"\n\tStack Underflow"<<std::endl;
   } 
   int x = s.element[ s.top ];
   s.top--;
   return x;
}
template <typename T>
int empty(stackType<T>&s){
	return (s.top == -1);
}
template <typename T>
int fullstack(stackType<T>&s){
	return (s.top == MAXSTACK-1);
}
int main(){
	return 0;
}
