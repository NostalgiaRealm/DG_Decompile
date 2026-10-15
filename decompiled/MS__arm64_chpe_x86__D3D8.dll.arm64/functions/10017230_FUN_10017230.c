/*
 * FUN_10017230 at 10017230
 * undefined FUN_10017230(void)
 * Address ranges: 10017230-100174bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10017230(int *param_1,undefined8 *param_2,int param_3,int param_4,int param_5)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  char cVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  uint uStack_44;
  
  if ((param_5 != 0) && (param_5 != 1)) {
    return 0x8876086c;
  }
  if (param_3 == 0) {
    return 0x8876086c;
  }
  if (param_4 == 0) {
    return 0x8876086c;
  }
  puVar1 = (uint *)(param_1 + 1);
  uVar5 = *puVar1;
  uVar12 = 0x8007000e;
  uVar13 = 0;
  if (uVar5 != 0) {
    iVar6 = *param_1;
    do {
      iVar9 = FUN_100ff610(iVar6 + uVar13 * 0x20,param_2,0x10);
      if (iVar9 == 0) break;
      uVar13 = uVar13 + 1;
    } while (uVar13 < uVar5);
  }
  if (uVar13 != uVar5) {
    FUN_10001fd0(*param_1 + uVar13 * 0x20);
    cVar8 = FUN_100178f8(*param_1 + uVar13 * 0x20,*param_2,param_2[1],param_3,param_4,param_5);
    if (cVar8 != '\0') {
      return 0;
    }
    return 0x8007000e;
  }
  puVar2 = (uint *)(param_1 + 2);
  uVar11 = *puVar2;
  local_50 = 0;
  uStack_48 = 0;
  uStack_44 = uStack_44 & 0xffffff00;
  uStack_58 = 0;
  local_60 = 0;
  if (uVar5 == uVar11) {
    uVar5 = uVar11 << 1;
    if (uVar11 == 0) {
      uVar5 = 0x10;
    }
    uVar11 = uVar5 * 0x20;
    if (uVar5 >> 0x1b != 0) {
      uVar11 = 0xffffffff;
    }
    iVar6 = uVar11 + 4;
    if (0xfffffffb < uVar11) {
      iVar6 = -1;
    }
    puVar10 = (uint *)FUN_100fece0(iVar6);
    if (puVar10 == (uint *)0x0) goto LAB_1001745c;
    puVar3 = puVar10 + 1;
    *puVar10 = uVar5;
    puVar10 = puVar3;
    for (uVar11 = uVar5; uVar11 != 0; uVar11 = uVar11 - 1) {
      puVar10[4] = 0;
      puVar10[5] = 0;
      puVar10[6] = 0;
      *(undefined1 *)(puVar10 + 7) = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      puVar10[0] = 0;
      puVar10[1] = 0;
      puVar10 = puVar10 + 8;
    }
    if (puVar3 == (uint *)0x0) goto LAB_1001745c;
    FUN_100ff660(puVar3,*param_1,((ulonglong)*puVar2 & 0x7ffffff) << 5);
    iVar6 = *param_1;
    if (iVar6 != 0) {
      piVar7 = (int *)(iVar6 + -4);
      iVar9 = *piVar7;
      iVar6 = iVar6 + iVar9 * 0x20;
      for (; iVar9 != 0; iVar9 = iVar9 + -1) {
        iVar6 = iVar6 + -0x20;
        FUN_10001fd0(iVar6);
      }
      FUN_100fed10(piVar7,*piVar7 * 0x20 + 4);
    }
    *param_1 = (int)puVar3;
    *puVar2 = uVar5;
  }
  puVar4 = (undefined8 *)(*param_1 + *puVar1 * 0x20);
  puVar4[1] = 0;
  *puVar4 = 0;
  puVar4[3] = CONCAT44(uStack_44,uStack_48);
  puVar4[2] = local_50;
  *puVar1 = *puVar1 + 1;
  cVar8 = FUN_100178f8(*param_1 + uVar13 * 0x20,*param_2,param_2[1],param_3,param_4,param_5);
  uVar12 = 0x8007000e;
  if (cVar8 != '\0') {
    uVar12 = 0;
  }
LAB_1001745c:
  FUN_10001fd0(&local_60);
  return uVar12;
}

