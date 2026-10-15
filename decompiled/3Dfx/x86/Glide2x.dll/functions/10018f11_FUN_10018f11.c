/*
 * FUN_10018f11 at 10018f11
 * LRESULT __fastcall FUN_10018f11(int param_1, void * param_2, int param_3, HWND param_4, uint param_5, WPARAM param_6, LONG * param_7)
 * Address ranges: 10018f11-1001905b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LRESULT __fastcall
FUN_10018f11(int param_1,void *param_2,int param_3,HWND param_4,uint param_5,WPARAM param_6,
            LONG *param_7)

{
  LPRECT ptVar1;
  LRESULT LVar2;
  tagRECT local_14;
  
  if (param_3 == 0) goto LAB_1001902f;
  if (param_5 < 0x106) {
    if (((((param_5 != 0x105) && (param_5 != 7)) && (param_5 != 8)) &&
        ((param_5 != 0x100 && (param_5 != 0x101)))) && ((param_5 != 0x102 && (param_5 != 0x103)))) {
      if (param_5 != 0x104) goto LAB_1001902f;
      if ((param_6 == 0xd) && (((uint)param_7 & 0x20000000) != 0)) {
        (**(code **)(**(int **)(param_1 + 0xc) + 0x2c))();
        return 0;
      }
    }
  }
  else if ((param_5 != 0x107) && (param_5 != 0x109)) {
    if (param_5 == 0x113) {
      if (param_6 == 0xaaaa) {
        return 0;
      }
      goto LAB_1001902f;
    }
    if (param_5 == 0x214) {
      ptVar1 = FUN_10003cbb(param_2,&local_14,param_4,*(int **)(param_3 + 8),param_7,param_6);
      *param_7 = ptVar1->left;
      param_7[1] = ptVar1->top;
      param_7[2] = ptVar1->right;
      param_7[3] = ptVar1->bottom;
      *(LONG *)(param_3 + 0xc) = param_7[2] - *param_7;
      *(LONG *)(param_3 + 0x10) = param_7[3] - param_7[1];
      goto LAB_1001902f;
    }
    if (param_5 == 0x216) {
      *(undefined1 *)(param_3 + 0x2c) = 1;
      goto LAB_1001902f;
    }
    if (param_5 != 0x312) goto LAB_1001902f;
  }
  if (*(int *)(param_3 + 4) != 0) {
    PostMessageW(*(HWND *)(param_3 + 4),param_5,param_6,(LPARAM)param_7);
  }
LAB_1001902f:
  LVar2 = DefWindowProcW(param_4,param_5,param_6,(LPARAM)param_7);
  return LVar2;
}

