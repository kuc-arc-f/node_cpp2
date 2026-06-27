# ink_rag_5

 Version: 0.9.4

 Author  :

 date    : 2026/06/27

 update :

***

node.js C++ Windows , OpenRouter Ink TUI RAG SQLite

* SQLite DB
* OpenRouter: openai/gpt-oss-20b:free
* embedding : Gemini-embedding-001
* node 22
* LLVM CLang
* Visual studio 2026 community
* nmake
* C/C++
* windows

***
### vector data add

https://github.com/kuc-arc-f/cpp_12ex/blob/main/rag_15sql

***
## Image

* RAG APP

![img1](/images/ink_rag_5.png)

***
### related

https://openrouter.ai/

https://openrouter.ai/models

***

https://www.sqlite.org/download.html

* sqlite-amalgamation-*.zip , download
* sqlite3.h , sqlite3.c

***
* vcpkg install
```
vcpkg install nlohmann-json:x64-windows
vcpkg install curl:x64-windows
vcpkg install cpr:x64-windows
```
***
* .env

```
SET  GEMINI_API_KEY=your-key

SET OPENROUTER_API_KEY=your-key
SET OPENROUTER_MODEL=openai/gpt-oss-20b:free
```
***
* example.db
* rag_15sql/example.db , file copy

***
* C++ build
```
nmake all
```

***
* node start
```
npm i
npm run start
```

***

