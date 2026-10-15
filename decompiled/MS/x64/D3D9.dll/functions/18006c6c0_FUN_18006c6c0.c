/*
 * FUN_18006c6c0 at 18006c6c0
 * undefined __fastcall FUN_18006c6c0(undefined8 param_1, longlong param_2, uint param_3)
 * Address ranges: 18006c6c0-18006c6fa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18006c6c0(undefined8 param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  
  if (*(int *)(param_2 + 0x230 + (ulonglong)param_3 * 4) == 0) {
    uVar1 = FUN_1800ec8c0(param_2,4,'\x01');
    *(uint *)(param_2 + 0x230 + (ulonglong)param_3 * 4) = uVar1;
  }
  return;
}

