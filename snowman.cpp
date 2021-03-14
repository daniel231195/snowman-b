#include <iostream>
#include "snowman.hpp"
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
using namespace std;

namespace ariel{

    std::string snowman(int x){
        vector<int> number;
        const seven=7;
        const six=6;
        const five=5;
        const eight=8;
        const ten=10;
        const tesh=9;
        const one=11111111;
        const four=44444444;
        int num1=x;
        int num2=0;
        int count=1;
        if(x<11111111 || x > 44444444 )
        {
            throw std::out_of_range("canot");
        }
        while (num1>0 && count<9)
        {
            num2=num1%10;
            if(num2>4 || num2<1 || count>8){
                throw std::out_of_range("canot");
            }
                num1=num1/10;
                count++;
                number.push_back(num2);
            
        }
        count=1;
        // num1=0;
        string arr[8];
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
                case 5:
                    arr[4]=get_x(num1);
                    count++;
                    break;
                case 6:
                    arr[5]=get_y(num1);
                    count++;
                    break;
                case 7:
                    arr[6]=torso(num1);
                    count++;
                    break;
                case 8:
                    arr[7]=base(num1);
                    count++;
                default:
                    break;
            }
        }
        return " "+arr[0]+"\n"+(arr[4]+"("+arr[2]+arr[1]+arr[3]+")"+arr[5])+"\n"+(arr[4]+arr[6]+arr[5])+"\n"+" "+arr[7];
    }


    std::string hat(int num){
        switch (num)
        {
            case 1:
                return "_===_";
            case 2:
                return "___ \n....";
            case 3:
                return "  _  \n  /_\\";
            case 4:
                return " ___ \n(_*_)";

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
                return "\\"; //92
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
                return "(" ")";
            case 3:
                return "(___)";
            case 4:
                return "(   )";

            default:
                return "";
        }
    }


}

