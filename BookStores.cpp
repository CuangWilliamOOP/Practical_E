#include "BookStores.h"


void BookStores::sort(Dymocks** store, int n){

	Dymocks** count = new Dymocks*;


	for(int i = 0; i < n; i++){
		for(int j = 0; j < n -1; j++){
			if(store[j] -> get_storeID() > store[j+1] -> get_storeID()){
				*count = store[j];
				store[j] = store[j+1];
				store[j+1] = *count; 
			}
		}
	}


}