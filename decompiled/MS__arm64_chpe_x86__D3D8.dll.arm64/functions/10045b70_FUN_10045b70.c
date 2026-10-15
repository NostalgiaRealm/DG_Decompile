/*
 * FUN_10045b70 at 10045b70
 * undefined FUN_10045b70(void)
 * Address ranges: 10045b70-1004608b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10045b70(int param_1,int param_2,int param_3,uint param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  bool bVar10;
  code *pcVar11;
  bool bVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int iVar15;
  ulonglong uVar16;
  code *extraout_w11;
  code *extraout_w11_00;
  int iVar17;
  char *local_e0;
  char *local_dc;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int iStack_b0;
  int local_ac;
  int local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  pcVar11 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if ((*(int *)(param_1 + 0x18) - 2U < 2) || (*(char *)(param_1 + 0x20) != '\0')) {
    local_b8 = 0;
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar15 = (*extraout_w11)(param_1,1,0,&local_b8);
    if (iVar15 == 0) {
      if (*(char *)(param_1 + 0x20) != '\0') {
        param_4 = *(uint *)(param_1 + 0x14);
        param_3 = 0;
      }
      FUN_100ff660(param_3 + local_b8,param_3 + param_2,param_4);
      (*pcVar11)();
      (*extraout_w11_00)(param_1);
      return true;
    }
    return iVar15 == 0;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    return false;
  }
  iVar7 = *(int *)(param_1 + 8) + *(int *)(param_1 + 0x10) * 0x16c0;
  iVar15 = *(int *)(*(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x34) * 8);
  puVar13 = (undefined4 *)FUN_10044d08(param_1,iVar7 + 0x6c0,param_4,param_2 + param_3,&local_70);
  if (((uint)puVar13 & 1) == 0) {
    iVar17 = 0;
    local_b4 = param_2 + param_3;
    iVar7 = iVar7 + 0x6c0;
    local_a8 = iVar15;
    local_ac = param_3;
    while (param_4 != 0) {
      uVar3 = 0x1000000;
      if (param_4 < 0x1000001) {
        uVar3 = param_4;
      }
      iStack_b0 = iVar7;
      uVar16 = FUN_10044d08(puVar13,iVar7,uVar3,local_b4 + iVar17,&local_70);
      if ((uVar16 & 1) == 0) {
        local_dc = s_an_upload_heap_buffer_1012c380;
        local_e0 = s_Q_dgVoodoo__D3D12_Core__FATAL_ER_1012ea5f + 1;
        FUN_100c23d0(&local_e0,8);
        puVar13 = (undefined4 *)(*(code *)PTR_FUN_10134064)();
        iVar7 = iStack_b0;
      }
      else {
        local_80 = local_50;
        uStack_98 = uStack_68;
        local_a0 = local_70;
        uStack_88 = uStack_58;
        uStack_90 = uStack_60;
        local_bc = iVar17 + local_ac;
        uVar5 = *(undefined4 *)(local_a8 + 0x40);
        local_c0 = iVar7 + 0x1430;
        uVar6 = *(undefined4 *)(iVar7 + 0x1304);
        puVar14 = (undefined4 *)(iVar7 + 0x11c0);
        puVar13 = (undefined4 *)FUN_100fd300(puVar14);
        bVar9 = true;
        bVar12 = *(char *)(iVar7 + 0x12ec) == '\0';
        if (*(char *)(iVar7 + 0x12ec) != '\0') {
          puVar13 = (undefined4 *)FUN_100fd1a8(puVar14,0x38);
          if (puVar13 == (undefined4 *)0x0) {
            *puVar14 = 0;
            (*(code *)PTR_FUN_10134114)(100);
            puVar13 = (undefined4 *)FUN_100fd300(puVar14);
            bVar12 = true;
          }
          else {
            piVar1 = (int *)(iVar7 + 0x12e8);
            do {
              cVar4 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
              if (bVar10) {
                *piVar1 = *piVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
            puVar13[1] = 0x38;
            puVar13[2] = uVar6;
            puVar13[3] = local_c0;
            puVar13[4] = uVar5;
            puVar13[5] = local_bc;
            *(undefined8 *)(puVar13 + 8) = uStack_98;
            *(undefined8 *)(puVar13 + 6) = local_a0;
            *(undefined8 *)(puVar13 + 0xc) = uStack_88;
            *(undefined8 *)(puVar13 + 10) = uStack_90;
            *(undefined8 *)(puVar13 + 0xe) = local_80;
            puVar2 = (undefined4 *)((int)puVar13 + 0x43U & 0xfffffffc);
            *puVar2 = 0;
            *puVar13 = FUN_10046090;
            puVar14[*(int *)(iVar7 + 0x12e4) * 5 + 0x1a] = puVar2;
            if (*(char *)(iVar7 + 0x12ed) != '\0') {
              *puVar14 = 0;
              puVar13 = (undefined4 *)(*(code *)PTR_FUN_101340fc)(*(undefined4 *)(iVar7 + 0x1220));
              bVar9 = false;
            }
          }
        }
        if (bVar12) {
          puVar13 = *(undefined4 **)(iVar7 + 0x12d0);
          *puVar13 = uVar6;
          puVar13[1] = local_c0;
          puVar13[2] = uVar5;
          puVar13[3] = local_bc;
          *(undefined8 *)(puVar13 + 6) = uStack_98;
          *(undefined8 *)(puVar13 + 4) = local_a0;
          *(undefined8 *)(puVar13 + 10) = uStack_88;
          *(undefined8 *)(puVar13 + 8) = uStack_90;
          *(undefined8 *)(puVar13 + 0xc) = local_80;
          puVar13 = (undefined4 *)FUN_10046090(puVar13);
        }
        if (bVar9) {
          *puVar14 = 0;
        }
        iVar17 = uVar3 + iVar17;
        param_4 = param_4 - uVar3;
        iVar7 = iStack_b0;
      }
    }
    return true;
  }
  local_80 = local_50;
  uVar5 = *(undefined4 *)(iVar15 + 0x40);
  uStack_98 = uStack_68;
  local_a0 = local_70;
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uVar6 = *(undefined4 *)(iVar7 + 0x19c4);
  puVar13 = (undefined4 *)(iVar7 + 0x1880);
  FUN_100fd300(puVar13);
  cVar4 = *(char *)(iVar7 + 0x19ac);
  bVar12 = true;
  if (cVar4 == '\0') {
LAB_10045d30:
    if (cVar4 != '\0') goto LAB_10045d74;
  }
  else {
    puVar14 = (undefined4 *)FUN_100fd1a8(puVar13,0x38);
    if (puVar14 != (undefined4 *)0x0) {
      piVar1 = (int *)(iVar7 + 0x19a8);
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
        if (bVar9) {
          *piVar1 = *piVar1 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      DataMemoryBarrier(2,3);
      puVar14[1] = 0x38;
      puVar14[2] = uVar6;
      puVar14[3] = iVar7 + 0x1af0;
      puVar14[4] = uVar5;
      puVar14[5] = param_3;
      *(undefined8 *)(puVar14 + 8) = uStack_98;
      *(undefined8 *)(puVar14 + 6) = local_a0;
      *(undefined8 *)(puVar14 + 0xc) = uStack_88;
      *(undefined8 *)(puVar14 + 10) = uStack_90;
      *(undefined8 *)(puVar14 + 0xe) = local_80;
      puVar2 = (undefined4 *)((int)puVar14 + 0x43U & 0xfffffffc);
      *puVar2 = 0;
      *puVar14 = FUN_10046090;
      puVar13[*(int *)(iVar7 + 0x19a4) * 5 + 0x1a] = puVar2;
      if (*(char *)(iVar7 + 0x19ad) != '\0') {
        *puVar13 = 0;
        (*(code *)PTR_FUN_101340fc)(*(undefined4 *)(iVar7 + 0x18e0));
        bVar12 = false;
      }
      goto LAB_10045d30;
    }
    *puVar13 = 0;
    (*(code *)PTR_FUN_10134114)(100);
    FUN_100fd300(puVar13);
  }
  puVar14 = *(undefined4 **)(iVar7 + 0x1990);
  *puVar14 = uVar6;
  puVar14[1] = iVar7 + 0x1af0;
  puVar14[2] = uVar5;
  puVar14[3] = param_3;
  *(undefined8 *)(puVar14 + 6) = uStack_98;
  *(undefined8 *)(puVar14 + 4) = local_a0;
  *(undefined8 *)(puVar14 + 10) = uStack_88;
  *(undefined8 *)(puVar14 + 8) = uStack_90;
  *(undefined8 *)(puVar14 + 0xc) = local_80;
  FUN_10046090(puVar14);
LAB_10045d74:
  if (bVar12) {
    *puVar13 = 0;
  }
  return true;
}

