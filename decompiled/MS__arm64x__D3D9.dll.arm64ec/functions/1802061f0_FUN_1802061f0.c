/*
 * FUN_1802061f0 at 1802061f0
 * undefined FUN_1802061f0(void)
 * Address ranges: 1802061f0-180206247
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1802061f0(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  param_1 = param_1 + (param_2 & 0xffffffff) * 0x1ac0;
  uVar1 = FUN_180221e70(param_1 + 0x1518);
  if ((uVar1 & 1) == 0) {
    FUN_180221ec0(param_1 + 0x1518);
  }
  FUN_180207560(*(longlong *)(param_1 + 0x1760) + 8,0);
  FUN_18020c3b0(*(undefined8 *)(*(longlong *)(param_1 + 0x1760) + 0xb10),
                *(undefined8 *)(*(longlong *)(param_1 + 0x1760) + 0xb80));
  return;
}

