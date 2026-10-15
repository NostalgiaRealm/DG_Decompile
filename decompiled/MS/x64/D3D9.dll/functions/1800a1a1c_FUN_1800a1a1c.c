/*
 * FUN_1800a1a1c at 1800a1a1c
 * undefined __fastcall FUN_1800a1a1c(longlong param_1, uint param_2, RECT * param_3)
 * Address ranges: 1800a1a1c-1800a1a93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a1a1c(longlong param_1,uint param_2,RECT *param_3)

{
  longlong lVar1;
  byte *pbVar2;
  ulonglong uVar3;
  LPRECT ptVar4;
  ulonglong uVar5;
  
  ptVar4 = (LPRECT)(*(longlong *)(param_1 + 0x1c8) + ((ulonglong)param_2 << 5 | 0x10));
  UnionRect(ptVar4,ptVar4,param_3);
  ptVar4 = (LPRECT)(*(longlong *)(param_1 + 0x218) + ((ulonglong)param_2 << 5 | 0x10));
  UnionRect(ptVar4,ptVar4,param_3);
  uVar5 = (ulonglong)(param_2 >> 6);
  uVar3 = (ulonglong)(param_2 & 0x3f);
  lVar1 = (longlong)uVar3 >> 3;
  pbVar2 = (byte *)(param_1 + 0x250 + uVar5 * 8 + lVar1);
  *pbVar2 = *pbVar2 & ~('\x01' << (uVar3 & 7));
  pbVar2 = (byte *)(param_1 + 0x280 + uVar5 * 8 + lVar1);
  *pbVar2 = *pbVar2 & ~('\x01' << (uVar3 & 7));
  pbVar2 = (byte *)(param_1 + 0x260 + uVar5 * 8 + lVar1);
  *pbVar2 = *pbVar2 & ~('\x01' << (uVar3 & 7));
  return;
}

