/*
 * FUN_1800a5438 at 1800a5438
 * undefined FUN_1800a5438(void)
 * Address ranges: 1800a5438-1800a546b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800a5438(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  if (uVar1 < 3) {
    uVar2 = *param_2;
    *(undefined8 *)(param_1 + (ulonglong)uVar1 * 4 + 8) = param_2[1];
    *(undefined8 *)(param_1 + (ulonglong)uVar1 * 4 + 6) = uVar2;
    *param_1 = *param_1 + 1;
  }
  return uVar1 < 3;
}

