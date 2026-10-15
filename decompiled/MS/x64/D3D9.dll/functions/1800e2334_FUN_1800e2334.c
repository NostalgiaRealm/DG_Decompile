/*
 * FUN_1800e2334 at 1800e2334
 * undefined __fastcall FUN_1800e2334(undefined8 * param_1)
 * Address ranges: 1800e2334-1800e23e9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e2334(undefined8 *param_1)

{
  byte *pbVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *param_1 = &PTR_FUN_180106980;
  param_1[1] = &PTR_LAB_180106928;
  uVar2 = *(uint *)(param_1 + 0x16a);
  if (uVar2 != 0xffffffff) {
    pbVar1 = (byte *)(param_1[0x168] + 0x18 + ((longlong)(int)uVar2 >> 3));
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar2 & 7));
  }
  (**(code **)(*(longlong *)param_1[0xd1] + 0x10))();
  uVar3 = 0;
  param_1[0xd1] = 0;
  if (*(int *)((longlong)param_1 + 0xb64) != 0) {
    do {
      (**(code **)(*(longlong *)param_1[uVar3 + 0xd2] + 0x10))();
      param_1[uVar3 + 0xd2] = 0;
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)((longlong)param_1 + 0xb64));
  }
  FUN_1800fbcf0((LPVOID)param_1[0x174]);
  FUN_1800fbcf0((LPVOID)param_1[0x166]);
  FUN_1800fbcf0((LPVOID)param_1[0x164]);
  return;
}

