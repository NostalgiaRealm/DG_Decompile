/*
 * FUN_18004f89c at 18004f89c
 * undefined __fastcall FUN_18004f89c(longlong param_1, ulonglong param_2, longlong param_3, int param_4)
 * Address ranges: 18004f89c-18004f906
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004f89c(longlong param_1,ulonglong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = (param_2 & 0xffffffff) * 0x18c0;
  if (((param_3 != *(longlong *)(lVar2 + 0xb70 + param_1)) ||
      (param_4 != *(int *)(lVar2 + 0xb78 + param_1))) || (*(int *)(lVar2 + 0xb7c + param_1) != 0)) {
    *(longlong *)(lVar2 + 0xb70 + param_1) = param_3;
    *(int *)(lVar2 + 0xb78 + param_1) = param_4;
    *(undefined4 *)(lVar2 + 0xb7c + param_1) = 0;
    plVar1 = *(longlong **)(lVar2 + 0x6b8 + param_1);
    (**(code **)(*plVar1 + 0x98))(plVar1,param_3,param_4,0);
  }
  return;
}

