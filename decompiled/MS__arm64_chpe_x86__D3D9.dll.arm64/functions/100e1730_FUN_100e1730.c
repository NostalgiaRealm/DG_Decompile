/*
 * FUN_100e1730 at 100e1730
 * undefined FUN_100e1730(void)
 * Address ranges: 100e1730-100e1ceb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100e1730(int param_1,int param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  byte *pbVar7;
  bool bVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int local_5c;
  uint *local_58;
  undefined4 *local_54;
  int local_50;
  uint local_4c;
  uint *local_48;
  int *piStack_44;
  
  local_50 = param_3;
  if (((*(uint *)(param_1 + -0x58e4) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
    bVar8 = false;
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
  }
  else {
    bVar8 = true;
    iVar10 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
    if (iVar10 == 0) {
      FUN_100071d0(0);
    }
  }
  local_5c = 0;
  local_58 = (uint *)0xffffffff;
  iVar11 = FUN_10008980(param_1 + -0x66b4,param_2,&local_58,&local_5c,&DAT_10162ee0,&DAT_10162f90,
                        0x2a,0x43,&DAT_101630a0);
  iVar10 = local_5c;
  if (iVar11 < 0) goto LAB_100e1ca0;
  local_5c = local_5c + 0xa000;
  local_54 = (undefined4 *)FUN_100cf978(param_1 + -0x66b4,local_58,iVar10);
  if (local_54 == (undefined4 *)0x0) goto LAB_100e1ca0;
  iVar11 = FUN_100e7d30(local_54,&DAT_1015e510,local_50);
  if (iVar11 < 0) {
LAB_100e1c84:
    *local_54 = &PTR_FUN_1015fb94;
    FUN_10132260(local_54,0x1c);
    goto LAB_100e1ca0;
  }
  piVar1 = (int *)(param_1 + 0xdc);
  local_58 = (uint *)(param_1 + 0xe4);
  local_48 = (uint *)(param_1 + 0xe0);
  uVar13 = *local_58;
  piStack_44 = piVar1;
  if (*local_48 == uVar13) {
    local_4c = uVar13 << 1;
    if (uVar13 == 0) {
      local_4c = 0x10;
    }
    iVar15 = local_4c * 4;
    if (local_4c >> 0x1e != 0) {
      iVar15 = -1;
    }
    local_50 = FUN_101322b0(iVar15);
    if (local_50 == 0) goto LAB_100e1c84;
    FUN_101325a0(local_50,*piVar1,((ulonglong)*local_58 & 0x3fffffff) << 2);
    FUN_101322d0(*piVar1);
    *piVar1 = local_50;
    *local_58 = local_4c;
  }
  *(undefined4 **)(*piStack_44 + *local_48 * 4) = local_54;
  *local_48 = *local_48 + 1;
  uVar13 = 1;
  if (param_2 == 1) {
    uVar13 = 0;
    do {
      if ((&DAT_10170a20)[uVar13 * 8] != '\0') {
        uVar16 = 0;
        do {
          *(undefined4 *)(uVar16 * 0x38 + uVar13 * 4 + iVar10 + 0x4abc) =
               *(undefined4 *)(uVar16 * 0x38 + param_1 + uVar13 * 4 + 0x234);
          uVar17 = uVar13 + uVar16 * 0xe;
          uVar16 = uVar16 + 1;
          pbVar7 = (byte *)((uVar17 >> 3 & 3) + iVar10 + ((uVar17 >> 5) + 0x2b09) * 4);
          *pbVar7 = *pbVar7 | (byte)(1 << (ulonglong)(uVar17 & 7));
        } while (uVar16 < 0x10);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < 0xe);
    uVar12 = *(undefined8 *)(param_1 + 0x6cc);
    *(undefined8 *)(iVar10 + 0x4fc0) = *(undefined8 *)(param_1 + 0x6d4);
    *(undefined8 *)(iVar10 + 0x4fb8) = uVar12;
    *(undefined1 *)(local_5c + 0xc22) = 1;
LAB_100e1ad0:
    puVar4 = (undefined8 *)(iVar10 + 0x4fc8);
    iVar15 = 0x20;
    puVar3 = (undefined8 *)(param_1 + 0xf4);
    do {
      uVar12 = *puVar3;
      iVar15 = iVar15 + -1;
      puVar3 = puVar3 + 1;
      *puVar4 = uVar12;
      puVar4 = puVar4 + 1;
    } while (iVar15 != 0);
    *(undefined4 *)(iVar10 + 0x5248) = 0x100000;
    *(undefined2 *)(iVar10 + 0x524c) = 0xffff;
    puVar4 = (undefined8 *)(iVar10 + 0x5008);
    iVar15 = 0x20;
    puVar3 = (undefined8 *)(param_1 + 0x134);
    do {
      uVar12 = *puVar3;
      iVar15 = iVar15 + -1;
      puVar3 = puVar3 + 1;
      *puVar4 = uVar12;
      puVar4 = puVar4 + 1;
    } while (iVar15 != 0);
    *(undefined4 *)(iVar10 + 0x526c) = 0x100000;
    *(undefined2 *)(iVar10 + 0x5270) = 0xffff;
    *(undefined4 *)(iVar10 + 0x4f98) = *(undefined4 *)(param_1 + 0x5bd4);
    if (*(int *)(param_1 + 0x5bd4) != 0) {
      FUN_100e6f40(*(int *)(param_1 + 0x5bd4));
    }
    *(undefined4 *)(iVar10 + 0x4f9c) = *(undefined4 *)(param_1 + 0x5bd8);
    *(undefined1 *)(local_5c + 0xc20) = 1;
    if (*(int *)(param_1 + 0x5bd8) != 0) {
      piVar1 = (int *)(*(int *)(param_1 + 0x5bd8) + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      DataMemoryBarrier(2,3);
    }
    uVar14 = 0;
    do {
      uVar13 = (uint)uVar14;
      *(undefined4 *)(iVar10 + uVar13 * 4 + 0x4f54) = *(undefined4 *)(param_1 + 0x5bdc + uVar13 * 4)
      ;
      pbVar7 = (byte *)(((uint)(uVar14 >> 3) & 3) + iVar10 + ((uVar13 >> 5) + 0x2b13) * 4);
      uVar14 = (ulonglong)(uVar13 + 1);
      *pbVar7 = *pbVar7 | (byte)(1 << (ulonglong)(uVar13 & 7));
    } while (uVar13 + 1 < 0x10);
  }
  else {
    puVar9 = &DAT_10162ed8;
    if (param_2 != 3) {
      uVar13 = 0xc;
      puVar9 = &DAT_10162ea8;
    }
    uVar16 = 0;
    do {
      piVar1 = puVar9 + uVar16;
      if ((&DAT_10170a20)[*piVar1 * 8] != '\0') {
        uVar17 = 0;
        do {
          iVar15 = *piVar1 + uVar17 * 0xe;
          *(undefined4 *)(iVar10 + iVar15 * 4 + 0x4abc) =
               *(undefined4 *)(param_1 + 0x234 + iVar15 * 4);
          uVar2 = uVar17 + 1;
          uVar17 = *piVar1 + uVar17 * 0xe;
          pbVar7 = (byte *)((uVar17 >> 3 & 3) + iVar10 + ((uVar17 >> 5) + 0x2b09) * 4);
          *pbVar7 = *pbVar7 | (byte)(1 << (ulonglong)(uVar17 & 7));
          uVar17 = uVar2;
        } while (uVar2 < 0x10);
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar13);
    if (param_2 == 3) goto LAB_100e1ad0;
  }
  if (param_2 - 1U < 2) {
    puVar4 = (undefined8 *)(iVar10 + 0x5108);
    iVar15 = 0x20;
    puVar3 = (undefined8 *)(param_1 + 0x174);
    do {
      uVar12 = *puVar3;
      iVar15 = iVar15 + -1;
      puVar3 = puVar3 + 1;
      *puVar4 = uVar12;
      puVar4 = puVar4 + 1;
    } while (iVar15 != 0);
    *(undefined4 *)(iVar10 + 0x5290) = 0x100000;
    *(undefined2 *)(iVar10 + 0x5294) = 0xffff;
    puVar4 = (undefined8 *)(iVar10 + 0x5148);
    iVar15 = 0x20;
    puVar3 = (undefined8 *)(param_1 + 0x1b4);
    do {
      uVar12 = *puVar3;
      iVar15 = iVar15 + -1;
      puVar3 = puVar3 + 1;
      *puVar4 = uVar12;
      puVar4 = puVar4 + 1;
    } while (iVar15 != 0);
    *(undefined4 *)(iVar10 + 0x52b4) = 0x100000;
    *(undefined2 *)(iVar10 + 0x52b8) = 0xffff;
    *(undefined4 *)(iVar10 + 0x4f94) = *(undefined4 *)(param_1 + 0x5bd0);
    if (*(int *)(param_1 + 0x5bd0) != 0) {
      FUN_100e6f40(*(int *)(param_1 + 0x5bd0));
    }
  }
LAB_100e1ca0:
  if (bVar8) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return iVar11;
}

