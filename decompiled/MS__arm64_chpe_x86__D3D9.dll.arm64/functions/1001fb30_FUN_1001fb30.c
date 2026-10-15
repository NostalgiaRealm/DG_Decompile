/*
 * FUN_1001fb30 at 1001fb30
 * undefined FUN_1001fb30(void)
 * Address ranges: 1001fb30-1001fc43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1001fb30(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  
  uVar5 = *(undefined4 *)(param_1 + 0x4c);
  uVar2 = FUN_100034b0(uVar5);
  uVar8 = *(undefined4 *)(param_1 + 4);
  uVar1 = *(undefined4 *)(param_1 + 8);
  auVar9 = FUN_100035f0(uVar5);
  uVar3 = FUN_10003300(uVar5,auVar9._8_8_,auVar9._0_8_ & 0xffffffff);
  iVar4 = FUN_1003ef60(uVar8,uVar3);
  uVar5 = FUN_100036b0(uVar5);
  iVar6 = FUN_1003ebe0(uVar1,uVar5,uVar2);
  iVar6 = iVar4 * iVar6 * (*(int *)(param_1 + 0x40) + 1);
  iVar4 = *(int *)(param_1 + 0x50);
  if (iVar4 != 0) {
    uVar5 = FUN_100034b0(iVar4);
    auVar9 = FUN_100035f0(iVar4);
    uVar2 = FUN_10003300(iVar4,auVar9._8_8_,auVar9._0_8_ & 0xffffffff);
    iVar7 = FUN_1003ef60(uVar8,uVar2);
    uVar8 = FUN_100036b0(iVar4);
    iVar4 = FUN_1003ebe0(uVar1,uVar8,uVar5);
    iVar6 = iVar6 + iVar7 * iVar4;
  }
  return iVar6;
}

