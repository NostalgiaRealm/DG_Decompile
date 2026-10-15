/*
 * FUN_18009c25c at 18009c25c
 * undefined __fastcall FUN_18009c25c(longlong param_1, int param_2, int param_3)
 * Address ranges: 18009c25c-18009c2b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18009c25c(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong local_18;
  ulonglong local_10;
  
  lVar1 = *(longlong *)(param_1 + 0xd4);
  if ((lVar1 != 0) && ((*(int *)(param_1 + 0x2c) - 0x24U & 0xfffffffa) != 0)) {
    lVar2 = (ulonglong)(uint)(param_2 + param_3 * *(int *)(param_1 + 0x3c)) * 0x20;
    local_18 = (ulonglong)*(uint *)(lVar2 + lVar1);
    local_10 = (ulonglong)(uint)(*(int *)(lVar2 + 4 + lVar1) + *(int *)(lVar2 + lVar1));
    (**(code **)(**(longlong **)(param_1 + 0xc4) + 0x48))
              (*(longlong **)(param_1 + 0xc4),0,&local_18);
  }
  return;
}

