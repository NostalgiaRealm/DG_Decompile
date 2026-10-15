/*
 * FUN_100476d4 at 100476d4
 * undefined __fastcall FUN_100476d4(int * param_1)
 * Address ranges: 100476d4-10047700
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100476d4(int *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1[2] != 0) {
    do {
      FUN_10047515(param_1,*(LPVOID *)(*param_1 + 0x3c + uVar1 * 0x40));
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)param_1[2]);
  }
  param_1[2] = 0;
  return;
}

