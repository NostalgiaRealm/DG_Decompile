/*
 * entry at 1800fbe1c
 * ulonglong __fastcall entry(undefined8 param_1, int param_2)
 * Address ranges: 1800fbe1c-1800fbe79
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong entry(undefined8 param_1,int param_2)

{
  ulonglong uVar1;
  
  if (param_2 == 1) {
    FUN_1800fbd50();
    _initterm((undefined8 *)&DAT_18010e000,(undefined8 *)&DAT_18010e008);
  }
  uVar1 = FUN_1800aeda4(param_1,param_2);
  if (param_2 == 0) {
    FUN_1800fbd20();
  }
  return uVar1 & 0xffffffff;
}

