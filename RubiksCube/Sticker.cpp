#include "pch.h"
#include "Sticker.h"

//-------------------------------------------------------------------------------------------------------------------------------------------------------
// A "Sticker" represents a single face of a single cublet.
// It has several matrices associated with it:
//		1) Its own world matrix that determines where it is positioned in relation to the rest of the cube.
//		2) The rotation matrices of the various slices that a sticker may be in. (Note: only one of these should be non-identity at a time)
//		3) Its parent cube's world matrix
// The sticker's final world matrix is the product of these matrices.
//-------------------------------------------------------------------------------------------------------------------------------------------------------

Sticker::Sticker(StickerColor color)
{
	this->color = color;
	pRotation1 = NULL;
	pRotation2 = NULL;
	pRotation3 = NULL;
}

void Sticker::AttachRotationMatrix(XMFLOAT4X4 *pRotationMatrix)
{
	if (pRotation1 == NULL)
	{
		pRotation1 = pRotationMatrix;
		return;
	}
	if (pRotation2 == NULL)
	{
		pRotation2 = pRotationMatrix;
		return;
	}
	if (pRotation3 == NULL)
	{
		pRotation3 = pRotationMatrix;
		return;
	}
	assert(0);
}

void Sticker::SetColor(StickerColor color)
{
    this->color = color;
}

StickerColor Sticker::GetColor()
{
	return this->color;
}
