# snake_game
This is the infamous Nokia snake game that took a great influence in my childhood. Trying it out,here we go


		Snake Representation.
How I'm I going to represent my snake?
I want my snake to grow like a chain list instead of just adding scores but maintaining the size.
How will I achieve this?

		Prey/ Feed and Scoring
For the snake to grow, it has to attack a prey or eat a fruit. Reprsent my fruit with asteriks symbol.A big occuring prey with a big dot.(both occur randomly at random positions. But the bigger prize occurs in stages and not at a go.)
For each time the snake eats a prey, it grows by 1 and score increases by 10, when it eats the big prize score increases by 30 and grows 1.5 times its size.

		Snake movement
move the snake in any direction as per user using the direction keys or WASD keys.

		Game boundary.
The game boundary is represented by # symbol.
prey/ food is generated automaticaly and randomly within the boarders.
Snake touching boundary means game over.

