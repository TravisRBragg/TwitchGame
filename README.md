This project utilizes the Twitch SDK for Unreal Engine and the Twiworks plugin located in the Epic Games Marketplace. 
Both are required for all functionality to work. 
(Twitch SDK is included along with a custom function created by MrowrPurr for getting the Reset OAuth code from the TwitchSDK to pass to Twiworks for seemless dual login).

Project includes example blueprint functions for:

Predictions
    Allows a prediction to be created using a title and an array of vote choices. Resolves predicion and cancels prediction in the event that part of the prediction logic fails.

Polls
    Creates a poll using a title and array of choices.
  
Raid Events
    Has logic to spawn in a bunch of spheres with physics applied on the event a streamer is raided.

Custom Commands
    Various commands such as causing the viewer avatar to dance or wave and an explosion in front of the Camera.

Chat Message Received   
    Has an array of bot names to exclude to prevent bots clutting the game and/or game chat. Creates a new character for each viewer that chats and has a check to prevent multiple characters for same viewer. Character and viewer name stored
  as reference for custom commands for emotes and later functionality.

Cheer (bits)
    Has function created but currently no logic connected as it's a bit harder to test without bits being cheered. Will fix later when I get some cheer capabilities.


In case of error with either log in, A log out node is resting just above the Event Init on /Content/Twitch/BP/Game/BP_Twitch_Game_Instance. 
  Simply plug Event Init into Log Out function and run the game once, then reconnect back to Event Init code to start again.
