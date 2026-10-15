/*
 * FUN_1800c3228 at 1800c3228
 * undefined FUN_1800c3228(void)
 * Address ranges: 1800c3228-1800c3283
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800c3228(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  iVar1 = FUN_180001590(param_1 + 8);
  if (*(int *)(param_1 + 0xc) + iVar1 == 0) {
    FUN_1800c2ec8(param_1);
  }
  if (iVar1 == 0) {
    FUN_1800a9f28(lVar2 + 0x6838);
  }
  return iVar1;
}

