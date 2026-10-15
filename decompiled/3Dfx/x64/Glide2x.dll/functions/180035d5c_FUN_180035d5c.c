/*
 * FUN_180035d5c at 180035d5c
 * undefined __fastcall FUN_180035d5c(longlong * param_1, uint param_2, undefined4 param_3)
 * Address ranges: 180035d5c-180035da8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180035d5c(longlong *param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = param_2;
  (**(code **)(*param_1 + 0x2a0))();
  if (param_2 == 0) {
    FUN_180035dac((longlong)param_1,CONCAT31((int3)(uVar1 >> 8),(char)param_3));
    *(undefined1 *)(param_1 + 0x62e) = 1;
  }
  *(undefined4 *)((longlong)param_1 + (ulonglong)param_2 * 4 + 0x29b4) = param_3;
  return;
}

