/*
 * FUN_180008af0 at 180008af0
 * ulonglong __fastcall FUN_180008af0(longlong * param_1, longlong param_2, char param_3)
 * Address ranges: 180008af0-180009157
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180008af0(longlong *param_1,longlong param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  bool bVar13;
  char cVar14;
  BOOL BVar15;
  int iVar16;
  uint *puVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  undefined7 extraout_var;
  byte bVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  int *piVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  longlong lVar27;
  LPVOID pvVar28;
  byte local_res8 [8];
  longlong local_res10;
  LPVOID local_138;
  undefined8 local_130;
  LPVOID local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  longlong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  int local_d0;
  int local_cc;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a4;
  int local_a0;
  char local_98;
  char local_97;
  char local_96;
  uint local_88 [2];
  uint local_80;
  uint local_7c;
  uint local_78;
  undefined8 local_74;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  uint local_58;
  uint local_54;
  uint local_50;
  undefined8 local_4c;
  uint local_44;
  longlong local_40;
  
  if (*(char *)((longlong)param_1 + 0x681c) != '\0') {
    return (ulonglong)(~-(uint)(*(char *)((longlong)param_1 + 0x681c) != '\0') & 0x8876086c);
  }
  if (param_2 == 0) {
    return 0x8876086c;
  }
  local_res10 = param_2;
  FUN_180015888(local_res8);
  *(undefined1 *)((longlong)param_1 + 0x681c) = 1;
  if ((*(char *)((longlong)param_1 + 0x6819) != '\0') &&
     (*(char *)((longlong)param_1 + 0x681a) == '\0')) {
    uVar21 = 0x88760868;
    goto LAB_180009128;
  }
  if (param_3 == '\0') {
LAB_180008b91:
    pvVar28 = (LPVOID)0x0;
    local_128 = (LPVOID)0x0;
    uStack_120 = 0;
    local_138 = (LPVOID)0x0;
    local_130 = 0;
    local_res8[0] = 1;
    if ((*(uint *)(param_1 + 0x1cf) & 0x200) == 0) {
      uVar24 = 1;
    }
    else {
      uVar24 = *(uint *)(param_1 + 0x1c7);
    }
    uVar26 = 0;
    while (bVar20 = local_res8[0], uVar25 = (uint)uVar26, uVar25 < uVar24) {
      local_40 = *(longlong *)(uVar26 * 8 + param_1[0x1c6]);
      piVar23 = (int *)(local_res10 + uVar26 * 0x40);
      uVar1 = *(uint *)(local_40 + 0xe8);
      local_88[0] = uVar1;
      if ((*(longlong *)(piVar23 + 8) == 0) && ((HWND)param_1[0x1ce] == (HWND)0x0)) {
        uVar21 = 0x8876086c;
        goto LAB_1800090e4;
      }
      puVar17 = (uint *)FUN_18000385c(local_40,(int *)&local_108,piVar23,(HWND)param_1[0x1ce]);
      uVar2 = *puVar17;
      local_74 = *(undefined8 *)(puVar17 + 3);
      uVar3 = puVar17[10];
      uStack_60 = *(undefined8 *)(puVar17 + 8);
      uVar4 = puVar17[0xb];
      uVar5 = puVar17[1];
      uVar6 = puVar17[2];
      uVar7 = puVar17[0xc];
      uStack_6c = (undefined4)*(undefined8 *)(puVar17 + 5);
      local_4c = *(undefined8 *)(puVar17 + 0xd);
      local_44 = puVar17[0xf];
      local_100 = 0;
      local_f8 = 0;
      local_f0 = 0;
      uStack_68 = (undefined4)*(undefined8 *)(puVar17 + 6);
      uStack_64 = (undefined4)((ulonglong)*(undefined8 *)(puVar17 + 6) >> 0x20);
      local_80 = uVar2;
      local_7c = uVar5;
      local_78 = uVar6;
      local_58 = uVar3;
      local_54 = uVar4;
      local_50 = uVar7;
      uVar18 = FUN_180003254(param_1[0x1c5],uVar1,(int)param_1[0x1cd],(HWND)param_1[0x1ce],&local_80
                             ,&local_108);
      uVar21 = 0;
      if ((int)uVar18 < 0) {
        uVar21 = uVar18 & 0xffffffff;
      }
      if (((-1 < (int)uVar21) && ((*(uint *)(param_1 + 0x1cf) & 0x200) != 0)) &&
         (uVar21 = 0x8876086c, uVar3 == 0)) {
        puVar17 = (uint *)((longlong)pvVar28 + 8);
        if (uVar25 == 0) {
          puVar17 = &local_80;
        }
        if ((puVar17[0xb] == uVar4) &&
           ((uVar4 == 0 ||
            (((puVar17[0xc] == uVar7 && (puVar17[2] == uVar6)) &&
             ((*puVar17 == uVar2 && (puVar17[1] == uVar5)))))))) {
          uVar21 = 0;
        }
      }
      if ((((local_108 == 0) ||
           (lVar27 = *(longlong *)(uVar26 * 8 + param_1[0x1c6]),
           local_108 != *(longlong *)(lVar27 + 0x88))) ||
          ((((int)local_100 != *(int *)(lVar27 + 0x90) ||
            ((((local_100._4_4_ != *(int *)(lVar27 + 0x94) || (local_d0 != *(int *)(lVar27 + 0xc0)))
              || ((int)local_f8 != *(int *)(lVar27 + 0x98))) ||
             ((local_f8._4_4_ != *(int *)(lVar27 + 0x9c) ||
              ((int)local_f0 != *(int *)(lVar27 + 0xa0))))))) ||
           (local_f0._4_4_ != *(int *)(lVar27 + 0xa4))))) ||
         ((((((local_cc != *(int *)(lVar27 + 0xc4) || (local_c4 != *(int *)(lVar27 + 0xcc))) ||
             ((local_c0 != *(int *)(lVar27 + 0xd0) ||
              (((local_bc != *(int *)(lVar27 + 0xd4) || (local_b8 != *(int *)(lVar27 + 0xd8))) ||
               (local_b4 != *(int *)(lVar27 + 0xdc))))))) ||
            ((local_b0 != *(int *)(lVar27 + 0xe0) || (local_ac != *(int *)(lVar27 + 0xe4))))) ||
           (local_a4 != *(int *)(lVar27 + 0xec))) ||
          (((local_a0 != *(int *)(lVar27 + 0xf0) || (local_98 != *(char *)(lVar27 + 0xf8))) ||
           ((local_97 != *(char *)(lVar27 + 0xf9) || (local_96 != *(char *)(lVar27 + 0xfa))))))))) {
        bVar20 = 0;
      }
      else {
        bVar20 = 1;
      }
      if ((-1 < (int)uVar21) &&
         ((uVar19 = FUN_18000920c((longlong *)&local_138,&local_108), (char)uVar19 == '\0' ||
          (uVar19 = FUN_180009158((longlong *)&local_128,(undefined8 *)local_88),
          pvVar28 = local_128, (char)uVar19 == '\0')))) goto LAB_1800090df;
      uVar26 = (ulonglong)(uVar25 + 1);
      local_res8[0] = local_res8[0] & bVar20;
      if ((int)uVar21 < 0) goto LAB_1800090e4;
    }
    (**(code **)(*param_1 + 0x30))(param_1);
    if ((HICON)param_1[0x1d2] != (HICON)0x0) {
      DestroyIcon((HICON)param_1[0x1d2]);
      param_1[0x1d2] = 0;
    }
    if (bVar20 != 0) {
      (**(code **)(*param_1 + 0x38))(param_1,*(undefined8 *)param_1[0x1c6]);
      bVar13 = true;
      if (uVar24 != 0) {
        lVar27 = 0;
        do {
          BVar15 = IsIconic(*(HWND *)((longlong)pvVar28 + lVar27 * 0x50 + 0x28));
          if (BVar15 != 0) {
            ShowWindow(*(HWND *)((longlong)pvVar28 + lVar27 * 0x50 + 0x28),1);
          }
          puVar22 = (undefined8 *)(lVar27 * 0x78 + (longlong)local_138);
          if ((*(char *)((longlong)puVar22 + 0x71) == '\0') &&
             ((*(char *)(DAT_180111f20 + 0x881) != '\0' ||
              (*(char *)(DAT_180111f20 + 0x820) == '\0')))) {
            plVar8 = *(longlong **)(param_1[0x1c6] + lVar27 * 8);
            cVar14 = FUN_1800308a8(plVar8);
            iVar16 = (int)CONCAT71(extraout_var,cVar14);
            *(bool *)((longlong)plVar8 + 0x43) = iVar16 != 0;
            if (iVar16 == 0) {
              FUN_180030750(plVar8,cVar14);
            }
            local_128 = (LPVOID)puVar22[1];
            uStack_120 = puVar22[2];
            local_110 = *(undefined4 *)(puVar22 + 9);
            local_118 = puVar22[3];
            FUN_180003a6c(param_1[0x1c5],(ulonglong)*(uint *)((longlong)pvVar28 + lVar27 * 0x50),
                          &local_128,puVar22 + 4);
          }
          uVar25 = *(uint *)(param_1 + 0x1d5);
          if ((&DAT_180112aee)[(ulonglong)uVar25 * 600] == '\0') {
            FUN_1800029a4(param_1[0x1c5],uVar25);
          }
          *(undefined4 *)(param_1 + 0x1d1) =
               *(undefined4 *)(&DAT_1801123d0 + (ulonglong)uVar25 * 0x28);
          (**(code **)(*param_1 + 0x18))
                    (param_1,*(undefined4 *)((longlong)local_138 + 8),
                     *(undefined4 *)((longlong)local_138 + 0xc));
          if ((int)param_1[0x1cd] == 1) {
            iVar16 = FUN_180016978((longlong)puVar22);
          }
          else {
            iVar16 = 0;
          }
          uVar19 = puVar22[1];
          bVar13 = false;
          lVar9 = *(longlong *)(param_1[0x1c6] + lVar27 * 8);
          lVar27 = lVar27 + 1;
          *(undefined8 *)(lVar9 + 0x88) = *puVar22;
          *(undefined8 *)(lVar9 + 0x90) = uVar19;
          uVar19 = puVar22[3];
          *(undefined8 *)(lVar9 + 0x98) = puVar22[2];
          *(undefined8 *)(lVar9 + 0xa0) = uVar19;
          uVar19 = puVar22[5];
          *(undefined8 *)(lVar9 + 0xa8) = puVar22[4];
          *(undefined8 *)(lVar9 + 0xb0) = uVar19;
          uVar19 = puVar22[7];
          *(undefined8 *)(lVar9 + 0xb8) = puVar22[6];
          *(undefined8 *)(lVar9 + 0xc0) = uVar19;
          uVar19 = puVar22[9];
          *(undefined8 *)(lVar9 + 200) = puVar22[8];
          *(undefined8 *)(lVar9 + 0xd0) = uVar19;
          uVar19 = puVar22[0xb];
          *(undefined8 *)(lVar9 + 0xd8) = puVar22[10];
          *(undefined8 *)(lVar9 + 0xe0) = uVar19;
          uVar10 = *(undefined4 *)((longlong)puVar22 + 100);
          uVar11 = *(undefined4 *)(puVar22 + 0xd);
          uVar12 = *(undefined4 *)((longlong)puVar22 + 0x6c);
          *(undefined4 *)(lVar9 + 0xe8) = *(undefined4 *)(puVar22 + 0xc);
          *(undefined4 *)(lVar9 + 0xec) = uVar10;
          *(undefined4 *)(lVar9 + 0xf0) = uVar11;
          *(undefined4 *)(lVar9 + 0xf4) = uVar12;
          *(undefined8 *)(lVar9 + 0xf8) = puVar22[0xe];
          *(int *)(lVar9 + 0x114) = iVar16;
          *(undefined1 *)(lVar9 + 0x120) = 0;
          *(undefined1 *)((longlong)param_1 + 0x6819) = 0;
          uVar24 = uVar24 - 1;
        } while (uVar24 != 0);
      }
      goto LAB_1800090cb;
    }
    FUN_180004c30(param_1,1);
    uVar21 = FUN_180004a58(param_1,(uint)uStack_120,(longlong)pvVar28);
    if ((int)uVar21 < 0) {
LAB_1800090df:
      uVar21 = 0x80004005;
      goto LAB_1800090e4;
    }
    *(undefined1 *)((longlong)param_1 + 0x6819) = 0;
    bVar13 = false;
LAB_1800090cb:
    (**(code **)(*param_1 + 0x40))(param_1);
    uVar21 = 0;
    *(undefined1 *)((longlong)param_1 + 0xd11) = 0;
    goto LAB_1800090e7;
  }
  cVar14 = (**(code **)(*param_1 + 0x28))();
  uVar21 = (ulonglong)(-(uint)(cVar14 != '\0') & 0x88760868);
  if (cVar14 == '\0') goto LAB_180008b91;
LAB_1800090fe:
  if (*(char *)((longlong)param_1 + 0x6819) == '\0') {
    (**(code **)(*(longlong *)param_1[5] + 0x28))();
    if (*(char *)((longlong)param_1 + 0xe83) != '\0') {
      *(undefined1 *)((longlong)param_1 + 0x6819) = 1;
    }
    *(undefined1 *)((longlong)param_1 + 0x681a) = 1;
  }
LAB_180009128:
  *(undefined1 *)((longlong)param_1 + 0x681c) = 0;
  FUN_180015904();
  return uVar21;
LAB_1800090e4:
  bVar13 = true;
LAB_1800090e7:
  FUN_1800fbcf0(local_138);
  FUN_1800fbcf0(pvVar28);
  if (!bVar13) goto LAB_180009128;
  goto LAB_1800090fe;
}

