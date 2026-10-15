/*
 * FUN_10057e66 at 10057e66
 * undefined __fastcall FUN_10057e66(int * param_1)
 * Address ranges: 10057e66-10057e92
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10057e66(int *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1[2] != 0) {
    do {
      FUN_10057ca7(param_1,*(LPVOID *)(*param_1 + 0x3c + uVar1 * 0x40));
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)param_1[2]);
  }
  param_1[2] = 0;
  return;
}

