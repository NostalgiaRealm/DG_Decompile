/*
 * FUN_18004e198 at 18004e198
 * undefined __cdecl FUN_18004e198(undefined8 * param_1)
 * Address ranges: 18004e198-18004e263
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004e198(undefined8 *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  *param_1 = &PTR_FUN_1800695c8;
  param_1[1] = &PTR_LAB_180069570;
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
  thunk_FUN_180063700((LPVOID)param_1[0x174]);
  thunk_FUN_180063700((LPVOID)param_1[0x166]);
  thunk_FUN_180063700((LPVOID)param_1[0x164]);
  return;
}

