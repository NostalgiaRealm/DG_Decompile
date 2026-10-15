/*
 * FUN_180091c30 at 180091c30
 * undefined __fastcall FUN_180091c30(longlong param_1, int param_2, int param_3, float param_4, float param_5, float param_6, float param_7, byte param_8)
 * Address ranges: 180091c30-180091eb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180091c30(longlong param_1,int param_2,int param_3,float param_4,float param_5,
                  float param_6,float param_7,byte param_8)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  byte *pbVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  byte bVar10;
  uint uVar11;
  ulonglong uVar12;
  bool bVar13;
  
  cVar1 = *(char *)(*(longlong *)(*(longlong *)(param_1 + 0x110) + 8) + 0x84);
  uVar5 = param_3 * *(int *)(param_1 + 0x3c) + param_2;
  uVar8 = (ulonglong)(uVar5 & 0x3f);
  uVar9 = (ulonglong)(uVar5 >> 6);
  lVar3 = (longlong)uVar8 >> 3;
  bVar13 = (*(byte *)(param_1 + 0x260 + uVar9 * 8 + lVar3) >> (uVar8 & 7) & 1) != 0;
  if (*(int *)(param_1 + 0x2c) == 0) {
    FUN_18008d228(*(longlong *)(param_1 + 0x110),1,*(longlong *)(param_1 + 0x10));
    bVar13 = (*(byte *)(param_1 + 0x270 + uVar9 * 8 + lVar3) >> (uVar8 & 7) & 1) == 0 && bVar13;
  }
  uVar2 = *(uint *)(param_1 + 0x2c);
  uVar12 = (ulonglong)uVar2;
  bVar10 = (param_8 ^ 1) & bVar13;
  uVar11 = 1;
  if (*(char *)(param_1 + 0x248) == '\0') {
    uVar11 = *(uint *)(&DAT_1800feb70 + uVar12 * 4);
  }
  uVar6 = 0;
  if (bVar10 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x1e8);
  }
  lVar7 = *(longlong *)(param_1 + 0x1a0);
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(param_1 + 0x198);
  }
  FUN_18008d560(*(longlong *)(param_1 + 0x110),(ulonglong)uVar2,uVar2,param_2,param_3,param_2,
                param_3,*(float *)(param_1 + 0x240) * param_4,*(float *)(param_1 + 0x244) * param_5,
                *(float *)(param_1 + 0x240) * param_6,*(float *)(param_1 + 0x244) * param_7,param_4,
                param_5,param_6,param_7,*(undefined8 *)(param_1 + 0x78),
                *(undefined8 *)(*(longlong *)(param_1 + 0x90) + (ulonglong)uVar5 * 0x28),0,lVar7,
                *(undefined8 *)(param_1 + 0x1a8),uVar6,0,0,cVar1,
                ((~-(uint)((&DAT_1800ff0a8)[uVar12] != '\0') & 0x10 | (uint)bVar10 | 0xffe00000) <<
                 6 | -(uint)(cVar1 != '\0') & 0x18 | uVar11 & 7) << 4 |
                *(uint *)(&DAT_1800ff0e0 + uVar12 * 4) & 0xf,1);
  pbVar4 = (byte *)(param_1 + 0x270 + uVar9 * 8 + lVar3);
  *pbVar4 = *pbVar4 & ~('\x01' << (uVar8 & 7));
  pbVar4 = (byte *)(param_1 + 0x250 + uVar9 * 8 + lVar3);
  *pbVar4 = *pbVar4 & ~('\x01' << (uVar8 & 7));
  pbVar4 = (byte *)(param_1 + 0xf0 + uVar9 * 8 + lVar3);
  *pbVar4 = *pbVar4 | '\x01' << (uVar8 & 7);
  pbVar4 = (byte *)(param_1 + 0x260 + uVar9 * 8 + lVar3);
  *pbVar4 = *pbVar4 & ~('\x01' << (uVar8 & 7));
                    /* WARNING: Could not recover jumptable at 0x000180091eb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetRectEmpty((LPRECT)(*(longlong *)(param_1 + 0x1b0) + ((ulonglong)uVar5 * 5 + 3) * 8));
  return;
}

