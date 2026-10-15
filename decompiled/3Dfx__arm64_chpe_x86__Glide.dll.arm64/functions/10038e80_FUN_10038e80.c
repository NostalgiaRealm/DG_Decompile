/*
 * FUN_10038e80 at 10038e80
 * undefined FUN_10038e80(void)
 * Address ranges: 10038e80-10038eef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10038e80(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  FUN_10029960(iVar1,param_1[1],param_1[2]);
  if (param_1[3] != 0) {
    FUN_1006dc00(*(int *)(iVar1 + 0x3188) + 0x14f0,param_1[5],param_1[3],param_1[4]);
  }
  return;
}

