/*
 * FUN_1004b960 at 1004b960
 * undefined FUN_1004b960(void)
 * Address ranges: 1004b960-1004bbcb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_1004b960(int param_1)

{
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  byte bVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  byte bVar13;
  uint uVar14;
  
  pcVar7 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar4 = 0;
  if (param_1 != 0) {
    iVar4 = param_1 + 0x17d8;
  }
  uVar9 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  uVar9 = (*extraout_w11)(uVar9);
  piVar3 = (int *)(param_1 + 0x17dc);
  (*pcVar7)();
  uVar10 = (*extraout_w11_00)(uVar9,&DAT_1009c3a0);
  puVar1 = (uint *)(param_1 + 0x17e4);
  uVar14 = 0;
  puVar2 = (uint *)(param_1 + 0x17e0);
  while( true ) {
    if (uVar10 <= uVar14) {
      uVar14 = 0;
      bVar13 = 1;
      while( true ) {
        if (*(uint *)(param_1 + 0x17e0) <= uVar14) {
          return bVar13;
        }
        uVar9 = (*pcVar7)();
        bVar8 = (*extraout_w11_02)(uVar9,iVar4);
        bVar13 = bVar8 & bVar13;
        if (bVar13 == 0) break;
        uVar14 = uVar14 + 1;
      }
      for (; uVar14 != 0; uVar14 = uVar14 - 1) {
        uVar9 = (*pcVar7)();
        (*extraout_w11_03)(uVar9,iVar4);
      }
      FUN_10081dc0(*piVar3);
      *piVar3 = 0;
      *(undefined4 *)(param_1 + 0x17e4) = 0;
      *(uint *)(param_1 + 0x17e0) = 0;
      return 0;
    }
    (*pcVar7)();
    iVar11 = (*extraout_w11_01)(uVar9,&DAT_1009c3a0,uVar14);
    if (iVar11 == 0) break;
    uVar5 = *puVar1;
    if (*puVar2 == uVar5) {
      uVar6 = uVar5 << 1;
      if (uVar5 == 0) {
        uVar6 = 0x10;
      }
      iVar12 = uVar6 * 4;
      if (uVar6 >> 0x1e != 0) {
        iVar12 = -1;
      }
      iVar12 = FUN_10081da0(iVar12);
      if (iVar12 == 0) {
        return 0;
      }
      FUN_10081ee0(iVar12,*piVar3,((ulonglong)*puVar1 & 0x3fffffff) << 2);
      FUN_10081dc0(*piVar3);
      *piVar3 = iVar12;
      *puVar1 = uVar6;
    }
    uVar14 = uVar14 + 1;
    *(int *)(*piVar3 + *puVar2 * 4) = iVar11;
    *puVar2 = *puVar2 + 1;
  }
  return 0;
}

