@echo off
echo Clearing P drive...
subst P: /D
echo Setting P drive to: "%1"
subst P: "%1"
