#ifndef __EVENTTYPE_H
#define __EVENTTYPE_H

/*!
	A list of all possible Events within the Game
*/
enum EventType 
{

	TEST_EVENT,
	VIEW_SCREEN_INITIALIZED,
	VIEW_CHANGE_SCREEN,
	GAME_INITIALIZED,
	GAME_QUIT,
	INPUT_KEY_UP,
	INPUT_KEY_DOWN,
	INPUT_MOUSE_PRESSED,
	INPUT_MOUSE_RELEASED,
	INPUT_MOUSE_MOVED,
	LOG_MESSAGE_APPENDED,
	SCRIPT_COMMAND_EXECUTED,
	EVENTTYPE_MAX
	
};

#endif