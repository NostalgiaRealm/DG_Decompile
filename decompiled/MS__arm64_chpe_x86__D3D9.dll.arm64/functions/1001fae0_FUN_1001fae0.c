/*
 * FUN_1001fae0 at 1001fae0
 * undefined FUN_1001fae0(void)
 * Address ranges: 1001fae0-1001fb23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001fae0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_1003da50(param_1);
  *(bool *)(param_1 + 0x27) = iVar1 != 0;
  if (iVar1 == 0) {
    FUN_1003d7c8(param_1,0);
  }
  return;
}

