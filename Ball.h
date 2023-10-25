#pragma once
#include "Audio.h"
#include "DirectXCommon.h"
#include "Input.h"
#include "Model.h"
#include "SafeDelete.h"
#include "Sprite.h"
#include "ViewProjection.h"
#include "WorldTransform.h"		
enum class Phase {
	stop,
	vector,
	power,
	Shot, 
	Reset,
};
class Ball {
public:
	~Ball();
	void Initialize();
	void Draw(const ViewProjection& viewProjection);
	void Update();
	void Power();
	void Vector();
	void Stop();
	void Shot();

private:
	uint32_t textureHandle_ = 0;
	Model* model_ = nullptr;
	WorldTransform worldTransform_;
	Input* input_;
	float power;
	Vector2 vector;
	Phase phase;
	float t;
	Vector2 speed_;
	float acceleration;

};
