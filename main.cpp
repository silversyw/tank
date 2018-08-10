#include<iostream>
#include<cstring>
using namespace std;
class Country
{
    private:
    char name[40];
    char capital[40];
    int population;
    public:
    Country()
    {
        strcpy(name,"NULL");
        strcpy(capital,"NONE");
        population=0;
    }
    Country(char n[],char c[],int p)
    {
        strcpy(name,n);
        strcpy(capital,c);
        population=p;
    }
    string GetName()
    {
        return name;
    }
    string GetCapital()
    {
        return capital;
    }
    int GetPopulation()
    {
        return population;
    }
    void Set(char n[],char c[],int p)
    {
        strcpy(name,n);
        strcpy(capital,c);
        population=p;
    }
};

int main()

{

    Country c1,c2("�й�","����",1400000000);

    cout<<"Country1:"<<c1.GetName()<<"-"<<c1.GetCapital()<<"-"<<c1.GetPopulation()<<endl;

    cout<<"Country2:"<<c2.GetName()<<"-"<<c2.GetCapital()<<"-"<<c2.GetPopulation()<<endl;

    c1.Set("����","��ʢ��",319000000);

    c2.Set("����˹","Ī˹��",143000000);

    cout<<"Country3:"<<c1.GetName()<<"-"<<c1.GetCapital()<<"-"<<c1.GetPopulation()<<endl;

    cout<<"Country4:"<<c2.GetName()<<"-"<<c2.GetCapital()<<"-"<<c2.GetPopulation()<<endl;

    c1.Set("�ձ�","����",126910000);

    c2.Set("�¹�","����",80800000);

    cout<<"Country5:"<<c1.GetName()<<"-"<<c1.GetCapital()<<"-"<<c1.GetPopulation()<<endl;

    cout<<"Country6:"<<c2.GetName()<<"-"<<c2.GetCapital()<<"-"<<c2.GetPopulation()<<endl;

    return 0;

}
