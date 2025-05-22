/*
Given the integer day denoting the day number, print on the screen which day of the week it is. Week starts from Monday and for values greater than 7 or less than 1, print Invalid.

Ensure only the 1st letter of the answer is capitalised.
*/

class Solution {
public:
    void whichWeekDay(int day) {
        switch(day) {
            case 1:
            cout << "Monday";
            break;
            case 2:
            cout << "Tuesday";
            break;
            case 3:
            cout << "Wednesday";
            break;
            case 4:
            cout << "Thursday";
            break;
            case 5:
            cout << "Friday";
            break;
            case 6:
            cout << "Saturday";
            break;
            case 7:
            cout << "Sunday";
            break;
            default:
            cout << "Invalid";
        }
    }
};