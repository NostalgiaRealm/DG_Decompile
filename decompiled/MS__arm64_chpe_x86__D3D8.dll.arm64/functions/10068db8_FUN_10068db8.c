/*
 * FUN_10068db8 at 10068db8
 * undefined FUN_10068db8(void)
 * Address ranges: 10068db8-10068e07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10068db8(undefined8 param_1,byte *param_2,ulonglong param_3)

{
  uint uVar1;
  
  if ((param_3 & 0x100000000) != 0) {
    uVar1 = (uint)(param_3 >> 0x21);
    if ((uVar1 & 3) == 0) {
      param_2[4] = param_2[4] | 1;
    }
    else if (((ulonglong)uVar1 & 3) - 1 < 3) {
      *param_2 = *param_2 | 0xc;
    }
  }
  if ((int)param_3 < 0) {
    param_2[1] = 0xf;
  }
  return;
}

