#ifndef HEALTH_HPP
#define HEALTH_HPP

class Health {
public:
	Health(const int health = 0)
		{
			if(health > 0) {
				m_bIsAlive = true;
				m_iHealth = health;
			}
			else {
				m_bIsAlive = false;
				m_iHealth = 0;
			}
		}
	
	bool	isAlive	()	{ return m_bIsAlive; }
	int 	health	()	{ return m_iHealth; }

	void	takeDamage (int damage)	{ 
		if(damage > 0) { 
			if(m_iHealth - damage  <= 0) {
				m_iHealth - damage;
				m_bIsAlive = false;
			}
			else
				m_iHealth - damage;
		} 
	}
	
private:
	bool 	m_bIsAlive;
	int 	m_iHealth;
};

#endif
