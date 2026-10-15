/*
 * FUN_1002cae1 at 1002cae1
 * int __fastcall FUN_1002cae1(uint param_1, uint param_2, uint param_3)
 * Address ranges: 1002cae1-1002cafc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_1002cae1(uint param_1,uint param_2,uint param_3)

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

