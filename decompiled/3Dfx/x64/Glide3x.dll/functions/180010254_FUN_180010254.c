/*
 * FUN_180010254 at 180010254
 * LRESULT __fastcall FUN_180010254(longlong param_1, longlong param_2, undefined8 * param_3, HWND param_4, UINT param_5, WPARAM param_6, ulonglong param_7)
 * Address ranges: 180010254-180010390
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LRESULT FUN_180010254(longlong param_1,longlong param_2,undefined8 *param_3,HWND param_4,
                     UINT param_5,WPARAM param_6,ulonglong param_7)

{
  longlong *plVar1;
  char cVar2;
  LRESULT LVar3;
  int local_48 [2];
  tagRECT local_40 [2];
  
  if (param_5 == 0x104) {
    if ((param_6 != 0xd) || ((param_7 >> 0x1d & 1) == 0)) goto LAB_180010376;
    FUN_180010c8c(param_1,param_2,0x104,0xd);
  }
  else {
    if ((param_5 != 0x113) || (param_6 != 0xaaaa)) {
LAB_180010376:
      LVar3 = CallWindowProcW((WNDPROC)param_3[4],param_4,param_5,param_6,param_7);
      return LVar3;
    }
    plVar1 = (longlong *)(param_1 + 8);
    cVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))();
      if (cVar2 == '\0') {
        GetClientRect((HWND)*param_3,local_40);
        local_48[0] = 0;
        param_5 = 0;
        (**(code **)(*plVar1 + 0x10))(plVar1,local_48,&param_5);
        if (((local_40[0].right - local_40[0].left != local_48[0]) ||
            (local_40[0].bottom - local_40[0].top != param_5)) &&
           (*(char *)(param_1 + 0xb0) == '\0')) {
          FUN_180005450((ulonglong)param_5,(HWND)*param_3,(longlong)param_3,local_48[0],param_5,
                        *(char *)(param_2 + 0x824));
          *(undefined1 *)(param_1 + 0xb0) = 1;
        }
      }
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))();
    }
  }
  return 0;
}

