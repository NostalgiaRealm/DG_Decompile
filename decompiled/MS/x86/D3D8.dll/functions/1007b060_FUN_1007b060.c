/*
 * FUN_1007b060 at 1007b060
 * undefined __fastcall FUN_1007b060(int * param_1)
 * Address ranges: 1007b060-1007b09e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1007b060(int *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1[0x1636] != 0) {
    do {
      (**(code **)(**(int **)(param_1[0x1635] + uVar1 * 4) + 4))
                (-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0x1634));
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)param_1[0x1636]);
  }
  FUN_10003d00(param_1);
  return;
}

