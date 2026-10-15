/*
 * FUN_180017994 at 180017994
 * int __fastcall FUN_180017994(uint param_1, uint param_2, uint param_3, int param_4, int param_5)
 * Address ranges: 180017994-180017a65
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180017994(uint param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  
  iVar10 = 0;
  uVar11 = 0;
  if (param_3 != 0) {
    iVar3 = param_5;
    uVar5 = FUN_1800028a0(param_5);
    uVar6 = FUN_180002844(param_5);
    uVar7 = FUN_1800026c0(param_5);
    iVar3 = FUN_180002500(iVar3);
    do {
      bVar1 = (byte)uVar11 & 0x1f;
      bVar2 = (byte)uVar11 & 0x1f;
      uVar9 = 1;
      if (param_2 >> bVar1 != 0) {
        uVar9 = param_2 >> bVar1;
      }
      uVar8 = 1;
      if (param_1 >> bVar2 != 0) {
        uVar8 = param_1 >> bVar2;
      }
      iVar4 = FUN_180031910(uVar8,uVar9,1,iVar3,(int)uVar7,(uint)uVar6,(uint)uVar5);
      iVar10 = iVar10 + iVar4;
      uVar11 = uVar11 + 1;
    } while (uVar11 < param_3);
  }
  return iVar10 * param_4;
}

