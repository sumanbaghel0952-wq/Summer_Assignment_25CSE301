git checkout master
git reset --hard main
git push origin master --force
git branch
git branch -f master main
git push origin master --force
git checkout main
git rm GCD_two_numbers.c
git rm LCM_two_numbers.c
git rm Prime_number.c
git rm Prime_range_number.c
git commit -m "Remove duplicate Day3 files from root"
git push origin main
git branch
git branch -a
git remote -v
git fetch --all
git ls-remote --heads origin
git checkout -b main origin/main
git log --oneline --graph --all --decorate -15
git merge master
git merge master --allow-unrelated-histories
git config --global user.name "sumanbaghel0952-wq"
git config --global user.email "sumanbaghel0952@gmail.com"
git merge master --allow-unrelated-histories
pwd
ls -la
mv .gitconfig .gitconfig_backup
mv .lesshst .lesshst_backup
git merge master --allow-unrelated-histories
git config user.name "sumanbaghel0952-wq"
git config user.email "sumanbaghel0952@gmail.com"
git merge master --allow-unrelated-histories
git status
git show --stat --oneline HEAD
git reset --hard HEAD~1
git checkout master
ls -la
ls Day3
git checkout main
git checkout master -- Day3
git add Day3
git commit -m "Add Day3 folder"
git push origin main
git status
rm .gitconfig_backup
rm .lesshst_backup
rm "et --hard HEAD~1"
git status
mkdir -p ~/Day8
cp "/storage/emulated/0/Summer Assignment/Day 8"/*.c ~/Day8/
ls -l ~/Day8
cd ~/Summer_Assignment_25CSE301
mkdir -p Day8
cp ~/Day8/*.c Day8/
git add Day8
git commit -m "Added Day 8 programs"
git push origin main
