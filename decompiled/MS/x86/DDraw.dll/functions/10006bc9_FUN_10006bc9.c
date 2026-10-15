/*
 * FUN_10006bc9 at 10006bc9
 * undefined __fastcall FUN_10006bc9(int * param_1)
 * Address ranges: 10006bc9-10006bf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10006bc9(int *param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_1[2] != 0) {
    do {
      piVar1 = *(int **)(*param_1 + 0xc + uVar2 * 0x10);
      (**(code **)(*piVar1 + 8))(piVar1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)param_1[2]);
  }
  param_1[2] = 0;
  return;
}

