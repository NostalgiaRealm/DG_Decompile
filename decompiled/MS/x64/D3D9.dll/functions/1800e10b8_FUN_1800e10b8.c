/*
 * FUN_1800e10b8 at 1800e10b8
 * LPRECT __fastcall FUN_1800e10b8(longlong param_1, LPRECT param_2, longlong param_3)
 * Address ranges: 1800e10b8-1800e112e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LPRECT FUN_1800e10b8(longlong param_1,LPRECT param_2,longlong param_3)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  
  param_2->left = 0;
  param_2->top = 0;
  param_2->right = 0;
  param_2->bottom = 0;
  param_2[1].left = 0;
  param_2[1].top = 0;
  param_2[1].right = 0;
  param_2[1].bottom = 0;
  param_2[2].left = 0;
  param_2[2].top = 0;
  param_2[2].right = 0;
  param_2[2].bottom = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x620));
  if (*(uint *)(param_1 + 0x650) != 0) {
    uVar3 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x648) + uVar3 * 8);
      if (*plVar1 == param_3) {
        FUN_1800df504(uVar3,(longlong)plVar1,param_2,(int *)0x0);
        break;
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_1 + 0x650));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x620));
  return param_2;
}

