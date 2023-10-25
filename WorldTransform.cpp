#include "WorldTransform.h"
#include "MathUtilityForText/MathUtilityForText.h"
void WorldTransform::UpdateMatrix() {
	matWorld_ = MakeAffineMatrix(scale_, rotation_, translation_);
	TransferMatrix();
}