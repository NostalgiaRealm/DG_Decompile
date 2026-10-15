/*
 * FUN_1800060c8 at 1800060c8
 * undefined FUN_1800060c8(void)
 * Address ranges: 1800060c8-18000655f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800060c8(longlong *param_1,longlong param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  int *piVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auStack_160 [8];
  longlong local_158 [3];
  longlong local_140;
  ulonglong uStack_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_120 [2];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined1 auStack_d0 [8];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  
  iVar5 = -0x7789f794;
  if (*(char *)((longlong)param_1 + 0x681c) != '\0') {
    return 0;
  }
  if (param_2 == 0) {
    return -0x7789f794;
  }
  uVar7 = FUN_18000cd40(auStack_160);
  *(undefined1 *)((longlong)param_1 + 0x681c) = 1;
  if ((*(char *)((longlong)param_1 + 0x6819) != '\0') &&
     (*(char *)((longlong)param_1 + 0x681a) == '\0')) {
    iVar3 = -0x7789f798;
    goto LAB_180006334;
  }
  if ((param_3 & 1) == 0) {
LAB_180006160:
    lVar16 = 0;
    local_140 = 0;
    uStack_138 = 0;
    local_158[0] = 0;
    local_158[1] = 0;
    uVar14 = 1;
    if ((*(uint *)(param_1 + 0x1cf) >> 9 & 1) == 0) {
      uVar17 = 1;
    }
    else {
      uVar17 = *(uint *)(param_1 + 0x1c7);
    }
    uVar12 = 0;
    while (uVar11 = (uint)uVar12, uVar11 < uVar17) {
      local_d8 = *(longlong *)(param_1[0x1c6] + uVar12 * 8);
      local_120[0] = *(undefined4 *)(local_d8 + 0xe8);
      if ((*(longlong *)(param_2 + 0x20 + uVar12 * 0x40) == 0) &&
         (lVar15 = local_158[0], iVar3 = iVar5, param_1[0x1ce] == 0)) goto LAB_1800062e8;
      puVar8 = (undefined8 *)FUN_180002f20(uVar7,auStack_d0,uVar12 * 0x40 + param_2);
      uStack_110 = puVar8[1];
      local_118 = *puVar8;
      uStack_100 = puVar8[3];
      uStack_108 = puVar8[2];
      uStack_f0 = puVar8[5];
      local_f8 = puVar8[4];
      uStack_e0 = puVar8[7];
      local_e8 = puVar8[6];
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      iVar3 = FUN_180002a98(param_1[0x1c5],local_120[0],(int)param_1[0x1cd],param_1[0x1ce],
                            &local_118,auStack_d0);
      if (-1 < iVar3) {
        iVar3 = 0;
      }
      if (((-1 < iVar3) && ((*(uint *)(param_1 + 0x1cf) >> 9 & 1) != 0)) &&
         (iVar3 = iVar5, (int)uStack_f0 == 0)) {
        if (uVar11 == 0) {
          piVar9 = (int *)&local_118;
        }
        else {
          piVar9 = (int *)(lVar16 + 8);
        }
        if ((piVar9[0xb] == uStack_f0._4_4_) &&
           ((uStack_f0._4_4_ == 0 ||
            (((piVar9[0xc] == (int)local_e8 && (piVar9[2] == (int)uStack_110)) &&
             ((*piVar9 == (int)local_118 && (piVar9[1] == local_118._4_4_)))))))) {
          iVar3 = 0;
        }
      }
      uVar7 = func_0x0001801195a8(*(undefined8 *)(param_1[0x1c6] + uVar12 * 8),auStack_d0);
      uVar4 = (uint)uVar7;
      if ((-1 < iVar3) &&
         ((uVar7 = FUN_180006638(local_158,auStack_d0), lVar15 = local_158[0], (uVar7 & 1) == 0 ||
          (uVar7 = FUN_180006570(&local_140,local_120), lVar15 = local_158[0], lVar16 = local_140,
          (uVar7 & 1) == 0)))) goto LAB_1800062e4;
      uVar12 = (ulonglong)(uVar11 + 1);
      uVar14 = uVar4 & 0xff & uVar14;
      lVar15 = local_158[0];
      if (iVar3 < 0) goto LAB_1800062e8;
    }
    (**(code **)(*param_1 + 0x30))(param_1);
    if (param_1[0x1d2] != 0) {
      (*__imp_USER32_dll_DestroyIcon)();
      param_1[0x1d2] = 0;
    }
    lVar15 = local_158[0];
    if (uVar14 != 0) {
      (**(code **)(*param_1 + 0x38))(param_1,*(undefined8 *)param_1[0x1c6]);
      bVar2 = true;
      if (uVar17 != 0) {
        lVar13 = 0;
        do {
          puVar1 = (undefined4 *)(lVar16 + lVar13 * 0x50);
          iVar5 = (*__imp_USER32_dll_IsIconic)(*(undefined8 *)(puVar1 + 10));
          if (iVar5 != 0) {
            (*__imp_USER32_dll_ShowWindow)(*(undefined8 *)(puVar1 + 10),1);
          }
          puVar8 = (undefined8 *)(lVar15 + lVar13 * 0x78);
          if ((*(char *)((longlong)puVar8 + 0x71) == '\0') &&
             ((*(char *)(DAT_18024de60 + 0x881) != '\0' ||
              (*(char *)(DAT_18024de60 + 0x820) == '\0')))) {
            uVar18 = *(undefined8 *)(param_1[0x1c6] + lVar13 * 8);
            uVar7 = FUN_180022668(uVar18);
            if ((uVar7 & 1) == 0) {
              FUN_180022478(uVar18,0);
            }
            local_130 = puVar8[3];
            uStack_138 = puVar8[2];
            local_140 = puVar8[1];
            local_128 = *(undefined4 *)(puVar8 + 9);
            FUN_180003008(param_1[0x1c5],*puVar1,&local_140,puVar8 + 4);
          }
          uVar7 = (ulonglong)*(uint *)(param_1 + 0x1d5);
          if ((&DAT_180253a5e)[uVar7 * 600] == '\0') {
            FUN_180002220(param_1[0x1c5],uVar7);
          }
          *(undefined4 *)(param_1 + 0x1d1) = *(undefined4 *)(&DAT_180253340 + uVar7 * 0x28);
          (**(code **)(*param_1 + 0x18))
                    (param_1,*(undefined4 *)(lVar15 + 8),*(undefined4 *)(lVar15 + 0xc));
          if ((int)param_1[0x1cd] == 1) {
            uVar6 = FUN_18000dfc8(puVar8);
          }
          else {
            uVar6 = 0;
          }
          uVar17 = uVar17 - 1;
          uVar20 = *puVar8;
          uVar19 = puVar8[3];
          uVar18 = puVar8[2];
          lVar10 = *(longlong *)(param_1[0x1c6] + lVar13 * 8);
          lVar13 = lVar13 + 1;
          *(undefined8 *)(lVar10 + 0x90) = puVar8[1];
          *(undefined8 *)(lVar10 + 0x88) = uVar20;
          *(undefined8 *)(lVar10 + 0xa0) = uVar19;
          *(undefined8 *)(lVar10 + 0x98) = uVar18;
          uVar20 = puVar8[4];
          uVar19 = puVar8[7];
          uVar18 = puVar8[6];
          *(undefined8 *)(lVar10 + 0xb0) = puVar8[5];
          *(undefined8 *)(lVar10 + 0xa8) = uVar20;
          *(undefined8 *)(lVar10 + 0xc0) = uVar19;
          *(undefined8 *)(lVar10 + 0xb8) = uVar18;
          uVar20 = puVar8[8];
          uVar19 = puVar8[0xb];
          uVar18 = puVar8[10];
          *(undefined8 *)(lVar10 + 0xd0) = puVar8[9];
          *(undefined8 *)(lVar10 + 200) = uVar20;
          *(undefined8 *)(lVar10 + 0xe0) = uVar19;
          *(undefined8 *)(lVar10 + 0xd8) = uVar18;
          uVar18 = puVar8[0xc];
          *(undefined8 *)(lVar10 + 0xf0) = puVar8[0xd];
          *(undefined8 *)(lVar10 + 0xe8) = uVar18;
          uVar18 = puVar8[0xe];
          bVar2 = false;
          *(undefined4 *)(lVar10 + 0x114) = uVar6;
          *(undefined1 *)(lVar10 + 0x120) = 0;
          *(undefined8 *)(lVar10 + 0xf8) = uVar18;
          *(undefined1 *)((longlong)param_1 + 0x6819) = 0;
        } while (uVar17 != 0);
      }
      goto LAB_180006544;
    }
    FUN_180003588(param_1,1);
    iVar5 = FUN_180003428(param_1,uStack_138 & 0xffffffff,lVar16);
    if (iVar5 < 0) {
LAB_1800062e4:
      iVar3 = -0x7fffbffb;
      goto LAB_1800062e8;
    }
    *(undefined1 *)((longlong)param_1 + 0x6819) = 0;
    bVar2 = false;
LAB_180006544:
    (**(code **)(*param_1 + 0x40))(param_1);
    *(undefined1 *)((longlong)param_1 + 0xd11) = 0;
    iVar3 = 0;
    goto LAB_1800062ec;
  }
  uVar7 = (**(code **)(*param_1 + 0x28))(param_1);
  iVar3 = 0;
  if ((uVar7 & 0xff) != 0) {
    iVar3 = -0x7789f798;
  }
  if ((uVar7 & 0xff) == 0) goto LAB_180006160;
LAB_180006300:
  if (*(char *)((longlong)param_1 + 0x6819) == '\0') {
    (**(code **)(*(longlong *)param_1[5] + 0x28))();
    if (*(char *)((longlong)param_1 + 0xe83) != '\0') {
      *(undefined1 *)((longlong)param_1 + 0x6819) = 1;
    }
    *(undefined1 *)((longlong)param_1 + 0x681a) = 1;
  }
LAB_180006334:
  *(undefined1 *)((longlong)param_1 + 0x681c) = 0;
  FUN_18000cde0(auStack_160);
  return iVar3;
LAB_1800062e8:
  bVar2 = true;
LAB_1800062ec:
  thunk_FUN_180102fc0(lVar15);
  thunk_FUN_180102fc0(lVar16);
  if (!bVar2) goto LAB_180006334;
  goto LAB_180006300;
}

