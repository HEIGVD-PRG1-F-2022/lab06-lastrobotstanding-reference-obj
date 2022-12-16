# ReferenceGame as static library

This repo allows you to play your robot against a set of other robots.
Just copy your robot in the `robots` directory, and include it from
`main.cpp`.
Then you need to do an 

```cpp
   new G.addRobot(new NameOfYourRobot());
```

in `main.cpp` to add your robot to the list of the playing robots.

Have fun!

## Changelog

- v0.1.1
  - Initial tag
  - Added all working robots from Thursday, 15th of December