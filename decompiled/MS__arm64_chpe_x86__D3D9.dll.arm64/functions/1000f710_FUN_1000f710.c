/*
 * FUN_1000f710 at 1000f710
 * undefined FUN_1000f710(void)
 * Address ranges: 1000f710-1000fcaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1000f710(int param_1,uint *param_2,char param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  code *pcVar3;
  uint *puVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  int iVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  char local_160 [4];
  uint *local_15c;
  uint *local_158;
  code *local_154;
  uint *local_150;
  undefined4 *local_14c;
  int *local_148;
  uint *local_144;
  uint local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_dc;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 auStack_b0 [4];
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  
  puVar15 = (uint *)(param_1 + 0x6000);
  if (*(char *)(param_1 + 0x66a0) != '\0') {
    return 0;
  }
  if (param_2 == (uint *)0x0) {
    return -0x7789f794;
  }
  local_15c = param_2;
  FUN_1001e9f0(local_160);
  *(char *)(param_1 + 0x66a0) = '\x01';
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if ((*(char *)(param_1 + 0x669d) != '\0') && (*(char *)(param_1 + 0x669e) == '\0')) {
    iVar6 = -0x7789f798;
    goto LAB_1000fbb0;
  }
  iVar6 = 0;
  if (param_3 != '\0') {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    cVar5 = (*extraout_w11)(param_1);
    iVar6 = 0;
    if (cVar5 != '\0') {
      iVar6 = -0x7789f798;
    }
  }
  if (-1 < iVar6) {
    local_150 = (uint *)(param_1 + 0xdd0);
    local_138 = 0;
    local_130 = 0;
    local_128 = 0;
    uVar12 = 1;
    local_120 = 0;
    if ((*local_150 >> 9 & 1) == 0) {
      uVar16 = 1;
    }
    else {
      uVar16 = *(uint *)(param_1 + 0xd98);
    }
    local_154 = pcVar3;
    local_138._0_4_ = 0;
    uVar14 = 0;
    local_160[0] = '\x01';
    iVar17 = (int)local_138;
    local_158 = puVar15;
    do {
      if (uVar16 <= uVar14) break;
      local_dc = *(int *)(*(int *)(param_1 + 0xd94) + uVar14 * 4);
      local_118 = *(undefined4 *)(local_dc + 0xa4);
      iVar6 = FUN_10007aa0(param_1,local_15c + uVar14 * 0xe,&local_114,
                           *(undefined4 *)(param_1 + 0xdcc),0);
      puVar15 = local_150;
      if (-1 < iVar6) {
        local_ac = 0;
        local_a4 = 0;
        local_9c = 0;
        uVar7 = uVar14;
        if ((*local_150 & 0x200) == 0) {
          uVar7 = 0xffffffff;
        }
        iVar6 = FUN_10007b30(param_1,local_118,&local_114,1,auStack_b0,uVar7);
        if (((-1 < iVar6) && ((*puVar15 >> 9 & 1) != 0)) && (iVar6 = -0x7789f794, local_f4 == 0)) {
          if (uVar14 == 0) {
            piVar1 = &local_114;
          }
          else {
            piVar1 = (int *)(iVar17 + 4);
          }
          if ((piVar1[9] == local_f0) &&
             ((local_f0 == 0 ||
              (((piVar1[10] == local_ec && (piVar1[2] == local_10c)) &&
               ((*piVar1 == local_114 && (piVar1[1] == local_110)))))))) {
            iVar6 = 0;
          }
        }
        uVar7 = FUN_1001f8d0(*(undefined4 *)(*(int *)(param_1 + 0xd94) + uVar14 * 4),auStack_b0);
        uVar12 = uVar7 & 0xff & uVar12;
        if (-1 < iVar6) {
          uVar9 = FUN_1000fda0(&local_128,auStack_b0);
          if ((uVar9 & 1) == 0) {
            iVar6 = -0x7fffbffb;
            goto LAB_1000fb78;
          }
          cVar5 = FUN_1000fcc0(&local_138,&local_118);
          iVar17 = (int)local_138;
          if (cVar5 == '\0') {
            iVar6 = -0x7fffbffb;
          }
        }
      }
      uVar14 = uVar14 + 1;
    } while (-1 < iVar6);
    pcVar3 = local_154;
    puVar15 = local_158;
    cVar5 = local_160[0];
    local_15c = (uint *)(param_1 + 0xd94);
    if (iVar6 < 0) {
LAB_1000fb78:
      iVar13 = (int)local_128;
      puVar15 = local_158;
      cVar5 = local_160[0];
    }
    else {
      (*local_154)();
      (*extraout_w11_00)(param_1);
      FUN_1000b4e0(param_1);
      puVar4 = local_15c;
      iVar13 = (int)local_128;
      if (uVar12 == 0) {
        FUN_100075b0(param_1,1);
        iVar6 = FUN_10007490(param_1,local_138._4_4_,iVar17);
        if (iVar6 < 0) {
          iVar6 = -0x7fffbffb;
          goto LAB_1000fb7c;
        }
        *(undefined1 *)((int)puVar15 + 0x69d) = 0;
        cVar5 = '\0';
      }
      else {
        puVar10 = (undefined4 *)*local_15c;
        (*pcVar3)();
        (*extraout_w11_01)(param_1,*puVar10);
        if (uVar16 != 0) {
          local_154 = (code *)(param_1 + 0xdf0);
          local_144 = puVar4;
          local_15c = (uint *)(param_1 + 0xd90);
          local_150 = puVar4;
          local_14c = (undefined4 *)(param_1 + 0xde0);
          local_148 = (int *)(param_1 + 0xdc8);
          uVar12 = 0;
          local_158 = local_15c;
          local_140 = uVar16;
          do {
            puVar11 = (undefined4 *)(iVar17 + uVar12 * 0x40);
            puVar10 = puVar11 + 8;
            iVar6 = (*(code *)PTR_FUN_1016c20c)(*puVar10);
            if (iVar6 != 0) {
              (*(code *)PTR_FUN_1016c28c)(*puVar10,1);
            }
            puVar2 = (undefined8 *)(iVar13 + uVar12 * 0x70);
            if ((*(char *)((int)puVar2 + 0x6d) == '\0') &&
               ((*(char *)(DAT_10170ad0 + 0x7e5) != '\0' ||
                (*(char *)(DAT_10170ad0 + 0x784) == '\0')))) {
              FUN_1001fae0(*(undefined4 *)(*local_150 + uVar12 * 4));
              uStack_c8 = *(undefined8 *)((int)puVar2 + 0xc);
              local_d0 = *(undefined8 *)((int)puVar2 + 4);
              local_c0 = *(undefined8 *)((int)puVar2 + 0x14);
              local_b8 = *(undefined4 *)((int)puVar2 + 0x44);
              FUN_10004d10(*local_15c,*puVar11,&local_d0,(int)puVar2 + 0x1c);
            }
            uVar8 = FUN_10004ef0(*local_158,*(undefined4 *)local_154);
            puVar10 = (undefined4 *)(iVar13 + 8);
            puVar11 = (undefined4 *)(iVar13 + 4);
            *local_14c = uVar8;
            (*pcVar3)();
            (*extraout_w11_02)(param_1,*puVar11,*puVar10);
            if (*local_148 == 1) {
              uVar8 = FUN_1001fb30(puVar2);
            }
            else {
              uVar8 = 0;
            }
            cVar5 = '\0';
            uVar20 = *puVar2;
            uVar19 = puVar2[3];
            uVar18 = puVar2[2];
            iVar6 = uVar12 * 4;
            uVar12 = uVar12 + 1;
            iVar6 = *(int *)(*local_144 + iVar6);
            *(undefined8 *)(iVar6 + 0x50) = puVar2[1];
            *(undefined8 *)(iVar6 + 0x48) = uVar20;
            *(undefined8 *)(iVar6 + 0x60) = uVar19;
            *(undefined8 *)(iVar6 + 0x58) = uVar18;
            uVar20 = puVar2[4];
            uVar19 = puVar2[7];
            uVar18 = puVar2[6];
            *(undefined8 *)(iVar6 + 0x70) = puVar2[5];
            *(undefined8 *)(iVar6 + 0x68) = uVar20;
            *(undefined8 *)(iVar6 + 0x80) = uVar19;
            *(undefined8 *)(iVar6 + 0x78) = uVar18;
            uVar20 = puVar2[8];
            uVar19 = puVar2[0xb];
            uVar18 = puVar2[10];
            *(undefined8 *)(iVar6 + 0x90) = puVar2[9];
            *(undefined8 *)(iVar6 + 0x88) = uVar20;
            *(undefined8 *)(iVar6 + 0xa0) = uVar19;
            *(undefined8 *)(iVar6 + 0x98) = uVar18;
            uVar18 = puVar2[0xc];
            *(undefined8 *)(iVar6 + 0xb0) = puVar2[0xd];
            *(undefined8 *)(iVar6 + 0xa8) = uVar18;
            *(undefined4 *)(iVar6 + 0xcc) = uVar8;
            *(undefined1 *)(iVar6 + 0xd4) = 0;
            *(undefined1 *)((int)puVar15 + 0x69d) = 0;
          } while (uVar12 < local_140);
        }
      }
      iVar6 = 0;
      (*pcVar3)();
      (*extraout_w11_03)(param_1);
      *(undefined1 *)(param_1 + 0xcc5) = 0;
    }
LAB_1000fb7c:
    FUN_101322d0(iVar13);
    FUN_101322d0(iVar17);
    if (cVar5 == '\0') goto LAB_1000fbb0;
  }
  if (*(char *)((int)puVar15 + 0x69d) == '\0') {
    FUN_1000e230(param_1);
    *(undefined1 *)(param_1 + 0x669e) = 1;
  }
LAB_1000fbb0:
  *(undefined1 *)(param_1 + 0x66a0) = 0;
  FUN_1001eac0(local_160);
  return iVar6;
}

