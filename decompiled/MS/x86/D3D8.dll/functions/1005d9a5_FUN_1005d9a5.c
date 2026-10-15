/*
 * FUN_1005d9a5 at 1005d9a5
 * undefined __fastcall FUN_1005d9a5(int * param_1)
 * Address ranges: 1005d9a5-1005d9cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1005d9a5(int *param_1)

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

