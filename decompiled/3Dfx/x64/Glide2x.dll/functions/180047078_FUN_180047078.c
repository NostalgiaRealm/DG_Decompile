/*
 * FUN_180047078 at 180047078
 * undefined __fastcall FUN_180047078(undefined8 * param_1)
 * Address ranges: 180047078-18004712d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180047078(undefined8 *param_1)

{
  byte *pbVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *param_1 = &PTR_FUN_180064328;
  param_1[1] = &PTR_LAB_1800642d0;
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
  FUN_18005d720((LPVOID)param_1[0x174]);
  FUN_18005d720((LPVOID)param_1[0x166]);
  FUN_18005d720((LPVOID)param_1[0x164]);
  return;
}

