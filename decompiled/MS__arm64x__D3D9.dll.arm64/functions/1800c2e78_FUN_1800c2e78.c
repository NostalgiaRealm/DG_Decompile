/*
 * FUN_1800c2e78 at 1800c2e78
 * undefined FUN_1800c2e78(void)
 * Address ranges: 1800c2e78-1800c2ec7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800c2e78(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_180001590(param_1 + 1);
  if (*(int *)((longlong)param_1 + 0xc) + iVar1 == 0) {
    *param_1 = &PTR_FUN_180236860;
    FUN_180102fc0(param_1,0x20);
  }
  return iVar1;
}

