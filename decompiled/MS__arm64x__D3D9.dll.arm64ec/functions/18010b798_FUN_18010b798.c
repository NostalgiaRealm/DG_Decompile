/*
 * FUN_18010b798 at 18010b798
 * undefined FUN_18010b798(void)
 * Address ranges: 18010b798-18010bcab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18010b798(longlong param_1,longlong param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  int *piVar8;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auStack_160 [8];
  longlong local_158;
  code *local_150;
  longlong local_148;
  longlong local_140 [5];
  undefined4 local_118;
  undefined4 local_110 [2];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  
  local_148 = param_1 + 0x6000;
  if (*(char *)(param_1 + 0x681c) != '\0') {
    return 0;
  }
  if (param_2 == 0) {
    return -0x7789f794;
  }
  uVar6 = FUN_1801181c0(auStack_160);
  *(undefined1 *)(param_1 + 0x681c) = 1;
  if ((*(char *)(param_1 + 0x6819) != '\0') && (*(char *)(param_1 + 0x681a) == '\0')) {
    iVar3 = -0x7789f798;
    goto LAB_18010ba3c;
  }
  local_150 = (code *)__hybrid_os_arm64x_dispatch_icall;
  if ((param_3 & 1) == 0) {
LAB_18010b848:
    lVar12 = 0;
    local_140[2] = 0;
    local_140[3] = 0;
    local_140[0] = 0;
    local_140[1] = 0;
    uVar9 = 1;
    if ((*(uint *)(param_1 + 0xe78) >> 9 & 1) == 0) {
      uVar5 = 1;
    }
    else {
      uVar5 = *(undefined4 *)(param_1 + 0xe38);
    }
    uVar11 = 0;
    local_158 = CONCAT44(local_158._4_4_,uVar5);
    while( true ) {
      uVar4 = (uint)local_158;
      uVar10 = (uint)uVar11;
      if ((uint)local_158 <= uVar10) break;
      local_c8 = *(longlong *)(*(longlong *)(param_1 + 0xe30) + uVar11 * 8);
      local_110[0] = *(undefined4 *)(local_c8 + 0xe8);
      if ((*(longlong *)(param_2 + 0x20 + uVar11 * 0x40) == 0) &&
         (*(longlong *)(param_1 + 0xe70) == 0)) {
        iVar3 = -0x7789f794;
        lVar15 = local_140[0];
        goto LAB_18010b9dc;
      }
      puVar7 = (undefined8 *)FUN_180108168(uVar6,auStack_c0,uVar11 * 0x40 + param_2);
      uStack_100 = puVar7[1];
      local_108 = *puVar7;
      uStack_f0 = puVar7[3];
      uStack_f8 = puVar7[2];
      uStack_e0 = puVar7[5];
      local_e8 = puVar7[4];
      uStack_d0 = puVar7[7];
      local_d8 = puVar7[6];
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      iVar3 = FUN_180107cc8(*(undefined8 *)(param_1 + 0xe28),local_110[0],
                            *(undefined4 *)(param_1 + 0xe68),*(undefined8 *)(param_1 + 0xe70),
                            &local_108,auStack_c0);
      if (-1 < iVar3) {
        iVar3 = 0;
      }
      if ((-1 < iVar3) && ((*(uint *)(param_1 + 0xe78) >> 9 & 1) != 0)) {
        iVar3 = -0x7789f794;
        if ((int)uStack_e0 == 0) {
          if (uVar10 == 0) {
            piVar8 = (int *)&local_108;
          }
          else {
            piVar8 = (int *)(lVar12 + 8);
          }
          if ((piVar8[0xb] == uStack_e0._4_4_) &&
             ((uStack_e0._4_4_ == 0 ||
              ((((piVar8[0xc] == (int)local_d8 && (piVar8[2] == (int)uStack_100)) &&
                (*piVar8 == (int)local_108)) && (piVar8[1] == local_108._4_4_)))))) {
            iVar3 = 0;
          }
        }
      }
      uVar6 = FUN_1801195a8(*(undefined8 *)(*(longlong *)(param_1 + 0xe30) + uVar11 * 8),auStack_c0)
      ;
      uVar4 = (uint)uVar6;
      if ((-1 < iVar3) &&
         ((uVar6 = FUN_18010bd88(local_140,auStack_c0), lVar15 = local_140[0], (uVar6 & 1) == 0 ||
          (uVar6 = FUN_18010bcc0(local_140 + 2,local_110), lVar12 = local_140[2],
          lVar15 = local_140[0], (uVar6 & 1) == 0)))) goto LAB_18010b9d8;
      uVar11 = (ulonglong)(uVar10 + 1);
      uVar9 = uVar4 & 0xff & uVar9;
      lVar15 = local_140[0];
      if (iVar3 < 0) goto LAB_18010b9dc;
    }
    (*local_150)();
    (*extraout_x11_01)(param_1);
    if (*(longlong *)(param_1 + 0xe90) != 0) {
      thunk_FUN_180223c84();
      *(undefined8 *)(param_1 + 0xe90) = 0;
    }
    lVar15 = local_140[0];
    if (uVar9 != 0) {
      puVar7 = *(undefined8 **)(param_1 + 0xe30);
      (*local_150)();
      (*extraout_x11_02)(param_1,*puVar7);
      bVar2 = true;
      if (uVar4 != 0) {
        lVar14 = 0;
        local_158 = lVar12;
        do {
          puVar1 = (undefined4 *)(local_158 + lVar14 * 0x50);
          iVar3 = thunk_FUN_180223cfc(*(undefined8 *)(puVar1 + 10));
          if (iVar3 != 0) {
            thunk_FUN_180223d10(*(undefined8 *)(puVar1 + 10),1);
          }
          puVar7 = (undefined8 *)(lVar15 + lVar14 * 0x78);
          if ((*(char *)((longlong)puVar7 + 0x71) == '\0') &&
             ((*(char *)(DAT_18024d928 + 0x881) != '\0' ||
              (*(char *)(DAT_18024d928 + 0x820) == '\0')))) {
            uVar13 = *(undefined8 *)(*(longlong *)(param_1 + 0xe30) + lVar14 * 8);
            uVar6 = FUN_18012ec60(uVar13);
            if ((uVar6 & 1) == 0) {
              FUN_18012e9d8(uVar13,0);
            }
            local_140[4] = puVar7[3];
            local_140[3] = puVar7[2];
            local_140[2] = puVar7[1];
            local_118 = *(undefined4 *)(puVar7 + 9);
            FUN_180108248(*(undefined8 *)(param_1 + 0xe28),*puVar1,local_140 + 2,puVar7 + 4);
          }
          uVar6 = (ulonglong)*(uint *)(param_1 + 0xea8);
          if ((&DAT_18024ea4e)[uVar6 * 600] == '\0') {
            FUN_180107428(*(undefined8 *)(param_1 + 0xe28),uVar6);
          }
          *(undefined4 *)(param_1 + 0xe88) = *(undefined4 *)(&DAT_18024e330 + uVar6 * 0x28);
          (*local_150)();
          (*extraout_x11_03)(param_1,*(undefined4 *)(lVar15 + 8),*(undefined4 *)(lVar15 + 0xc));
          if (*(int *)(param_1 + 0xe68) == 1) {
            uVar5 = FUN_180119708(puVar7);
          }
          else {
            uVar5 = 0;
          }
          uVar4 = uVar4 - 1;
          uVar13 = *puVar7;
          uVar17 = puVar7[3];
          uVar16 = puVar7[2];
          lVar12 = *(longlong *)(*(longlong *)(param_1 + 0xe30) + lVar14 * 8);
          lVar14 = lVar14 + 1;
          *(undefined8 *)(lVar12 + 0x90) = puVar7[1];
          *(undefined8 *)(lVar12 + 0x88) = uVar13;
          *(undefined8 *)(lVar12 + 0xa0) = uVar17;
          *(undefined8 *)(lVar12 + 0x98) = uVar16;
          uVar13 = puVar7[4];
          uVar17 = puVar7[7];
          uVar16 = puVar7[6];
          *(undefined8 *)(lVar12 + 0xb0) = puVar7[5];
          *(undefined8 *)(lVar12 + 0xa8) = uVar13;
          *(undefined8 *)(lVar12 + 0xc0) = uVar17;
          *(undefined8 *)(lVar12 + 0xb8) = uVar16;
          uVar13 = puVar7[8];
          uVar17 = puVar7[0xb];
          uVar16 = puVar7[10];
          *(undefined8 *)(lVar12 + 0xd0) = puVar7[9];
          *(undefined8 *)(lVar12 + 200) = uVar13;
          *(undefined8 *)(lVar12 + 0xe0) = uVar17;
          *(undefined8 *)(lVar12 + 0xd8) = uVar16;
          uVar13 = puVar7[0xc];
          *(undefined8 *)(lVar12 + 0xf0) = puVar7[0xd];
          *(undefined8 *)(lVar12 + 0xe8) = uVar13;
          uVar13 = puVar7[0xe];
          bVar2 = false;
          *(undefined4 *)(lVar12 + 0x114) = uVar5;
          *(undefined1 *)(lVar12 + 0x120) = 0;
          *(undefined8 *)(lVar12 + 0xf8) = uVar13;
          *(undefined1 *)(local_148 + 0x819) = 0;
          lVar12 = local_158;
        } while (uVar4 != 0);
      }
      goto LAB_18010bc80;
    }
    FUN_180108778(param_1,1);
    iVar3 = FUN_180108628(param_1,local_140[3] & 0xffffffff,lVar12);
    if (iVar3 < 0) {
LAB_18010b9d8:
      iVar3 = -0x7fffbffb;
      goto LAB_18010b9dc;
    }
    bVar2 = false;
    *(undefined1 *)(local_148 + 0x819) = 0;
LAB_18010bc80:
    (*local_150)();
    (*extraout_x11_04)(param_1);
    *(undefined1 *)(param_1 + 0xd11) = 0;
    iVar3 = 0;
    goto LAB_18010b9e0;
  }
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  uVar6 = (*extraout_x11)(param_1);
  iVar3 = 0;
  if ((uVar6 & 0xff) != 0) {
    iVar3 = -0x7789f798;
  }
  if ((uVar6 & 0xff) == 0) goto LAB_18010b848;
LAB_18010b9f4:
  lVar12 = local_148;
  if (*(char *)(local_148 + 0x819) == '\0') {
    (*local_150)();
    (*extraout_x11_00)();
    if (*(char *)(param_1 + 0xe83) != '\0') {
      *(undefined1 *)(lVar12 + 0x819) = 1;
    }
    *(undefined1 *)(param_1 + 0x681a) = 1;
  }
LAB_18010ba3c:
  *(undefined1 *)(local_148 + 0x81c) = 0;
  FUN_180118248(auStack_160);
  return iVar3;
LAB_18010b9dc:
  bVar2 = true;
LAB_18010b9e0:
  FUN_1802229d8(lVar15);
  FUN_1802229d8(lVar12);
  if (!bVar2) goto LAB_18010ba3c;
  goto LAB_18010b9f4;
}

