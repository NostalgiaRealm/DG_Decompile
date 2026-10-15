/*
 * FUN_10023e86 at 10023e86
 * undefined4 __fastcall FUN_10023e86(int param_1)
 * Address ranges: 10023e86-10023eb0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10023e86(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_1000eeed(*(int *)(param_1 + 0x10) + 0x20);
  *(int **)(param_1 + 4) = piVar1;
  if (piVar1 != (int *)0x0) {
    piVar1 = FUN_100ada8e(piVar1,0,*(uint *)(param_1 + 0x10));
    return CONCAT31((int3)((uint)piVar1 >> 8),1);
  }
  return 0;
}

