 #include <iostream>  
 #include <cstdlib>
 
 using namespace std;
 
 int main()  
 {  
    int Arr1[5] = {9,8,7,6,5};  
    int Arr2[5] = {0,1,2,3,4};  
 	int* Ptr1 = Arr1;  //Ptr1指向陣列Arr1的起始位址 
    int* Ptr2 = Arr2;  //Ptr2指向陣列Arr2的起始位址 
    int i = 0;  
       int* &refArr1 = Ptr1; //宣告指標參考refArr1指向Ptr1   
   	   int* &refArr2 = Ptr2;  //宣告指標參考refArr2指向Ptr2 
            
	for(i=0;i<5;i++)  
       cout<<"Arr1["<<i<<"]="<<*(refArr1 + i)<<'\t'<<"Arr2["<<i<<"]="<<*(refArr2+i)<<endl;  
    //以指標參考列印陣列Arr1與Arr2的元素
    
    refArr1=refArr2;//利用指標參考refArr1指向另一指標參考refArr2
    cout<<"refArr1=refArr2運算後....................."<<endl;
    for(i=0;i<5;i++)
    cout<<"*(refArr1+"<<i<<")="<<*(refArr1 + i)<<endl;
    
  system("pause");
  return 0;
}
