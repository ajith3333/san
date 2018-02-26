#include <iostream>

#include <string>

#include <vector>


using namespace std;



void printVtr(vector<char> &vtr)

{

    for (int i=0; i<vtr.size(); i++)

        printf ("%c ", vtr[i]);

    

    printf("\n");

    

    return;

}


void foo(string str, int k, vector<char> &vtr)

{

    if (k == 0)

    {

        printVtr(vtr);

        return;

    }

    

    for (int i=0; i<str.size(); i++)

    {

        vtr.push_back(str.at(i));

        foo(str, k-1, vtr);

        vtr.pop_back();

    }

}


void outputString(string str, int k)

{

    if (str.size() == 0 || k <= 0)

        return;

    

    vector<char> vtr;

    

    

    for (int i=0; i<str.size(); i++)

    {

        vtr.push_back(str.at(i));

        foo(str, k-1, vtr);

        vtr.pop_back();

    }

    

    return;

    

}



int main(int argc, const char * argv[]) {


    outputString("ab", 3);

    return 0;

}

#include <iostream>

#include <string>

#include <vector>


using namespace std;



void printVtr(vector<char> &vtr)

{

    for (int i=0; i<vtr.size(); i++)

        printf ("%c ", vtr[i]);

    

    printf("\n");

    

    return;

}


void foo(string str, int k, vector<char> &vtr)

{

    if (k == 0)

    {

        printVtr(vtr);

        return;

    }

    

    for (int i=0; i<str.size(); i++)

    {

        vtr.push_back(str.at(i));

        foo(str, k-1, vtr);

        vtr.pop_back();

    }

}


void outputString(string str, int k)

{

    if (str.size() == 0 || k <= 0)

        return;

    

    vector<char> vtr;

    

    

    for (int i=0; i<str.size(); i++)

    {

        vtr.push_back(str.at(i));

        foo(str, k-1, vtr);

        vtr.pop_back();

    }

    

    return;

    

}



int main(int argc, const char * argv[]) {


    outputString("ab", 3);

    return 0;

}

#include <iostream>

#include <string>

#include <vector>


using namespace std;



void printVtr(vector<char> &vtr)

{

    for (int i=0; i<vtr.size(); i++)

        printf ("%c ", vtr[i]);

    

    printf("\n");

    

    return;

}


void foo(string str, int k, vector<char> &vtr)

{

    if (k == 0)

    {

        printVtr(vtr);

        return;

    }

    

    for (int i=0; i<str.size(); i++)

    {

        vtr.push_back(str.at(i));

        foo(str, k-1, vtr);

        vtr.pop_back();

    }

}


void outputString(string str, int k)

{

    if (str.size() == 0 || k <= 0)

        return;

    

    vector<char> vtr;

    

    

    for (int i=0; i<str.size(); i++)

    {

        vtr.push_back(str.at(i));

        foo(str, k-1, vtr);

        vtr.pop_back();

    }

    

    return;

    

}



int main(int argc, const char * argv[]) {


    outputString("ab", 3);

    return 0;

}

#include <iostream>

#include <string>

#include <vector>


using namespace std;



void printVtr(vector<char> &vtr)

{

    for (int i=0; i<vtr.size(); i++)

        printf ("%c ", vtr[i]);

    

    printf("\n");

    

    return;

}


void foo(string str, int k, vector<char> &vtr)

{

    if (k == 0)

    {

        printVtr(vtr);

        return;

    }

    

    for (int i=0; i<str.size(); i++)

    {

        vtr.push_back(str.at(i));

        foo(str, k-1, vtr);

        vtr.pop_back();

    }

}


void outputString(string str, int k)

{

    if (str.size() == 0 || k <= 0)

        return;

    

    vector<char> vtr;

    

    

    for (int i=0; i<str.size(); i++)

    {

        vtr.push_back(str.at(i));

        foo(str, k-1, vtr);

        vtr.pop_back();

    }

    

    return;

    

}



int main(int argc, const char * argv[]) {


    outputString("ab", 3);

    return 0;

}

