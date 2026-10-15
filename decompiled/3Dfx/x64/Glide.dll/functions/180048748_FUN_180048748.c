/*
 * FUN_180048748 at 180048748
 * undefined __fastcall FUN_180048748(longlong param_1, uint param_2, longlong param_3)
 * Address ranges: 180048748-18004878d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180048748(longlong param_1,uint param_2,longlong param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (param_3 != *(longlong *)(param_1 + 0x168 + uVar1 * 8)) {
    FUN_1800477f0(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0x128))
              (*(longlong **)(param_1 + 0x688),uVar1,param_3);
    *(longlong *)(param_1 + 0x168 + uVar1 * 8) = param_3;
  }
  return;
}

