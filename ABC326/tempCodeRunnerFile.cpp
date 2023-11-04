    cin >> n;
    while(true){
        if((n%10) == ((n/100) % 10) *  ((n/10) % 10)){
            cout << n << endl;
            return 0;
        }
        else{
            n++;
        }
    }
}