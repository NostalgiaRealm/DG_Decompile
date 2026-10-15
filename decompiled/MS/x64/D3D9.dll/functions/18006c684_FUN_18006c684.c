/*
 * FUN_18006c684 at 18006c684
 * undefined __fastcall FUN_18006c684(undefined8 param_1, longlong param_2, uint param_3)
 * Address ranges: 18006c684-18006c6be
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18006c684(undefined8 param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  
  if (*(int *)(param_2 + 0x218 + (ulonglong)param_3 * 4) == 0) {
    uVar1 = FUN_1800ec8c0(param_2,4,'\x01');
    *(uint *)(param_2 + 0x218 + (ulonglong)param_3 * 4) = uVar1;
  }
  return;
}

