# ink_rag_4

 Version: 0.9.4

 Author  :

 date    : 2026/06/23

 update :

***

node.js C++ Windows , OpenRouter Ink TUI RAG Qdrant

* OpenRouter: openai/gpt-oss-20b:free
* embedding : Gemini-embedding-001
* C/C++
* node 22
* LLVM CLang
* Visual studio 2026 community
* nmake
* windows

***
### vector data add

https://github.com/kuc-arc-f/cpp_12ex/tree/main/rag_13qd

***
## Image

* RAG APP

![img1](/images/ink_rag_4.png)

***
### related

https://openrouter.ai/

https://openrouter.ai/models


***
* vcpkg install
```
vcpkg install nlohmann-json:x64-windows
vcpkg install curl:x64-windows
vcpkg install cpr:x64-windows
```
***
## env value

```
SET  GEMINI_API_KEY=your-key

SET OPENROUTER_API_KEY=your-key
SET OPENROUTER_MODEL=openai/gpt-oss-20b:free
```

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

