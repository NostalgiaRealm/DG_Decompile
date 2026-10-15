/*
 * FUN_18009dc78 at 18009dc78
 * undefined8 __fastcall FUN_18009dc78(longlong param_1, int param_2, int param_3)
 * Address ranges: 18009dc78-18009dccd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18009dc78(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong local_18;
  ulonglong local_10;
  
  if ((*(int *)(param_1 + 0x2c) - 0x24U & 0xfffffffa) != 0) {
    lVar1 = *(longlong *)(param_1 + 0xd4);
    lVar2 = (ulonglong)(uint)(param_3 * *(int *)(param_1 + 0x3c) + param_2) * 0x20;
    local_18 = (ulonglong)*(uint *)(lVar2 + lVar1);
    local_10 = (ulonglong)(uint)(*(int *)(lVar2 + 4 + lVar1) + *(int *)(lVar2 + lVar1));
    (**(code **)(**(longlong **)(param_1 + 0xc4) + 0x48))
              (*(longlong **)(param_1 + 0xc4),0,&local_18);
  }
  return 0;
}

