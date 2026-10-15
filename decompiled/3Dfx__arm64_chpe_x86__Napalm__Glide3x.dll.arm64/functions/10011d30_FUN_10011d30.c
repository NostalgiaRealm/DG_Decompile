/*
 * FUN_10011d30 at 10011d30
 * undefined FUN_10011d30(void)
 * Address ranges: 10011d30-1001206f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10011d30(int param_1,byte param_2,char param_3)

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
  
  bVar5 = param_2 | *(byte *)(param_1 + 0x3737);
  *(byte *)(param_1 + 0x3737) = bVar5;
  if ((*(char *)(param_1 + 0x3650) != '\0') || (bVar1 = true, bVar5 != 0)) {
    lVar11 = FUN_10011780(param_1,*(undefined4 *)(param_1 + 0x3694),param_1 + 0x2dc0,0x890,
                          *(char *)(param_1 + 0x3650));
    bVar7 = lVar11 == 0;
    bVar1 = !bVar7;
    *(byte *)(param_1 + 0x3650) = bVar7 & *(byte *)(param_1 + 0x3650);
    *(byte *)(param_1 + 0x3737) = bVar7 & *(byte *)(param_1 + 0x3737);
    if (lVar11 != 0) {
      FUN_1006a1c0(*(undefined4 *)(*(int *)(param_1 + 0x3688) + 0x1304),0,lVar11);
    }
  }
  pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (param_2 != 0) {
    uVar9 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar12 = (*extraout_w11)(uVar9);
    FUN_1006a1c0(*(undefined4 *)(*(int *)(param_1 + 0x3688) + 0x1304),1,uVar12);
  }
  bVar7 = true;
  if ((param_3 == '\0') && (param_2 == 0)) goto LAB_10012048;
  param_2 = *(byte *)(param_1 + 0x3738) | param_2;
  *(byte *)(param_1 + 0x3738) = param_2;
  if (*(char *)(param_1 + 0x3652) == '\0') {
    if (param_2 != 0) goto LAB_10011ef8;
  }
  else {
    uVar13 = 0;
    uVar14 = 0;
    if (*(uint *)(param_1 + 0xdc) != 0) {
      do {
        pbVar3 = (byte *)(param_1 + 0x2b8c + uVar13);
        iVar2 = uVar13 * 4;
        uVar13 = uVar13 + 1;
        *(float *)(param_1 + 0x373c + iVar2) = (float)*pbVar3 / 255.0;
        uVar14 = *(uint *)(param_1 + 0xdc);
      } while (uVar13 < uVar14);
    }
    *(float *)(param_1 + uVar14 * 4 + 0x373c) = (float)*(byte *)(uVar14 + param_1 + 0x2b8b) / 255.0;
LAB_10011ef8:
    lVar11 = FUN_10011780(param_1,*(undefined4 *)(param_1 + 0x36a4),param_1 + 0x373c,
                          (*(int *)(param_1 + 0xdc) + 1) * 4,*(undefined1 *)(param_1 + 0x3652));
    bVar8 = lVar11 == 0;
    bVar7 = !bVar8;
    *(byte *)(param_1 + 0x3652) = bVar8 & *(byte *)(param_1 + 0x3652);
    *(byte *)(param_1 + 0x3738) = bVar8 & *(byte *)(param_1 + 0x3738);
    if (lVar11 == 0) goto LAB_10012048;
    FUN_1006a2f0(*(undefined4 *)(*(int *)(param_1 + 0x3688) + 0x1304),5,lVar11);
  }
  piVar4 = (int *)(param_1 + 0x3688);
  FUN_100694c8(*(undefined4 *)(*piVar4 + 0x1304),*(undefined4 *)(param_1 + 0x369c),0,1,0x80);
  FUN_100694c8(*(undefined4 *)(*piVar4 + 0x1304),*(undefined4 *)(param_1 + 0x36a0),0,1,0x80);
  uVar9 = *(undefined4 *)(*piVar4 + 0x1304);
  uVar10 = (*pcVar6)();
  uVar12 = (*extraout_w11_00)(uVar10);
  FUN_1006a2f0(uVar9,3,uVar12);
  uVar9 = *(undefined4 *)(*piVar4 + 0x1304);
  uVar10 = (*pcVar6)();
  uVar12 = (*extraout_w11_01)(uVar10);
  FUN_1006a2f0(uVar9,4,uVar12);
LAB_10012048:
  return bVar1 && bVar7;
}

