/*
 * FUN_1000fda8 at 1000fda8
 * undefined FUN_1000fda8(void)
 * Address ranges: 1000fda8-100100e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1000fda8(int param_1,byte param_2,char param_3)

{
  bool bVar1;
  int iVar2;
  byte *pbVar3;
  int *piVar4;
  byte bVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  
  bVar5 = param_2 | *(byte *)(param_1 + 0x33b7);
  *(byte *)(param_1 + 0x33b7) = bVar5;
  if ((*(char *)(param_1 + 0x32d0) != '\0') || (bVar1 = true, bVar5 != 0)) {
    lVar11 = FUN_1000f7f0(param_1,*(undefined4 *)(param_1 + 0x3314),param_1 + 0x2c70,0x660,
                          *(char *)(param_1 + 0x32d0));
    bVar7 = lVar11 == 0;
    bVar1 = !bVar7;
    *(byte *)(param_1 + 0x32d0) = bVar7 & *(byte *)(param_1 + 0x32d0);
    *(byte *)(param_1 + 0x33b7) = bVar7 & *(byte *)(param_1 + 0x33b7);
    if (lVar11 != 0) {
      FUN_10064b20(*(undefined4 *)(*(int *)(param_1 + 0x3308) + 0x1304),0,lVar11);
    }
  }
  pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (param_2 != 0) {
    uVar9 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar12 = (*extraout_w11)(uVar9);
    FUN_10064b20(*(undefined4 *)(*(int *)(param_1 + 0x3308) + 0x1304),1,uVar12);
  }
  bVar7 = true;
  if ((param_3 == '\0') && (param_2 == 0)) goto LAB_100100c0;
  param_2 = *(byte *)(param_1 + 0x33b8) | param_2;
  *(byte *)(param_1 + 0x33b8) = param_2;
  if (*(char *)(param_1 + 0x32d2) == '\0') {
    if (param_2 != 0) goto LAB_1000ff70;
  }
  else {
    uVar13 = 0;
    uVar14 = 0;
    if (*(uint *)(param_1 + 0xd8) != 0) {
      do {
        pbVar3 = (byte *)(param_1 + 0x2a4c + uVar13);
        iVar2 = uVar13 * 4;
        uVar13 = uVar13 + 1;
        *(float *)(param_1 + 0x33bc + iVar2) = (float)*pbVar3 / 255.0;
        uVar14 = *(uint *)(param_1 + 0xd8);
      } while (uVar13 < uVar14);
    }
    *(float *)(param_1 + uVar14 * 4 + 0x33bc) = (float)*(byte *)(uVar14 + param_1 + 0x2a4b) / 255.0;
LAB_1000ff70:
    lVar11 = FUN_1000f7f0(param_1,*(undefined4 *)(param_1 + 0x3324),param_1 + 0x33bc,
                          (*(int *)(param_1 + 0xd8) + 1) * 4,*(undefined1 *)(param_1 + 0x32d2));
    bVar8 = lVar11 == 0;
    bVar7 = !bVar8;
    *(byte *)(param_1 + 0x32d2) = bVar8 & *(byte *)(param_1 + 0x32d2);
    *(byte *)(param_1 + 0x33b8) = bVar8 & *(byte *)(param_1 + 0x33b8);
    if (lVar11 == 0) goto LAB_100100c0;
    FUN_10064c50(*(undefined4 *)(*(int *)(param_1 + 0x3308) + 0x1304),5,lVar11);
  }
  piVar4 = (int *)(param_1 + 0x3308);
  FUN_10063e28(*(undefined4 *)(*piVar4 + 0x1304),*(undefined4 *)(param_1 + 0x331c),0,1,0x80);
  FUN_10063e28(*(undefined4 *)(*piVar4 + 0x1304),*(undefined4 *)(param_1 + 0x3320),0,1,0x80);
  uVar9 = *(undefined4 *)(*piVar4 + 0x1304);
  uVar10 = (*pcVar6)();
  uVar12 = (*extraout_w11_00)(uVar10);
  FUN_10064c50(uVar9,3,uVar12);
  uVar9 = *(undefined4 *)(*piVar4 + 0x1304);
  uVar10 = (*pcVar6)();
  uVar12 = (*extraout_w11_01)(uVar10);
  FUN_10064c50(uVar9,4,uVar12);
LAB_100100c0:
  return bVar1 && bVar7;
}

