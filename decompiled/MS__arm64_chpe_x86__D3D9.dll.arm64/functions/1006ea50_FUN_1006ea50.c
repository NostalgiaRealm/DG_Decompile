/*
 * FUN_1006ea50 at 1006ea50
 * undefined FUN_1006ea50(void)
 * Address ranges: 1006ea50-1006eddf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1006ea50(int param_1,int param_2,int param_3,uint param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  code *extraout_w11;
  int extraout_w13;
  int extraout_w13_00;
  int extraout_w13_01;
  int iVar13;
  ulonglong uVar14;
  ulonglong extraout_x14;
  ulonglong extraout_x14_00;
  uint extraout_w15;
  uint extraout_w15_00;
  uint extraout_w15_01;
  uint uVar15;
  undefined8 uVar16;
  undefined8 local_48;
  
  iVar13 = param_1 + 0xc000;
  uVar12 = 0x80004005;
  if ((param_4 >> 1 & 1) == 0) {
    iVar4 = *(int *)(param_2 + 8);
    if (((iVar4 - 8U & 0xfffffff9) == 0 && iVar4 != 0xe) || ((iVar4 - 9U & 0xfffffffd) != 0)) {
      FUN_1006f3d8(param_2);
      *(longlong *)(param_2 + 0x20) = *(longlong *)(param_2 + 0x20) + 1;
      *(undefined4 *)(param_2 + 0x34) = 2;
      *(undefined8 *)(param_2 + 0x18) = 0;
      *(undefined4 *)(param_2 + 0x28) = 0;
      uVar14 = ZEXT48((undefined4 *)(param_2 + 0x34));
      uVar15 = extraout_w15_01;
      iVar13 = extraout_w13_01;
LAB_1006eb94:
      *(undefined4 *)(param_2 + 0x38) = 0;
    }
    else {
      uVar14 = ZEXT48((int *)(param_2 + 0x34U));
      iVar4 = *(int *)(param_2 + 0x34U);
      uVar15 = (uint)(iVar4 == 1);
      if (iVar4 == 1) {
        FUN_1006f3d8(param_2);
        *(undefined4 *)(param_2 + 0x34) = 2;
        uVar14 = extraout_x14_00;
        uVar15 = extraout_w15_00;
        iVar13 = extraout_w13_00;
        goto LAB_1006eb94;
      }
    }
    if ((param_3 == 8) && (*(char *)(param_2 + 0x3c) != '\0')) {
      bVar9 = true;
    }
    else {
      bVar9 = false;
    }
    uVar14 = uVar14 & 0xffffffff;
  }
  else {
    uVar14 = ZEXT48((int *)(param_2 + 0x34U));
    iVar4 = *(int *)(param_2 + 0x34U);
    bVar9 = false;
    uVar15 = (uint)(iVar4 != 1);
    if ((*(int *)(param_2 + 8) - 9U & 0xfffffffd) == 0) {
      if (iVar4 != 1) {
        FUN_1006f3d8(param_2);
        *(longlong *)(param_2 + 0x20) = *(longlong *)(param_2 + 0x20) + 1;
        *(undefined4 *)(param_2 + 0x34) = 1;
        *(undefined8 *)(param_2 + 0x18) = 0;
        *(undefined4 *)(param_2 + 0x28) = 0;
        *(undefined4 *)(param_2 + 0x38) = 0;
        uVar14 = extraout_x14;
        uVar15 = extraout_w15;
        iVar13 = extraout_w13;
      }
    }
    else {
      uVar15 = 0;
    }
  }
  if (uVar15 == 0) goto LAB_1006eda0;
  if (param_3 == 0xc) {
    uVar10 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar10,&local_48);
    FUN_1006f430(param_2,local_48,*(undefined8 *)(param_2 + 0x20),1);
  }
  else {
    if (bVar9) {
      do {
        iVar4 = *(int *)uVar14;
        if (iVar4 == 2) {
          iVar4 = 3;
        }
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(uVar14 & 0xffffffff,0x10);
        if (bVar7) {
          *(int *)uVar14 = iVar4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      DataMemoryBarrier(2,3);
    }
    iVar13 = *(int *)(iVar13 + 0x36b8);
    uVar16 = *(undefined8 *)(param_2 + 0x20);
    puVar2 = (undefined4 *)(iVar13 + 0x11c0);
    FUN_101308d0(puVar2);
    cVar5 = *(char *)(iVar13 + 0x12ec);
    bVar7 = true;
    if (cVar5 == '\0') {
LAB_1006ed50:
      if (cVar5 == '\0') goto LAB_1006ed58;
    }
    else {
      puVar11 = (undefined4 *)FUN_10130778(puVar2,0x1c);
      if (puVar11 != (undefined4 *)0x0) {
        piVar1 = (int *)(iVar13 + 0x12e8);
        do {
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
          if (bVar8) {
            *piVar1 = *piVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        DataMemoryBarrier(2,3);
        puVar11[1] = 0x1c;
        puVar11[2] = param_1;
        puVar11[3] = param_2;
        puVar11[4] = param_3;
        puVar11[5] = param_4;
        *(undefined8 *)(puVar11 + 6) = uVar16;
        *(bool *)(puVar11 + 8) = bVar9;
        puVar3 = (undefined4 *)((int)puVar11 + 0x27U & 0xfffffffc);
        *puVar3 = 0;
        *puVar11 = FUN_1006edf0;
        puVar2[*(int *)(iVar13 + 0x12e4) * 5 + 0x1a] = puVar3;
        if (*(char *)(iVar13 + 0x12ed) != '\0') {
          *puVar2 = 0;
          (*(code *)PTR_FUN_1016c0fc)(*(undefined4 *)(iVar13 + 0x1220));
          bVar7 = false;
        }
        goto LAB_1006ed50;
      }
      *puVar2 = 0;
      (*(code *)PTR_FUN_1016c114)(100);
      FUN_101308d0(puVar2);
LAB_1006ed58:
      piVar1 = *(int **)(iVar13 + 0x12d0);
      *piVar1 = param_1;
      piVar1[1] = param_2;
      piVar1[2] = param_3;
      piVar1[3] = param_4;
      *(undefined8 *)(piVar1 + 4) = uVar16;
      *(bool *)(piVar1 + 6) = bVar9;
      FUN_1006edf0(piVar1);
    }
    if (bVar7) {
      *puVar2 = 0;
    }
  }
  uVar12 = 0;
LAB_1006eda0:
  return uVar12 & 0xffffffff;
}

