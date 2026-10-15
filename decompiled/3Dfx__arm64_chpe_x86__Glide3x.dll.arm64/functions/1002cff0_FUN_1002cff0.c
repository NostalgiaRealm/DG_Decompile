/*
 * FUN_1002cff0 at 1002cff0
 * undefined FUN_1002cff0(void)
 * Address ranges: 1002cff0-1002d057
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002cff0(undefined4 *param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  
  puVar1 = (undefined1 *)param_1[8];
  uVar2 = FUN_1001dfc0(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],
                       *(undefined1 *)(param_1 + 5),param_1[6],*(undefined1 *)(param_1 + 7));
  *puVar1 = uVar2;
  return;
}

