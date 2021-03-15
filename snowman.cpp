#include <iostream>
#include "snowman.hpp"
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
#include <array>
using namespace std;

namespace ariel{

    std::string snowman(int x){
        vector<int> number;
        int num1=x;
        int num2=0;
        // magic number 
        const int basee=7;
        const int yy=5;
        const int torsos=6;
        const int cou=8;
        const int numbb=10;
        const int check=44444444;
        const int check2=11111111;
        const int cou2=9;

        int count=1;

        // check if number good 
        if(x<check2 || x > check )
        {
            throw std::out_of_range("Incorrect typing");
        }

        // input number to vextor and check if its good
        while (num1>0 && count<cou2)
        {
            num2=num1%numbb;
            if(num2>4 || num2<1 || count>cou){
                throw std::out_of_range("Incorrect typing");
            }
                num1=num1/numbb;
                count++;
                number.push_back(num2);
            
        }

        // build the snowman
        count=1;
        int x_=0;
        int y_=0;
        // num1=0;
        std::array<string,cou> arr;
        while (!number.empty())
        {
            num1=number.back();
            number.pop_back();
            switch (count)
            {
                case 1:
                    arr[0]=hat(num1);
                    count++;
                    break;
                case 2:
                    arr[1]=nose(num1);
                    count++;
                    break;
                case 3:
                    arr[2]=left(num1);
                    count++;
                    break;
                case 4:
                    arr[3]=right(num1);
                    count++;
                    break;
                case yy:
                    x_=num1;
                    arr[4]=get_x(num1); 
                    count++;
                    break;
                case torsos:
                    y_=num1;
                    arr[yy]=get_y(num1);
                    count++;
                    break;
                case basee:
                    arr[torsos]=torso(num1);
                    count++;
                    break;
                case cou:
                    arr[basee]=base(num1);
                    count++;
                default:
                    break;
            }
        }
        // check up and down arm and return the string
        if(x_ == 2 && y_==2){
            return " "+arr[0]+"\n"+(arr[4]+"("+arr[2]+arr[1]+arr[3]+")"+arr[yy])+"\n"+(" "+arr[torsos]+" ")+"\n"+" "+arr[basee];
        }
        if(x_==2 && y_==3){
            return " "+arr[0]+"\n"+(arr[4]+"("+arr[2]+arr[1]+arr[3]+")"+" ")+"\n"+(" "+arr[torsos]+arr[yy])+"\n"+" "+arr[basee];
        }
         if(x_ == 2 && y_==1){
            return " "+arr[0]+"\n"+(arr[4]+"("+arr[2]+arr[1]+arr[3]+") ")+"\n"+(" "+arr[torsos]+arr[yy])+"\n"+" "+arr[basee];
        }
        if(x_==2 && y_==4){
            return " "+arr[0]+"\n"+(arr[4]+"("+arr[2]+arr[1]+arr[3]+")"+" ")+"\n"+(" "+arr[torsos]+arr[yy])+"\n"+" "+arr[basee];
        }
        if(x_ == 3 && y_==2){
            return " "+arr[0]+"\n"+(" ("+arr[2]+arr[1]+arr[3]+")"+arr[yy])+"\n"+(arr[4]+arr[torsos]+" ")+"\n"+" "+arr[basee];
        }
        if(x_==3 && y_==3){
            return " "+arr[0]+"\n"+(" ("+arr[2]+arr[1]+arr[3]+")"+" ")+"\n"+(arr[4]+arr[torsos]+arr[yy])+"\n"+" "+arr[basee];
        }
         if(x_ == 3 && y_==1){
            return " "+arr[0]+"\n"+(" ("+arr[2]+arr[1]+arr[3]+") ")+"\n"+(arr[4]+arr[torsos]+arr[yy])+"\n"+" "+arr[basee];
        }
        if(x_==3 && y_==4){
            return " "+arr[0]+"\n"+(" ("+arr[2]+arr[1]+arr[3]+")"+" ")+"\n"+(arr[4]+arr[torsos]+arr[yy])+"\n"+" "+arr[basee];
        }
                if(x_ == 2 && y_==2){
            return " "+arr[0]+"\n"+(arr[4]+"("+arr[2]+arr[1]+arr[3]+")"+arr[yy])+"\n"+(" "+arr[torsos]+" ")+"\n"+" "+arr[basee];
        }
        if((x_==1 || x_==4)  && y_==2){
            return " "+arr[0]+"\n"+(" ("+arr[2]+arr[1]+arr[3]+")"+arr[yy])+"\n"+(arr[4]+arr[torsos]+" ")+"\n"+" "+arr[basee];
        }
         if((x_==1 || x_==4) && y_==3){
            return " "+arr[0]+"\n"+(" ("+arr[2]+arr[1]+arr[3]+") ")+"\n"+(arr[4]+arr[torsos]+arr[yy])+"\n"+" "+arr[basee];
        }


        
            return " "+arr[0]+"\n"+(" ("+arr[2]+arr[1]+arr[3]+")"+" ")+"\n"+(arr[4]+arr[torsos]+arr[yy])+"\n"+" "+arr[basee];
    }

    // func that return hat or arm or ......
    std::string hat(int num){ 
        switch (num)
        {
            case 1:
                return "_===_";
            case 2:
                return " ___ \n .....";
            case 3:
                return "  _  \n  /_\\";
            case 4:
                return " ___ \n (_*_)";

            default:
                return "";
        }
    }


    std::string nose(int num){
        switch (num)
        {
            case 1:
                return ",";
            case 2:
                return ".";
            case 3:
                return "_";
            case 4:
                return " ";

            default:
                return "";
        }
    }
    std::string left(int num){
        switch (num)
        {
            case 1:
                return ".";
            case 2:
                return "o";
            case 3:
                return "O";
            case 4:
                return "-";

            default:
                return "";
        }
    }
    std::string right(int num){
        switch (num)
        {
            case 1:
                return ".";
            case 2:
                return "o";
            case 3:
                return "O";
            case 4:
                return "-";

            default:
                return "";
        }
    }
    std::string get_x(int num){
        switch (num)
        {
            case 1:
                return "<";
            case 2:
                return "\\"; 
            case 3:
                return "/";
            case 4:
                return " ";

            default:
                return "";
        }
    }
    std::string get_y(int num){
        switch (num)
        {
            case 1:
                return ">";
            case 2:
                return "/";
            case 3:
                return "\\";
            case 4:
                return " ";

            default:
                return "";
        }
    }
    std::string torso(int num){
        switch (num)
        {
            case 1:
                return "( : )";
            case 2:
                return "(] [)";
            case 3:
                return "(> <)";
            case 4:
                return "(   )";

            default:
                return "";
        }
    }
    std::string base(int num){
        switch (num)
        {
            case 1:
                return "( : )";
            case 2:
                return "(\" \")";
            case 3:
                return "(___)";
            case 4:
                return "(   )";

            default:
                return "";
        }
    }


}

