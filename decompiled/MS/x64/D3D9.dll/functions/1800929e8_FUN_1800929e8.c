/*
 * FUN_1800929e8 at 1800929e8
 * undefined __fastcall FUN_1800929e8(longlong param_1, uint param_2, RECT * param_3)
 * Address ranges: 1800929e8-180092a6c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800929e8(longlong param_1,uint param_2,RECT *param_3)

{
  LPRECT ptVar1;
  longlong lVar2;
  byte *pbVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  ptVar1 = (LPRECT)(*(longlong *)(param_1 + 0x1b0) + 0x18 + (ulonglong)param_2 * 0x28);
  UnionRect(ptVar1,ptVar1,param_3);
  ptVar1 = (LPRECT)(*(longlong *)(param_1 + 0x1f0) + ((ulonglong)param_2 * 5 + 3) * 8);
  UnionRect(ptVar1,ptVar1,param_3);
  uVar5 = (ulonglong)(param_2 >> 6);
  uVar4 = (ulonglong)(param_2 & 0x3f);
  lVar2 = (longlong)uVar4 >> 3;
  pbVar3 = (byte *)(param_1 + 0x250 + uVar5 * 8 + lVar2);
  *pbVar3 = *pbVar3 & ~('\x01' << (uVar4 & 7));
  pbVar3 = (byte *)(param_1 + 0x280 + uVar5 * 8 + lVar2);
  *pbVar3 = *pbVar3 & ~('\x01' << (uVar4 & 7));
  pbVar3 = (byte *)(param_1 + 0x260 + uVar5 * 8 + lVar2);
  *pbVar3 = *pbVar3 & ~('\x01' << (uVar4 & 7));
  *(undefined1 *)(param_1 + 0x16b) = 0;
  pbVar3 = (byte *)(param_1 + 0x158 + uVar5 * 8 + lVar2);
  *pbVar3 = *pbVar3 & ~('\x01' << (uVar4 & 7));
  return;
}

