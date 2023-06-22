#include <iostream>
#include <string>

using namespace std;

class Species
{
public:
    Species();

    float SetHealth(float health);
    float GetHealth();

    void SetName(string name);
    string GetName();

    void CalculateDamage(float damage);

protected:
    string Name;
    float Health;

private:
};

class Human : public Species
{
public:
    Human();
};

class Goblin : public Species
{
public:
    Goblin();
};

int main()
{
    Species species;
    Human human;
    Goblin goblin;

    float InputDamage;
    int PlayerInput;

    cout << "A Species has found" << endl;
    cout << "Enter number: 1 = Human, 2 = Goblin" << endl;
    cin >> PlayerInput;

        switch (PlayerInput)
        {
        case 1:
            do
            {
                //species.SetName("Human");
                cout << "Enter Damage: ";
                cin >> InputDamage;

                human.CalculateDamage(InputDamage);

            }   while (human.GetHealth() > 0.f);

            break;
            
        case 2:
            do
            {
                //species.SetName("Goblin");
                cout << "Enter Damage: ";
                cin >> InputDamage;

                goblin.CalculateDamage(InputDamage);
                
            } while (goblin.GetHealth() > 0.f);

            break;

        default:
            cout << "No such thing exist" << endl;
            break;
        }
    
}

Species::Species()
{
        /** THIS IS GITHUB SEMIPROTOTYPE*/
}

float Species::SetHealth(float health)
{
    return Health = health;
}

float Species::GetHealth()
{
    return Health;
}

void Species::SetName(string name)
{
    Name = name;
}

string Species::GetName()
{
    return Name;
}

void Species::CalculateDamage(float damage)
{
    float Total;

    Total = Health - damage;

    if (Total <= 0.f)
    {
        cout << GetName() << " Has Died" << endl;
        SetHealth(0);
    }
    else
    {
        Health -= damage;
    }

    cout << GetName() << " Current Health is " << GetHealth()<<endl;
}

Human::Human()
{
    Name = "Human";
    Health = 100.f;
}

Goblin::Goblin()
{
    Name = "Goblin";
    Health = 200.f;
}
