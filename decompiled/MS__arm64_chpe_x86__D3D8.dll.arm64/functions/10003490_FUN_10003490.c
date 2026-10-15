/*
 * FUN_10003490 at 10003490
 * undefined FUN_10003490(void)
 * Address ranges: 10003490-100034bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10003490(int param_1)

{
  undefined8 uVar1;
  
  if ((param_1 - 0x46U < 0xb) && ((0x6abU >> (ulonglong)(param_1 - 0x46U & 0x1f) & 1) != 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

