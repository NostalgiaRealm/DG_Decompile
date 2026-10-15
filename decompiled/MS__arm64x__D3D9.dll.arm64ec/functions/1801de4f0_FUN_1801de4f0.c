/*
 * FUN_1801de4f0 at 1801de4f0
 * undefined FUN_1801de4f0(void)
 * Address ranges: 1801de4f0-1801de54b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1801de4f0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  iVar1 = FUN_1801042d0(param_1 + 8);
  if (*(int *)(param_1 + 0xc) + iVar1 == 0) {
    FUN_1801de180(param_1);
  }
  if (iVar1 == 0) {
    FUN_1801c3098(lVar2 + 0x6838);
  }
  return iVar1;
}

