/*
 * FUN_180222560 at 180222560
 * undefined FUN_180222560(void)
 * Address ranges: 180222560-180222597
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180222560(longlong param_1)

{
  int iVar1;
  undefined4 local_10;
  int local_c;
  
  iVar1 = thunk_FUN_180223b08(*(undefined8 *)(param_1 + 8),&local_10);
  if ((iVar1 != 0) && (local_c == 0)) {
    return local_10;
  }
  return 0;
}

