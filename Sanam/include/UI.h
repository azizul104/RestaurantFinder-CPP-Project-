#ifndef UI_H
#define UI_H

#include <string>

typedef void (*func)(void);

class UI
{
   public:
      UI();
      virtual ~UI();
      
      virtual void Init();
      void ClearScreen();
      
      void Print(char *data);
      virtual void Update();
      
      func UserDataReceived;

   protected:

   private:

};

#endif // UI_H
