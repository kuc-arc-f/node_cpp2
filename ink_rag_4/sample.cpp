#include <windows.h>
#include <iostream>
#include <string>

#include "dotenv.h"
#include "my_rag.hpp"

// extern "C" でC言語リンクとし、__declspec(dllexport) でエクスポート
extern "C" {

    __declspec(dllexport) const char* rag_search(const char* input)
    {
        static std::string resp;
        const char* api_key = std::getenv("GEMINI_API_KEY");
        if(api_key == nullptr){
            resp="error , GEMINI_API_KEY none.";
            return resp.c_str();
        }
        const char* open_api_key = std::getenv("OPENROUTER_API_KEY");
        if (open_api_key == nullptr) {
            resp="error , OPENROUTER_API_KEY none.";
            return resp.c_str();
        }        
        const char* open_model = std::getenv("OPENROUTER_MODEL");
        if (open_model == nullptr) {
            resp="error , OPENROUTER_MODEL none.";
            return resp.c_str();
        }        

        std::string query = input;
        MyRag rLib("");
        resp = rLib.rag_search(query,  api_key, open_api_key, open_model);

        return resp.c_str();
    }

    __declspec(dllexport) int add(int a, int b) {
        return a + b;
    }

    __declspec(dllexport) double multiply(double a, double b) {
        return a * b;
    }

    __declspec(dllexport) const char* get_message()
    {
        return "Hello World";
    }

    __declspec(dllexport) const char* greet(const char* name)
    {
        static std::string msg;
        msg = "Hello ";
        msg += name;
        return msg.c_str();
    }

}