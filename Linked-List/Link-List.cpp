#include<iostream>

// Data Structure of Singly Link List
template <typename T>
struct pointerType{
	T inforType;
	pointerType<T>* next;
};

// Create Node From Input n
template <typename T>
pointerType<T>* CreateNode(pointerType<T>*pList){
     int n;
     T value;
     pointerType<T>* p, *temp;
     
     // Input n node
     std::cout<<"\n\t Enter Your [ n ] node : "; std::cin>>n;
     
     std::cout<<"\n\t Enter Your Value node [ 1 ] : "; std::cin>>value;
     
     pList = new pointerType<T>();
     pList->inforType = value;
     pList->next = NULL;
     
     p = pList;
     
     // Running LOOP
     for(int i=2; i<=n; i++){
     	temp = new pointerType<T>();
     	std::cout<<"\n\t Enter Your Value node [ "<<i<<" ] : "; std::cin>>value;
     	temp->inforType = value;
     	temp->next = NULL;
     	
     	p->next = temp; 
     	p=temp;
	 }
	 return pList;
}
// Search Sigly Link List
template <typename T>
bool Search(pointerType<T>* pList,T value){
	if(pList == NULL){
	    return false;
	}
	
	while(pList != NULL){
		if(pList->inforType == value){
			return true;
		}
		pList = pList->next;
	}
	return false;
}
// =============================================================
//                      SL Link List
 
// -------- Inert Beggin - Insert End - Insert Postion ---------
// =============================================================
 template <typename T>
 bool InsertBeggin(pointerType<T>*& pList , T value){
 	pointerType<T>* p = new pointerType<T>();
 	p->inforType = value;
 	p->next = pList;
 	
 	pList = p;
 	
 	return true;
 }
 template <typename T>
 bool InsertEnd(pointerType<T>*& pList , T value){
 	pointerType<T>* p , * newNode;
 	
 	// Create a New Node for ( New Node )
 	newNode = new pointerType<T>();
 	newNode->inforType = value;
 	newNode->next = NULL;
 	
 	
 	// Case 1
 	if(pList == NULL){
 		pList = newNode;
 		return true;
	 }
	 
	 
	 // Case 2 and Case 3 Combine
	 p = pList;
	 while(p->next != NULL){
	 	p = p->next;
	 }
	 p->next  = newNode;
	 p = p->next;
	 
	 return true;
 }
 template <typename T>
 bool Insert_Postion(pointerType<T>*& pList , T value , T key){
 	
 	if(pList == NULL){
 		return false;
	 }
     pointerType<T>* newNode , * p , *temp;
     newNode = new pointerType<T>();
	 newNode->inforType = value;
	 newNode->next = NULL;
	 
	 
	 
	 p = pList;
	 
	 while(p->next->inforType == key){
	 	p = p->next;
	 }
	 // Correct
	 temp = p->next;
	 p->next = newNode;
	 p = p->next;
	 p->next = temp;
	 
	 return true;
	  	
 }
// =============================================================
// =============================================================

// Delete Beggin ------------ Delete End ------------ Delete Pos

// =============================================================
// =============================================================

// Delete Beggin
template <typename T>
bool deleteBegin(pointerType<T>*& pList){
     if (pList == NULL){
     	return false;
	 }
	 
	 pointerType<T> * p = pList;
	 
	 p = p->next;
	 pList = p;
	 
	 return true;
}  
// DeleteEnd
template <typename T>
bool deleteEnd(pointerType<T>*& pList){
	
   if(pList == NULL){
   	return false;
   }
   pointerType<T>* p = new pointerType<T>();
   pointerType<T>* temp = new pointerType<T>();
   p = pList;
   temp = p;
   while(p->next->next != NULL){
   	   p = p->next;
   }
   p->next = NULL;
   p = temp;
   pList = p;
   return true;
}
// Delete - position 
template <typename T>
bool deleteKey(pointerType<T>*& pList , int pos){
	
	// Condition NULL
	  if(pList == NULL){
	  	return false;
	  }	
	  
	  // in case 1 if the position is first node 
     pointerType<T>* p = pList;
     if(pos == 1){
     	pList = pList->next;
     	delete p;
     	return true;
	 }
	  pointerType<T>* p1 = NULL;
	  pointerType<T>* p2 = NULL;
	  int count = 1;
	 while(p != NULL){
	    if(count == pos){
	    	p2 = p->next;
	    	delete p;
	    	p1->next = p2;
	    	return true;
		}
		
		p1 = p;
		p = p->next;
		count++;
	 }
	 return false;
	 	 	 
}
// =============================================================
// =============================================================

//                          SIZE

// =============================================================
// =============================================================
template <typename T>
int size(pointerType<T>* pList){
	int count = 0;
	pointerType<T>* p = pList;
	if(pList == NULL){
		return -1;
	}
	while(p != NULL){
		p = p->next;
		count++;
	}
	return count;
}
// =============================================================
// =============================================================

//                          SUM

// =============================================================
// =============================================================
template <typename T>
T Sum(pointerType<T>* pList){
	
	if(pList == NULL){
		return 0;
	}
	
	pointerType<T>* p = pList;
	T sum = 0; 
	while(p != NULL){
		sum += p->inforType;
		p = p->next;
	}
	return sum;
}
// =============================================================
// =============================================================

//                          Sort

// =============================================================
// =============================================================

template <typename T>

void Sort(pointerType<T>*& pList){
	if(pList == NULL){
		std::cout << "\n\t Your List is Empty...";
		return;
	}

	pointerType<T>* p1 = pList;
	pointerType<T>* p2;
	T temp;

	while(p1 != NULL){
		p2 = p1->next;

		while(p2 != NULL){
			if(p1->inforType > p2->inforType){
				temp = p1->inforType;
				p1->inforType = p2->inforType;
				p2->inforType = temp;
			}
			p2 = p2->next;
		}
		p1 = p1->next;
	}
}



// Display
template <typename T>
void display(pointerTypeSLC<T>*& pList) {
    if (pList == NULL) return;

    pointerTypeSLC<T>* temp = pList;

    do {
        std::cout << temp->inforType << " -> ";
        temp = temp->next;
    } while (temp != pList);

    std::cout << "(back to head)\n";
}


int main(){
	pointerTypeSLC<int>* pList = NULL;
	CreateNode(pList);
	display(pList);
	
	
	
//	Sort(pList);
//	print(pList);
//	int x = Sum(pList);
//	std::cout<<"\n\t Size link list is : " << x;
	
//	int key;
//	std::cout<<"\n\t Enter your Key : "; std::cin>>key;
//	
//	deleteKey(pList , key);
//	print(pList);
	
	return 0;
}           
