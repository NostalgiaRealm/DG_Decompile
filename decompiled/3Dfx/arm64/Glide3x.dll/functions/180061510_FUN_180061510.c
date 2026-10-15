/*
 * FUN_180061510 at 180061510
 * undefined __cdecl FUN_180061510(undefined8 param_1, longlong param_2, longlong param_3, uint param_4, ulonglong param_5)
 * Address ranges: 180061510-18006161b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180061510(undefined8 param_1,longlong param_2,longlong param_3,uint param_4,
                  ulonglong param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = (uint)param_5;
  if (param_4 < uVar3) {
    uVar2 = param_4;
    do {
      uVar1 = (uVar2 & 0xffffffc0) + 0x40;
      uVar5 = -1L << ((ulonglong)uVar2 & 0x3f);
      if (uVar3 < uVar1) {
        uVar5 = 0xffffffffffffffffU >> (0x40 - param_5 & 0x3f) & uVar5;
      }
      *(ulonglong *)(param_2 + (ulonglong)(uVar2 >> 6) * 8) =
           *(ulonglong *)(param_2 + (ulonglong)(uVar2 >> 6) * 8) & (uVar5 ^ 0xffffffffffffffff);
      uVar2 = uVar1;
    } while (uVar1 < uVar3);
  }
  uVar5 = (ulonglong)param_4 + 0x3f >> 6;
  if ((uint)uVar5 < uVar3 >> 6) {
    do {
      uVar2 = ((uint)uVar5 & 0xffffffc0) + 0x40;
      uVar4 = -1L << (uVar5 & 0x3f);
      if (uVar3 >> 6 < uVar2) {
        uVar4 = 0xffffffffffffffffU >> (0x40 - (param_5 >> 6 & 0x3f) & 0x3f) & uVar4;
      }
      *(ulonglong *)(param_3 + (uVar5 >> 6) * 8) =
           *(ulonglong *)(param_3 + (uVar5 >> 6) * 8) & (uVar4 ^ 0xffffffffffffffff);
      uVar5 = (ulonglong)uVar2;
    } while (uVar2 < uVar3 >> 6);
  }
  uVar4 = *(ulonglong *)(param_3 + (ulonglong)(param_4 >> 0xc) * 8);
  uVar6 = 1L << ((ulonglong)(param_4 >> 6) & 0x3f);
  uVar8 = param_5 >> 6 & 0x3ffffff;
  uVar5 = uVar4 & (uVar6 ^ 0xffffffffffffffff);
  if (*(longlong *)(param_2 + (ulonglong)(param_4 >> 6) * 8) == -1) {
    uVar5 = uVar6 | uVar4;
  }
  *(ulonglong *)(param_3 + (ulonglong)(param_4 >> 0xc) * 8) = uVar5;
  uVar5 = uVar8 - 1;
  if ((param_5 & 0x3f) != 0) {
    uVar5 = uVar8;
  }
  uVar8 = uVar5 >> 6 & 0x3ffffff;
  uVar6 = *(ulonglong *)(param_3 + uVar8 * 8);
  uVar7 = 1L << (uVar5 & 0x3f);
  uVar4 = uVar6 & (uVar7 ^ 0xffffffffffffffff);
  if (*(longlong *)(param_2 + (uVar5 & 0xffffffff) * 8) == -1) {
    uVar4 = uVar7 | uVar6;
  }
  *(ulonglong *)(param_3 + uVar8 * 8) = uVar4;
  return;
}

