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

## Running it

You can run a single round with

```bash
./cmake-build-debug/ReferenceGameObj
```

If you want to run multiple rounds and compare your bot how it fares with
others, you can tell the game to run many rounds and only report the
results:

```bash
./cmake-build-debug/ReferenceGameObj --rounds 100
```

Will launch 100 rounds and show the results.

## Changelog

- v0.1.2
  - Adding latest robots from 2022-12-20
  - You can run with "--rounds 20" to run multiple rounds
- v0.1.1
  - Initial tag
  - Added all working robots from Thursday, 15th of December