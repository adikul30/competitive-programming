## Pre-requisites:
Install Git: 
*Are you a first time user and just beginning with Open-Source projects? No problem! Here's [how you can install Git on your computer](https://www.digitalocean.com/community/tutorials/how-to-contribute-to-open-source-getting-started-with-git)*
###### After you are done installing Git on your computer:
1. Fork this repository on Github.
2. Clone it onto your computer by opening terminal and running the command $ git clone https://github.com/{your username}/CP.git
3. Use the actual name of the repository to change into that directory (eg. *$ cd repository*) and create and switch to a new branch by the following command: $ git checkout -b new-branch
4. After modifying existing files or adding new files to the project, add them locally to your repository using $ git add -A command where A is the file
5. Add a short message about what you contributed for with the git commit command. For eg. $ git commit -m "Added solution to Leetcode problem XYZ"
6. Now use the command $ git push --set-upstream origin new-branch to push the changes to the current branch of your forked repository
7. Now you can create a Pull Request with the chosen branch as new-branch

## File Placement:

1. The name of the file should be the name of the question on the online judge. 
  For example,  solution to the problem https://www.codechef.com/problems/CHEFRUN should be saved as *CHEFRUN.cpp* or with any other extension. 
2. Place the solution file in the appropriate online judge directory. 
  For example, the above solution can be placed under *codechef* directory
  If the directory doesn't exist, create it. 

## Code of Conduct :

### Don't submit solutions to ongoing contests. Such PR's will not be accepted. 



CONTRIBUTING template referenced from [here](https://github.com/matthewsamuel95/ACM-ICPC-Algorithms/blob/master/CONTRIBUTING.md )
