//##############################################################################
// Mines - CMinesConstants.h		by Matt Gallagher �1999 All rights reserved
//##############################################################################

#pragma once

// Constants defining end game causes
#define	kUserStopped	0
#define	kTimeExpired	1
#define	kClickedMine 	2
#define kWonGame		3

// Resource constants
const ResIDT	rPPob_MinesWindow		= 1000;
const ResIDT	rPPob_OptionsWindow 	= 1001;
const ResIDT	rPPobDifficultyPane		= 1002;
const ResIDT	rPPobOtherOptionsPane	= 1003;
const ResIDT	rPPobEndGameBaseIndex	= 1100;
const ResIDT	rPPobStartNewGameDialog = 1104;
const ResIDT	textListR				= 128;

// Pane IDs
const PaneIDT	kNewGameButton		= 1005;
const PaneIDT	kEndGameButton		= 1006;
const PaneIDT	kTimeRemaining		= 1002;
const PaneIDT	kTimeDisplay		= 1003;
const PaneIDT	kMineFieldPane		= 1004;
const PaneIDT	kOptionsTabPane		= 1002;
const PaneIDT	kOptionsPlaceHolder	= 1004;
const PaneIDT	kAutoStartBox		= 4002;
const PaneIDT	kNumMinesBox		= 4005;
const PaneIDT	kNumMinesText		= 4006;
const PaneIDT	kUntimedBox			= 4007;
const PaneIDT	kDifficultyLevel	= 2013;
const PaneIDT	kDifficultyPopup	= 2012;
const PaneIDT	kCustomSize			= 2010;
const PaneIDT	kCustomSizeTitle	= 2009;
const PaneIDT	kCustomSizeText		= 2004;
const PaneIDT	kCustomSizeSlider	= 2016;
const PaneIDT	kCustomGameTimeTitle= 2008;
const PaneIDT	kCustomGameTime		= 2007;
const PaneIDT	kCustomGameTimeText	= 2003;
const PaneIDT	kCurrentGameSize	= 2001;
const PaneIDT	kCurrentGameTime	= 2002;

// Menu Commands
const CommandT	cmd_NewGame			= 1005;
const CommandT	cmd_NewCustomGame	= 2300;
const CommandT	cmd_NewFrontWindow	= 2301;
const CommandT	cmd_EndGame			= 1006;
const CommandT	cmd_Options			= 1007;

// Controls Broadcast Messages
const MessageT	msg_NewGame			= 1005;
const MessageT	msg_EndGame			= 1006;
const MessageT	msg_NewGameButton	= 1200;
const MessageT	msg_TabSwitch		= 2001;
const MessageT	msg_AutoStart		= 4101;
const MessageT	msg_NumMines		= 4102;
const MessageT	msg_Untimed			= 4103;
const MessageT	msg_DifficultyLevel	= 2101;
const MessageT	msg_Difficulty		= 2102;
const MessageT	msg_Custom			= 2103;
const MessageT	msg_GameSize		= 2104;
const MessageT	msg_GameTime		= 2105;

// Picture Resource IDs
const SInt16	rZeroMines			= 1001;
const SInt16	rOneMines			= 1002;
const SInt16	rTwoMines			= 1003;
const SInt16	rThreeMines			= 1004;
const SInt16	rFourMines			= 1005;
const SInt16	rFiveMines			= 1006;
const SInt16	rSixMines			= 1007;
const SInt16	rSevenMines			= 1008;
const SInt16	rEightMines			= 1009;
const SInt16	rUntouchedSquare	= 1010;
const SInt16	rRevealedBomb		= 1011;
const SInt16	rProtectedSquare	= 1012;
const SInt16	rPressedSquare		= 1013;

// Picture Array IDs
const SInt16	kZeroMines			= 1;
const SInt16	kOneMines			= 2;
const SInt16	kTwoMines			= 3;
const SInt16	kThreeMines			= 4;
const SInt16	kFourMines			= 5;
const SInt16	kFiveMines			= 6;
const SInt16	kSixMines			= 7;
const SInt16	kSevenMines			= 8;
const SInt16	kEightMines			= 9;
const SInt16	kUntouchedSquare	= 10;
const SInt16	kRevealedBomb		= 11;
const SInt16	kProtectedSquare	= 12;
const SInt16	kPressedSquare		= 13;

// Menu IDs
const ResIDT	kGameMenu			= 131;
