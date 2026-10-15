/*
 * FUN_10003f7f at 10003f7f
 * LRESULT __stdcall FUN_10003f7f(HWND param_1, uint param_2, WPARAM param_3, LONG * param_4)
 * Address ranges: 10003f7f-10004021
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LRESULT FUN_10003f7f(HWND param_1,uint param_2,WPARAM param_3,LONG *param_4)

{
  LONG LVar1;
  LRESULT LVar2;
  
  if (param_2 == 1) {
    SetWindowLongA(param_1,-0x15,*param_4);
    return 0;
  }
  LVar1 = GetWindowLongA(param_1,-0x15);
  if (LVar1 != 0) {
    if (param_2 < 0x104) {
      if ((((param_2 == 0x103) || ((param_2 == 0x32 || (param_2 == 0x33)))) || (param_2 == 0x100))
         || ((param_2 == 0x101 || (param_2 == 0x102)))) {
LAB_10003ff9:
        LVar2 = SendMessageA(*(HWND *)(LVar1 + 0x14),param_2,param_3,(LPARAM)param_4);
        return LVar2;
      }
    }
    else if ((((param_2 == 0x104) || (param_2 == 0x105)) || (param_2 == 0x107)) ||
            ((param_2 == 0x109 || (param_2 == 0x312)))) goto LAB_10003ff9;
  }
  LVar2 = DefWindowProcA(param_1,param_2,param_3,(LPARAM)param_4);
  return LVar2;
}

