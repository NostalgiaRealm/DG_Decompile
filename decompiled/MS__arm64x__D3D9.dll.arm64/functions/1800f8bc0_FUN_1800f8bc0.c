/*
 * FUN_1800f8bc0 at 1800f8bc0
 * undefined FUN_1800f8bc0(void)
 * Address ranges: 1800f8bc0-1800f8c8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800f8bc0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  
  param_1 = param_1 + (param_2 & 0xffffffff) * 0x1ac0;
  lVar1 = *(longlong *)(param_1 + 0x1e18);
  if (lVar1 != 0) {
    FUN_1800e7eb0(lVar1);
    FUN_180102fc0(lVar1,3000);
  }
  lVar1 = *(longlong *)(param_1 + 0x1e10);
  *(undefined8 *)(param_1 + 0x1e18) = 0;
  if (lVar1 != 0) {
    FUN_1800eec40(lVar1);
    FUN_180102fc0(lVar1,0x40);
  }
  lVar1 = *(longlong *)(param_1 + 0x1e08);
  *(undefined8 *)(param_1 + 0x1e10) = 0;
  if (lVar1 != 0) {
    FUN_1800e7eb0(lVar1);
    FUN_180102fc0(lVar1,3000);
  }
  lVar1 = *(longlong *)(param_1 + 0x1e00);
  *(undefined8 *)(param_1 + 0x1e08) = 0;
  if (lVar1 != 0) {
    FUN_1800eec40(lVar1);
    FUN_180102fc0(lVar1,0x40);
  }
  lVar1 = *(longlong *)(param_1 + 0x2258);
  *(undefined8 *)(param_1 + 0x1e00) = 0;
  if (lVar1 != 0) {
    (**(code **)(**(longlong **)(lVar1 + 0x10) + 0x10))();
    *(undefined8 *)(lVar1 + 0x10) = 0;
    *(undefined4 *)(lVar1 + 0x18) = 0;
    FUN_180102fc0(lVar1,0x20);
    *(undefined8 *)(param_1 + 0x2258) = 0;
  }
  return;
}

