/*
 * FUN_100212a0 at 100212a0
 * undefined FUN_100212a0(void)
 * Address ranges: 100212a0-1002137b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100212a0(uint param_1,uint param_2,uint param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 extraout_w11;
  uint uVar8;
  int iVar9;
  
  iVar9 = 0;
  uVar8 = 0;
  if (param_3 != 0) {
    uVar3 = FUN_100034b0(param_5);
    uVar4 = FUN_100036b0(param_5);
    FUN_100035f0(param_5);
    uVar5 = FUN_10003300(param_5);
    do {
      uVar1 = param_1 >> (ulonglong)(uVar8 & 0x1f);
      if (uVar1 == 0) {
        uVar1 = 1;
      }
      uVar2 = param_2 >> (ulonglong)(uVar8 & 0x1f);
      iVar6 = FUN_1003ef60(uVar1,uVar5,extraout_w11,uVar3,1);
      if (uVar2 == 0) {
        uVar2 = 1;
      }
      iVar7 = FUN_1003ebe0(uVar2,uVar4,uVar3);
      uVar8 = uVar8 + 1;
      iVar9 = iVar9 + iVar6 * iVar7;
    } while (uVar8 < param_3);
  }
  return iVar9 * param_4;
}

