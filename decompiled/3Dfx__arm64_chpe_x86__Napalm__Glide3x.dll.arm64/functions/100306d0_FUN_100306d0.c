/*
 * FUN_100306d0 at 100306d0
 * undefined FUN_100306d0(void)
 * Address ranges: 100306d0-10030737
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100306d0(undefined4 *param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  
  puVar1 = (undefined1 *)param_1[8];
  uVar2 = FUN_1001ec60(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                       param_1[7]);
  *puVar1 = uVar2;
  return;
}

