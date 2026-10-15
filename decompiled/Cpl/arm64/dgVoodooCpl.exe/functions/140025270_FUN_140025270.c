/*
 * FUN_140025270 at 140025270
 * undefined8 __cdecl FUN_140025270(undefined8 param_1)
 * Address ranges: 140025270-1400252ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140025270(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_14002c2bc < DAT_14002c2b8) {
    *(undefined8 *)(DAT_14002c2b0 + (ulonglong)DAT_14002c2bc * 8) = param_1;
    DAT_14002c2bc = DAT_14002c2bc + 1;
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

