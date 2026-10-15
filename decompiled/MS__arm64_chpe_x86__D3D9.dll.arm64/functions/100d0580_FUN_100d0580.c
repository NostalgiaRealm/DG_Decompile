/*
 * FUN_100d0580 at 100d0580
 * undefined FUN_100d0580(void)
 * Address ranges: 100d0580-100d05c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100d0580(undefined4 param_1)

{
  bool bVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_10005030(param_1);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    FUN_100d00b0(param_1);
    FUN_10001750(param_1);
  }
  return bVar1;
}

