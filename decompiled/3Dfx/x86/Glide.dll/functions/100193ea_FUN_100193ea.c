/*
 * FUN_100193ea at 100193ea
 * LRESULT __fastcall FUN_100193ea(void * param_1, int param_2, undefined4 * param_3, HWND param_4, UINT param_5, WPARAM param_6, uint param_7)
 * Address ranges: 100193ea-100194e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LRESULT __fastcall
FUN_100193ea(void *param_1,int param_2,undefined4 *param_3,HWND param_4,UINT param_5,WPARAM param_6,
            uint param_7)

{
  char cVar1;
  LRESULT LVar2;
  tagRECT local_18;
  int local_8;
  
  local_8 = param_2;
  if (param_5 == 0x104) {
    if ((param_6 == 0xd) && ((param_7 & 0x20000000) != 0)) {
      FUN_10019c44(param_1);
      return 0;
    }
  }
  else if ((param_5 == 0x113) && (param_6 == 0xaaaa)) {
    cVar1 = (**(code **)(*(int *)((int)param_1 + 4) + 4))();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(**(int **)((int)param_1 + 0xc) + 0x20))();
      if (cVar1 == '\0') {
        GetClientRect((HWND)*param_3,&local_18);
        param_7 = 0;
        param_6 = 0;
        (**(code **)(*(int *)((int)param_1 + 4) + 8))(&param_7,&param_6);
        if (((local_18.right - local_18.left != param_7) ||
            (local_18.bottom - local_18.top != param_6)) && (*(char *)((int)param_1 + 0x8c) == '\0')
           ) {
          FUN_10003efb((HWND)*param_3,(int)param_3,param_7,param_6,*(char *)(local_8 + 0x788));
          *(undefined1 *)((int)param_1 + 0x8c) = 1;
        }
      }
      (**(code **)(**(int **)((int)param_1 + 0xc) + 0x14))();
    }
    return 0;
  }
  LVar2 = CallWindowProcW((WNDPROC)param_3[5],param_4,param_5,param_6,param_7);
  return LVar2;
}

