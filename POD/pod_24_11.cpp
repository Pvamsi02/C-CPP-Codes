/*
A university conducts a number of programming contests in their programming portal every day. The problems given in the portal are categorized into easy, medium and hard. A student scores 10 points when he solves an easy problem, he gets 30 points when solves a medium level problem and he scores 50 points when he solves a hard problem. The university decides to give a ranking for the students based on their active performance in the contests. Students with the highest score get the first rank, the second highest score gets the second rank and so on. If more than one student, say ‘k’ students get the same score then all get the same rank ‘r’ and the next student or students get ‘r+k’ th rank. For example, when there are six students with the following details:

Name

Number of easy problems solved

Number of medium problems solved

Number of hard problems solved

Student1

12

8

9

Student2

11

8

11

Student3

10

7

10

Student4

13

7

8

Student5

12

8

9

Student6

21

6

7

Total points scored by the students are:

Student1 -  810

Student2  -  900

Student3 - 810

Student4 - 740

Student5 - 810

Student6 - 740

Rank given for the students are as follows:

Student1 - 2

Student2  - 1

Student3 - 2

Student4 - 5

Student5 - 2

Student6 - 5

Given the name of the student, the number of easy problems solved, the number of medium problems solved and the number of hard problems solved write a code to display the rank and the name of the students.

Input Format

The first line contains the number of students, n

Next ‘n’ lines contain the name, the number of easy problems solved, the number of medium problems solved, the number of hard problems solved separated by a space each.

Output Format:

Print rank of student and the name of the student separated by a space arranged in ascending order of rank. When the rank is same for more than one student print in ascending order of name. Print name and rank of one student in one line.

Illustration

For the example described above, input and output should be as follows:

Input

6

Student1 12 8 9

Student2 11 8 11

Student3 10 7 10

Student4 13 7 8

Student5 12 8 9

Student6 21 6 7

Output

1  Student2

2  Student1

2  Student3

2  Student5

5  Student4

5  Student6
*/
#include <iostream>
using namespace std;
class my
{
public:
    char name[30];
    int easy, medium, hard;
    int score;
    int rank;
};
int main()
{
    int n;
    cin >> n;
    my obj[n], temp;
    for (int i = 0; i < n; i++)
    {
        cin >> obj[i].name >> obj[i].easy >> obj[i].medium >> obj[i].hard;
        obj[i].score = (obj[i].easy * 10) + (obj[i].medium * 30) + (obj[i].hard * 50);
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            if (obj[j + 1].score > obj[j].score)
            {
                temp = obj[j + 1];
                obj[j + 1] = obj[j];
                obj[j] = temp;
            }
        }
    int j = 0, c = 0, r;
    for (int i = 0; i < n; i++)
    {
        if (obj[i].score == obj[i - 1].score)
        {
            obj[i].rank = j;
            c++;
        }
        else
        {
            j++;
            obj[i].rank = j + c;
            j = j + c;
            c = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << obj[i].rank << "   " << obj[i].name << endl;
    }
}