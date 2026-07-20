# plaintext-editor
A simple, honest text editor for developers — no clutter, no distractions, built line by line while learning C++.

## What this is

A dirt-simple, functional plain-text editor — built stage by stage
while learning C++. No bells and whistles yet, on purpose.

## Progress Log

### Stage 1 — Menu and main loop
Built the core menu using a `while` loop and a `bool running` flag.
Displays Open/Save/Quit options, reads the user's choice with `std::cin`,
and branches with `if`/`else if`. Choosing Quit sets `running = false`,
ending the loop cleanly. Save and Quit don't do anything real yet —
just prove the loop and menu selection work.

### Stage 2 — Open and display file
Added file reading using `std::ifstream` and `std::getline`. Choosing
"Open file" now reads `myfile.txt` line by line and prints its contents
to the screen. If the file doesn't exist, it prints a clear error
message instead of crashing.
Option 1 now reads and prints myfile.txt line by line using ifstream.

## Roadmap

- [🖊️] Stage 1: Menu + main loop
- [🖊️] Stage 2: Open and display a file
- [ ] Stage 3: Basic line editing
- [ ] Stage 4: Copy / paste
- [ ] Stage 5: Undo
- [ ] Stage 
- [ ] Later: GUI version with clearly labeled buttons
