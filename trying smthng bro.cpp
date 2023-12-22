#include <iostream>
#include <iomanip>

int main(){
	    int asc = 35;
	    std::cout<<std::setfill('.');
	    
	    std::cout<<std::right<<std::setw(asc)<<"*"<<std::left<<std::setw(asc)<<"*"<<std::endl;
	    
	    std::cout<<std::right<<std::setw(asc)<<"***"<<std::left<<std::setw(asc)<<"***"<<std::endl;
	    
	    std::cout<<std::right<<std::setw(asc)<<"*****"<<std::left<<std::setw(asc)<<"*****"<<std::endl;
	    
	      std::cout<<std::right<<std::setw(asc)<<"*******"<<std::left<<std::setw(asc)<<"*******"<<std::endl;
	      	        std::cout<<std::right<<std::setw(asc)<<"*********"<<std::left<<std::setw(asc)<<"*********"<<std::endl;
	                  std::cout<<std::right<<std::setw(asc)<<"***********"<<std::left<<std::setw(asc)<<"***********"<<std::endl;
	                  
	   std::cout<<std::right<<std::setw(asc)<<"*************"<<std::left<<std::setw(asc)<<"*************"<<std::endl; 
	  
	    std::cout<<std::right<<std::setw(asc)<<"***************"<<std::left<<std::setw(asc)<<"***************"<<std::endl;   
	    
	      for(int i = 1; i < 35; i++){
	    	        std::cout<<std::setfill('.');
	    	        std::cout<<std::right<<std::setw(asc)<<"***************"<<std::left<<std::setw(asc)<<"***************"<<std::endl;	            	             
              }
       std::cout<<"\nThis is a giant pencil.\nCreated by David Tamaratare Oghenebrume."<<std::endl;
}