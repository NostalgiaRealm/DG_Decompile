/*
 * FUN_1001d730 at 1001d730
 * undefined FUN_1001d730(void)
 * Address ranges: 1001d730-1001db7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1001d730(int param_1,int param_2,int param_3,uint param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  char cVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  int iVar16;
  char *local_e0;
  char *local_dc;
  int local_c0;
  int local_bc;
  int local_b8;
  int iStack_b4;
  int local_b0;
  int local_ac;
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
  
  iVar8 = *(int *)(param_1 + 8) + *(int *)(param_1 + 0x10) * 0x16c0;
  iVar5 = *(int *)(*(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x34) * 8);
  puVar13 = (undefined4 *)FUN_1001cf58(param_1,iVar8 + 0x6c0,param_4,param_2 + param_3,&local_70);
  if (((uint)puVar13 & 1) == 0) {
    iVar16 = 0;
    local_b8 = param_2 + param_3;
    iVar8 = iVar8 + 0x6c0;
    local_ac = iVar5;
    local_b0 = param_3;
    while (param_4 != 0) {
      uVar3 = 0x1000000;
      if (param_4 < 0x1000001) {
        uVar3 = param_4;
      }
      iStack_b4 = iVar8;
      uVar15 = FUN_1001cf58(puVar13,iVar8,uVar3,local_b8 + iVar16,&local_70);
      if ((uVar15 & 1) == 0) {
        local_dc = s_an_upload_heap_buffer_1009ddf0;
        local_e0 = s__dgVoodoo__D3D12_Core__FATAL_ERR_1009ea60;
        FUN_1006c670(&local_e0,8);
        puVar13 = (undefined4 *)(*(code *)PTR_FUN_100a100c)();
        iVar8 = iStack_b4;
      }
      else {
        local_80 = local_50;
        uStack_98 = uStack_68;
        local_a0 = local_70;
        uStack_88 = uStack_58;
        uStack_90 = uStack_60;
        local_bc = iVar16 + local_b0;
        uVar6 = *(undefined4 *)(local_ac + 0x40);
        local_c0 = iVar8 + 0x1430;
        uVar7 = *(undefined4 *)(iVar8 + 0x1304);
        puVar14 = (undefined4 *)(iVar8 + 0x11c0);
        puVar13 = (undefined4 *)FUN_10081528(puVar14);
        bVar10 = true;
        bVar12 = *(char *)(iVar8 + 0x12ec) == '\0';
        if (*(char *)(iVar8 + 0x12ec) != '\0') {
          puVar13 = (undefined4 *)FUN_100813d0(puVar14,0x38);
          if (puVar13 == (undefined4 *)0x0) {
            *puVar14 = 0;
            (*(code *)PTR_FUN_100a1074)(100);
            puVar13 = (undefined4 *)FUN_10081528(puVar14);
            bVar12 = true;
          }
          else {
            piVar1 = (int *)(iVar8 + 0x12e8);
            do {
              cVar4 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
              if (bVar11) {
                *piVar1 = *piVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
            puVar13[1] = 0x38;
            puVar13[2] = uVar7;
            puVar13[3] = local_c0;
            puVar13[4] = uVar6;
            puVar13[5] = local_bc;
            *(undefined8 *)(puVar13 + 8) = uStack_98;
            *(undefined8 *)(puVar13 + 6) = local_a0;
            *(undefined8 *)(puVar13 + 0xc) = uStack_88;
            *(undefined8 *)(puVar13 + 10) = uStack_90;
            *(undefined8 *)(puVar13 + 0xe) = local_80;
            puVar2 = (undefined4 *)((int)puVar13 + 0x43U & 0xfffffffc);
            *puVar2 = 0;
            *puVar13 = FUN_1001db80;
            puVar14[*(int *)(iVar8 + 0x12e4) * 5 + 0x1a] = puVar2;
            if (*(char *)(iVar8 + 0x12ed) != '\0') {
              *puVar14 = 0;
              puVar13 = (undefined4 *)(*(code *)PTR_FUN_100a1064)(*(undefined4 *)(iVar8 + 0x1220));
              bVar10 = false;
            }
          }
        }
        if (bVar12) {
          puVar13 = *(undefined4 **)(iVar8 + 0x12d0);
          *puVar13 = uVar7;
          puVar13[1] = local_c0;
          puVar13[2] = uVar6;
          puVar13[3] = local_bc;
          *(undefined8 *)(puVar13 + 6) = uStack_98;
          *(undefined8 *)(puVar13 + 4) = local_a0;
          *(undefined8 *)(puVar13 + 10) = uStack_88;
          *(undefined8 *)(puVar13 + 8) = uStack_90;
          *(undefined8 *)(puVar13 + 0xc) = local_80;
          puVar13 = (undefined4 *)FUN_1001db80(puVar13);
        }
        if (bVar10) {
          *puVar14 = 0;
        }
        iVar16 = uVar3 + iVar16;
        param_4 = param_4 - uVar3;
        iVar8 = iStack_b4;
      }
    }
    return 1;
  }
  local_80 = local_50;
  uVar6 = *(undefined4 *)(iVar5 + 0x40);
  uStack_98 = uStack_68;
  local_a0 = local_70;
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uVar7 = *(undefined4 *)(iVar8 + 0x19c4);
  puVar13 = (undefined4 *)(iVar8 + 0x1880);
  FUN_10081528(puVar13);
  cVar4 = *(char *)(iVar8 + 0x19ac);
  bVar12 = true;
  if (cVar4 == '\0') {
LAB_1001d8c0:
    if (cVar4 != '\0') goto LAB_1001d904;
  }
  else {
    puVar14 = (undefined4 *)FUN_100813d0(puVar13,0x38);
    if (puVar14 != (undefined4 *)0x0) {
      piVar1 = (int *)(iVar8 + 0x19a8);
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
        if (bVar10) {
          *piVar1 = *piVar1 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      DataMemoryBarrier(2,3);
      puVar14[1] = 0x38;
      puVar14[2] = uVar7;
      puVar14[3] = iVar8 + 0x1af0;
      puVar14[4] = uVar6;
      puVar14[5] = param_3;
      *(undefined8 *)(puVar14 + 8) = uStack_98;
      *(undefined8 *)(puVar14 + 6) = local_a0;
      *(undefined8 *)(puVar14 + 0xc) = uStack_88;
      *(undefined8 *)(puVar14 + 10) = uStack_90;
      *(undefined8 *)(puVar14 + 0xe) = local_80;
      puVar2 = (undefined4 *)((int)puVar14 + 0x43U & 0xfffffffc);
      *puVar2 = 0;
      *puVar14 = FUN_1001db80;
      puVar13[*(int *)(iVar8 + 0x19a4) * 5 + 0x1a] = puVar2;
      if (*(char *)(iVar8 + 0x19ad) != '\0') {
        *puVar13 = 0;
        (*(code *)PTR_FUN_100a1064)(*(undefined4 *)(iVar8 + 0x18e0));
        bVar12 = false;
      }
      goto LAB_1001d8c0;
    }
    *puVar13 = 0;
    (*(code *)PTR_FUN_100a1074)(100);
    FUN_10081528(puVar13);
  }
  puVar14 = *(undefined4 **)(iVar8 + 0x1990);
  *puVar14 = uVar7;
  puVar14[1] = iVar8 + 0x1af0;
  puVar14[2] = uVar6;
  puVar14[3] = param_3;
  *(undefined8 *)(puVar14 + 6) = uStack_98;
  *(undefined8 *)(puVar14 + 4) = local_a0;
  *(undefined8 *)(puVar14 + 10) = uStack_88;
  *(undefined8 *)(puVar14 + 8) = uStack_90;
  *(undefined8 *)(puVar14 + 0xc) = local_80;
  FUN_1001db80(puVar14);
LAB_1001d904:
  if (bVar12) {
    *puVar13 = 0;
  }
  return 1;
}

