/*
 * FUN_100af3e0 at 100af3e0
 * undefined FUN_100af3e0(void)
 * Address ranges: 100af3e0-100af41f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100af3e0(undefined4 param_1)

{
  bool bVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_10004690(param_1);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    FUN_10001700(param_1);
  }
  return bVar1;
}

