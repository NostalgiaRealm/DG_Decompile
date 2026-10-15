/*
 * FUN_1800ec7e8 at 1800ec7e8
 * undefined FUN_1800ec7e8(void)
 * Address ranges: 1800ec7e8-1800ec83f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800ec7e8(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  param_1 = param_1 + (param_2 & 0xffffffff) * 0x1ac0;
  uVar1 = FUN_180101e70(param_1 + 0x1518);
  if ((uVar1 & 1) == 0) {
    FUN_180101df0(param_1 + 0x1518);
  }
  FUN_1800e8548(*(longlong *)(param_1 + 0x1760) + 8,0);
  FUN_1800eee40(*(undefined8 *)(*(longlong *)(param_1 + 0x1760) + 0xb10),
                *(undefined8 *)(*(longlong *)(param_1 + 0x1760) + 0xb80));
  return;
}

