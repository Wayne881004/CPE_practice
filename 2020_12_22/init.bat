@echo off

mkdir %1
cd %1
echo. >%1.cpp
echo. >input.in
echo. >output.out
cd ..
copy compile.bat .\%1
copy template.cpp .\%1\%1.cpp
