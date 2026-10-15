/*
 * FUN_10004d10 at 10004d10
 * undefined FUN_10004d10(void)
 * Address ranges: 10004d10-10004ee7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10004d10(undefined4 param_1,int param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  uint uVar12;
  
  uVar11 = *param_3;
  iVar9 = param_2 * 0x228;
  (&DAT_10171504)[param_2 * 0x45] = param_3[1];
  (&DAT_101714fc)[param_2 * 0x45] = uVar11;
  (&DAT_1017150c)[param_2 * 0x45] = param_3[2];
  (&DAT_10171514)[param_2 * 0x8a] = *(undefined4 *)(param_3 + 3);
  uVar11 = *param_4;
  iVar8 = param_2 * 0x228;
  *(undefined8 *)(iVar8 + 0x10171520) = param_4[1];
  *(undefined8 *)(&DAT_10171518 + iVar8) = uVar11;
  uVar11 = param_4[2];
  (&DAT_1017156a)[iVar9] = 1;
  *(undefined8 *)(&DAT_10171528 + iVar8) = uVar11;
  iVar8 = *(int *)(DAT_10170ad0 + 0x780);
  if ((iVar8 == 6 || iVar8 < 3) || 8 < iVar8) {
    (*(code *)PTR_FUN_1016c270)(&DAT_10171530 + param_2 * 0x228);
  }
  else {
    uVar1 = *(uint *)(&DAT_10171518 + iVar9);
    uVar2 = *(uint *)(&DAT_1017151c + iVar9);
    uVar12 = *(uint *)(DAT_10170ad0 + 0x81a);
    uVar3 = *(uint *)(DAT_10170ad0 + 0x81e);
    uVar7 = *(uint *)(DAT_10170ad0 + 0x816);
    uVar6 = *(uint *)(DAT_10170ad0 + 0x812);
    uVar10 = uVar3;
    if (uVar12 == 0xffffffff) {
      uVar4 = uVar3 >> 0x10;
      uVar12 = 0;
      uVar10 = 0;
      if ((uVar4 != 0) && (uVar3 = uVar3 & 0xffff, uVar3 != 0)) {
        uVar10 = 0;
        if (uVar4 != 0) {
          uVar10 = (uVar3 * uVar1) / uVar4;
        }
        uVar12 = uVar1;
        if (uVar2 <= uVar10) {
          if (uVar3 == 0) {
                    /* WARNING: Does not return */
            uVar11 = SoftwareBreakpoint(0xf004,0x10004e24);
            (*(code *)uVar11)();
          }
          uVar12 = 0;
          uVar10 = uVar2;
          if (uVar3 != 0) {
            uVar12 = (uVar4 * uVar2) / uVar3;
          }
        }
      }
    }
    if (uVar6 == 0xffffffff && uVar7 == 0xffffffff) {
      uVar6 = uVar1 - uVar12 >> 1;
      uVar7 = uVar2 - uVar10 >> 1;
    }
    iVar8 = uVar12 + uVar6;
    if ((iVar8 <= (int)uVar6) || (iVar9 = uVar10 + uVar7, iVar9 <= (int)uVar7)) {
      iVar9 = 0;
      uVar7 = 0;
      iVar8 = 0;
      uVar6 = 0;
    }
    (*(code *)PTR_FUN_1016c26c)(&DAT_10171530 + param_2 * 0x228,uVar6,uVar7,iVar8,iVar9);
  }
  uVar5 = FUN_10002b10(param_1,*(undefined4 *)((int)param_3 + 0x14));
  *(undefined4 *)(&DAT_10170f70 + param_2 * 0x20) = uVar5;
  (&DAT_10170f74)[param_2 * 0x20] = 1;
  return;
}

