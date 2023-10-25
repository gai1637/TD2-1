#include "BG.h"
void BG::Initialize() { 
	textureHandle_ = TextureManager::Load("bg.jpg");
	sprite_ = Sprite::Create(textureHandle_, {0, 0});


}
BG::~BG() { delete sprite_; }
void BG::Draw() { sprite_->Draw(); }