
//Task 1

/* 

bool isPrime(int num){
    if (num==1){
        return false;
    } else if (num==2){
        return true;
    } else if (i%2==0){
        return true;
    } else {
        for (int i=3;i<=sqrt(num);i=i+2){
            if (num%i==0){
                return false;
            }
        }
    }
    return true;

}
*/

//Task 2

/*

void password(){

    string pass;
    while (true){
    cout<<"enter the password"<<endl;
    cin>>pass;
    if (pass=="hello"){
        cout<<"Correct password"<<endl;
        break;
    } else {
        cout<<"Incorrect, try again"<<endl;
    }
    }
}


*/

//Task 3

/*

void cube_of_the_number(int num){

    for (int i=1;i<=num;i++){
        cout<<"Number is: "<<i<<" and the cube of the number is:"<<pow(i,3)<<endl;
    }
}

*/

//Task 4
/*
void check_if_separated(string my_str){

    for (int i=0;i<my_str.length();i++){
        if (my_str[i]=='e'){
            if (my_str[i+3]=='g'){
                cout<<"separated"<<endl;
            }
        }

        if (my_str[i]=='g'){
            if (my_str[i-3]=='e'){
                cout<<"separated"<<endl;
            }
        }
    }
}
*/

//Task 5

/*

void character_check(string my_str, char c1, char c2){

    int counter1=0;
    int counter2=0;

    for (int i=0;i<my_str.length();i++){
        if (my_str[i]==c1){
            counter1=counter1+1;
        }
        if (my_str[i]==c2){
            counter2=counter2+1;
        }
    }
    if (counter1==counter2){
        cout<<"We have the same occurence of chars"<<endl;
    } else {
        cout<<"We do not have the same occurence of chars"<<endl;
    }

}

*/

//Task 6

/*

bool check_multiple (int num){

if (num%3==0 || num%7==0){
    return true;
} else {
    return false;
}

}

*/

//Task 7

/*
int sum_between_two_numbers (int num1, int num2){

int sum=0;
for (int i=num1;i<=num2;i++){
    sum=sum+i;
}
return sum;

}

*/

//Task 8

/*

bool leap_year(int year){

    if (year%400==0){
        return true;
    } else if (year%400!=0 && year%100==0){
        return false;
    } else if (year%100!=0 && year%4==0){
        return true;
    }
    return false;

}

*/

//Task 9

/*

bool leap_year(int year){

    if (year%400==0){
        return true;
    } else if (year%400!=0 && year%100==0){
        return false;
    } else if (year%100!=0 && year%4==0){
        return true;
    }
    return false;

}


*/

//Task 10

/*

void duplicate_value(int &num){
    num=num*num;

}

*/

//Task 11

/*

void swap_numbers(int &a, int &b){

    int temp;
    temp=a;
    a=b;
    b=temp;

}

*/

//Task 12

/*
void passed_time (int hour1, int minute1, int seconds1, int hour2, int minute2, int seconds2){

    int diff;
    int sum1;
    int sum2;

    int new_hour, new_minutes, new_seconds;

    sum1=hour1*3600+60*minute1+seconds1;
    sum2=hour2*3600+60*minute2+seconds2;

    diff=sum2-sum1;

    new_hour=diff/3600;
    new_minutes=(diff%3600)/60;
    new_seconds=diff&60;

    cout<<"Time passed between is:"<<new_hour<<":"<<new_minutes<<":"<<new_seconds<<endl;


}

*/

//Task 13

/*
    double x,n,sum=0;
    int temp=1;
    cout<<"Enter numbers x and n,respectively :";
    cin>>x;
    cin>>n;
    
    for (int i=1; i<=n;i++){
        if (i%2==0){
            temp=1;
        }
        else{
            temp=-1;
        }
       
        sum+= temp / (x * (x + i));
    }
    
    cout<<"Sum is: "<<sum;

*/

//Task 14

/*
int remove_zeros(int num){

    string convert, convert2;
    int final_no;

    convert=to_string(num);
    for (int i=0;i<convert.length();i++){
        if (convert[i]=='0'){
            continue;
        } else {
            convert2=convert2+convert[i];
        }
    }
    final_no=stoi(convert2);
    return final_no;

}

*/

//Task 15

/*
string change_size_letter(string word){

    for (int i=0;i<word.length();i++){
        if (isupper(word[i])){
            word[i]=tolower(word[i]);
        } else {
            word[i]=toupper(word[i]);
        }
    }
    return word;

}

*/

//Task 16

/*

void string_to_num(int a){
    string converted=to_string(a);

    for (int i=0;i<converted.length();i++){
        switch(converted[i]){
            case '0':
                cout<<"zero";
                break;
            case '1':
                cout<<"one";
                break;
            case '2':
                cout<<"two";
                break;
            case '3':
                cout<<"three";
                break;
            case '4':
                cout<<"four";
                break;
            case '5':
                cout<<"five";
                break;
            case '6':
                cout<<"six";
                break;
            case '7':
                cout<<"seven";
                break;
            case '8':
                cout<<"eight";
                break;
            case '9':
                cout<<"nine";
                break;

        }
    }


}

*/

//Task 17

/*
int count_even_digits(int number){

int digit;
int counter=0;

while (number!=0){
    digit=number%10;
    if (digit%2==0){
        counter=counter+1;
    }
    number=number/10;
}

return counter;


}
*/

//Task 18

/*
int factorial(int num){

    int fact=1;

    for (int i=1;i<=num;i++){
        fact=fact*i;
    }
    return fact;
}

*/

//Task 19

/*
float enter_real_number(){
    float number;
    while (true){
        cout<<"Enter a real number: ";
        cin>>number;
        
        if (isfinite(number)){
            return number;
        }
    }
}


*/