/*
 * FUN_180215e50 at 180215e50
 * undefined FUN_180215e50(void)
 * Address ranges: 180215e50-180215f0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180215e50(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  
  param_1 = param_1 + (param_2 & 0xffffffff) * 0x1ac0;
  lVar1 = *(longlong *)(param_1 + 0x1e18);
  if (lVar1 != 0) {
    FUN_180206d90(lVar1);
    FUN_1802229d8(lVar1,3000);
  }
  lVar1 = *(longlong *)(param_1 + 0x1e10);
  *(undefined8 *)(param_1 + 0x1e18) = 0;
  if (lVar1 != 0) {
    FUN_18020c138(lVar1);
    FUN_1802229d8(lVar1,0x40);
  }
  lVar1 = *(longlong *)(param_1 + 0x1e08);
  *(undefined8 *)(param_1 + 0x1e10) = 0;
  if (lVar1 != 0) {
    FUN_180206d90(lVar1);
    FUN_1802229d8(lVar1,3000);
  }
  lVar1 = *(longlong *)(param_1 + 0x1e00);
  *(undefined8 *)(param_1 + 0x1e08) = 0;
  if (lVar1 != 0) {
    FUN_18020c138(lVar1);
    FUN_1802229d8(lVar1,0x40);
  }
  lVar1 = *(longlong *)(param_1 + 0x2258);
  *(undefined8 *)(param_1 + 0x1e00) = 0;
  if (lVar1 != 0) {
    FUN_18021ce08(lVar1);
    FUN_1802229d8(lVar1,0x20);
    *(undefined8 *)(param_1 + 0x2258) = 0;
  }
  return;
}

