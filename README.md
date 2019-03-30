# Accelo-Write
Typing Speed Enhancer 
Aim:- To calculate:
		1. Typing Speed of the user.
		2. Accuracy of typing.
Header file(s) used
 	time.h
Built-in fns. used
	clock : To calculate total typing time.
Specific Keyword(s)
	CLOCKS_PER_SEC: Clock ticks per second.
Assumption:
	 5 characters = 1 word.
Parameters defined:
	1. start: To start time count.
	2. count: Total no of incorrect letters typed.
	3. count2:Total no of letters in the paragraph.
	4. Accuracy: (count2-count)*100 ---> No. of accurate letters typed.
	5. Duration = (start/CLOCKS_PER_SEC)-0.75;
			0.75 is used so as to optimize the time.
	6. Speed=(60*d)/(5*Duration)-->To return speed of user in words/min.

Levels:
	 Beginner<Medium<Advanced - Length of paragraph is in the given order.
Program Flow:
	1. The user selects the level.
	2. Based on the level, the user gets to type a paragraph.
	3. Accuracy gets displayed, along with typing speed.
