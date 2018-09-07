// Fill out your copyright notice in the Description page of Project Settings.

#include "../../Public/Models/CharacterDataModel.h"


CharacterDataModel::CharacterDataModel(uint8 CharacterLevel, uint8 CharacterCode)
{
	this->CharacterCode = CharacterCode;
	this->CharacterLevel = CharacterLevel;
	switch (CharacterCode) {
	case 0:
		//Aurora...
		this->CharacterName = FText::FromString(TEXT("Aurora"));
		this->CharacterImagePath = FText::FromString(TEXT("Texture2D'/Game/Images/CharacterPortraitAvatars/Hero_Portrait_Aurora.Hero_Portrait_Aurora'"));
		break;

	case 1:
		//Countess
		this->CharacterName = FText::FromString(TEXT("Countess"));
		this->CharacterImagePath = FText::FromString(TEXT("Texture2D'/Game/Images/CharacterPortraitAvatars/Hero_Portrait_Countess.Hero_Portrait_Countess'"));
		break;

	case 2:
		//Crunch
		this->CharacterName = FText::FromString(TEXT("Crunch"));
		this->CharacterImagePath = FText::FromString(TEXT("Texture2D'/Game/Images/CharacterPortraitAvatars/Hero_Portrait_Crunch.Hero_Portrait_Crunch'"));
		break;

	case 3:
		//Dekker
		this->CharacterName = FText::FromString(TEXT("Dekker"));
		this->CharacterImagePath = FText::FromString(TEXT("Texture2D'/Game/Images/CharacterPortraitAvatars/Hero_Portrait_Dekker.Hero_Portrait_Dekker'"));
		break;

	case 4:
		//Drongo
		this->CharacterName = FText::FromString(TEXT("Drongo"));
		this->CharacterImagePath = FText::FromString(TEXT("Texture2D'/Game/Images/CharacterPortraitAvatars/Hero_Portrait_Drongo.Hero_Portrait_Drongo'"));
		break;

	case 5:
		//Feng_Mao
		this->CharacterName = FText::FromString(TEXT("Feng Mao"));
		this->CharacterImagePath = FText::FromString(TEXT("Texture2D'/Game/Images/CharacterPortraitAvatars/Hero_Portrait_Feng_Mao.Hero_Portrait_Feng_Mao'"));
		break;

	case 6:
		//Gadget
		this->CharacterName = FText::FromString(TEXT("Gadget"));
		this->CharacterImagePath = FText::FromString(TEXT("Texture2D'/Game/Images/CharacterPortraitAvatars/Hero_Portrait_Gadget.Hero_Portrait_Gadget'"));
		break;

	case 7:
		//Gideon
		this->CharacterName = FText::FromString(TEXT("Gideon"));
		this->CharacterImagePath = FText::FromString(TEXT("Texture2D'/Game/Images/CharacterPortraitAvatars/Hero_Portrait_Gideon.Hero_Portrait_Gideon'"));
		break;

	case 8:
		//Greystone
		this->CharacterName = FText::FromString(TEXT("Greystone"));
		this->CharacterImagePath = FText::FromString(TEXT("Texture2D'/Game/Images/CharacterPortraitAvatars/Hero_Portrait_Greystone.Hero_Portrait_Greystone'"));
		break;

	case 9:
		//GRIM.exe
		this->CharacterName = FText::FromString(TEXT("GRIM.exe"));
		this->CharacterImagePath = FText::FromString(TEXT("Texture2D'/Game/Images/CharacterPortraitAvatars/Hero_Portrait_GRIM_exe.Hero_Portrait_GRIM_exe'"));
		break;

	case 10:
		//Grux
		this->CharacterName = FText::FromString(TEXT("Grux"));
		this->CharacterImagePath = FText::FromString(TEXT("Texture2D'/Game/Images/CharacterPortraitAvatars/Hero_Portrait_Grux.Hero_Portrait_Grux'"));
		break;

	case 11:
		//Howitzer
		this->CharacterName = FText::FromString(TEXT("Howitzer"));
		this->CharacterImagePath = FText::FromString(TEXT("Texture2D'/Game/Images/CharacterPortraitAvatars/Hero_Portrait_Howitzer.Hero_Portrait_Howitzer'"));
		break;

	case 12:
		//Iggy & Scorch
		this->CharacterName = FText::FromString(TEXT("Iggy & Scorch"));
		this->CharacterImagePath = FText::FromString(TEXT("Texture2D'/Game/Images/CharacterPortraitAvatars/Hero_Portrait_Iggy_and_Scorch.Hero_Portrait_Iggy_and_Scorch'"));
		break;

	case 13:
		//Kallari
		this->CharacterName = FText::FromString(TEXT("Kallari"));
		this->CharacterImagePath = FText::FromString(TEXT("Texture2D'/Game/Images/CharacterPortraitAvatars/Hero_Portrait_Kallari.Hero_Portrait_Kallari'"));
		break;

	case 14:
		//Khaimera
		this->CharacterName = FText::FromString(TEXT("Khaimera"));
		this->CharacterImagePath = FText::FromString(TEXT("Texture2D'/Game/Images/CharacterPortraitAvatars/Hero_Portrait_Khaimera.Hero_Portrait_Khaimera'"));
		break;

	case 15:
		//Kwang
		this->CharacterName = FText::FromString(TEXT("Kwang"));
		this->CharacterImagePath = FText::FromString(TEXT("Texture2D'/Game/Images/CharacterPortraitAvatars/Hero_Portrait_Kwang.Hero_Portrait_Kwang'"));
		break;

	case 16:
		//Lt Belica
		this->CharacterName = FText::FromString(TEXT("Lt Belica"));
		this->CharacterImagePath = FText::FromString(TEXT("Texture2D'/Game/Images/CharacterPortraitAvatars/Hero_Portrait_Lt__Belica.Hero_Portrait_Lt__Belica'"));
		break;

	case 17:
		//Morigesh
		this->CharacterName = FText::FromString(TEXT("Morigesh"));
		this->CharacterImagePath = FText::FromString(TEXT("Texture2D'/Game/Images/CharacterPortraitAvatars/Hero_Portrait_Morigesh.Hero_Portrait_Morigesh'"));
		break;

	case 18:
		//Murdock
		this->CharacterName = FText::FromString(TEXT("Murdock"));
		this->CharacterImagePath = FText::FromString(TEXT("Texture2D'/Game/Images/CharacterPortraitAvatars/Hero_Portrait_Murdock.Hero_Portrait_Murdock'"));
		break;

	case 19:
		//Muriel
		this->CharacterName = FText::FromString(TEXT("Muriel"));
		this->CharacterImagePath = FText::FromString(TEXT("Texture2D'/Game/Images/CharacterPortraitAvatars/Hero_Portrait_Muriel.Hero_Portrait_Muriel'"));
		break;

	case 20:
		//Narbash
		this->CharacterName = FText::FromString(TEXT("Narbash"));
		this->CharacterImagePath = FText::FromString(TEXT("Texture2D'/Game/Images/CharacterPortraitAvatars/Hero_Portrait_Narbash.Hero_Portrait_Narbash'"));
		break;

	case 21:
		//Phase
		this->CharacterName = FText::FromString(TEXT("Phase"));
		this->CharacterImagePath = FText::FromString(TEXT("Texture2D'/Game/Images/CharacterPortraitAvatars/Hero_Portrait_Phase.Hero_Portrait_Phase'"));
		break;

	case 22:
		//Rampage
		this->CharacterName = FText::FromString(TEXT("Rampage"));
		this->CharacterImagePath = FText::FromString(TEXT("Texture2D'/Game/Images/CharacterPortraitAvatars/Hero_Portrait_Rampage.Hero_Portrait_Rampage'"));
		break;

	case 23:
		//Revenant
		this->CharacterName = FText::FromString(TEXT("Revenant"));
		this->CharacterImagePath = FText::FromString(TEXT("Texture2D'/Game/Images/CharacterPortraitAvatars/Hero_Portrait_Revenant.Hero_Portrait_Revenant'"));
		break;

	case 24:
		//Riktor
		this->CharacterName = FText::FromString(TEXT("Roktor"));
		this->CharacterImagePath = FText::FromString(TEXT("Texture2D'/Game/Images/CharacterPortraitAvatars/Hero_Portrait_Riktor.Hero_Portrait_Riktor'"));
		break;

	case 25:
		//Serath
		this->CharacterName = FText::FromString(TEXT("Serath"));
		this->CharacterImagePath = FText::FromString(TEXT("Texture2D'/Game/Images/CharacterPortraitAvatars/Hero_Portrait_Serath.Hero_Portrait_Serath'"));
		break;

	case 26:
		//Sevarog
		this->CharacterName = FText::FromString(TEXT("Sevarog"));
		this->CharacterImagePath = FText::FromString(TEXT("Texture2D'/Game/Images/CharacterPortraitAvatars/Hero_Portrait_Sevarog.Hero_Portrait_Sevarog'"));
		break;

	case 27:
		//Shinbi
		this->CharacterName = FText::FromString(TEXT("Shinbi"));
		this->CharacterImagePath = FText::FromString(TEXT("Texture2D'/Game/Images/CharacterPortraitAvatars/Hero_Portrait_Shinbi.Hero_Portrait_Shinbi'"));
		break;

	case 28:
		//Sparrow
		this->CharacterName = FText::FromString(TEXT("Sparrow"));
		this->CharacterImagePath = FText::FromString(TEXT("Texture2D'/Game/Images/CharacterPortraitAvatars/Hero_Portrait_Sparrow.Hero_Portrait_Sparrow'"));
		break;

	case 29:
		//Steel
		this->CharacterName = FText::FromString(TEXT("Steel"));
		this->CharacterImagePath = FText::FromString(TEXT("Texture2D'/Game/Images/CharacterPortraitAvatars/Hero_Portrait_Steel.Hero_Portrait_Steel'"));
		break;

	case 30:
		//Terra
		this->CharacterName = FText::FromString(TEXT("Terra"));
		this->CharacterImagePath = FText::FromString(TEXT("Texture2D'/Game/Images/CharacterPortraitAvatars/Hero_Portrait_Terra.Hero_Portrait_Terra'"));
		break;

	case 31:
		//The Fey
		this->CharacterName = FText::FromString(TEXT("The Fey"));
		this->CharacterImagePath = FText::FromString(TEXT("Texture2D'/Game/Images/CharacterPortraitAvatars/Hero_Portrait_The_Fey.Hero_Portrait_The_Fey'"));
		break;

	case 32:
		//Twinblast
		this->CharacterName = FText::FromString(TEXT("Twinblast"));
		this->CharacterImagePath = FText::FromString(TEXT("Texture2D'/Game/Images/CharacterPortraitAvatars/Hero_Portrait_TwinBlast.Hero_Portrait_TwinBlast'"));
		break;

	case 34:
		//Wraith
		this->CharacterName = FText::FromString(TEXT("Wraith"));
		this->CharacterImagePath = FText::FromString(TEXT("Texture2D'/Game/Images/CharacterPortraitAvatars/Hero_Portrait_Wraith.Hero_Portrait_Wraith'"));
		break;

	case 35:
		//Wukong
		this->CharacterName = FText::FromString(TEXT("Wukong"));
		this->CharacterImagePath = FText::FromString(TEXT("Texture2D'/Game/Images/CharacterPortraitAvatars/Hero_Portrait_Wukong.Hero_Portrait_Wukong'"));
		break;

	case 36:
		//Yin
		this->CharacterName = FText::FromString(TEXT("Yin"));
		this->CharacterImagePath = FText::FromString(TEXT("Texture2D'/Game/Images/CharacterPortraitAvatars/Hero_Portrait_Yin.Hero_Portrait_Yin'"));
		break;

	case 37:
		//Zinx
		this->CharacterName = FText::FromString(TEXT("Zinx"));
		this->CharacterImagePath = FText::FromString(TEXT("Texture2D'/Game/Images/CharacterPortraitAvatars/Hero_Portrait_Zinx.Hero_Portrait_Zinx'"));
		break;

	default:
		//Wukong
		this->CharacterName = FText::FromString(TEXT("Wukong"));
		this->CharacterImagePath = FText::FromString(TEXT("Texture2D'/Game/Images/CharacterPortraitAvatars/Hero_Portrait_Wukong.Hero_Portrait_Wukong'"));
		break;
	
	}
}

CharacterDataModel::~CharacterDataModel()
{
}
