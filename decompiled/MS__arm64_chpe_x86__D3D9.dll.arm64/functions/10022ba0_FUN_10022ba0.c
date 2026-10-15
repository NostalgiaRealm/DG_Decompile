/*
 * FUN_10022ba0 at 10022ba0
 * undefined FUN_10022ba0(void)
 * Address ranges: 10022ba0-10022c8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10022ba0(uint param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 extraout_w11;
  uint uVar9;
  int iVar10;
  
  iVar10 = 0;
  uVar9 = 0;
  if (param_4 != 0) {
    uVar4 = FUN_100034b0(param_5);
    uVar5 = FUN_100036b0(param_5);
    FUN_100035f0(param_5);
    uVar6 = FUN_10003300(param_5);
    do {
      uVar1 = param_3 >> (ulonglong)(uVar9 & 0x1f);
      uVar2 = param_1 >> (ulonglong)(uVar9 & 0x1f);
      if (uVar2 == 0) {
        uVar2 = 1;
      }
      uVar3 = param_2 >> (ulonglong)(uVar9 & 0x1f);
      iVar7 = FUN_1003ef60(uVar2,uVar6,extraout_w11,uVar4,1);
      if (uVar3 == 0) {
        uVar3 = 1;
      }
      iVar8 = FUN_1003ebe0(uVar3,uVar5,uVar4);
      if (uVar1 == 0) {
        uVar1 = 1;
      }
      uVar9 = uVar9 + 1;
      iVar10 = iVar10 + iVar7 * iVar8 * uVar1;
    } while (uVar9 < param_4);
  }
  return iVar10;
}

