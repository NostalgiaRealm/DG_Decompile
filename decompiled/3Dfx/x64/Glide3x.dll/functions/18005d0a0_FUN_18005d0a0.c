/*
 * FUN_18005d0a0 at 18005d0a0
 * undefined __fastcall FUN_18005d0a0(undefined8 param_1, longlong param_2, longlong param_3, uint param_4, uint param_5)
 * Address ranges: 18005d0a0-18005d1c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005d0a0(undefined8 param_1,longlong param_2,longlong param_3,uint param_4,uint param_5)

{
  ulonglong *puVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if (param_4 < param_5) {
    uVar8 = (ulonglong)param_4;
    do {
      bVar2 = (byte)uVar8;
      uVar7 = uVar8 >> 6;
      uVar5 = ((uint)uVar8 & 0xffffffc0) + 0x40;
      uVar8 = (ulonglong)uVar5;
      uVar4 = -1L << (bVar2 & 0x3f);
      uVar3 = 0xffffffffffffffffU >> (-((byte)param_5 & 0x3f) & 0x3f) & uVar4;
      if (uVar5 <= param_5) {
        uVar3 = uVar4;
      }
      puVar1 = (ulonglong *)(param_2 + uVar7 * 8);
      *puVar1 = *puVar1 & ~uVar3;
    } while (uVar5 < param_5);
  }
  uVar8 = (ulonglong)param_4 + 0x3f >> 6;
  uVar5 = param_5 >> 6;
  if ((uint)uVar8 < uVar5) {
    do {
      uVar7 = uVar8 >> 6;
      uVar4 = -1L << ((byte)uVar8 & 0x3f);
      uVar6 = ((uint)uVar8 & 0xffffffc0) + 0x40;
      uVar8 = (ulonglong)uVar6;
      uVar3 = 0xffffffffffffffffU >> (-((byte)uVar5 & 0x3f) & 0x3f) & uVar4;
      if (uVar6 <= uVar5) {
        uVar3 = uVar4;
      }
      puVar1 = (ulonglong *)(param_3 + uVar7 * 8);
      *puVar1 = *puVar1 & ~uVar3;
    } while (uVar6 < uVar5);
  }
  uVar5 = param_5 >> 6;
  if ((param_5 & 0x3f) == 0) {
    uVar5 = (param_5 >> 6) - 1;
  }
  uVar6 = param_4 >> 6 & 0x3f;
  uVar8 = *(ulonglong *)(param_3 + (ulonglong)(param_4 >> 0xc) * 8);
  if (*(longlong *)(param_2 + (ulonglong)(param_4 >> 6) * 8) == -1) {
    uVar8 = uVar8 | 1L << uVar6;
  }
  else {
    uVar8 = uVar8 & ~(1L << uVar6);
  }
  *(ulonglong *)(param_3 + (ulonglong)(param_4 >> 0xc) * 8) = uVar8;
  uVar8 = *(ulonglong *)(param_3 + (ulonglong)(uVar5 >> 6) * 8);
  if (*(longlong *)(param_2 + (ulonglong)uVar5 * 8) == -1) {
    uVar8 = uVar8 | 1L << (uVar5 & 0x3f);
  }
  else {
    uVar8 = uVar8 & ~(1L << (uVar5 & 0x3f));
  }
  *(ulonglong *)(param_3 + (ulonglong)(uVar5 >> 6) * 8) = uVar8;
  return;
}

