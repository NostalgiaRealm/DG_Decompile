/*
 * FUN_100384e0 at 100384e0
 * undefined FUN_100384e0(void)
 * Address ranges: 100384e0-100389bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100384e0(int param_1,int param_2,uint param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  int iVar16;
  int extraout_w12;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int local_6c;
  int local_68;
  uint local_64;
  int *local_60 [2];
  undefined8 local_58;
  int local_50;
  
  local_68 = param_1;
  local_64 = param_3;
  FUN_10033078(param_1 + 0x3440);
  local_6c = 0;
  piVar12 = (int *)(param_1 + 0x3188);
  iVar11 = FUN_100552f0(*piVar12 + 0x11c0);
  local_60[0] = (int *)0x0;
  if (*(char *)(iVar11 + 300) == '\0') {
    iVar11 = 0;
    bVar9 = false;
    uVar17 = 0;
  }
  else {
    FUN_10021430(iVar11,param_3,param_2,&local_6c,local_60);
    iVar11 = (int)local_60[0] + (1 - local_6c);
    iVar18 = iVar11 * 0x3c;
    local_58 = CONCAT44(local_58._4_4_,iVar18);
    uVar17 = iVar18 + (param_2 + 8) * 4;
    piVar1 = (int *)(param_4 + local_6c * 0x3c);
    bVar9 = true;
    local_60[0] = piVar1;
    if (uVar17 < 0x3f00) {
      bVar9 = true;
      puVar2 = (undefined4 *)(*piVar12 + extraout_w12);
      cVar6 = *(char *)(puVar2 + 0x4b);
      if (cVar6 == '\0') {
LAB_100386e0:
        if (cVar6 != '\0') goto LAB_10038764;
      }
      else {
        iVar16 = 0xc;
        iVar5 = 0x10;
        if (uVar17 == 0) {
          iVar5 = iVar16;
        }
        if (uVar17 != 0) {
          iVar5 = uVar17 + iVar5;
        }
        piVar12 = (int *)FUN_10055198(puVar2,iVar5);
        if (piVar12 != (int *)0x0) {
          piVar3 = puVar2 + 0x4a;
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(ZEXT48(piVar3),0x10);
            if (bVar8) {
              *piVar3 = *piVar3 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          DataMemoryBarrier(2,3);
          piVar12[1] = iVar5;
          if (uVar17 == 0) {
            iVar16 = 8;
          }
          piVar3 = (int *)(iVar16 + (int)piVar12);
          *piVar3 = iVar18;
          piVar3[1] = local_68;
          piVar3[2] = param_2;
          puVar13 = (undefined4 *)((int)piVar3 + 0xfU & 0xfffffffc);
          local_60[0] = piVar12;
          if (uVar17 != 0) {
            piVar12[2] = (int)puVar13;
            uVar14 = FUN_1007ac00(puVar13,piVar1,iVar18);
            FUN_100214d8(uVar14,local_64,(int)puVar13 + iVar18 + 0xf & 0xfffffff0,param_2,-local_6c)
            ;
            puVar13 = puVar13 + param_2 + 8 + iVar11 * 0xf;
          }
          *puVar13 = 0;
          *local_60[0] = (int)FUN_100389d0;
          puVar2[puVar2[0x49] * 5 + 0x1a] = puVar13;
          if (*(char *)((int)puVar2 + 0x12d) != '\0') {
            *puVar2 = 0;
            (*(code *)PTR_FUN_1009d0c4)(puVar2[0x18]);
            bVar9 = false;
          }
          goto LAB_100386e0;
        }
        *puVar2 = 0;
        (*(code *)PTR_FUN_1009d0dc)(100);
        FUN_100552f0(puVar2);
      }
      iVar18 = (int)local_58;
      local_60[0] = (int *)puVar2[0x44];
      iVar11 = 4;
      if (uVar17 == 0) {
        iVar11 = 0;
      }
      piVar12 = (int *)(iVar11 + (int)local_60[0]);
      *piVar12 = (int)local_58;
      piVar12[1] = local_68;
      piVar12[2] = param_2;
      if (uVar17 != 0) {
        piVar12 = piVar12 + 3;
        *local_60[0] = (int)piVar12;
        uVar14 = FUN_1007ac00(piVar12,piVar1,local_58 & 0xffffffff);
        FUN_100214d8(uVar14,local_64,(int)piVar12 + iVar18 + 0xf & 0xfffffff0,param_2,-local_6c);
      }
      FUN_100389d0(local_60[0]);
LAB_10038764:
      if (!bVar9) {
        return;
      }
      *puVar2 = 0;
      return;
    }
  }
  uVar10 = local_64;
  local_58 = 0;
  local_50 = 0;
  uVar19 = uVar10;
  if (bVar9) {
    uVar15 = FUN_1006d5d0(*piVar12 + 0x14f0,uVar17,&local_58);
    iVar18 = (int)local_58;
    if ((uVar15 & 1) != 0) {
      uVar14 = FUN_1007ac00(local_58 & 0xffffffff,local_60[0],
                            ((ulonglong)(uint)(iVar11 * 0xf) & 0x3fffffff) << 2);
      uVar19 = iVar18 + iVar11 * 0x3c + 0xfU & 0xfffffff0;
      FUN_100214d8(uVar14,uVar10,uVar19,param_2,-local_6c);
      param_4 = iVar18;
    }
  }
  else {
    local_58._0_4_ = 0;
    iVar18 = (int)local_58;
  }
  iVar5 = local_50;
  iVar11 = *piVar12;
  bVar9 = true;
  puVar2 = (undefined4 *)(iVar11 + 0x11c0);
  local_60[0] = local_58._4_4_;
  cVar6 = *(char *)(iVar11 + 0x12ec);
  if (cVar6 == '\0') {
LAB_10038928:
    if (cVar6 != '\0') goto LAB_1003897c;
  }
  else {
    puVar13 = (undefined4 *)FUN_10055198(puVar2,0x1c);
    if (puVar13 != (undefined4 *)0x0) {
      piVar12 = (int *)(iVar11 + 0x12e8);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(ZEXT48(piVar12),0x10);
        if (bVar8) {
          *piVar12 = *piVar12 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      DataMemoryBarrier(2,3);
      puVar13[1] = 0x1c;
      puVar13[2] = local_68;
      puVar13[3] = param_2;
      puVar13[4] = uVar19;
      puVar13[5] = param_4;
      puVar13[6] = iVar18;
      puVar13[7] = iVar5;
      puVar13[8] = local_60[0];
      puVar4 = (undefined4 *)((int)puVar13 + 0x27U & 0xfffffffc);
      *puVar4 = 0;
      *puVar13 = FUN_10038a10;
      puVar2[*(int *)(iVar11 + 0x12e4) * 5 + 0x1a] = puVar4;
      if (*(char *)(iVar11 + 0x12ed) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_1009d0c4)(*(undefined4 *)(iVar11 + 0x1220));
        bVar9 = false;
      }
      goto LAB_10038928;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_1009d0dc)(100);
    FUN_100552f0(puVar2);
  }
  piVar12 = *(int **)(iVar11 + 0x12d0);
  *piVar12 = local_68;
  piVar12[1] = param_2;
  piVar12[2] = uVar19;
  piVar12[3] = param_4;
  piVar12[4] = iVar18;
  piVar12[5] = iVar5;
  piVar12[6] = (int)local_60[0];
  FUN_10038a10(piVar12);
LAB_1003897c:
  if (bVar9) {
    *puVar2 = 0;
  }
  return;
}

