/*
 * FUN_10041000 at 10041000
 * undefined FUN_10041000(void)
 * Address ranges: 10041000-10041523
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10041000(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,
                 undefined4 param_6,int param_7,uint param_8,char param_9)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined4 uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 extraout_x1;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *pcVar15;
  int iVar16;
  int local_50;
  
  pcVar15 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(int *)(param_1 + 0xdacc) != 0) {
    uVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar7,*(undefined4 *)(param_1 + 0xdae0),*(undefined4 *)(param_1 + 0xdaf0),0);
  }
  if (*(int *)(param_1 + 0xdadc) != 0) {
    uVar7 = (*pcVar15)();
    (*extraout_w11_00)(uVar7,*(undefined4 *)(param_1 + 0xdb00),*(undefined4 *)(param_1 + 0xdb04),0);
  }
  FUN_1003c678(param_1,0,0,0);
  uVar7 = *(undefined4 *)(param_1 + 0xdbd0);
  uVar4 = *(undefined4 *)(param_1 + 0x6e8);
  uVar5 = *(undefined4 *)(param_1 + 0x72c);
  if (param_2 == 6) {
    if (param_8 < 3) {
      return;
    }
    param_8 = param_8 - 2;
    iVar16 = 0;
    if (param_8 != 0) {
      piVar1 = (int *)(param_1 + 0x6c);
      do {
        iVar8 = *piVar1 + *(int *)(param_1 + 0x68);
        if (0x1000U - iVar8 < 0x10) {
          FUN_1003c678(param_1,0,1,0);
          iVar8 = 0;
        }
        uVar14 = (0x1000U - iVar8) / 3;
        if (param_8 < (0x1000U - iVar8) / 3) {
          uVar14 = param_8;
        }
        if (param_4 == 0) {
          FUN_1003c860(param_1,4,param_3);
        }
        else {
          FUN_1003f3d0(param_1,4,param_4 + -0x18,uVar7,*(undefined4 *)(param_1 + 0xd9d0),uVar5,uVar4
                       ,0,0);
        }
        if (uVar14 != 0) {
          piVar2 = (int *)(param_1 + 100);
          puVar6 = (uint *)*piVar2;
          uVar13 = 0;
          do {
            iVar8 = iVar16 + param_7 + uVar13 + 1;
            iVar3 = iVar16 + param_7 + uVar13;
            if (param_9 == '\0') {
              uVar10 = (uint)*(ushort *)(param_5 + param_7 * 2);
              uVar12 = (uint)*(ushort *)(param_5 + iVar3 * 2 + 4);
              uVar11 = (uint)*(ushort *)(param_5 + iVar8 * 2);
            }
            else {
              uVar10 = *(uint *)(param_5 + param_7 * 4);
              uVar12 = *(uint *)(param_5 + iVar3 * 4 + 8);
              uVar11 = *(uint *)(param_5 + iVar8 * 4);
            }
            *puVar6 = uVar11;
            uVar13 = uVar13 + 1;
            *(uint *)(*piVar2 + 4) = uVar12;
            *(uint *)(*piVar2 + 8) = uVar10;
            puVar6 = (uint *)(*piVar2 + 0xc);
            *piVar2 = (int)puVar6;
          } while (uVar13 < uVar14);
        }
        param_8 = param_8 - uVar14;
        iVar16 = uVar14 + iVar16;
        *piVar1 = uVar14 * 3 + *piVar1;
        *(undefined4 *)(param_1 + 0x70) = param_6;
      } while (param_8 != 0);
    }
    FUN_1003c678(param_1,0,0,0);
    *(undefined4 *)(param_1 + 0x70) = 0;
    return;
  }
  if (*(int *)(param_1 + 0xdbdc) == 0) {
    return;
  }
  if (param_4 == 0) {
    FUN_1003c860(param_1,param_2,param_3);
  }
  else {
    FUN_1003f3d0(param_1,param_2,param_4 + -0x18,uVar7,*(undefined4 *)(param_1 + 0xdbd4),uVar5,uVar4
                 ,0,0);
  }
  uVar9 = FUN_10038e98(param_1);
  if ((uVar9 & 1) == 0) goto LAB_100414f0;
  iVar16 = *(int *)(param_1 + 0xdbdc);
  if (*(int *)(iVar16 + 0x1c) == 1) {
    uVar14 = 1;
    if (*(char *)(iVar16 + 0x20) != '\0') {
      uVar14 = 2;
    }
    uVar13 = param_8 << (ulonglong)uVar14;
    if (*(uint *)(iVar16 + 0x14) < uVar13) goto LAB_100414f0;
    puVar6 = (uint *)(iVar16 + 0x18);
    if (*(uint *)(iVar16 + 0x14) < *puVar6 + uVar13) {
      *puVar6 = 0;
    }
    uVar7 = (*pcVar15)();
    iVar8 = (*extraout_w11_01)(uVar7,*(undefined4 *)(iVar16 + 0x10),0);
    if (iVar8 < 0) goto LAB_100414f0;
    FUN_100ff660(*puVar6 + local_50,(param_7 << (ulonglong)uVar14) + param_5,uVar13);
    uVar7 = (*pcVar15)();
    (*extraout_w11_02)(uVar7,*(undefined4 *)(iVar16 + 0x10),0);
    uVar10 = *puVar6;
    *puVar6 = uVar10 + uVar13;
    uVar7 = (*pcVar15)(*(undefined4 *)(*(int *)(param_1 + 0xd9b4) + 4),extraout_x1,
                       uVar10 >> (ulonglong)uVar14);
    pcVar15 = extraout_w11_03;
  }
  else {
    uVar7 = (*pcVar15)();
    pcVar15 = extraout_w11_04;
  }
  (*pcVar15)(uVar7,param_8);
LAB_100414f0:
  (*(code *)PTR_FUN_101340bc)(*(int *)(param_1 + 0xd9b0) + 0x4a0);
  return;
}

