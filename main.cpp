#include <iostream>

using namespace std;
#include "ll.h"

int main(int argc, char **argv){
	    LL l;
 		
		for(int i=1; i<argc; i+=2) {
			l.insert_node(argv[i+1],atoi(argv[i]));
      }
	 	l.print_all();

}  //This automatically calls destructor