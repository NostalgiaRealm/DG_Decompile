/*
 * FUN_10004dc3 at 10004dc3
 * int __fastcall FUN_10004dc3(uint param_1, uint param_2)
 * Address ranges: 10004dc3-10004dd7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_10004dc3(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  if (param_2 == 0) {
    param_2 = 0;
  }
  do {
    iVar1 = iVar1 + 1;
    param_2 = param_2 >> 1;
  } while (param_2 != 0);
  return iVar1;
}

