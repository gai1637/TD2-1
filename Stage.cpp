#include "Stage.h"
Stage::~Stage() { delete model_; }
void Stage::Initialize() { 
	textureHandle_ = TextureManager::Load("stage.jpg");
	model_ = Model::Create();
	worldTransform_.Initialize();
	worldTransform_.translation_ = {0, -1.5f, 0};
	worldTransform_.scale_ = {10.f, 1, 150};
	worldTransform_.UpdateMatrix();
	GoaltextureHandle_ = 0;
	Goalmodel_ = Model::CreateFromOBJ("enchu", true);
	GoalworldTransform_; 
	
}
void Stage::Draw(const ViewProjection& viewProjection) {
	model_->Draw(worldTransform_, viewProjection, textureHandle_);

}