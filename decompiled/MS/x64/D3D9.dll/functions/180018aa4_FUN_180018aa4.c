/*
 * FUN_180018aa4 at 180018aa4
 * int __fastcall FUN_180018aa4(uint param_1, uint param_2, uint param_3, uint param_4, int param_5)
 * Address ranges: 180018aa4-180018b76
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180018aa4(uint param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  
  iVar9 = 0;
  uVar10 = 0;
  if (param_4 != 0) {
    iVar3 = param_5;
    uVar5 = FUN_1800028a0(param_5);
    uVar6 = FUN_180002844(param_5);
    uVar7 = FUN_1800026c0(param_5);
    uVar12 = uVar7 & 0xffffffff;
    iVar3 = FUN_180002500(iVar3);
    do {
      bVar8 = (byte)uVar10;
      uVar11 = param_3 >> (bVar8 & 0x1f);
      uVar1 = param_1 >> (bVar8 & 0x1f);
      if (param_1 >> (bVar8 & 0x1f) == 0) {
        uVar1 = 1;
      }
      uVar2 = param_2 >> (bVar8 & 0x1f);
      if (param_2 >> (bVar8 & 0x1f) == 0) {
        uVar2 = 1;
      }
      if (param_3 >> (bVar8 & 0x1f) == 0) {
        uVar11 = 1;
      }
      iVar4 = FUN_180031910(uVar1,uVar2,uVar11,iVar3,(int)uVar12,(uint)uVar6,(uint)uVar5);
      uVar12 = uVar7 & 0xffffffff;
      iVar9 = iVar9 + iVar4;
      uVar10 = uVar10 + 1;
    } while (uVar10 < param_4);
  }
  return iVar9;
}

