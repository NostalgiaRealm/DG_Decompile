/*
 * FUN_10020a58 at 10020a58
 * undefined FUN_10020a58(void)
 * Address ranges: 10020a58-10020d97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10020a58(int param_1,byte param_2,char param_3)

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
  
  bVar5 = param_2 | *(byte *)(param_1 + 0x3237);
  *(byte *)(param_1 + 0x3237) = bVar5;
  if ((*(char *)(param_1 + 0x3150) != '\0') || (bVar1 = true, bVar5 != 0)) {
    lVar11 = FUN_100204a0(param_1,*(undefined4 *)(param_1 + 0x3194),param_1 + 0x2bd0,0x580,
                          *(char *)(param_1 + 0x3150));
    bVar7 = lVar11 == 0;
    bVar1 = !bVar7;
    *(byte *)(param_1 + 0x3150) = bVar7 & *(byte *)(param_1 + 0x3150);
    *(byte *)(param_1 + 0x3237) = bVar7 & *(byte *)(param_1 + 0x3237);
    if (lVar11 != 0) {
      FUN_10061310(*(undefined4 *)(*(int *)(param_1 + 0x3188) + 0x1304),0,lVar11);
    }
  }
  pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (param_2 != 0) {
    uVar9 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar12 = (*extraout_w11)(uVar9);
    FUN_10061310(*(undefined4 *)(*(int *)(param_1 + 0x3188) + 0x1304),1,uVar12);
  }
  bVar7 = true;
  if ((param_3 == '\0') && (param_2 == 0)) goto LAB_10020d70;
  param_2 = *(byte *)(param_1 + 0x3238) | param_2;
  *(byte *)(param_1 + 0x3238) = param_2;
  if (*(char *)(param_1 + 0x3152) == '\0') {
    if (param_2 != 0) goto LAB_10020c20;
  }
  else {
    uVar13 = 0;
    uVar14 = 0;
    if (*(uint *)(param_1 + 0xd8) != 0) {
      do {
        pbVar3 = (byte *)(param_1 + 0x29b0 + uVar13);
        iVar2 = uVar13 * 4;
        uVar13 = uVar13 + 1;
        *(float *)(param_1 + 0x323c + iVar2) = (float)*pbVar3 / 255.0;
        uVar14 = *(uint *)(param_1 + 0xd8);
      } while (uVar13 < uVar14);
    }
    *(float *)(param_1 + uVar14 * 4 + 0x323c) = (float)*(byte *)(uVar14 + param_1 + 0x29af) / 255.0;
LAB_10020c20:
    lVar11 = FUN_100204a0(param_1,*(undefined4 *)(param_1 + 0x31a4),param_1 + 0x323c,
                          (*(int *)(param_1 + 0xd8) + 1) * 4,*(undefined1 *)(param_1 + 0x3152));
    bVar8 = lVar11 == 0;
    bVar7 = !bVar8;
    *(byte *)(param_1 + 0x3152) = bVar8 & *(byte *)(param_1 + 0x3152);
    *(byte *)(param_1 + 0x3238) = bVar8 & *(byte *)(param_1 + 0x3238);
    if (lVar11 == 0) goto LAB_10020d70;
    FUN_10061440(*(undefined4 *)(*(int *)(param_1 + 0x3188) + 0x1304),5,lVar11);
  }
  piVar4 = (int *)(param_1 + 0x3188);
  FUN_10060618(*(undefined4 *)(*piVar4 + 0x1304),*(undefined4 *)(param_1 + 0x319c),0,1,0x80);
  FUN_10060618(*(undefined4 *)(*piVar4 + 0x1304),*(undefined4 *)(param_1 + 0x31a0),0,1,0x80);
  uVar9 = *(undefined4 *)(*piVar4 + 0x1304);
  uVar10 = (*pcVar6)();
  uVar12 = (*extraout_w11_00)(uVar10);
  FUN_10061440(uVar9,3,uVar12);
  uVar9 = *(undefined4 *)(*piVar4 + 0x1304);
  uVar10 = (*pcVar6)();
  uVar12 = (*extraout_w11_01)(uVar10);
  FUN_10061440(uVar9,4,uVar12);
LAB_10020d70:
  return bVar1 && bVar7;
}

