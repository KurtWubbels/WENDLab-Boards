# WENDLab-Boards

Extract under ~/Library/Arduino15/packages and add https://github.com/KurtWubbels/WENDLab-Boards/blob/main/package_wendlab_index.json to the boards list in Arduino IDE.
To create a new package, install the esp32 version it depends on and copy it to the hardware/esp32/ directory.
Then update the boards.txt and variants/ subdirectories in the copied esp32 hardware directory tree.
Zip up the directory tree to create a new archive. Get the file size and SHA256 sum.
Then update package_wendlab_index.json to reference the appropriate toolsDependencies tree from the new esp32 version.
In this file, also increment versions, generate a new SHA-256 sum and file size.
