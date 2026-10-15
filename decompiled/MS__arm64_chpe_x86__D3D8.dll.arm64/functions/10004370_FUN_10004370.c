/*
 * FUN_10004370 at 10004370
 * undefined FUN_10004370(void)
 * Address ranges: 10004370-10004547
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10004370(undefined4 param_1,int param_2,undefined8 *param_3,undefined8 *param_4)

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
  (&DAT_10138944)[param_2 * 0x45] = param_3[1];
  (&DAT_1013893c)[param_2 * 0x45] = uVar11;
  (&DAT_1013894c)[param_2 * 0x45] = param_3[2];
  (&DAT_10138954)[param_2 * 0x8a] = *(undefined4 *)(param_3 + 3);
  uVar11 = *param_4;
  iVar8 = param_2 * 0x228;
  *(undefined8 *)(iVar8 + 0x10138960) = param_4[1];
  *(undefined8 *)(&DAT_10138958 + iVar8) = uVar11;
  uVar11 = param_4[2];
  (&DAT_101389aa)[iVar9] = 1;
  *(undefined8 *)(&DAT_10138968 + iVar8) = uVar11;
  iVar8 = *(int *)(DAT_1013ceec + 0x780);
  if ((iVar8 == 6 || iVar8 < 3) || 8 < iVar8) {
    (*(code *)PTR_FUN_10134270)(&DAT_10138970 + param_2 * 0x228);
  }
  else {
    uVar1 = *(uint *)(&DAT_10138958 + iVar9);
    uVar2 = *(uint *)(&DAT_1013895c + iVar9);
    uVar12 = *(uint *)(DAT_1013ceec + 0x81a);
    uVar3 = *(uint *)(DAT_1013ceec + 0x81e);
    uVar7 = *(uint *)(DAT_1013ceec + 0x816);
    uVar6 = *(uint *)(DAT_1013ceec + 0x812);
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
            uVar11 = SoftwareBreakpoint(0xf004,0x10004484);
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
    (*(code *)PTR_FUN_1013426c)(&DAT_10138970 + param_2 * 0x228,uVar6,uVar7,iVar8,iVar9);
  }
  uVar5 = FUN_100029f0(param_1,*(undefined4 *)((int)param_3 + 0x14));
  *(undefined4 *)(&DAT_10138250 + param_2 * 8) = uVar5;
  (&DAT_10138254)[param_2 * 8] = 1;
  return;
}

