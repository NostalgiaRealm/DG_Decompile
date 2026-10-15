/*
 * FUN_1800e7eb0 at 1800e7eb0
 * undefined FUN_1800e7eb0(void)
 * Address ranges: 1800e7eb0-1800e7f7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e7eb0(undefined8 *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  *param_1 = &PTR_FUN_18023ba00;
  param_1[1] = &PTR_DAT_18023b9a8;
  uVar1 = *(uint *)(param_1 + 0x16a);
  if (uVar1 != 0xffffffff) {
    *(byte *)(param_1[0x168] + 0x18 + (longlong)((int)uVar1 >> 3)) =
         *(byte *)(param_1[0x168] + 0x18 + (longlong)((int)uVar1 >> 3)) &
         ((byte)(1 << (ulonglong)(uVar1 & 7)) ^ 0xff);
  }
  (**(code **)(*(longlong *)param_1[0xd1] + 0x10))();
  param_1[0xd1] = 0;
  uVar2 = 0;
  if (*(int *)((longlong)param_1 + 0xb64) != 0) {
    do {
      (**(code **)(*(longlong *)param_1[uVar2 + 0xd2] + 0x10))();
      param_1[uVar2 + 0xd2] = 0;
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)((longlong)param_1 + 0xb64));
  }
  thunk_FUN_180102fc0(param_1[0x174]);
  thunk_FUN_180102fc0(param_1[0x166]);
  thunk_FUN_180102fc0(param_1[0x164]);
  return;
}

