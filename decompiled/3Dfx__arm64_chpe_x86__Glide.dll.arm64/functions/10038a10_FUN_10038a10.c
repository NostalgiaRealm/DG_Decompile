/*
 * FUN_10038a10 at 10038a10
 * undefined FUN_10038a10(void)
 * Address ranges: 10038a10-10038a87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10038a10(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  FUN_10029910(iVar1,param_1[1],param_1[2],param_1[3]);
  if (param_1[4] != 0) {
    FUN_1006dc00(*(int *)(iVar1 + 0x3188) + 0x14f0,param_1[5],param_1[4],param_1[6]);
  }
  return;
}

