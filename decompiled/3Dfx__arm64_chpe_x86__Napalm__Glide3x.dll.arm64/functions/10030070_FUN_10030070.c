/*
 * FUN_10030070 at 10030070
 * undefined FUN_10030070(void)
 * Address ranges: 10030070-100300eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10030070(undefined4 *param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  
  puVar1 = (undefined1 *)param_1[9];
  uVar2 = FUN_1001e8d0(*param_1,param_1[1],param_1[2],*(undefined1 *)(param_1 + 3),param_1[4],
                       param_1[5],param_1[6],param_1[7],*(undefined1 *)(param_1 + 8));
  *puVar1 = uVar2;
  return;
}

