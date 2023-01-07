#pragma once
///当たり判定プリミティブ
#include<cmath>
#include <DirectXMath.h>

struct Sphere
{
	//中心座標
	DirectX::XMVECTOR center = { 0,0,0,1 };

	//半径
	float radius = 1.0f;
};

///平面

struct Plane
{
	//法線ベクトル
	DirectX::XMVECTOR normal = { 0,1,0,0 };

	//原点からの距離
	float distance = 0.0f;


};

class Triangle
{
public:
	DirectX::XMVECTOR p0;
	DirectX::XMVECTOR p1;
	DirectX::XMVECTOR p2;
	//法線ベクトル
	DirectX::XMVECTOR normal;
};