/*
 * FUN_100197f0 at 100197f0
 * undefined FUN_100197f0(void)
 * Address ranges: 100197f0-10019dd7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100197f0(int param_1,uint param_2,undefined8 param_3,int *param_4,int *param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  code *pcVar10;
  bool bVar11;
  char cVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  code *extraout_w11;
  code *extraout_w11_00;
  int local_58 [6];
  
  FUN_10017a70(param_1,0,0,0);
  if ((*param_4 == 0) && (*param_5 == 0)) {
    *(undefined8 *)(param_1 + 0x1e60) = 0;
    *(undefined8 *)(param_1 + 0x1e58) = 0;
    *(undefined8 *)(param_1 + 0x1ebc) = 0;
    *(undefined8 *)(param_1 + 0x1eb4) = 0;
    *(undefined4 *)(param_1 + 0x1e68) = 0;
    *(undefined4 *)(param_1 + 0x1ee4) = 0;
    *(undefined8 *)(param_1 + 0x1838) = 0;
    *(undefined1 *)(param_1 + 0x1908) = 1;
  }
  else {
    local_58[0] = 0;
    local_58[1] = 0;
    local_58[2] = 0;
    local_58[3] = 0;
    uVar15 = 0;
    if (param_2 != 0) {
      do {
        iVar4 = 0;
        if (param_4[uVar15 * 3] != 0) {
          iVar4 = param_4[uVar15 * 3] + -0x88;
        }
        piVar1 = local_58 + uVar15;
        uVar15 = uVar15 + 1;
        *piVar1 = iVar4;
      } while (uVar15 < param_2);
    }
    iVar5 = local_58[0];
    iVar4 = 0;
    if (*param_5 != 0) {
      iVar4 = *param_5 + -0x88;
    }
    iVar16 = *(int *)(param_1 + 0x1e94);
    if ((iVar16 != 0) &&
       (((*(int *)(param_1 + 0x1e58) == iVar16 || (*(int *)(param_1 + 0x1e68) == iVar16)) ||
        (local_58[0] == iVar16 || iVar4 == iVar16)))) {
      *(undefined1 *)(param_1 + 0x1d39) = 1;
      *(byte *)(param_1 + 0x1d30) = *(byte *)(param_1 + 0x1d30) | 1;
    }
    iVar16 = *(int *)(param_1 + 0x1e98);
    if ((iVar16 != 0) &&
       (((*(int *)(param_1 + 0x1e58) == iVar16 || (*(int *)(param_1 + 0x1e68) == iVar16)) ||
        (local_58[0] == iVar16 || iVar4 == iVar16)))) {
      *(undefined1 *)(param_1 + 0x1d39) = 1;
      *(byte *)(param_1 + 0x1d30) = *(byte *)(param_1 + 0x1d30) | 2;
    }
    iVar16 = *(int *)(param_1 + 0x1e9c);
    if ((iVar16 != 0) &&
       (((*(int *)(param_1 + 0x1e58) == iVar16 || (*(int *)(param_1 + 0x1e68) == iVar16)) ||
        (local_58[0] == iVar16 || iVar4 == iVar16)))) {
      *(undefined1 *)(param_1 + 0x1d39) = 1;
      *(byte *)(param_1 + 0x1d30) = *(byte *)(param_1 + 0x1d30) | 4;
    }
    iVar16 = *(int *)(param_1 + 0x1ea0);
    if ((iVar16 != 0) &&
       (((*(int *)(param_1 + 0x1e58) == iVar16 || (*(int *)(param_1 + 0x1e68) == iVar16)) ||
        (local_58[0] == iVar16 || iVar4 == iVar16)))) {
      *(undefined1 *)(param_1 + 0x1d39) = 1;
      *(byte *)(param_1 + 0x1d30) = *(byte *)(param_1 + 0x1d30) | 8;
    }
    iVar16 = *(int *)(param_1 + 0x1ea4);
    if ((iVar16 != 0) &&
       (((*(int *)(param_1 + 0x1e58) == iVar16 || (*(int *)(param_1 + 0x1e68) == iVar16)) ||
        (local_58[0] == iVar16 || iVar4 == iVar16)))) {
      *(undefined1 *)(param_1 + 0x1d39) = 1;
      *(byte *)(param_1 + 0x1d30) = *(byte *)(param_1 + 0x1d30) | 0x10;
    }
    iVar16 = *(int *)(param_1 + 0x1ea8);
    if ((iVar16 != 0) &&
       (((*(int *)(param_1 + 0x1e58) == iVar16 || (*(int *)(param_1 + 0x1e68) == iVar16)) ||
        (local_58[0] == iVar16 || iVar4 == iVar16)))) {
      *(undefined1 *)(param_1 + 0x1d39) = 1;
      *(byte *)(param_1 + 0x1d30) = *(byte *)(param_1 + 0x1d30) | 0x20;
    }
    iVar16 = *(int *)(param_1 + 0x1eac);
    if ((iVar16 != 0) &&
       (((*(int *)(param_1 + 0x1e58) == iVar16 || (*(int *)(param_1 + 0x1e68) == iVar16)) ||
        (local_58[0] == iVar16 || iVar4 == iVar16)))) {
      *(undefined1 *)(param_1 + 0x1d39) = 1;
      *(byte *)(param_1 + 0x1d30) = *(byte *)(param_1 + 0x1d30) | 0x40;
    }
    iVar16 = *(int *)(param_1 + 0x1eb0);
    if ((iVar16 != 0) &&
       (((*(int *)(param_1 + 0x1e58) == iVar16 || (*(int *)(param_1 + 0x1e68) == iVar16)) ||
        (local_58[0] == iVar16 || iVar4 == iVar16)))) {
      *(undefined1 *)(param_1 + 0x1d39) = 1;
      *(byte *)(param_1 + 0x1d30) = *(byte *)(param_1 + 0x1d30) | 0x80;
    }
    uVar15 = 0;
    if (param_2 != 0) {
      iVar16 = 0;
      do {
        piVar1 = (int *)(param_1 + 0x1e58 + iVar16);
        puVar2 = (undefined4 *)(param_1 + 0x1eb4 + iVar16);
        iVar14 = local_58[uVar15];
        piVar3 = (int *)(param_1 + 0x1e6c + iVar16);
        if (iVar14 == 0) {
          *piVar1 = 0;
          iVar14 = 0;
          *puVar2 = 0;
          *piVar3 = 0;
        }
        else {
          iVar6 = param_4[uVar15 * 3 + 2];
          iVar7 = *(int *)(iVar14 + 0x2c);
          iVar8 = param_4[uVar15 * 3 + 1];
          *piVar1 = iVar14;
          *puVar2 = *(undefined4 *)(*(int *)(iVar14 + 0x60) + (iVar8 + iVar7 * iVar6) * 0x1c);
          *piVar3 = param_4[uVar15 * 3 + 1];
          iVar14 = param_4[uVar15 * 3 + 2];
        }
        uVar15 = uVar15 + 1;
        *(int *)(param_1 + 0x1e7c + iVar16) = iVar14;
        iVar16 = iVar16 + 4;
      } while (uVar15 < param_2);
    }
    pcVar10 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    if (*(int *)(param_1 + 0x1e58) == 0) {
      bVar11 = false;
    }
    else {
      uVar13 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      cVar12 = (*extraout_w11)(uVar13);
      bVar11 = cVar12 != '\0';
    }
    cVar12 = *(char *)(param_1 + 0x1900);
    *(bool *)(param_1 + 0x1900) = bVar11;
    *(byte *)(param_1 + 0x1d3c) = bVar11 != (bool)cVar12 | *(byte *)(param_1 + 0x1d3c);
    if (iVar4 == 0) {
      cVar12 = '\0';
    }
    else {
      (*pcVar10)();
      cVar12 = (*extraout_w11_00)(iVar4);
    }
    cVar9 = *(char *)(param_1 + 0x1842);
    *(char *)(param_1 + 0x1842) = cVar12;
    *(byte *)(param_1 + 0x1d3b) = cVar12 != cVar9 | *(byte *)(param_1 + 0x1d3b);
    if (iVar4 == 0) {
      *(int *)(param_1 + 0x1e68) = 0;
      *(undefined4 *)(param_1 + 0x1ee4) = 0;
    }
    else {
      iVar16 = *(int *)(iVar4 + 0x2c);
      iVar14 = param_5[2];
      iVar6 = param_5[1];
      *(int *)(param_1 + 0x1e68) = iVar4;
      *(undefined4 *)(param_1 + 0x1ee4) =
           *(undefined4 *)(*(int *)(iVar4 + 0x60) + (iVar6 + iVar16 * iVar14) * 0x1c + 4);
      *(int *)(param_1 + 0x1e8c) = param_5[1];
      *(int *)(param_1 + 0x1e90) = param_5[2];
    }
    if (iVar5 == 0) {
      iVar5 = iVar4;
    }
    FUN_100351f0(param_1,iVar5);
    FUN_100353c0(param_1,iVar5);
  }
  *(undefined1 *)(param_1 + 0x1d3a) = 1;
  return;
}

