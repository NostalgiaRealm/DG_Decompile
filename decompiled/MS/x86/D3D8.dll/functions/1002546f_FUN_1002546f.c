/*
 * FUN_1002546f at 1002546f
 * int __fastcall FUN_1002546f(uint param_1, uint param_2, uint param_3)
 * Address ranges: 1002546f-1002548a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_1002546f(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  if (param_2 < param_3) {
    param_2 = param_3;
  }
  for (; param_2 != 0; param_2 = param_2 >> 1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

