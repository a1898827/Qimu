int num_count(int array[], int n, int number){
	if( n < 1){
		return 0;
  }
	int count = 0;
	for(int i = 0; i < n; ++i){
		if(array[i] == number){
			count += 1;
		}
	}
	return count;
}
double weighted_average(int array[], int n){
	if(n < 1 ){
		return 0;
	}
	double avg = 0;
	for(int i = 0; i < n; ++i){
		int count;
		count = num_count(array, n, array[i]);
		avg += (double(array[i]) * double(count) / double(n));
	}
	return avg;
}