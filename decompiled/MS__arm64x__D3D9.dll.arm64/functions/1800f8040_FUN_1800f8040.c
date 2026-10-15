/*
 * FUN_1800f8040 at 1800f8040
 * undefined FUN_1800f8040(void)
 * Address ranges: 1800f8040-1800f8093
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800f8040(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_180001590(param_1 + 3);
  if ((iVar1 == 0) && (param_1 != (undefined8 *)0x0)) {
    *param_1 = &PTR_FUN_18023c438;
    thunk_FUN_180102fc0(param_1[2]);
    FUN_180102fc0(param_1,0x20);
  }
  return iVar1;
}

