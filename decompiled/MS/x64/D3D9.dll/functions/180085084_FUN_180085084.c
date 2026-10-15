/*
 * FUN_180085084 at 180085084
 * undefined __fastcall FUN_180085084(undefined8 param_1, longlong param_2, uint param_3)
 * Address ranges: 180085084-1800850bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180085084(undefined8 param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  
  if (*(int *)(param_2 + 0x140 + (ulonglong)param_3 * 4) == 0) {
    uVar1 = FUN_1800ec8c0(param_2 + 0x20,4,'\x01');
    *(uint *)(param_2 + 0x140 + (ulonglong)param_3 * 4) = uVar1;
  }
  return;
}

