/*
 * FUN_1800bd348 at 1800bd348
 * undefined8 __fastcall FUN_1800bd348(longlong param_1, uint param_2, uint * param_3)
 * Address ranges: 1800bd348-1800bd372
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800bd348(longlong param_1,uint param_2,uint *param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x8876086c;
  if (param_2 < *(uint *)(param_1 + -0x5a00)) {
    uVar1 = FUN_180016dcc(*(longlong *)(*(longlong *)(param_1 + -0x5a08) + (ulonglong)param_2 * 8),
                          param_3);
  }
  return uVar1;
}

