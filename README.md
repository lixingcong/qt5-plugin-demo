# Qt5 demo project

Tested compiling and loading the plugins.

Windows 10 + Qt 5.11(MinGW) + Qt Creator 4.6.2

## Steps

1. Compile the project ```Plugin_1```,```Plugin_2```,```MainProject```
2. Copy the DLL file ```Plugin_1.dll``` and ```Plugin_1.dll``` to the correct path(see below)
3. Run the ```MainProject.exe```, the virtual function ```sayHello()``` will print something in the console

## Correct path

### If you run in QtCreator

```
build-DynDemo-Desktop_Qt_5_11_1_MinGW_32bit-Debug
	│
	├─MainProject
		│
		├─debug
		│	│
		│	├─MainProject.exe
		│
		├─plugins
			│
			├─Plugin_1.dll
			├─Plugin_2.dll
```

### If you run outside QtCreator, or ready to deploy

They may be complied under the ```CONFIG : release```

```
C:\User\Win10\Desktop\Demo
	│
	├─MainProject.exe
	│
	├─plugins
		│
		├─Plugin_1.dll
		├─Plugin_2.dll
```