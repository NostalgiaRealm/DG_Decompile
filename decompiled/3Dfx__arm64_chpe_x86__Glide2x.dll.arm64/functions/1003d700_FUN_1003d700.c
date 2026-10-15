/*
 * FUN_1003d700 at 1003d700
 * undefined FUN_1003d700(void)
 * Address ranges: 1003d700-1003d767
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003d700(undefined4 *param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  
  puVar1 = (undefined1 *)param_1[8];
  uVar2 = FUN_1002cb70(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],
                       *(undefined1 *)(param_1 + 5),param_1[6],*(undefined1 *)(param_1 + 7));
  *puVar1 = uVar2;
  return;
}

