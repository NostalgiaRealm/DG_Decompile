/*
 * FUN_1002b4f8 at 1002b4f8
 * undefined4 __fastcall FUN_1002b4f8(int param_1)
 * Address ranges: 1002b4f8-1002b522
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1002b4f8(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10012cb6(*(int *)(param_1 + 0x10) + 0x20);
  *(int **)(param_1 + 4) = piVar1;
  if (piVar1 != (int *)0x0) {
    piVar1 = FUN_100cfed0(piVar1,0,*(uint *)(param_1 + 0x10));
    return CONCAT31((int3)((uint)piVar1 >> 8),1);
  }
  return 0;
}

