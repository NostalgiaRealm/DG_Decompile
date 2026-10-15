/*
 * FUN_180046538 at 180046538
 * undefined __fastcall FUN_180046538(longlong param_1, uint param_2, int param_3)
 * Address ranges: 180046538-1800465a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180046538(longlong param_1,uint param_2,int param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  uVar7 = (ulonglong)(ushort)param_2;
  uVar8 = (param_2 & 0xffff) + param_3;
  if ((param_2 & 0xffff) < uVar8) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 8 + (ulonglong)(param_2 >> 0x10) * 0x10);
    do {
      uVar5 = uVar7 >> 6;
      uVar4 = -1L << ((byte)uVar7 & 0x3f);
      uVar6 = ((uint)uVar7 & 0xffffffc0) + 0x40;
      uVar7 = (ulonglong)uVar6;
      uVar3 = 0xffffffffffffffffU >> (0x40 - ((byte)uVar8 & 0x3f) & 0x3f) & uVar4;
      if (uVar6 <= uVar8) {
        uVar3 = uVar4;
      }
      puVar1 = (ulonglong *)(lVar2 + uVar5 * 8);
      *puVar1 = *puVar1 & ~uVar3;
    } while (uVar6 < uVar8);
  }
  return;
}

