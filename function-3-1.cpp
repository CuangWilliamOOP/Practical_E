int count_negatives(int *vals,int len){
	int count = 0;
	for(int i = 0; i < len; i++){
		if(vals[i] < 0){
			count += 1;
		}

	}
	
return count;


}
int* collate_negatives(int *vals,int len, int num_negative){
	int * array = new int[num_negative];

	for(int i = 0; i < len; i++){
		if(vals[i] < 0){
			array[i] = vals[i];
		}
	}
	return array;
}