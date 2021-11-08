#ifndef CFLOOR_H
#define CFLOOR_H

#include "CCharacter.h"
#include "CColliderMesh.h"

class CFloor : public CCharacter
{
	CModel mModel;
public:
	CFloor();

	//コライダの宣言
	CColliderMesh mColliderMesh;

	void Init();
};

#endif
