#include "Ball.h"
Ball::~Ball() {
	
	delete model_; }
void Ball::Initialize() { 
	model_ = Model::CreateFromOBJ("ball", true);
	worldTransform_.Initialize();
	worldTransform_.translation_ = {0, 0, -2.f};
	worldTransform_.scale_ = {0.1f, 0.1f, 0.1f};
	worldTransform_.UpdateMatrix();
	phase = Phase::stop;
	vector = {0, 0};
	t = 0;
	speed_ = {0, 0};
	acceleration = 0;
}
void Ball::Draw(const ViewProjection& viewProjection) { 
	model_->Draw(worldTransform_, viewProjection);
	
}
void Ball::Update() { 

	
	worldTransform_.UpdateMatrix(); 
}
void Ball::Stop() { 
	if (input_->TriggerKey(DIK_SPACE)) {
		phase = Phase::vector;
	}
}
void Ball::Vector() {
	t -= 0.05f;
	vector.x = 50 * cos(t) - 0 * sin(t);
	vector.y = 50 * sin(t) + 0 * cos(t);
	vector.x += worldTransform_.translation_.z;
	vector.y += worldTransform_.translation_.y;

	if (t <= -1.5f) {

		t = 0;
	}
	if (input_->TriggerKey(DIK_SPACE)) {
		float a = sqrtf(vector.x * vector.x + vector.y * vector.y);
		vector.x = vector.x / a;
		vector.y = vector.y / a;

	
	phase = Phase::power;
	}
}
void Ball::Power() { 
	power++; 
	if (power > 100) {
	power = 0;
	}
	if (input_->TriggerKey(DIK_SPACE)) {
	speed_ = vector;

	phase = Phase::Shot;
	}
}
void Ball::Shot() {

}