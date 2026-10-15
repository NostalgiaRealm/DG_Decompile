/*
 * FUN_1002c300 at 1002c300
 * undefined FUN_1002c300(void)
 * Address ranges: 1002c300-1002c32f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002c300(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)param_1[1];
  uVar2 = FUN_1001db60(*param_1);
  *puVar1 = uVar2;
  return;
}

