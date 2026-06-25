
const API_BASE = "http://localhost:3000";

const LibApi = {
  todoAdd: async function(title){
    try{
      const data = {
        title: title,
      };      
      const response = await fetch(API_BASE+ "/api/todo/create", {
        method: 'POST', // リクエストメソッドを指定
        headers: {
          'Content-Type': 'application/json' // JSONを送ることを伝える
        },
        body: JSON.stringify(data) // データをJSON文字列に変換
      });      
      if (!response.ok) {
        throw new Error(`HTTPエラー! ステータス: ${response.status}`);
      }

      const result = await response.json();
      console.log('成功:', result);
    }catch(e){
      console.log(e);
    }
  },

  todoList: async function(){
    try{
      const response = await fetch(API_BASE+ "/api/todo/list", {
        method: 'POST', // リクエストメソッドを指定
        headers: {
          'Content-Type': 'application/json' // JSONを送ることを伝える
        },
        body: JSON.stringify({}) // データをJSON文字列に変換
      });      
      if (!response.ok) {
        throw new Error(`HTTPエラー! ステータス: ${response.status}`);
      }

      const result = await response.json();
      //console.log('成功:', result);
      return result;
    }catch(e){
      console.log(e);
    }
  },

}

export default LibApi;
