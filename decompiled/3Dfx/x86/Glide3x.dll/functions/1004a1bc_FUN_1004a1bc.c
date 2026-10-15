/*
 * FUN_1004a1bc at 1004a1bc
 * undefined __fastcall FUN_1004a1bc(int * param_1)
 * Address ranges: 1004a1bc-1004a1e8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1004a1bc(int *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1[2] != 0) {
    do {
      FUN_10049ffd(param_1,*(LPVOID *)(*param_1 + 0x3c + uVar1 * 0x40));
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)param_1[2]);
  }
  param_1[2] = 0;
  return;
}

