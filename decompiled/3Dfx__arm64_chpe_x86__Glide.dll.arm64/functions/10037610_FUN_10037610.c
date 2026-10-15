/*
 * FUN_10037610 at 10037610
 * undefined FUN_10037610(void)
 * Address ranges: 10037610-10037a2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10037610(int param_1,int param_2,int param_3,undefined1 param_4)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  char cVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  int extraout_w12;
  undefined8 local_50;
  int local_48;
  
  FUN_10033078(param_1 + 0x3440);
  piVar2 = (int *)(param_1 + 0x3188);
  iVar13 = FUN_100552f0(*piVar2 + 0x11c0);
  iVar7 = param_2 * 0x3c;
  if ((*(char *)(iVar13 + 300) != '\0') && (uVar1 = iVar7 + 4, uVar1 < 0x3f00)) {
    bVar10 = true;
    puVar3 = (undefined4 *)(*piVar2 + extraout_w12);
    cVar6 = *(char *)(puVar3 + 0x4b);
    if (cVar6 == '\0') {
LAB_100377c0:
      if (cVar6 != '\0') goto LAB_10037818;
    }
    else {
      iVar13 = 0x10;
      if (uVar1 == 0) {
        iVar13 = 0xc;
      }
      if (uVar1 != 0) {
        iVar13 = iVar13 + uVar1;
      }
      puVar14 = (undefined4 *)FUN_10055198(puVar3,iVar13);
      if (puVar14 != (undefined4 *)0x0) {
        piVar2 = puVar3 + 0x4a;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(ZEXT48(piVar2),0x10);
          if (bVar9) {
            *piVar2 = *piVar2 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        DataMemoryBarrier(2,3);
        puVar14[1] = iVar13;
        iVar13 = 0xc;
        if (uVar1 == 0) {
          iVar13 = 8;
        }
        piVar2 = (int *)(iVar13 + (int)puVar14);
        *piVar2 = param_1;
        piVar2[1] = param_2;
        *(undefined1 *)(piVar2 + 2) = param_4;
        puVar5 = (undefined4 *)((int)piVar2 + 0xfU & 0xfffffffc);
        if (uVar1 != 0) {
          puVar14[2] = puVar5;
          FUN_1007ac00(puVar5,param_3,iVar7);
          puVar5 = puVar5 + param_2 * 0xf + 1;
        }
        *puVar5 = 0;
        *puVar14 = FUN_10037a30;
        puVar3[puVar3[0x49] * 5 + 0x1a] = puVar5;
        if (*(char *)((int)puVar3 + 0x12d) != '\0') {
          *puVar3 = 0;
          (*(code *)PTR_FUN_1009d0c4)(puVar3[0x18]);
          bVar10 = false;
        }
        goto LAB_100377c0;
      }
      *puVar3 = 0;
      (*(code *)PTR_FUN_1009d0dc)(100);
      FUN_100552f0(puVar3);
    }
    piVar2 = (int *)puVar3[0x44];
    iVar13 = 4;
    if (uVar1 == 0) {
      iVar13 = 0;
    }
    piVar4 = (int *)(iVar13 + (int)piVar2);
    *piVar4 = param_1;
    piVar4[1] = param_2;
    *(undefined1 *)(piVar4 + 2) = param_4;
    if (uVar1 != 0) {
      *piVar2 = (int)(piVar4 + 3);
      FUN_1007ac00(piVar4 + 3,param_3,iVar7);
    }
    FUN_10037a30(piVar2);
LAB_10037818:
    if (!bVar10) {
      return;
    }
    *puVar3 = 0;
    return;
  }
  local_50 = 0;
  local_48 = 0;
  if ((*(char *)(iVar13 + 300) == '\0') ||
     (uVar15 = FUN_1006d5d0(*piVar2 + 0x14f0,iVar7,&local_50), (uVar15 & 1) == 0)) {
    iVar13 = (int)local_50;
  }
  else {
    iVar13 = (int)local_50;
    FUN_1007ac00(local_50 & 0xffffffff,param_3,iVar7);
    param_3 = iVar13;
  }
  iVar12 = local_48;
  iVar7 = *piVar2;
  iVar11 = local_50._4_4_;
  bVar10 = true;
  puVar3 = (undefined4 *)(iVar7 + 0x11c0);
  cVar6 = *(char *)(iVar7 + 0x12ec);
  if (cVar6 == '\0') {
LAB_10037998:
    if (cVar6 != '\0') goto LAB_100379e8;
  }
  else {
    puVar14 = (undefined4 *)FUN_10055198(puVar3,0x1c);
    if (puVar14 != (undefined4 *)0x0) {
      piVar2 = (int *)(iVar7 + 0x12e8);
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(ZEXT48(piVar2),0x10);
        if (bVar9) {
          *piVar2 = *piVar2 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      DataMemoryBarrier(2,3);
      puVar14[1] = 0x1c;
      puVar14[2] = param_1;
      puVar14[3] = param_2;
      puVar14[4] = param_3;
      *(undefined1 *)(puVar14 + 5) = param_4;
      puVar14[6] = iVar13;
      puVar14[7] = iVar12;
      puVar14[8] = iVar11;
      puVar5 = (undefined4 *)((int)puVar14 + 0x27U & 0xfffffffc);
      *puVar5 = 0;
      *puVar14 = FUN_10037a60;
      puVar3[*(int *)(iVar7 + 0x12e4) * 5 + 0x1a] = puVar5;
      if (*(char *)(iVar7 + 0x12ed) != '\0') {
        *puVar3 = 0;
        (*(code *)PTR_FUN_1009d0c4)(*(undefined4 *)(iVar7 + 0x1220));
        bVar10 = false;
      }
      goto LAB_10037998;
    }
    *puVar3 = 0;
    (*(code *)PTR_FUN_1009d0dc)(100);
    FUN_100552f0(puVar3);
  }
  piVar2 = *(int **)(iVar7 + 0x12d0);
  *piVar2 = param_1;
  piVar2[1] = param_2;
  piVar2[2] = param_3;
  *(undefined1 *)(piVar2 + 3) = param_4;
  piVar2[4] = iVar13;
  piVar2[5] = iVar12;
  piVar2[6] = iVar11;
  FUN_10037a60(piVar2);
LAB_100379e8:
  if (bVar10) {
    *puVar3 = 0;
  }
  return;
}

