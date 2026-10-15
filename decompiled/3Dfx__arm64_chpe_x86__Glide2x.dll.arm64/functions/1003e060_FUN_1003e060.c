/*
 * FUN_1003e060 at 1003e060
 * undefined FUN_1003e060(void)
 * Address ranges: 1003e060-1003e0c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003e060(undefined4 *param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  
  puVar1 = (undefined1 *)param_1[8];
  uVar2 = FUN_1002d230(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                       param_1[7]);
  *puVar1 = uVar2;
  return;
}

