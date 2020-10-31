# VSCode setup

Instructions: https://code.visualstudio.com/docs/languages/cpp


You'll need to install the C/C++ extension, then configure settings in VScode via this [link](https://code.visualstudio.com/docs/cpp/config-clang-mac)
I'm on MacOS, so to compile C/C++ I'll need a compiler. There's a C compiler already bundled with on most Macs called clang.
To ensure its installed, check the version like so:

```
> clang --version
Apple clang version 11.0.0 (clang-1100.0.33.8)
Target: x86_64-apple-darwin19.0.0
Thread model: posix
InstalledDir: /Library/Developer/CommandLineTools/usr/bin
```

You'll need to create a vscode configuration file so it can use the compiler during development. You can do this buy
clicking the debugger (bug icon) button and clicking the `add configuration` option.