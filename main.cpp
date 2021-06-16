#include <iostream>
#include <string>
using namespace std;
string winner;
char x = 'X';
char o = 'O';
int one = 20;
int two = 26;
int three = 32;
int four = 73;
int five = 79;
int six = 85;
int seven = 127;
int eight = 133;
int nine = 139;
bool run = true;
bool checkWin(string board)
{
    // X Rows
    string wintext;
    if(board[one] == x && board[two] == x && board[three] == x) //row 1
    {
        winner = "X";
        wintext = "\n--";
        wintext += x;
        wintext += "--|--";
        wintext += x;
        wintext += "--|--";
        wintext += x;
        wintext +="--\n";
        board.replace(17,18, wintext);
        cout << endl << board <<endl;;
        run = false;
        return true;
    }
    else if (board[four] == x && board[five] == x && board[six] == x)   //row 2
    {
        winner = "X";
        wintext = "--";
        wintext += x;
        wintext += "--|--";
        wintext += x;
        wintext += "--|--";
        wintext += x;
        wintext +="--\n";
        board.replace(71,18, wintext);
        cout << endl << board <<endl;;
        run = false;
        return true;
    }
    else if (board[seven] == x && board[eight] == x && board[nine] == x)  //row 3
    {
        wintext = "--";
        wintext += x;
        wintext += "--|--";
        wintext += x;
        wintext += "--|--";
        wintext += x;
        wintext +="--\n";
        board.replace(125,18, wintext);
        cout << endl << board <<endl;;
        winner = "X";
        run = false;
        return true;
    }
    //X Columns

    else if (board[one] == x && board[four] == x && board[seven] == x) //col 1
    {
        board[2] = '|';
        board[37] = '|';
        board[55] = '|';
        board[91] = '|';
        board[109] = '|';
        board[145] = '|';
        cout << board <<endl;;
        winner = "X";
        run = false;
        return true;
    }
    else if (board[two] == x && board[five] == x && board[eight] == x)  //col 2
    {

        winner = "X";
        board[8] = '|';
        board[43] = '|';
        board[61] = '|';
        board[97] = '|';
        board[115] = '|';
        board[151] = '|';
        cout << board <<endl;;
        run = false;
        return true;
    }
    else if (board[three] == x && board[six] == x&& board[nine] == x)  //col 3
    {
        board[14] = '|';
        board[49] = '|';
        board[67] = '|';
        board[103] = '|';
        board[121] = '|';
        board[157] = '|';
        cout << board <<endl;;
        winner = "X";
        run = false;
        return true;
    }

    /*
        \_   |     |   _/
         2\_ | 26  | _2
        ____\|_____|/____
             |\_ _/|
         73  | _9_ | 85
        _____|/___\|_____
           _/|     |\_
         _27 | 133 | 13_
        /    |     |    \


        */
    //X Diagonal
    else if (board[one] == x && board[five] == x && board[nine] == x) //1 to 9 diagonal
    {
        winner = "X";
        board[0] = '\\';
        board[1] = '_';
        board[21] = '_';
        board[39] = '\\';
        board[59] = '\\';
        board[60] = '_';
        board[80] = '_';
        board[99] = '\\';
        board[119] = '\\';
        board[120] = '_';
        board[140] = '_';
        board[159] = '\\';
        cout << board << endl;
        run = false;
        return true;
    }
    else if (board[three] == x && board[five] == x && board[seven] == x)   //3 to 7 diagonal
    {
        winner = "X";
        board[16] = '/';
        board[15] = '_';
        board[31] = '_';
        board[47] = '/';
        board[63] = '/';
        board[62] = '_';
        board[78] = '_';
        board[95] = '/';
        board[111] = '/';
        board[110] = '_';
        board[126] = '_';
        board[143] = '/';
        cout << board << endl;
        run = false;

        return true;
    }
//int main                 //10       //20      //30       //40      //50       //60      //70       //80       //90     //100      //110     //120      //130     //140     //150      //160      //170
    //012345678901234567 89012345678901234 567890123456789012 345678901234567890 123456789012345678 901234567890123456 789012345678901234 567890123456789012 345678901234567890 1234567890
//                 "     |     |     \n  1  |  2  |  3 \n_____|_____|_____\n     |     |     \n  4  |  5  |  6  \n_____|_____|_____\n     |     |     \n  7  |  8  |  9  \n     |     |     \n";

    //----------------------------------------------------------------------------
    //O Rows
    else if(board[one] == o && board[two] == o && board[three] == o) //row 1
    {

        winner = "O";
        wintext = "\n--";
        wintext += o;
        wintext += "--|--";
        wintext += o;
        wintext += "--|--";
        wintext += o;
        wintext +="--\n";
        board.replace(17,18, wintext);
        cout << board <<endl;;
        run = false;
        return true;
    }
    else if (board[four] == o && board[five] == o && board[six] == o)   //row 2
    {
        winner = "O";
        wintext = "--";
        wintext += o;
        wintext += "--|--";
        wintext += o;
        wintext += "--|--";
        wintext += o;
        wintext +="--\n";
        board.replace(71,18, wintext);
        cout << board <<endl;;
        run = false;
        return true;
    }
    else if (board[seven] == o && board[eight] == o && board[nine] == o)   //row 3
    {
        winner = "O";
        wintext = "--";
        wintext += o;
        wintext += "--|--";
        wintext += o;
        wintext += "--|--";
        wintext += o;
        wintext +="--\n";
        board.replace(125,18, wintext);
        cout << board <<endl;;
        run = false;
        return true;
    }
    //O Columns

    else if (board[one] == o && board[four] == o && board[seven] == o) //col 1
    {
        winner = "O";
        board[2] = '|';
        board[37] = '|';
        board[55] = '|';
        board[91] = '|';
        board[109] = '|';
        board[145] = '|';
        cout << board <<endl;;
        run = false;
        return true;
    }
    else if (board[two] == o&& board[five] == o&& board[eight] == o)  //col 2
    {
        winner = "O";
        board[8] = '|';
        board[43] = '|';
        board[61] = '|';
        board[97] = '|';
        board[115] = '|';
        board[151] = '|';
        cout << board <<endl;;
        run = false;
        return true;
    }
    else if (board[three] == o&& board[six] == o&& board[nine] == o)  //col 3
    {
        winner = "O";
        board[14] = '|';
        board[49] = '|';
        board[67] = '|';
        board[103] = '|';
        board[121] = '|';
        board[157] = '|';
        cout << board <<endl;;
        run = false;
        return true;
    }


    //O Diagonal
    else if (board[one] == o && board[five] == o && board[nine] == o) //1 to 9 diagonal
    {
        winner = "O";
        board[0] = '\\';
        board[1] = '_';
        board[21] = '_';
        board[39] = '\\';
        board[59] = '\\';
        board[60] = '_';
        board[80] = '_';
        board[99] = '\\';
        board[119] = '\\';
        board[120] = '_';
        board[140] = '_';
        board[159] = '\\';
        cout << board << endl;
        run = false;
        return true;
    }
    else if (board[three] == o && board[five] == o && board[seven] == o)   //3 to 7 diagonal
    {
        winner = "O";
        board[16] = '/';
        board[15] = '_';
        board[31] = '_';
        board[47] = '/';
        board[63] = '/';
        board[62] = '_';
        board[78] = '_';
        board[95] = '/';
        board[111] = '/';
        board[110] = '_';
        board[126] = '_';
        board[143] = '/';
        cout << board << endl;
        run = false;

        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    //10       //20      //30       //40      //50       //60      //70       //80       //90     //100      //110     //120      //130     //140     //150     //160     //170
    //012345678901234567 89012345678901234 567890123456789012 345678901234567890 123456789012345678 901234567890123456 789012345678901234 567890123456789012 345678901234567890 1234567890
    string board = "     |     |     \n  1  |  2  |  3 \n_____|_____|_____\n     |     |     \n  4  |  5  |  6  \n_____|_____|_____\n     |     |     \n  7  |  8  |  9  \n     |     |     \n";

    cout << "Enter number corresponding to space" << endl;
    cout << board <<endl;


    //string xmove, ymove;
    //cout <<endl<< board.find("7")<<endl<< board.find("8")<<endl << board.find("9");

    while(run)
    {
        string xmove;
        cout << "X Move: ";
        cin >> xmove;
        cout << endl;
        if(xmove != "1"&&xmove != "2"&&xmove != "3"&&xmove != "4"&&xmove != "5"&&xmove != "6"&&xmove != "7"&&xmove != "8"&&xmove != "9") //check if it's a number
        {
            cout << "Invalid"<<endl;
            continue;

        }
        else if(board.find(xmove) == std::string::npos)
        {
            cout << "Already Taken"<<endl;
            continue;

        }
        else
        {
            board[board.find(xmove)] = x;
        }

        if(checkWin(board))
        {
            cout << winner << " wins!" <<endl;;
            break;

        }
        else
        {
            cout << board <<endl;
        }
        // return board;
        bool yrun = true;
        while(yrun)
        {
            string ymove;
            cout << "O Move: ";
            cin >> ymove;
            cout << endl;

            if(ymove != "1" && ymove != "2"&& ymove != "3"&&ymove != "4"&&ymove != "5"&&ymove != "6"&&ymove != "7"&&ymove != "8"&&ymove != "9")
            {
                cout << "Invalid"<<endl;
                continue;

            }
            else if(board.find(ymove) == std::string::npos)
            {
                cout << "Already Taken"<<endl;
                continue;
            }
            else
            {
                board[board.find(ymove)] = o;
            }
            if(checkWin(board))
            {
                cout << winner << " wins!" <<endl;
                break;
            }
            else
            {
                cout << board<<endl;
            }
            yrun = false;
        }
        //return board;



    }

    return 0;
}
