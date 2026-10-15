/*
 * FUN_1002d2f0 at 1002d2f0
 * undefined FUN_1002d2f0(void)
 * Address ranges: 1002d2f0-1002d36b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002d2f0(undefined4 *param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  
  puVar1 = (undefined1 *)param_1[9];
  uVar2 = FUN_1001e2b0(*param_1,param_1[1],param_1[2],*(undefined1 *)(param_1 + 3),param_1[4],
                       param_1[5],param_1[6],param_1[7],*(undefined1 *)(param_1 + 8));
  *puVar1 = uVar2;
  return;
}

