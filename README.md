# MyDevil
Doom 3 RPG Mod

MyDevil RPG Mod - Beta 1
Released Febuary 8, 2008

After around 4 years off and on of working with the Doom 3 engine, I am releasing this public beta. It should be relatively stable. Being the first release, it does not include everything I and the rest of the team had hoped to have functioning in the planning stages. Hopefully, some in the community will be interested in this and at least find the examples in it and source code useful for their own work. I certainly welcome anyone to contribute, or to merge my mod with their own. I will continue to support and expand upon the mod so long as you and others downloading this have interest. Thank you for giving MyDevil a try!

<Jizaboz>


* Installation & Getting started *

Just extract the .rar file to your doom 3 directory, creating <doom 3 directory name>/mydevil. Load doom 3, click mods on the menu, then go to Multiplayer, Create server. Choose MyDevil Map 1 and begin. This will start the game and create a listen server if you would like others on your local network or over the Internet to connect. They may not see the server in the game browser, if not just connect directly to the server IP adress. 

Both playing alone in this fashion and with 2-3 other people works just fine. There may be a few "overflow" errors, but otherwise should be stable.

As soon as you join the game, hit the M key to bring up the class menu and choose fighter, thief, or mage. If you do not choose a class, you will not gain rewards. 

* Notes *

- playerclasses.def and shops.def can be modified to give different rewards, shop prices, etc
- All classes are able to throw fireballs at start at seems... only the mage should. This will be looked into
- If you make your own map for MyDevil that contains npcs or monsters, you MUST give them the following entity keys: gold (value at 0 or higher should work) and exp (value at 0 or higher should work). If you do not, the game will crash as soon as you kill a monster... as the new code in the .dll of this mod always looks for the experience and gold reward values.
- You must use multiplayer mode, even to play in single player fashion. Traditional Doom 3 single player mode WILL NOT allow the new functions of MyDevil to work right. 
- The Mega Trite's body does not show up on my PC, only the legs... this should be addressed.

* Improvements and New Features for the Future *
 
The following are all things that were originally planned for this mod, which I still would very much like to implement. However, without any help from the community it's unlikely they will be completed. If anyone would like to help with these things, please contact me.

- Adding a flying horse vehicle with a collision map and physics, for "jousting" in the "Arena" area, which now sits bare.
- New weapon models and weapon/spell modifications
- Hit point and other stat rewards for gaining levels
- A way to save persistent "character sheets" to a server, like the old "King of the Server" mod for quake 2 that would be loaded every time a client connects. Character rewards DO rollover on map change at present though.
- More guis such as an inventory or stat sheet
- New NPC skins
- 2 new models... one of which would be a female for player use AND to use as a base for new npcs. The other model, just another male that isn't doom marine for the same purposes.
- New spells for the mage
- New abilities for the thief such as faster walking, double or high-jump... invisibility, etc. 
- More maps, textures, and static models


*  Credits  *

MYDEVIL TEAM
Jizaboz - Lead programmer/Lead producer/Concept/Project coordinator
Keith Stewart - Concept/Church design/Planning/level editor
Dave Hensley - Static Modeller (Church pew, Arena)/level editor
SnoopJedi - Programmer (Created shops code, debugged experience and gold rewards, contributed code for levelling scheme)

NON-TEAM
SillyRabbit (username of Doom3World.org) - Player Class system code
NiceMice (username of Doom3World.org) - COOP play code basics
MikeBart (username of Doom3World.org) - Tree model
Hellborg (DungeonDoom creator)... helped me with concept of exp/gold rewards
Voldemort (username of Doom3World.org) - donated tons of prefabs, light fixture in use by graveyard and tavern
Jason Welsh - Baby Imp model, Larch model
Marineofuac - (username of Doom3World.org) Mega Trite monster

BNA and all the rest of the helpful people posting at Doom3World.org

All the people giving encouragement and spreading the word of free advertisement

Webpage: http://home.triad.rr.com/fragmeister
Contact: jizaboz@hotmail.com 

**** PLEASE DO NOT USE THIS MOD WITHOUT GIVING CREDIT! ****
**** THIS MOD IS COMPLTELY OPEN-SOURCE. DO NOT USE OF IT FOR A SELLABLE PRODUCT ****
**** Do NOT DISTRIBUTE THIS MOD WITHOUT THIS FILE ****
