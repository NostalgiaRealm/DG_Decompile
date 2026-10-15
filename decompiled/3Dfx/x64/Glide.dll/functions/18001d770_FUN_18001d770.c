/*
 * FUN_18001d770 at 18001d770
 * LRESULT __fastcall FUN_18001d770(longlong param_1, longlong param_2, longlong param_3, HWND param_4, UINT param_5, WPARAM param_6, LONG * param_7)
 * Address ranges: 18001d770-18001d8af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LRESULT FUN_18001d770(longlong param_1,longlong param_2,longlong param_3,HWND param_4,UINT param_5,
                     WPARAM param_6,LONG *param_7)

{
  LONG LVar1;
  LONG LVar2;
  LONG LVar3;
  LRESULT LVar4;
  LPRECT ptVar5;
  tagRECT local_38;
  
  if (param_3 == 0) goto LAB_18001d845;
  if (param_5 < 0x106) {
    if (((((param_5 != 0x105) && (param_5 != 7)) && (param_5 != 8)) &&
        ((param_5 != 0x100 && (param_5 != 0x101)))) && ((param_5 != 0x102 && (param_5 != 0x103)))) {
      if (param_5 != 0x104) goto LAB_18001d845;
      if ((param_6 == 0xd) && (((ulonglong)param_7 >> 0x1d & 1) != 0)) {
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x58))();
        return 0;
      }
    }
  }
  else if ((param_5 != 0x107) && (param_5 != 0x109)) {
    if (param_5 == 0x113) {
      if (param_6 == 0xaaaa) {
        return 0;
      }
      goto LAB_18001d845;
    }
    if (param_5 == 0x214) {
      ptVar5 = FUN_1800054f4(param_2,&local_38,param_4,*(longlong **)(param_3 + 0x10),param_7,
                             param_6);
      LVar1 = ptVar5->top;
      LVar2 = ptVar5->right;
      LVar3 = ptVar5->bottom;
      param_7[0] = ptVar5->left;
      param_7[1] = LVar1;
      param_7[2] = LVar2;
      param_7[3] = LVar3;
      *(LONG *)(param_3 + 0x18) = param_7[2] - *param_7;
      *(LONG *)(param_3 + 0x1c) = param_7[3] - param_7[1];
      goto LAB_18001d845;
    }
    if (param_5 == 0x216) {
      *(undefined1 *)(param_3 + 0x44) = 1;
      param_5 = 0x216;
      goto LAB_18001d845;
    }
    if (param_5 != 0x312) goto LAB_18001d845;
  }
  if (*(HWND *)(param_3 + 8) != (HWND)0x0) {
    PostMessageW(*(HWND *)(param_3 + 8),param_5,param_6,(LPARAM)param_7);
  }
LAB_18001d845:
  LVar4 = DefWindowProcW(param_4,param_5,param_6,(LPARAM)param_7);
  return LVar4;
}

