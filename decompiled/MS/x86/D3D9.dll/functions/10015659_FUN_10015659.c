/*
 * FUN_10015659 at 10015659
 * int __fastcall FUN_10015659(uint param_1, uint param_2, uint param_3, uint param_4, int param_5)
 * Address ranges: 10015659-100156e2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_10015659(uint param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  int extraout_ECX;
  int extraout_ECX_00;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  uVar10 = 0;
  iVar12 = 0;
  if (param_4 != 0) {
    uVar2 = FUN_10002621(param_5);
    uVar3 = FUN_100025c9(extraout_ECX);
    iVar4 = FUN_10002447(extraout_ECX_00);
    iVar5 = FUN_10002297(param_5);
    do {
      bVar8 = (byte)uVar10;
      uVar11 = param_1 >> (bVar8 & 0x1f);
      uVar9 = param_2 >> (bVar8 & 0x1f);
      uVar6 = param_3 >> (bVar8 & 0x1f);
      uVar1 = 1;
      if (uVar11 == 0) {
        uVar11 = uVar1;
      }
      if (uVar9 == 0) {
        uVar9 = uVar1;
      }
      if (uVar6 == 0) {
        uVar6 = uVar1;
      }
      iVar7 = FUN_1002cd0b(uVar11,uVar9,uVar6,iVar5,iVar4,uVar3,uVar2);
      iVar12 = iVar12 + iVar7;
      uVar10 = uVar10 + 1;
    } while (uVar10 < param_4);
  }
  return iVar12;
}

