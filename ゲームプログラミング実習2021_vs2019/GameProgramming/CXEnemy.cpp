#include "CXEnemy.h"

CXEnemy::CXEnemy()
:mHP(100)
{

}

void CXEnemy::Init(CModelX* model)
{
	CXCharacter::Init(model);
}

void CXEnemy::Update()
{

	//HPが0以下になると消える
	if (mHP <=0)
	{
		delete this;
	}
}

void CXEnemy::Collision(CCollider* m, CCollider* o)
{

}
