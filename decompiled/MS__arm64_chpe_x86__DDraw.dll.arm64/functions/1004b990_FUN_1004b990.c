/*
 * FUN_1004b990 at 1004b990
 * undefined FUN_1004b990(void)
 * Address ranges: 1004b990-1004bbeb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_1004b990(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 *extraout_w8;
  undefined4 *extraout_w8_00;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  for (iVar8 = param_2; *(int *)(iVar8 + 0x10c) != 0; iVar8 = *(int *)(iVar8 + 0x10c)) {
  }
  uVar10 = *(uint *)(param_2 + 0x1b8) >> 0xc & 1;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(iVar8);
  bVar4 = FUN_1004b5c0(param_1,iVar8);
  iVar9 = iVar8;
  bVar6 = bVar4;
  while( true ) {
    if (bVar6 == 0) {
      return bVar4;
    }
    if (iVar9 == 0) break;
    if (uVar10 == 0) {
      bVar4 = FUN_1004b5c0(param_1,iVar9);
      bVar6 = bVar4;
    }
    if (*(int *)(iVar9 + 0x118) != 0) {
      bVar4 = FUN_1004b5c0(param_1,*(int *)(iVar9 + 0x118));
      bVar4 = bVar4 & bVar6;
      bVar6 = bVar4;
    }
    uVar7 = 0;
    do {
      iVar2 = *(int *)(iVar9 + 0x120 + uVar7 * 4);
      if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 0x118), iVar2 != 0)) {
        bVar4 = FUN_1004b5c0(param_1,iVar2);
        bVar6 = bVar4 & bVar6;
        bVar4 = bVar6;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 5);
    iVar9 = *(int *)(iVar9 + 0x110);
  }
  if (uVar10 == 0) {
    return bVar4;
  }
  iVar9 = *(int *)(iVar8 + 0x110);
  if (iVar9 != 0) {
    do {
      *(undefined4 *)(*(int *)(iVar9 + 4) + 0x50) = *(undefined4 *)(*(int *)(iVar8 + 4) + 0x50);
      if (DAT_100c291c != 0) {
        uVar5 = (*pcVar3)();
        (*extraout_w11_00)(uVar5,*extraout_w8,iVar9);
      }
      iVar9 = *(int *)(iVar9 + 0x110);
    } while (iVar9 != 0);
  }
  uVar10 = 0;
  do {
    piVar1 = (int *)(iVar8 + 0x120 + uVar10 * 4);
    while (iVar9 = *piVar1, iVar9 != 0) {
      *(undefined4 *)(*(int *)(iVar9 + 4) + 0x50) = *(undefined4 *)(*(int *)(iVar8 + 4) + 0x50);
      if (DAT_100c291c != 0) {
        uVar5 = (*pcVar3)();
        (*extraout_w11_01)(uVar5,*extraout_w8_00,iVar9);
      }
      piVar1 = (int *)(iVar9 + 0x110);
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 < 5);
  return bVar6;
}

