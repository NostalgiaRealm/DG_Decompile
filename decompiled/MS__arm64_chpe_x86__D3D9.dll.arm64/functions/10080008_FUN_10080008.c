/*
 * FUN_10080008 at 10080008
 * undefined FUN_10080008(void)
 * Address ranges: 10080008-10080057
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10080008(undefined8 param_1,byte *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  
  if ((param_3 >> 0x39 & 1) != 0) {
    uVar1 = param_3 >> 0x3a & 3;
    if (uVar1 == 0) {
      param_2[4] = param_2[4] | 1;
    }
    else if (uVar1 - 1 < 3) {
      *param_2 = *param_2 | 0xc;
    }
  }
  if ((param_3 >> 0x38 & 1) != 0) {
    param_2[1] = 0xf;
  }
  return;
}

