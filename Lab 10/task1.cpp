#include <iostream>
#include <string>

using namespace std;

class CharacterActions
{
public:
    virtual void attack() = 0;
    virtual bool defend() = 0;
    virtual void useSpecialAbility() = 0;
    virtual void displayStats() = 0;
};

class BaseCharacter : public CharacterActions
{
protected:
    string name;
    int health;
    int mana;

public:
    BaseCharacter(string s, int h)
    {
        name = s;
        health = h;
        mana = 0;
    }

    virtual void attack() = 0;
    virtual bool defend() = 0;
    virtual void useSpecialAbility() = 0;

    string getName()
    {
        return name;
    }

    int getMana()
    {
        return mana;
    }

    void displayStats()
    {
        cout << "Name: " << name << endl;
        cout << "Current Health: " << health << endl;
        cout << "Current Mana: " << mana << endl;
    }

    bool isAlive() 
    { 
        return health >= 0; 
    }

    void takeDamage(int damage)
    {
        cout << name << " takes " << damage << " damage! ";
        health -= damage;
        cout << "Health now: " << health << endl;
    }

    void restoreMana(int amount) 
    { 
        mana += amount; 
    }

    void resetMana() 
    { 
        mana = 0; 
    }
};

class Warrior : public BaseCharacter
{
private:
    string special;
    int power;
    int s_power;

public:
    Warrior() : BaseCharacter("Warrior", 100), special("Berserk Rage"), power(25), s_power(35) {}

    void attack()
    {
        cout << name << " attacks with power " << power << "!" << endl;
        restoreMana(50);
    }

    bool defend()
    {
        cout << name << " defends! Attack is blocked." << endl;
            return true;

    }

    void useSpecialAbility()
    {
        if (mana >= 100)
        {
            cout << name << " uses Berserk Rage with power " << s_power << "!" << endl;
            resetMana();
        }
        else
        {
            cout << name << "Not enough mana!" << endl;
        }
    }
};

class Mage : public BaseCharacter
{
private:
    string special;
    int power;
    int s_power;

public:
    Mage() : BaseCharacter("Mage", 120), special("Arcane blast"), power(25), s_power(35) {}

    void attack()
    {
        cout << name << " attacks with power " << power << "!" << endl;
        restoreMana(50);
    }

    bool defend()
    {
        cout << name << " defends! Attack is blocked." << endl;
        return true;
    }

    void useSpecialAbility()
    {
        if (mana >= 100)
        {
            cout << name << " uses Arcane Blast with power " << s_power << "!" << endl;
            resetMana();
        }
        else
        {
            cout << name << "Not enough mana!" << endl;
        }
    }
};

class Archer : public BaseCharacter
{
private:
    string special;
    int power;
    int s_power;

public:
    Archer() : BaseCharacter("Archer", 90), special("Fire Arrow"), power(20), s_power(35) {}

    void attack()
    {
        cout << name << " attacks with power " << power << "!" << endl;
        restoreMana(50);
    }

    bool defend()
    {
        cout << name << " defends! Attack is blockeed" << endl;
        return true;
    }

    void useSpecialAbility()
    {
        if (mana >= 100)
        {
            cout << name << " uses Fire Arrow with power " << s_power << "!" << endl;
            resetMana();
        }
        else
        {
            cout << name << "Not enough mana!" << endl;
        }
    }
};

class BossEnemy : public BaseCharacter
{
private:
    int power;

public:
    BossEnemy() : BaseCharacter("BossEnemy", 150), power(30) {}

    bool isAlive() const { return health > 0; }

    void takeDamage(int damage)
    {
        cout << "Boss takes " << damage << " damage! ";
        health -= damage;
        cout << "Health now: " << health << endl;
    }

    void attack(BaseCharacter &character)
    {
        cout << "Boss attacks " << character.getName() << " with power " << power << "!" << endl;
        character.takeDamage(power);
    }

    void displayStats() const
    {
        cout << "Boss - Health: " << health << endl;
    }

    bool defend() { return false; }
    void useSpecialAbility() {}
    void attack() {}
};

class GameEngine
{
public:
    void startGame()
    {
        Warrior warrior;
        Mage mage;
        Archer archer;
        BossEnemy boss;

        cout<<endl;
        cout << "Game begins! Players vs. Boss"<<endl;
        while (boss.isAlive() && (warrior.isAlive() && mage.isAlive() && archer.isAlive()))
        {
    
            warrior.attack();
            if (warrior.getMana() >= 100)
            {
                warrior.useSpecialAbility();
                boss.takeDamage(35);
            }
            boss.takeDamage(25);

            if (!boss.isAlive())
                break;

            mage.attack();
            if (mage.getMana() >= 100)
            {
                mage.useSpecialAbility();
                boss.takeDamage(30);
            }

            boss.takeDamage(20);

            if (!boss.isAlive())
                break;

            archer.attack();
            if (archer.getMana() >= 100)
            {
                archer.useSpecialAbility();
                boss.takeDamage(35);
            }
            boss.takeDamage(20);

            if (!boss.isAlive())
                break;

            cout << endl;
            if (boss.isAlive())
            {
                boss.attack(warrior);
                if (!warrior.isAlive())
                    break;

                boss.attack(mage);
                if (!mage.isAlive())
                    break;

                boss.attack(archer);
                if (!archer.isAlive())
                    break;
            }

            cout << endl;
        }

        if (!boss.isAlive())
            cout << "Boss defeated! Players win!"<<endl;
        else
            cout << "Players defeated! Boss wins!"<<endl;
    }
};

int main()
{
    GameEngine game;
    game.startGame();
    cout<<endl;
    return 0;
}
