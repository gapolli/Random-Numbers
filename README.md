# Random-Numbers
Random number generator program to aid in the proposed [Multifind](https://github.com/mateuspim/TRABSO) project for the Operating Systems discipline taught at [Unicamp's Faculty of Technology](https://www.ft.unicamp.br/).

Objective:
The objective of this project is to facilitate the generation of the [Multifind](https://github.com/mateuspim/TRABSO) project input files for the Operating Systems discipline taught at [Unicamp's Faculty of Technology](https://www.ft.unicamp.br/).

Contributors (sorted alphabetically):
* [Gustavo Polli](https://github.com/gapolli)

Compilation:
At the Terminal or other Shell interpreter, type the following
```
gcc random.c -o random
```

Usage:
At the Terminal or other Shell interpreter, type the following
```
./random num
```
Note that "num" must be a number between 1 and 10.
The program will generate "num" input files that should be used in the [Multifind](https://github.com/mateuspim/TRABSO) project.

Observations:
If you want to restart generating the input files, run the Shell Script provided with the command below
```
sh clear_files.sh
```
and then
```
./random new_num
```
where "new_num" must be a new number between 1 and 10.
