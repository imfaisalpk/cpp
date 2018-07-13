#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

#define AUTHOR "MFAISAL"


// int add_numbers(int left_num, int right_num);

// void make_me_young(int* age){
//     cout << "I used to be " << *age << endl;
//     *age-=2;
// }

// void act_age(int& age){
//     age = 35;
// }

class Animal
{
    private:
        int height;
        int weight;
        string name;
    
    public:
        void set_height(int cm){height=cm;}
        void set_weight(int kg){weight=kg;}
        void set_name(string aka){name=aka;}
        int get_height(){return height;}
        int get_weight(){return weight;}
        string get_name(){return name;}
    
    static int animal_count;

    
    Animal();
     
    Animal(int,int,string);

    ~Animal();  

    void setAll(int,int,string);

    void to_string();

    static int get_animal_count(){return animal_count;}

};

int Animal::animal_count =0;

Animal::Animal(){
    animal_count++;
}
Animal::Animal(int height,int weight,string name){
    this -> height = height;
    this -> weight = weight;
    this -> name = name;
}

Animal::~Animal(){
    cout << "Animal " << this -> name << " destroyed" << endl;
}

void Animal::setAll(int height,int weight,string name){
    this -> height = height;
    this -> weight = weight;
    this -> name = name;
}

void Animal::to_string(){
    cout << "Height: "<< this ->height << " Weight: "<<this->weight << " name: "<< this -> name << endl;
}


class Dog:public Animal
{
    private:
        string sound="woof";
    
    public:
        void set_sound(string snd){sound=snd;}
        string get_sound(){return sound;}

    Dog():Animal(){};

    Dog(int,int,string,string);

    void to_string();

};


Dog::Dog(int height, int weight,string name,string bark):
        Animal(height, weight, name){
            this -> sound = bark;
        }

void Dog::to_string(){
    cout << "Height: "<< this ->get_height() << " Weight: "<<this->get_weight() 
            << " name: "<< this -> get_name() << " sound: " << this ->sound <<  endl;

}


int main(int argc, char const *argv[])
{
    Dog spot(45,50,"billah","goofy");
    spot.to_string();

    spot.Animal::to_string();



    // Animal tom(45,50,"tom");
    // tom.to_string();


    // Animal fred;
    // fred.setAll(45,50,"billah");
    // fred.to_string();



    // int age = 20;

    // int& age_ref = age;
    // age_ref++;
    // cout << "before age:" << age << endl;

    // act_age(age_ref);

    // cout << "after age:" << age << endl;


    // int* age_ptr;

    // age_ptr=&age;

    // cout << "before age:" << age << endl;

    // make_me_young(age_ptr);

    // cout << "after age:" << age << endl;


    // int num_array[5]={1,2,3,4,5};
    // int* num_ptr = NULL;

    // num_ptr = num_array;

    // cout << "address: "<< num_ptr << "value: "<< *num_ptr << endl;

    // num_ptr++;
    // cout << "address: "<< num_ptr << "value: "<< *num_ptr << endl;

    // cout << *num_array << endl;


    // int number = 7;

    // int* num_ptr;

    // num_ptr=&number;

    // cout << "address: "<< num_ptr << endl;

    // cout<< "value: "<< *num_ptr << endl;


    // int number=0;
    // float result;

    
    // try
    // {
    //     result=22/number;
    //     cout<<result<<endl;
        
    // }
    // catch(const exception& e)
    // {
    //     cerr << e.what() << '\n';
    // }
    



    //  char letter;
    //  ifstream file_reader("quotes.txt");

    //  if(file_reader){
    //      while(!file_reader.eof()){
    //          file_reader.get(letter);
    //          cout<<letter;
    //      }
    //      cout<<endl;
    //      file_reader.close();

    //  }else{
    //      cout<<"Error opening file."<<endl;
    //      return -1;
    //  }



    // string quote="Make your time productive by making good habits.";

    // ofstream file_writer("quotes.txt",ios::app);

    // if(file_writer){
    //     file_writer<< quote<< endl;
    //     cout << "File has written" << endl;
    //     file_writer.close();
    // }else{
    //     cout<< "Error opening file!"<< endl;
    //     return -1;
    // }

    // cout<<add_numbers(4,3)<<endl;



    // vector <string> str_vector(6);

    // str_vector.push_back("mfaisal");
    // cout<<str_vector.back()<<endl;
    // cout<<str_vector.size() << endl;


    // vector <int> my_first_vector(10);
    // int integer_array[5] = {1,2,3,4,5};

    // my_first_vector.insert(my_first_vector.begin(),integer_array,integer_array+3);

    // my_first_vector.insert(my_first_vector.begin()+5,5);
    

    // cout << my_first_vector.at(5) << endl;

    // my_first_vector.push_back(60);
    // cout << my_first_vector.at(11) << endl;

    // my_first_vector.pop_back();    

    // cout << my_first_vector.back() << endl;

    // my_first_vector.insert(my_first_vector.begin(),44);

    // cout << my_first_vector.front() << endl;

    // cout << (bool)my_first_vector.empty() << endl;

    // cout << "size: " << my_first_vector.size() << endl;

    // cout << my_first_vector << endl;



    // string str_1 = "cat";
    // string str_2 = "dog";

    // cout << str_1.replace(0,str_1.length(),"mfaisal") << endl;
    // cout << str_1.erase(1,str_1.length()) << endl;
    // cout << str_1.insert(str_1.find("a",0),"faisal") << endl;
    // cout << str_1.assign(str_2,0,2) << endl;

    // cout << str_1.compare(str_2) << endl;
    // cout << str_2.compare(str_1) << endl;

    // str_2.assign(str_1);
    // cout << str_2.compare(str_1) << endl;


    // string guess = "";

    // cout<<"Provide your input: " << endl;
    // getline(cin,guess);

    // cout << "Is empty: " << guess.empty() << endl;
    // cout << guess.append(" after append") << endl;
    // cout << sizeof(guess) << endl;



    // char name[8] = {'m','f','a','i','s','a','l','\0'};
    // string name_str = "mfaisal";

    // cout << name_str << endl;
    // cout << name << endl;



    // int num_to_be_guessed =0;
    // string user_input="";

    // do{
    //     cout << "Guess number from1 to 10" << endl;
    //     getline(cin,user_input);
    //     num_to_be_guessed = stoi(user_input);
    //     cout << num_to_be_guessed << endl;

    // }while(num_to_be_guessed!=4);    
    
    // int rand_num = (rand()%100)+1;
    // while(rand_num != 100){
    //     cout << "randome number: "<<rand_num << endl;
    //     rand_num = (rand()%100)+1;
    // }


    // char name[7] = {'m','f','a','i','s','a','l'};

    // char _2darray[7][7] = {
    //     {'m','f','a','i','s','a','l'},
    //     {'m','f','a','i','s','a','l'}
    // };

    // for(int i=0;i<2;i++){
    //     for(int j=0;j<7;j++){
    //         cout<< _2darray[i][j] << " | ";
    //     }
    //     cout << endl;
    // }

    // cout << name[0] << endl;

    // _2darray[0][1]='l';
    // cout << _2darray[0][1] << endl;




    // int test_check_(1);
    // string test_check="mfaisal";
    // test_check = "muhammadfaisal";

    // cout << (test_check_ == 1 ? test_check : "None") << endl;


    // switch(test_check_){
    //     case 1:
    //     cout<<"css topper: " << test_check <<endl;
    //     break;

    //     case 2:
    //     cout << "paec scientist:" << test_check << endl;
    //     break;

    //     default:
    //     cout << "Thanks for trying!!" << endl;
    // }




    // if (test_check == "mfaisal"){
    //     cout<<"css topper: " << test_check <<endl;
    // }else if (test_check=="muhammadfaisal"){
    //     cout << "paec scientist:" << test_check << endl;
    // }else{
    //     cout << "Keep work hard!!" << endl;
    // }



    // unsigned number = 5;
    // cout << sizeof(number) << endl; 
    // cout << "(2+1-3)*2/2 :"<< (2+1-3)*2/2 << endl;
    // cout << (float)4/5 << endl;



    // string str("");

    // cout << "this is str: " << str << "\n";

    // str = "mfaisal";

    // cout << "again this is str: " << AUTHOR << "\n";


    // unsigned left_digits=2, right_digits=3   ;
    // unsigned arth_result=0;
    // arth_result = left_digits + right_digits;

    // unsigned counter(1);

    // cout << "Answer: " << arth_result+counter << "\n";


    // one line comment
    /*two line 
    comments*/
    
    // cout << "Hello Pakistan!\n";
    // cout << "Hello again from the other side of the world!!\n";



    
    return 0;
}


// int add_numbers(int left_num, int right_num=2){
//     return left_num+right_num;
// }