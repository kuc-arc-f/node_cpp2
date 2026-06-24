# ink_rag_1

 Version: 0.9.4

 Author  :

 date    : 2026/06/23

 update :

***

node.js C++ Windows , Ink TUI RAG Qdrant

* node 22
* LLVM CLang
* Visual studio 2026 community
* nmake
* C/C++
* embedding : Gemini-embedding-001
* model: gemma-4-E2B
* llama.cpp , llama-server
* windows

***
### vector data add

https://github.com/kuc-arc-f/cpp_12ex/tree/main/rag_13qd

***
## Image

* RAG APP

![img1](/images/ink_rag_1.png)


***
* llama-server start
* port 8090: gemma-4-E2B

```
#gemma-4-E2B

/usr/local/llama-b8642/llama-server -m /var/lm_data/unsloth/gemma-4-E2B-it-Q4_K_S.gguf \
 --chat-template-kwargs '{"enable_thinking": false}' --port 8090 
```

***
### related

https://huggingface.co/unsloth/gemma-4-E2B-it-GGUF

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
GEMINI_API_KEY=your-key
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

