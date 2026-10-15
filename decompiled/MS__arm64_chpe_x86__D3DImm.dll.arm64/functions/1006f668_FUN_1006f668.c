/*
 * FUN_1006f668 at 1006f668
 * undefined FUN_1006f668(void)
 * Address ranges: 1006f668-1006f723
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1006f668(undefined8 param_1,uint *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = 0x100;
  if (param_2[9] == 0) {
    uVar1 = 0;
  }
  uVar2 = 0x80;
  if (param_2[8] == 0) {
    uVar2 = 0;
  }
  uVar3 = 0x40;
  if (param_2[6] == 0) {
    uVar3 = 0;
  }
  uVar4 = 0x20;
  if (param_2[7] == 0) {
    uVar4 = 0;
  }
  uVar5 = 0x10;
  if (param_2[2] == 0) {
    uVar5 = 0;
  }
  return (((ulonglong)*param_2 & 3) << 2 | uVar1 | uVar2 | uVar3 | uVar4 | uVar5 |
         (ulonglong)param_2[1] & 3) ^ (ulonglong)param_2[5] |
         (ulonglong)(param_2[4] ^ param_2[3]) << 0x20;
}

