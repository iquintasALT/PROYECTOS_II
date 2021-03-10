// This file is part of the course TPV2@UCM - Samir Genaim

#pragma once

// components -- forward declaration, i.e., assume they are defined somewhere
class Transform;
class Image;
class GravityComponent;
class KeyboardPlayerCtrl;

#define _CMPS_LIST_  \
	Transform,\
	Image,\
	GravityComponent,\
	KeyboardPlayerCtrl 


// groups

struct Group_1;
#define _GRPS_LIST_  Group_1

// handlers
struct Hdlr_1;
#define _HDLRS_LIST_ Hdlr_1