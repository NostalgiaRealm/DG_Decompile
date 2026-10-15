/*
 * FUN_1002d950 at 1002d950
 * undefined FUN_1002d950(void)
 * Address ranges: 1002d950-1002d9b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002d950(undefined4 *param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  
  puVar1 = (undefined1 *)param_1[8];
  uVar2 = FUN_1001e640(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                       param_1[7]);
  *puVar1 = uVar2;
  return;
}

