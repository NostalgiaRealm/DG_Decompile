/*
 * FUN_1801336b0 at 1801336b0
 * undefined FUN_1801336b0(void)
 * Address ranges: 1801336b0-1801346f7;180134720-1801348cb;1801348f4-180134963;18013498c-1801349fb;180134a24-180134a93;180134abc-1801368a7;180136db0-180136e23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1801336b0(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  undefined1 uVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  undefined *puVar12;
  bool bVar13;
  char cVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong extraout_x1;
  ulonglong uVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  ulonglong *puVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong extraout_x8;
  undefined8 *puVar27;
  longlong lVar28;
  int iVar29;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  ulonglong uVar30;
  code *extraout_x11_05;
  code *extraout_x11_06;
  code *extraout_x11_07;
  code *extraout_x11_08;
  code *extraout_x11_09;
  code *extraout_x11_10;
  code *extraout_x11_11;
  code *extraout_x11_12;
  code *extraout_x11_13;
  code *extraout_x11_14;
  code *extraout_x11_15;
  code *extraout_x11_16;
  code *extraout_x11_17;
  code *extraout_x11_18;
  code *extraout_x11_19;
  code *extraout_x11_20;
  code *extraout_x11_21;
  code *extraout_x11_22;
  code *extraout_x11_23;
  code *extraout_x11_24;
  code *extraout_x11_25;
  code *extraout_x11_26;
  code *extraout_x11_27;
  code *extraout_x11_28;
  code *extraout_x11_29;
  code *extraout_x11_30;
  code *extraout_x11_31;
  code *extraout_x11_32;
  code *extraout_x11_33;
  code *extraout_x11_34;
  code *extraout_x11_35;
  code *extraout_x11_36;
  code *extraout_x11_37;
  code *extraout_x11_38;
  code *extraout_x11_39;
  code *extraout_x11_40;
  code *extraout_x11_41;
  code *extraout_x11_42;
  code *extraout_x11_43;
  code *extraout_x11_44;
  int iVar31;
  undefined4 *puVar32;
  longlong lVar33;
  longlong lVar34;
  int iVar35;
  ulonglong uVar36;
  undefined8 uVar37;
  uint uVar38;
  undefined4 uVar39;
  ulonglong uVar40;
  undefined8 uVar41;
  float fVar42;
  undefined8 uVar43;
  undefined1 auVar44 [16];
  uint local_110 [2];
  longlong local_108;
  undefined8 local_100;
  longlong local_f8;
  longlong local_f0;
  undefined8 *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  ulonglong local_88;
  ulonglong local_80 [6];
  undefined8 *local_50;
  
  puVar12 = __hybrid_os_arm64x_dispatch_icall;
  local_108 = param_1 + 0xc000;
  local_f0 = param_1 + 0x7000;
  local_b0 = param_1 + 0x4000;
  uVar17 = (*(uint *)(param_1 + 0xf70) & 0xaaaaaaaa) >> 1 |
           (*(uint *)(param_1 + 0xf70) & 0x55555555) << 1;
  uVar17 = (uVar17 & 0xcccccccc) >> 2 | (uVar17 & 0x33333333) << 2;
  uVar17 = (uVar17 & 0xf0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f) << 4;
  uVar17 = (uVar17 & 0xff00ff00) >> 8 | (uVar17 & 0xff00ff) << 8;
  uVar17 = (uint)LZCOUNT(uVar17 >> 0x10 | uVar17 << 0x10);
  if (*(char *)(param_1 + 0x7662) == '\0') {
    if (*(char *)(param_1 + 0xf6c2) != '\0') {
      lVar25 = *(longlong *)(param_1 + 0xf7a8);
      if (lVar25 == 0) {
        uVar39 = 0;
        uVar21 = 0;
      }
      else {
        uVar39 = *(undefined4 *)(lVar25 + 0x58);
        uVar21 = *(undefined8 *)(lVar25 + 8);
      }
      lVar25 = 0;
      if (*(longlong *)(param_1 + 0xf7d0) != 0) {
        lVar25 = *(longlong *)(param_1 + 0xf7d0) + 0x30;
      }
      FUN_18016c9b0(param_1,lVar25,uVar21,uVar39);
      *(undefined1 *)(param_1 + 0xf6c2) = 0;
    }
    local_110[0] = *(uint *)(local_108 + 0x36b8);
    uVar38 = (local_110[0] & 0xaaaaaaaa) >> 1 | (local_110[0] & 0x55555555) << 1;
    uVar38 = (uVar38 & 0xcccccccc) >> 2 | (uVar38 & 0x33333333) << 2;
    uVar38 = (uVar38 & 0xf0f0f0f0) >> 4 | (uVar38 & 0xf0f0f0f) << 4;
    uVar38 = (uVar38 & 0xff00ff00) >> 8 | (uVar38 & 0xff00ff) << 8;
    lVar25 = LZCOUNT(uVar38 >> 0x10 | uVar38 << 0x10);
    uVar38 = (uint)lVar25;
    if ((1 - (uVar38 >> 5) & 0xff) != 0) {
      local_100 = (uint *)CONCAT44(local_100._4_4_,uVar17);
      *(byte *)((longlong)local_110 + (longlong)((int)uVar38 >> 3)) =
           *(byte *)((longlong)local_110 + (longlong)((int)uVar38 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar38 & 7)) ^ 0xff);
      local_b8 = param_1 + 0xfba0;
      local_c8 = param_1 + 0xfbf0;
      local_c0 = param_1 + 0xfbc8;
      do {
        lVar18 = *(longlong *)(param_1 + 0xfc18 + lVar25 * 8);
        lVar28 = *(longlong *)(param_1 + 0xf6e0);
        uVar21 = *(undefined8 *)(lVar28 + 0x238);
        uVar41 = *(undefined8 *)(lVar28 + 0x240);
        local_d0 = CONCAT44(local_d0._4_4_,*(undefined4 *)(param_1 + 0xe98));
        uVar37 = *(undefined8 *)(lVar28 + 0x248);
        bVar13 = (*(byte *)((longlong)&local_d0 + (longlong)((int)(uint)lVar25 >> 3)) >>
                  (ulonglong)((uint)lVar25 & 7) & 1) != 0;
        if (lVar18 == 0) {
          lVar18 = *(longlong *)(param_1 + 0xfc40 + lVar25 * 8);
          if (lVar18 != 0) {
            uVar37 = FUN_18019fb78(lVar18,bVar13);
          }
        }
        else {
          if ((((lVar18 == *(longlong *)(param_1 + 0xf9b0)) ||
               (lVar18 == *(longlong *)(param_1 + 0xf9b8))) ||
              (lVar18 == *(longlong *)(param_1 + 0xf9c0))) ||
             ((lVar18 == *(longlong *)(param_1 + 0xf9c8) ||
              (lVar18 == *(longlong *)(param_1 + 0xf9d0))))) {
            (*(code *)puVar12)();
            cVar14 = (*extraout_x11)();
            if (cVar14 == '\0') goto LAB_1801338ec;
          }
          iVar15 = *(int *)(*(longlong *)(param_1 + 0xfc18 + lVar25 * 8) + 0x44);
          if (iVar15 == 2 || iVar15 == 5) {
            uVar41 = (*(code *)puVar12)();
            uVar41 = (*extraout_x11_01)(uVar41,bVar13);
          }
          else {
            uVar21 = (*(code *)puVar12)();
            uVar21 = (*extraout_x11_00)(uVar21,bVar13);
          }
        }
LAB_1801338ec:
        *(undefined8 *)(local_b8 + lVar25 * 8) = uVar21;
        *(undefined8 *)(local_c0 + lVar25 * 8) = uVar41;
        *(undefined8 *)(local_c8 + lVar25 * 8) = uVar37;
        uVar17 = (local_110[0] & 0xaaaaaaaa) >> 1 | (local_110[0] & 0x55555555) << 1;
        uVar17 = (uVar17 & 0xcccccccc) >> 2 | (uVar17 & 0x33333333) << 2;
        uVar17 = (uVar17 & 0xf0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f) << 4;
        uVar17 = (uVar17 & 0xff00ff00) >> 8 | (uVar17 & 0xff00ff) << 8;
        lVar25 = LZCOUNT(uVar17 >> 0x10 | uVar17 << 0x10);
        uVar17 = (uint)lVar25;
        if ((1 - (uVar17 >> 5) & 0xff) == 0) goto LAB_180133944;
        *(byte *)((longlong)local_110 + (longlong)((int)uVar17 >> 3)) =
             *(byte *)((longlong)local_110 + (longlong)((int)uVar17 >> 3)) &
             ((byte)(1 << (ulonglong)(uVar17 & 7)) ^ 0xff);
      } while( true );
    }
    goto LAB_180133948;
  }
  goto LAB_180133b58;
LAB_180133944:
  uVar17 = (uint)(float)local_100;
LAB_180133948:
  *(undefined4 *)(local_108 + 0x36b8) = 0;
  local_110[0] = *(uint *)(local_108 + 0x3680);
  uVar38 = (local_110[0] & 0xaaaaaaaa) >> 1 | (local_110[0] & 0x55555555) << 1;
  uVar38 = (uVar38 & 0xcccccccc) >> 2 | (uVar38 & 0x33333333) << 2;
  uVar38 = (uVar38 & 0xf0f0f0f0) >> 4 | (uVar38 & 0xf0f0f0f) << 4;
  uVar38 = (uVar38 & 0xff00ff00) >> 8 | (uVar38 & 0xff00ff) << 8;
  lVar25 = LZCOUNT(uVar38 >> 0x10 | uVar38 << 0x10);
  uVar38 = (uint)lVar25;
  if ((1 - (uVar38 >> 5) & 0xff) != 0) {
    local_100 = (uint *)CONCAT44(local_100._4_4_,uVar17);
    *(byte *)((longlong)local_110 + (longlong)((int)uVar38 >> 3)) =
         *(byte *)((longlong)local_110 + (longlong)((int)uVar38 >> 3)) &
         ((byte)(1 << (ulonglong)(uVar38 & 7)) ^ 0xff);
    local_b8 = param_1 + 0xf828;
    local_c8 = param_1 + 0xf928;
    local_c0 = param_1 + 0xf8a8;
    do {
      lVar18 = *(longlong *)(param_1 + 64000 + lVar25 * 8);
      lVar28 = *(longlong *)(param_1 + 0xf6e0);
      uVar17 = (uint)lVar25;
      uVar21 = *(undefined8 *)(lVar28 + 0x238);
      uVar41 = *(undefined8 *)(lVar28 + 0x240);
      local_d0 = CONCAT44(local_d0._4_4_,*(undefined4 *)(param_1 + 0xe94));
      uVar37 = *(undefined8 *)(lVar28 + 0x248);
      bVar13 = (*(byte *)((longlong)&local_d0 + (longlong)((int)uVar17 >> 3)) >>
                (ulonglong)(uVar17 & 7) & 1) != 0;
      if (lVar18 == 0) {
        lVar18 = *(longlong *)(param_1 + 0xfa80 + lVar25 * 8);
        if (lVar18 != 0) {
          uVar37 = FUN_18019fb78(lVar18,bVar13);
        }
      }
      else {
        if (((lVar18 == *(longlong *)(param_1 + 0xf9b0)) ||
            (lVar18 == *(longlong *)(param_1 + 0xf9b8))) ||
           ((lVar18 == *(longlong *)(param_1 + 0xf9c0) ||
            ((lVar18 == *(longlong *)(param_1 + 0xf9c8) ||
             (lVar18 == *(longlong *)(param_1 + 0xf9d0))))))) {
          (*(code *)puVar12)();
          cVar14 = (*extraout_x11_02)();
          if (cVar14 == '\0') goto LAB_180133ae0;
        }
        iVar15 = *(int *)(*(longlong *)(param_1 + 64000 + lVar25 * 8) + 0x44);
        if (iVar15 == 2 || iVar15 == 5) {
          uVar41 = (*(code *)puVar12)();
          uVar41 = (*extraout_x11_04)(uVar41,bVar13);
        }
        else {
          uVar21 = (*(code *)puVar12)();
          uVar21 = (*extraout_x11_03)(uVar21,bVar13);
        }
      }
LAB_180133ae0:
      if (uVar17 < 8) {
        *(undefined8 *)(param_1 + 0xf7e8 + lVar25 * 8) = 0;
      }
      *(undefined8 *)(local_b8 + lVar25 * 8) = uVar21;
      *(undefined8 *)(local_c0 + lVar25 * 8) = uVar41;
      *(undefined8 *)(local_c8 + lVar25 * 8) = uVar37;
      uVar17 = (local_110[0] & 0xaaaaaaaa) >> 1 | (local_110[0] & 0x55555555) << 1;
      uVar17 = (uVar17 & 0xcccccccc) >> 2 | (uVar17 & 0x33333333) << 2;
      uVar17 = (uVar17 & 0xf0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f) << 4;
      uVar17 = (uVar17 & 0xff00ff00) >> 8 | (uVar17 & 0xff00ff) << 8;
      lVar25 = LZCOUNT(uVar17 >> 0x10 | uVar17 << 0x10);
      uVar17 = (uint)lVar25;
      if ((1 - (uVar17 >> 5) & 0xff) == 0) goto LAB_180133b4c;
      *(byte *)((longlong)local_110 + (longlong)((int)uVar17 >> 3)) =
           *(byte *)((longlong)local_110 + (longlong)((int)uVar17 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar17 & 7)) ^ 0xff);
    } while( true );
  }
  goto LAB_180133b50;
FUN_180136a74:
  lVar25 = *(longlong *)(param_1 + 0xf6d0) + (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0;
  bVar13 = *(longlong *)(lVar25 + 0x790) != *plVar4;
  if (bVar13) {
    *(longlong *)(lVar25 + 0x790) = *plVar4;
  }
  uVar17 = (uint)bVar13;
  if (*(longlong *)(lVar25 + 0x798) == *(longlong *)(param_1 + 0xfb28)) {
LAB_180136adc:
    uVar38 = 3;
    iVar15 = 0;
  }
  else {
    *(longlong *)(lVar25 + 0x798) = *(longlong *)(param_1 + 0xfb28);
    if (bVar13) {
      uVar17 = 2;
      goto LAB_180136adc;
    }
    iVar15 = 1;
    uVar17 = 1;
    uVar38 = 2;
  }
  uVar16 = uVar17;
  if ((*(longlong *)(lVar25 + 0x7a0) != *(longlong *)(param_1 + 0xfb30)) &&
     (*(longlong *)(lVar25 + 0x7a0) = *(longlong *)(param_1 + 0xfb30), uVar16 = uVar38, uVar17 == 0)
     ) {
    iVar15 = 2;
    uVar16 = 1;
  }
  if (*(longlong *)(lVar25 + 0x7a8) != *(longlong *)(param_1 + 0xfb38)) {
    *(longlong *)(lVar25 + 0x7a8) = *(longlong *)(param_1 + 0xfb38);
    if (uVar16 == 0) {
      iVar15 = 3;
      uVar16 = 1;
    }
    else {
      uVar16 = 4 - iVar15;
    }
  }
  if (*(longlong *)(lVar25 + 0x7b0) != *(longlong *)(param_1 + 0xfb40)) {
    *(longlong *)(lVar25 + 0x7b0) = *(longlong *)(param_1 + 0xfb40);
    if (uVar16 == 0) {
      iVar15 = 4;
      uVar16 = 1;
    }
    else {
      uVar16 = 5 - iVar15;
    }
  }
  if (*(longlong *)(lVar25 + 0x7b8) != *(longlong *)(param_1 + 0xfb48)) {
    *(longlong *)(lVar25 + 0x7b8) = *(longlong *)(param_1 + 0xfb48);
    if (uVar16 == 0) {
      iVar15 = 5;
      uVar16 = 1;
    }
    else {
      uVar16 = 6 - iVar15;
    }
  }
  if (*(longlong *)(lVar25 + 0x7c0) != *(longlong *)(param_1 + 0xfb50)) {
    *(longlong *)(lVar25 + 0x7c0) = *(longlong *)(param_1 + 0xfb50);
    if (uVar16 == 0) {
      iVar15 = 6;
      uVar16 = 1;
    }
    else {
      uVar16 = 7 - iVar15;
    }
  }
  if (*(longlong *)(lVar25 + 0x7c8) != *(longlong *)(param_1 + 0xfb58)) {
    *(longlong *)(lVar25 + 0x7c8) = *(longlong *)(param_1 + 0xfb58);
    if (uVar16 == 0) {
      iVar15 = 7;
      uVar16 = 1;
    }
    else {
      uVar16 = 8 - iVar15;
    }
  }
  if (*(longlong *)(lVar25 + 2000) != *(longlong *)(param_1 + 0xfb60)) {
    *(longlong *)(lVar25 + 2000) = *(longlong *)(param_1 + 0xfb60);
    if (uVar16 == 0) {
      iVar15 = 8;
      uVar16 = 1;
    }
    else {
      uVar16 = 9 - iVar15;
    }
  }
  if (*(longlong *)(lVar25 + 0x7d8) != *(longlong *)(param_1 + 0xfb68)) {
    *(longlong *)(lVar25 + 0x7d8) = *(longlong *)(param_1 + 0xfb68);
    if (uVar16 == 0) {
      iVar15 = 9;
      uVar16 = 1;
    }
    else {
      uVar16 = 10 - iVar15;
    }
  }
  if (*(longlong *)(lVar25 + 0x7e0) != *(longlong *)(param_1 + 0xfb70)) {
    *(longlong *)(lVar25 + 0x7e0) = *(longlong *)(param_1 + 0xfb70);
    if (uVar16 == 0) {
      iVar15 = 10;
      uVar16 = 1;
    }
    else {
      uVar16 = 0xb - iVar15;
    }
  }
  if (*(longlong *)(lVar25 + 0x7e8) != *(longlong *)(param_1 + 0xfb78)) {
    *(longlong *)(lVar25 + 0x7e8) = *(longlong *)(param_1 + 0xfb78);
    if (uVar16 == 0) {
      iVar15 = 0xb;
      uVar16 = 1;
    }
    else {
      uVar16 = 0xc - iVar15;
    }
  }
  if (*(longlong *)(lVar25 + 0x7f0) != *(longlong *)(param_1 + 0xfb80)) {
    *(longlong *)(lVar25 + 0x7f0) = *(longlong *)(param_1 + 0xfb80);
    if (uVar16 == 0) {
      iVar15 = 0xc;
      uVar16 = 1;
    }
    else {
      uVar16 = 0xd - iVar15;
    }
  }
  if (*(longlong *)(lVar25 + 0x7f8) != *(longlong *)(param_1 + 0xfb88)) {
    *(longlong *)(lVar25 + 0x7f8) = *(longlong *)(param_1 + 0xfb88);
    if (uVar16 == 0) {
      iVar15 = 0xd;
      uVar16 = 1;
    }
    else {
      uVar16 = 0xe - iVar15;
    }
  }
  if (*(longlong *)(lVar25 + 0x800) != *(longlong *)(param_1 + 0xfb90)) {
    *(longlong *)(lVar25 + 0x800) = *(longlong *)(param_1 + 0xfb90);
    if (uVar16 == 0) {
      iVar15 = 0xe;
      uVar16 = 1;
    }
    else {
      uVar16 = 0xf - iVar15;
    }
  }
  if (*(longlong *)(lVar25 + 0x808) == *(longlong *)(param_1 + 0xfb98)) {
LAB_180136d80:
    if (uVar16 != 0) goto LAB_180136d84;
  }
  else {
    *(longlong *)(lVar25 + 0x808) = *(longlong *)(param_1 + 0xfb98);
    if (uVar16 != 0) {
      uVar16 = 0x10 - iVar15;
      goto LAB_180136d80;
    }
    iVar15 = 0xf;
    uVar16 = 1;
LAB_180136d84:
    (*(code *)puVar12)(*(undefined8 *)(lVar25 + 0x6b8),iVar15,uVar16);
    (*extraout_x11_35)();
  }
  goto LAB_180136e24;
LAB_180133b4c:
  uVar17 = (uint)(float)local_100;
LAB_180133b50:
  *(undefined4 *)(local_108 + 0x3680) = 0;
LAB_180133b58:
  lVar25 = *(longlong *)(param_1 + 0xf6d0);
  thunk_FUN_1802236f8(lVar25 + 0x620);
  local_f8 = *(longlong *)(lVar25 + 0x618);
  *(longlong *)(lVar25 + 0x618) = param_1;
  if ((*(char *)(param_1 + 0xf688) != '\0') || (local_110[0] = 1, local_f8 != param_1)) {
    if (*(char *)(local_f0 + 0x662) == '\0') {
      lVar25 = *(longlong *)(param_1 + 0xf7a8);
      if (lVar25 == 0) {
        local_110[0] = uVar17;
        if ((*(int *)(local_b0 + 0x3650) == 0) || (*(int *)(local_108 + 0x3d84) != 0)) {
          bVar13 = false;
        }
        else {
          bVar13 = true;
        }
        uVar38 = (1 << (ulonglong)(uVar17 & 0x1f)) - 1;
        uVar26 = *(ulonglong *)(param_1 + 0xfe0) >> 0x3d;
        if ((*(uint *)(local_b0 + 0x3590) & uVar38) == 0) {
          uVar26 = 0;
        }
        uVar24 = (*(ulonglong *)(param_1 + 0xfe0) ^ uVar26 << 0x3d) & 0xdfffffffffffffff ^
                 uVar26 << 0x3d;
        uVar26 = uVar24 >> 0x3e;
        if ((*(uint *)(local_b0 + 0x3594) & uVar38) == 0) {
          uVar26 = 0;
        }
        uVar24 = (uVar24 ^ uVar26 << 0x3e) & 0xbfffffffffffffff ^ uVar26 << 0x3e;
        uVar26 = uVar24 >> 0x34;
        if (*(char *)(local_f0 + 0x65e) == '\0') {
          uVar26 = 7;
        }
        uVar24 = (uVar24 ^ uVar26 << 0x34) & 0xff8fffffffffffff ^ uVar26 << 0x34;
        uVar26 = uVar24 >> 0x38;
        if (!bVar13) {
          uVar26 = 0;
        }
        uVar24 = (uVar24 ^ uVar26 << 0x38) & 0xfeffffffffffffff ^ uVar26 << 0x38;
        uVar26 = uVar24 >> 0x3c;
        if (*(char *)(local_f0 + 0x66e) == '\0') {
          uVar26 = 0;
        }
        local_b8 = (uVar24 ^ uVar26 << 0x3c) & 0xefffffffffffffff ^ uVar26 << 0x3c;
        if ((uVar24 >> 0x39 & 1) == 0) {
          local_b8 = local_b8 & 0xf3ffffffffffffff;
        }
        uVar17 = local_110[0];
        if ((*(longlong *)(param_1 + 0xfcc0) == *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 400)
            ) || (*(longlong *)(param_1 + 0xfcc0) ==
                  *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1d0))) goto LAB_180134510;
        uVar38 = *(uint *)(&DAT_18022af50 + (ulonglong)uVar17 * 4);
        lVar25 = (ulonglong)(uVar17 << 3) * 4;
        local_100 = (uint *)(param_1 + 0xf18);
        uVar26 = CONCAT44(*(uint *)(&DAT_18022af84 + lVar25) & *(uint *)(param_1 + 0xf1c),
                          *(uint *)(param_1 + 0xf18) &
                          *(uint *)(&DAT_18022af80 + (ulonglong)(uVar17 << 3) * 4));
        local_80[1] = CONCAT44(*(uint *)(&DAT_18022af8c + lVar25) & *(uint *)(param_1 + 0xf24),
                               *(uint *)(&DAT_18022af88 + lVar25) & *(uint *)(param_1 + 0xf20));
        local_80[0] = uVar26;
        local_c0 = CONCAT44(*(uint *)(&DAT_18022af94 + lVar25) & *(uint *)(param_1 + 0xf2c),
                            *(uint *)(&DAT_18022af90 + lVar25) & *(uint *)(param_1 + 0xf28));
        local_c8 = local_80[1];
        uVar24 = CONCAT44(*(uint *)(&DAT_18022af9c + lVar25) & *(uint *)(param_1 + 0xf34),
                          *(uint *)(&DAT_18022af98 + lVar25) & *(uint *)(param_1 + 0xf30));
        local_80[2] = local_c0;
        local_80[3] = uVar24;
        uVar30 = CONCAT44(*(uint *)(param_1 + 0xf3c) & uVar38,*(uint *)(param_1 + 0xf38) & uVar38);
        uVar40 = CONCAT44(*(uint *)(param_1 + 0xf44) & uVar38,*(uint *)(param_1 + 0xf40) & uVar38);
        local_80[4] = uVar30;
        local_80[5] = uVar40;
        puVar20 = (undefined8 *)
                  CONCAT44(*(uint *)(param_1 + 0xf4c) & uVar38,*(uint *)(param_1 + 0xf48) & uVar38);
        local_50 = puVar20;
        uVar17 = *(uint *)(local_108 + 0x3748);
        if (uVar17 == 0) {
LAB_180134098:
          uVar8 = *(undefined1 *)(param_1 + 0xab);
          puVar27 = (undefined8 *)FUN_1802229a8(0x88);
          uVar17 = local_110[0];
          if (puVar27 == (undefined8 *)0x0) goto LAB_180134510;
          uVar17 = *(uint *)(local_108 + 0x3730);
          lVar25 = *(longlong *)(param_1 + 0xf728);
          *puVar27 = &PTR_D3DPERF_GetStatus_native_18022af30;
          puVar27[1] = 0;
          puVar27[2] = 0;
          puVar27[3] = 0;
          *(uint *)(puVar27 + 6) = uVar17;
          puVar27[4] = 0;
          puVar27[5] = lVar25;
          *(undefined4 *)((longlong)puVar27 + 0x3c) = 0;
          *(undefined1 *)((longlong)puVar27 + 0x44) = 0;
          *(undefined4 *)(puVar27 + 8) = *(undefined4 *)(lVar25 + (ulonglong)uVar17 * 0x28 + 0x38);
          uVar21 = *(undefined8 *)local_100;
          uVar37 = *(undefined8 *)(local_100 + 6);
          uVar41 = *(undefined8 *)(local_100 + 4);
          puVar27[10] = *(undefined8 *)(local_100 + 2);
          puVar27[9] = uVar21;
          puVar27[0xc] = uVar37;
          puVar27[0xb] = uVar41;
          uVar21 = *(undefined8 *)(local_100 + 8);
          puVar27[0xe] = *(undefined8 *)(local_100 + 10);
          puVar27[0xd] = uVar21;
          uVar21 = *(undefined8 *)(local_100 + 0xc);
          *(undefined1 *)(puVar27 + 0x10) = uVar8;
          puVar27[0xf] = uVar21;
          *puVar27 = &PTR_FUN_18022af40;
          uVar17 = FUN_18016ce48(puVar27 + 9,0xffff000000000000);
          lVar25 = local_108;
          local_100 = (uint *)(CONCAT44(local_100._4_4_,uVar17) & 0xffffffff0000ffff);
          uVar17 = (uVar17 & 0xaaaa) >> 1 | (uVar17 & 0x5555) << 1;
          uVar17 = (uVar17 & 0xcccccccc) >> 2 | (uVar17 & 0x33333333) << 2;
          uVar17 = (uVar17 & 0xf0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f) << 4;
          lVar18 = LZCOUNT((uVar17 >> 8 | (uVar17 & 0xff00ff) << 8) << 0x10);
          uVar17 = (uint)lVar18;
          uVar19 = extraout_x1;
          if ((1 - (uVar17 >> 5) & 0xff) != 0) {
            local_e8 = puVar20;
            local_88 = uVar40;
            local_d0 = uVar30;
            *(byte *)((longlong)&local_100 + (longlong)((int)uVar17 >> 3)) =
                 *(byte *)((longlong)&local_100 + (longlong)((int)uVar17 >> 3)) &
                 ((byte)(1 << (ulonglong)(uVar17 & 7)) ^ 0xff);
            while( true ) {
              uVar19 = 7L << ((ulonglong)(uint)((int)lVar18 * 3) & 0x3f) | uVar19;
              uVar17 = ((uint)(float)local_100 & 0xaaaaaaaa) >> 1 |
                       ((uint)(float)local_100 & 0x55555555) << 1;
              uVar17 = (uVar17 & 0xcccccccc) >> 2 | (uVar17 & 0x33333333) << 2;
              uVar17 = (uVar17 & 0xf0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f) << 4;
              uVar17 = (uVar17 & 0xff00ff00) >> 8 | (uVar17 & 0xff00ff) << 8;
              lVar18 = LZCOUNT(uVar17 >> 0x10 | uVar17 << 0x10);
              uVar17 = (uint)lVar18;
              uVar40 = local_88;
              puVar20 = local_e8;
              uVar30 = local_d0;
              if ((1 - (uVar17 >> 5) & 0xff) == 0) break;
              *(byte *)((longlong)&local_100 + (longlong)((int)uVar17 >> 3)) =
                   *(byte *)((longlong)&local_100 + (longlong)((int)uVar17 >> 3)) &
                   ((byte)(1 << (ulonglong)(uVar17 & 7)) ^ 0xff);
            }
          }
          puVar27[1] = uVar19;
          uVar19 = 0;
          uVar17 = *(uint *)(local_108 + 0x3748);
          if (uVar17 != 0) {
            uVar38 = 0;
            lVar18 = *(longlong *)(param_1 + 0xf740);
            uVar16 = uVar17;
            do {
              uVar11 = uVar16 + uVar38 >> 1;
              uVar19 = (ulonglong)uVar11;
              uVar36 = uVar19 * 0x40;
              lVar28 = uVar36 + lVar18;
              lVar33 = 0;
              if (((*(ulonglong *)(uVar36 + lVar18) == uVar26) &&
                  (lVar33 = 1, *(ulonglong *)(lVar28 + 8) == local_c8)) &&
                 ((((lVar33 = 2, *(ulonglong *)(lVar28 + 0x10) == local_c0 &&
                    ((lVar33 = 3, *(ulonglong *)(lVar28 + 0x18) == uVar24 &&
                     (lVar33 = 4, *(ulonglong *)(lVar28 + 0x20) == uVar30)))) &&
                   (lVar33 = 5, *(ulonglong *)(lVar28 + 0x28) == uVar40)) &&
                  (lVar33 = 6, *(undefined8 **)(lVar28 + 0x30) == puVar20)))) {
                puVar22 = (ulonglong *)(lVar28 + 8);
LAB_1801342ac:
                lVar33 = 0;
                if (((((((*(ulonglong *)(uVar36 + lVar18) == uVar26) &&
                        (lVar33 = 1, *puVar22 == local_c8)) &&
                       (lVar33 = 2, *(ulonglong *)(lVar18 + 0x10 + uVar36) == local_c0)) &&
                      ((lVar33 = 3, *(ulonglong *)(lVar18 + 0x18 + uVar36) == uVar24 &&
                       (lVar33 = 4, *(ulonglong *)(lVar18 + 0x20 + uVar36) == uVar30)))) &&
                     (lVar33 = 5, *(ulonglong *)(lVar28 + 0x28) == uVar40)) &&
                    (lVar33 = 6, *(undefined8 **)(lVar28 + 0x30) == puVar20)) ||
                   (local_80[lVar33] <= *(ulonglong *)(lVar28 + lVar33 * 8))) break;
                uVar38 = uVar11 + 1;
                uVar19 = (ulonglong)(uVar11 + 1);
                uVar11 = uVar16;
              }
              else if (*(ulonglong *)(lVar28 + lVar33 * 8) <= local_80[lVar33]) {
                puVar22 = (ulonglong *)((uVar36 | 8) + lVar18);
                goto LAB_1801342ac;
              }
              uVar16 = uVar11;
            } while (uVar16 != uVar38);
          }
          if (((((uint)uVar19 == uVar17) ||
               (puVar22 = (ulonglong *)(*(longlong *)(param_1 + 0xf740) + uVar19 * 0x40),
               *puVar22 != uVar26)) ||
              ((puVar22[1] != local_c8 ||
               (((puVar22[2] != local_c0 || (puVar22[3] != uVar24)) || (puVar22[4] != uVar30))))))
             || ((puVar22[5] != uVar40 || ((undefined8 *)puVar22[6] != puVar20)))) {
            uVar38 = *(uint *)(local_108 + 0x374c);
            if (uVar38 == uVar17) {
              uVar17 = 0x10;
              if (uVar38 != 0) {
                uVar17 = uVar38 << 1;
              }
              lVar18 = FUN_1802229a8((ulonglong)uVar17 << 6);
              if (lVar18 != 0) {
                uVar26 = 0;
                if (*(int *)(lVar25 + 0x3748) != 0) {
                  do {
                    uVar38 = (int)uVar26 + 1;
                    puVar20 = (undefined8 *)(*(longlong *)(param_1 + 0xf740) + uVar26 * 0x40);
                    puVar3 = (undefined8 *)(lVar18 + uVar26 * 0x40);
                    uVar21 = *puVar20;
                    uVar37 = puVar20[3];
                    uVar41 = puVar20[2];
                    puVar3[1] = puVar20[1];
                    *puVar3 = uVar21;
                    puVar3[3] = uVar37;
                    puVar3[2] = uVar41;
                    uVar21 = puVar20[4];
                    uVar37 = puVar20[7];
                    uVar41 = puVar20[6];
                    puVar3[5] = puVar20[5];
                    puVar3[4] = uVar21;
                    puVar3[7] = uVar37;
                    puVar3[6] = uVar41;
                    uVar26 = (ulonglong)uVar38;
                  } while (uVar38 < *(uint *)(lVar25 + 0x3748));
                }
                FUN_1802229d8(*(undefined8 *)(param_1 + 0xf738));
                *(longlong *)(param_1 + 0xf738) = lVar18;
                *(longlong *)(param_1 + 0xf740) = lVar18;
                *(uint *)(local_108 + 0x374c) = uVar17;
              }
            }
            uVar17 = *(uint *)(local_108 + 0x3748);
            uVar26 = (ulonglong)uVar17;
            if (*(uint *)(local_108 + 0x374c) != uVar17) {
              while ((uint)uVar19 < uVar17) {
                uVar17 = (int)uVar26 - 1;
                puVar20 = (undefined8 *)(*(longlong *)(param_1 + 0xf740) + uVar26 * 0x40);
                puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0xf740) + (ulonglong)uVar17 * 0x40);
                uVar21 = *puVar3;
                uVar37 = puVar3[3];
                uVar41 = puVar3[2];
                puVar20[1] = puVar3[1];
                *puVar20 = uVar21;
                puVar20[3] = uVar37;
                puVar20[2] = uVar41;
                uVar21 = puVar3[4];
                uVar37 = puVar3[7];
                uVar41 = puVar3[6];
                puVar20[5] = puVar3[5];
                puVar20[4] = uVar21;
                puVar20[7] = uVar37;
                puVar20[6] = uVar41;
                uVar26 = (ulonglong)uVar17;
              }
              *(int *)(local_108 + 0x3748) = *(int *)(local_108 + 0x3748) + 1;
              puVar22 = (ulonglong *)(*(longlong *)(param_1 + 0xf740) + uVar19 * 0x40);
              puVar22[1] = local_80[1];
              *puVar22 = local_80[0];
              puVar22[3] = local_80[3];
              puVar22[2] = local_80[2];
              puVar22[5] = local_80[5];
              puVar22[4] = local_80[4];
              puVar22[6] = (ulonglong)local_50;
              *(undefined8 **)(*(longlong *)(param_1 + 0xf740) + uVar19 * 0x40 + 0x38) = puVar27;
            }
          }
          else {
            puVar22[7] = (ulonglong)puVar27;
          }
        }
        else {
          local_d0 = CONCAT44(local_d0._4_4_,uVar17);
          lVar25 = *(longlong *)(param_1 + 0xf740);
          uVar38 = 0;
          uVar16 = uVar17;
          do {
            uVar11 = uVar16 + uVar38 >> 1;
            uVar36 = (ulonglong)uVar11;
            uVar19 = uVar36 * 0x40;
            lVar18 = uVar19 + lVar25;
            lVar28 = 0;
            if ((((*(ulonglong *)(uVar19 + lVar25) == uVar26) &&
                 (lVar28 = 1, *(ulonglong *)(lVar18 + 8) == local_80[1])) &&
                (lVar28 = 2, *(ulonglong *)(lVar18 + 0x10) == local_c0)) &&
               (((lVar28 = 3, *(ulonglong *)(lVar18 + 0x18) == uVar24 &&
                 (lVar28 = 4, *(ulonglong *)(lVar18 + 0x20) == uVar30)) &&
                ((lVar28 = 5, *(ulonglong *)(lVar18 + 0x28) == uVar40 &&
                 (lVar28 = 6, *(undefined8 **)(lVar18 + 0x30) == puVar20)))))) {
              puVar22 = (ulonglong *)(lVar18 + 8);
LAB_180133f88:
              lVar28 = 1;
              if (((*puVar22 == local_80[1]) &&
                  (lVar28 = 2, *(ulonglong *)(lVar25 + 0x10 + uVar19) == local_c0)) &&
                 ((lVar28 = 3, *(ulonglong *)(lVar25 + 0x18 + uVar19) == uVar24 &&
                  (((lVar28 = 4, *(ulonglong *)(lVar25 + 0x20 + uVar19) == uVar30 &&
                    (lVar28 = 5, *(ulonglong *)(lVar18 + 0x28) == uVar40)) &&
                   (lVar28 = 6, *(undefined8 **)(lVar18 + 0x30) == puVar20)))))) break;
LAB_180133fe8:
              if (local_80[lVar28] <= *(ulonglong *)(lVar18 + lVar28 * 8)) break;
              uVar38 = uVar11 + 1;
              uVar36 = (ulonglong)(uVar11 + 1);
              uVar11 = uVar16;
            }
            else if (*(ulonglong *)(lVar18 + lVar28 * 8) <= local_80[lVar28]) {
              puVar22 = (ulonglong *)((uVar19 | 8) + lVar25);
              lVar28 = 0;
              if (*(ulonglong *)(uVar19 + lVar25) == uVar26) goto LAB_180133f88;
              goto LAB_180133fe8;
            }
            uVar16 = uVar11;
          } while (uVar16 != uVar38);
          if ((((((uint)uVar36 == uVar17) ||
                (puVar22 = (ulonglong *)(*(longlong *)(param_1 + 0xf740) + uVar36 * 0x40),
                *puVar22 != uVar26)) ||
               ((puVar22[1] != local_80[1] || ((puVar22[2] != local_c0 || (puVar22[3] != uVar24)))))
               ) || (puVar22[4] != uVar30)) ||
             (((puVar22[5] != uVar40 || ((undefined8 *)puVar22[6] != puVar20)) ||
              (puVar22 + 7 == (ulonglong *)0x0)))) goto LAB_180134098;
          puVar27 = (undefined8 *)puVar22[7];
        }
        lVar25 = FUN_18013fab0(puVar27,local_b8,0);
        uVar17 = local_110[0];
        if (lVar25 == 0) goto LAB_180134510;
        goto LAB_1801345e4;
      }
      if ((*(int *)(local_b0 + 0x3650) == 0) || (*(int *)(local_108 + 0x3d84) != 0)) {
        bVar13 = false;
      }
      else {
        bVar13 = true;
      }
      uVar17 = *(uint *)(*(longlong *)(lVar25 + 8) + 0x1214);
      uVar26 = *(ulonglong *)(param_1 + 0xfe0) >> 0x3d;
      if ((*(uint *)(local_b0 + 0x3590) & uVar17) == 0) {
        uVar26 = 0;
      }
      uVar24 = (*(ulonglong *)(param_1 + 0xfe0) ^ uVar26 << 0x3d) & 0xdfffffffffffffff ^
               uVar26 << 0x3d;
      uVar26 = uVar24 >> 0x3e;
      if ((*(uint *)(local_b0 + 0x3594) & uVar17) == 0) {
        uVar26 = 0;
      }
      uVar24 = (uVar24 ^ uVar26 << 0x3e) & 0xbfffffffffffffff ^ uVar26 << 0x3e;
      uVar26 = uVar24 >> 0x34;
      if (*(char *)(local_f0 + 0x65e) == '\0') {
        uVar26 = 7;
      }
      uVar24 = (uVar24 ^ uVar26 << 0x34) & 0xff8fffffffffffff ^ uVar26 << 0x34;
      uVar26 = uVar24 >> 0x38;
      if (!bVar13) {
        uVar26 = 0;
      }
      uVar24 = (uVar24 ^ uVar26 << 0x38) & 0xfeffffffffffffff ^ uVar26 << 0x38;
      uVar26 = uVar24 >> 0x39;
      if (*(char *)(*(longlong *)(lVar25 + 8) + 0x126d) == '\x03') {
        uVar26 = 0;
      }
      uVar30 = (uVar24 ^ uVar26 << 0x39) & 0xfdffffffffffffff ^ uVar26 << 0x39;
      uVar24 = uVar30 >> 0x3c;
      if (*(char *)(local_f0 + 0x66e) == '\0') {
        uVar24 = 0;
      }
      uVar24 = (uVar30 ^ uVar24 << 0x3c) & 0xefffffffffffffff ^ uVar24 << 0x3c;
      if ((uVar26 & 1) == 0) {
        uVar24 = uVar24 & 0xf3ffffffffffffff;
      }
      lVar25 = FUN_18013fab0(lVar25 + 0x10,uVar24,*(undefined8 *)(param_1 + 0xea0));
      local_110[0] = (uint)(lVar25 != 0);
    }
    else {
LAB_180134510:
      local_110[0] = uVar17;
      if (*(char *)(local_f0 + 0x662) == '\0') {
        if (4 < local_110[0]) {
          local_110[0] = 4;
        }
        lVar25 = *(longlong *)(param_1 + 0xf6e0);
        if ((*(longlong *)(param_1 + 0xfcc0) == *(longlong *)(lVar25 + 400)) ||
           (bVar13 = false, *(longlong *)(param_1 + 0xfcc0) == *(longlong *)(lVar25 + 0x1d0))) {
          bVar13 = true;
        }
        iVar15 = 10;
        if (!bVar13) {
          iVar15 = 0;
        }
        iVar29 = 5;
        if (*(char *)(local_f0 + 0x660) == '\0') {
          iVar29 = iVar15;
        }
        lVar25 = *(longlong *)
                  (lVar25 + (ulonglong)
                            (uint)(iVar29 + *(int *)(&DAT_18022aa28 + (ulonglong)local_110[0] * 4))
                            * 8 + 0xd8);
      }
      else if (((*(longlong *)(param_1 + 0xf9b8) == 0) && (*(longlong *)(param_1 + 0xf9c0) == 0)) &&
              (*(longlong *)(param_1 + 0xf9c8) == 0)) {
        lVar25 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x150);
      }
      else {
        lVar25 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x160);
      }
LAB_1801345e4:
      local_110[0] = 1;
    }
    *(undefined1 *)(param_1 + 0xf688) = 0;
    if (*(longlong *)(param_1 + 0xfcc8) != lVar25) {
      *(longlong *)(param_1 + 0xfcc8) = lVar25;
      *(undefined1 *)(param_1 + 0x10588) = 1;
    }
  }
  if ((*(uint *)(param_1 + 0xf694) & 1) != 0) {
    FUN_18012b1a0(param_1 + 0x7670,param_1 + 0xb670,1);
    *(undefined8 *)(param_1 + 0x6a60) = *(undefined8 *)(param_1 + 0xb670);
    *(undefined8 *)(param_1 + 0x6a68) = *(undefined8 *)(param_1 + 0xb678);
    *(undefined8 *)(param_1 + 0x6a70) = *(undefined8 *)(param_1 + 0xb680);
    *(undefined8 *)(param_1 + 0x6a78) = *(undefined8 *)(param_1 + 0xb688);
    *(undefined8 *)(param_1 + 0x6a80) = *(undefined8 *)(param_1 + 0xb690);
    *(undefined8 *)(param_1 + 0x6a88) = *(undefined8 *)(param_1 + 0xb698);
    *(undefined8 *)(param_1 + 0x6a90) = *(undefined8 *)(param_1 + 0xb6a0);
    *(undefined8 *)(param_1 + 0x6a98) = *(undefined8 *)(param_1 + 0xb6a8);
    *(uint *)(param_1 + 0xf694) = *(uint *)(param_1 + 0xf694) & 0xfffffffe;
  }
  if (*(char *)(param_1 + 0xf691) != '\0') {
    uVar41 = *(undefined8 *)(param_1 + 0xf6f8);
    uVar21 = (*(code *)puVar12)(0x180224000);
    iVar15 = (*extraout_x11_05)(uVar21,uVar41,0,4,0,&local_e8);
    if (-1 < iVar15) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_180104c48(local_e8,param_1 + 0x6930,0xc20);
    }
    *(undefined1 *)(param_1 + 0xf691) = 0;
  }
  if (((*(uint *)(local_b0 + 0x2940) & 0xf800) != 0) && (*(char *)(param_1 + 0xf692) != '\0')) {
    uVar26 = 0;
    do {
      puVar1 = (uint *)(param_1 + 0xf694 + uVar26 * 4);
      uVar17 = (*puVar1 & 0xaaaaaaaa) >> 1 | (*puVar1 & 0x55555555) << 1;
      uVar17 = (uVar17 & 0xcccccccc) >> 2 | (uVar17 & 0x33333333) << 2;
      uVar17 = (uVar17 & 0xf0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f) << 4;
      uVar17 = (uVar17 & 0xff00ff00) >> 8 | (uVar17 & 0xff00ff) << 8;
      lVar25 = LZCOUNT(uVar17 >> 0x10 | uVar17 << 0x10);
      uVar17 = (uint)lVar25;
      if ((1 - (uVar17 >> 5) & 0xff) != 0) {
        *(byte *)((longlong)puVar1 + (longlong)((int)uVar17 >> 3)) =
             *(byte *)((longlong)puVar1 + (longlong)((int)uVar17 >> 3)) &
             ((byte)(1 << (ulonglong)(uVar17 & 7)) ^ 0xff);
        while (iVar15 = (int)lVar25 + (int)uVar26 * 0x20, iVar15 < 0x100) {
          FUN_18012b1a0(param_1 + 0x7670 + (longlong)iVar15 * 0x40,
                        param_1 + 0xb670 + (longlong)iVar15 * 0x40,1);
          uVar17 = (*puVar1 & 0xaaaaaaaa) >> 1 | (*puVar1 & 0x55555555) << 1;
          uVar17 = (uVar17 & 0xcccccccc) >> 2 | (uVar17 & 0x33333333) << 2;
          uVar17 = (uVar17 & 0xf0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f) << 4;
          uVar17 = (uVar17 & 0xff00ff00) >> 8 | (uVar17 & 0xff00ff) << 8;
          lVar25 = LZCOUNT(uVar17 >> 0x10 | uVar17 << 0x10);
          uVar17 = (uint)lVar25;
          if ((1 - (uVar17 >> 5) & 0xff) == 0) break;
          *(byte *)((longlong)puVar1 + (longlong)((int)uVar17 >> 3)) =
               *(byte *)((longlong)puVar1 + (longlong)((int)uVar17 >> 3)) &
               ((byte)(1 << (ulonglong)(uVar17 & 7)) ^ 0xff);
        }
      }
      uVar17 = (int)uVar26 + 1;
      uVar26 = (ulonglong)uVar17;
    } while (uVar17 < 8);
    uVar21 = (*(code *)puVar12)();
    (*extraout_x11_06)(uVar21,*(undefined8 *)(param_1 + 0xf708),0,0,param_1 + 0x7670,0,0);
    *(undefined1 *)(param_1 + 0xf692) = 0;
  }
  if (*(char *)(param_1 + 0xf6c3) != '\0') {
    uVar41 = *(undefined8 *)(param_1 + 0xf7d8);
    uVar21 = (*(code *)puVar12)(0x180224000);
    iVar15 = (*extraout_x11_07)(uVar21,uVar41,0,4,0,&local_e8);
    if (-1 < iVar15) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_180104c48(local_e8,param_1 + 0x6460,0x4d0);
    }
    *(undefined1 *)(param_1 + 0xf6c3) = 0;
  }
  if (*(char *)(param_1 + 0xf6b6) != '\0') {
    uVar41 = *(undefined8 *)(param_1 + 0xf7c0);
    uVar21 = (*(code *)puVar12)(0x180224000);
    iVar15 = (*extraout_x11_08)(uVar21,uVar41,0,4,0,&local_e8);
    if (-1 < iVar15) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_180104c48(local_e8,param_1 + 0x54a0,0xec0);
    }
    *(undefined1 *)(param_1 + 0xf6b6) = 0;
  }
  if (*(char *)(param_1 + 0xf6b4) != '\0') {
    uVar41 = *(undefined8 *)(param_1 + 0xf7b0);
    uVar21 = (*(code *)puVar12)(0x180224000);
    iVar15 = (*extraout_x11_09)(uVar21,uVar41,0,4,0,&local_e8);
    if (-1 < iVar15) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_180104c48(local_e8,param_1 + 0x51b0,0x2f0);
    }
    *(undefined1 *)(param_1 + 0xf6b4) = 0;
  }
  if (*(char *)(param_1 + 0xf6b5) != '\0') {
    uVar39 = *(undefined4 *)(param_1 + 0xa4);
    uVar41 = *(undefined8 *)(param_1 + 0xf7b8);
    uVar21 = (*(code *)puVar12)(0x180224000);
    iVar15 = (*extraout_x11_10)(uVar21,uVar41,0,4,0,&local_e8);
    if (-1 < iVar15) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_180104c48(local_e8,param_1 + 0x1070,uVar39);
    }
    *(undefined1 *)(param_1 + 0xf6b5) = 0;
  }
  if (local_f8 != param_1) {
    local_e8 = *(undefined8 **)(param_1 + 0xf7b0);
    uStack_e0 = *(undefined8 *)(param_1 + 0xf7b8);
    local_a0 = *(longlong *)(param_1 + 0xf7c0);
    local_a8 = *(longlong *)(param_1 + 0xf7d8);
    local_98 = *(longlong *)(param_1 + 0xf7c8);
    uVar21 = (*(code *)puVar12)(0x180224000);
    (*extraout_x11_11)(uVar21,3,2,&local_e8);
    uVar21 = (*(code *)puVar12)(0x180224000);
    (*extraout_x11_12)(uVar21,3,3,&local_a8);
    uVar21 = (*(code *)puVar12)(0x180224000);
    (*extraout_x11_13)(uVar21,3,2,&local_e8);
  }
  if (*(char *)(param_1 + 0xf6b7) != '\0') {
    uVar41 = *(undefined8 *)(param_1 + 0xf7c8);
    uVar21 = (*(code *)puVar12)(0x180224000);
    iVar15 = (*extraout_x11_14)(uVar21,uVar41,0,4,0,&local_e8);
    if (-1 < iVar15) {
      uVar21 = *(undefined8 *)(param_1 + 0x6360);
      uVar43 = *(undefined8 *)(param_1 + 0x6378);
      uVar37 = *(undefined8 *)(param_1 + 0x6370);
      local_e8[1] = *(undefined8 *)(param_1 + 0x6368);
      *local_e8 = uVar21;
      local_e8[3] = uVar43;
      local_e8[2] = uVar37;
      uVar21 = *(undefined8 *)(param_1 + 0x6380);
      uVar43 = *(undefined8 *)(param_1 + 0x6398);
      uVar37 = *(undefined8 *)(param_1 + 0x6390);
      local_e8[5] = *(undefined8 *)(param_1 + 0x6388);
      local_e8[4] = uVar21;
      local_e8[7] = uVar43;
      local_e8[6] = uVar37;
      uVar21 = *(undefined8 *)(param_1 + 0x63a0);
      uVar43 = *(undefined8 *)(param_1 + 0x63b8);
      uVar37 = *(undefined8 *)(param_1 + 0x63b0);
      local_e8[9] = *(undefined8 *)(param_1 + 0x63a8);
      local_e8[8] = uVar21;
      local_e8[0xb] = uVar43;
      local_e8[10] = uVar37;
      uVar21 = *(undefined8 *)(param_1 + 0x63c0);
      uVar43 = *(undefined8 *)(param_1 + 0x63d8);
      uVar37 = *(undefined8 *)(param_1 + 0x63d0);
      local_e8[0xd] = *(undefined8 *)(param_1 + 0x63c8);
      local_e8[0xc] = uVar21;
      local_e8[0xf] = uVar43;
      local_e8[0xe] = uVar37;
      uVar21 = *(undefined8 *)(param_1 + 0x63e0);
      uVar43 = *(undefined8 *)(param_1 + 0x63f8);
      uVar37 = *(undefined8 *)(param_1 + 0x63f0);
      local_e8[0x11] = *(undefined8 *)(param_1 + 0x63e8);
      local_e8[0x10] = uVar21;
      local_e8[0x13] = uVar43;
      local_e8[0x12] = uVar37;
      uVar21 = *(undefined8 *)(param_1 + 0x6400);
      uVar43 = *(undefined8 *)(param_1 + 0x6418);
      uVar37 = *(undefined8 *)(param_1 + 0x6410);
      local_e8[0x15] = *(undefined8 *)(param_1 + 0x6408);
      local_e8[0x14] = uVar21;
      local_e8[0x17] = uVar43;
      local_e8[0x16] = uVar37;
      uVar21 = *(undefined8 *)(param_1 + 0x6420);
      uVar43 = *(undefined8 *)(param_1 + 0x6438);
      uVar37 = *(undefined8 *)(param_1 + 0x6430);
      local_e8[0x19] = *(undefined8 *)(param_1 + 0x6428);
      local_e8[0x18] = uVar21;
      local_e8[0x1b] = uVar43;
      local_e8[0x1a] = uVar37;
      uVar21 = *(undefined8 *)(param_1 + 0x6440);
      uVar43 = *(undefined8 *)(param_1 + 0x6458);
      uVar37 = *(undefined8 *)(param_1 + 0x6450);
      local_e8[0x1d] = *(undefined8 *)(param_1 + 0x6448);
      local_e8[0x1c] = uVar21;
      local_e8[0x1f] = uVar43;
      local_e8[0x1e] = uVar37;
      uVar21 = (*(code *)puVar12)(0x180224000);
      (*extraout_x11_15)(uVar21,uVar41,0);
    }
    *(undefined1 *)(param_1 + 0xf6b7) = 0;
  }
  if (*(char *)(param_1 + 0xf6c1) != '\0' || local_f8 != param_1) {
    lVar25 = *(longlong *)(param_1 + 0xf9b0);
    if ((lVar25 == 0) && (lVar25 = *(longlong *)(param_1 + 0xf9d0), lVar25 == 0)) {
      fVar42 = 1.0;
      local_100 = (uint *)CONCAT44(local_100._4_4_,0x3f800000);
    }
    else {
      uVar17 = *(uint *)(lVar25 + 0x24);
      (*(code *)puVar12)(0x180224000);
      uVar16 = (*extraout_x11_16)(lVar25,0);
      uVar38 = *(uint *)(lVar25 + 0x28);
      local_100 = (uint *)CONCAT44(local_100._4_4_,(float)uVar16 / (float)uVar17);
      (*(code *)puVar12)(0x180224000);
      uVar17 = (*extraout_x11_17)(lVar25,0);
      fVar42 = (float)uVar17 / (float)uVar38;
    }
    iVar35 = (int)((float)*(int *)(param_1 + 0xe60) * (float)local_100);
    iVar31 = (int)((float)*(int *)(param_1 + 0xe64) * fVar42);
    iVar29 = (int)((float)*(int *)(param_1 + 0xe68) * (float)local_100);
    *(int *)(param_1 + 0xe70) = iVar35;
    *(int *)(param_1 + 0xe74) = iVar31;
    iVar15 = (int)((float)*(int *)(param_1 + 0xe6c) * fVar42);
    *(int *)(param_1 + 0xe78) = iVar29;
    *(int *)(param_1 + 0xe7c) = iVar15;
    lVar25 = *(longlong *)(param_1 + 0xf6d0) + (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0;
    if ((((iVar35 != *(int *)(lVar25 + 0xbe8)) || (iVar31 != *(int *)(lVar25 + 0xbec))) ||
        (iVar29 != *(int *)(lVar25 + 0xbf0))) || (iVar15 != *(int *)(lVar25 + 0xbf4))) {
      uVar21 = (*(code *)puVar12)();
      (*extraout_x11_18)(uVar21,1,param_1 + 0xe70);
      uVar21 = *(undefined8 *)(param_1 + 0xe70);
      *(undefined8 *)(lVar25 + 0xbf0) = *(undefined8 *)(param_1 + 0xe78);
      *(undefined8 *)(lVar25 + 0xbe8) = uVar21;
    }
    *(undefined1 *)(param_1 + 0xf6c1) = 0;
    if (local_f8 != param_1) {
      local_e8 = *(undefined8 **)(param_1 + 0xf6f8);
      uStack_e0 = *(undefined8 *)(param_1 + 0xf700);
      local_d8 = *(undefined8 *)(param_1 + 0xf708);
      uVar21 = (*(code *)puVar12)(0x180224000);
      (*extraout_x11_19)(uVar21,0,3,&local_e8);
      uVar21 = (*(code *)puVar12)(0x180224000);
      (*extraout_x11_20)(uVar21,0,2,&local_e8);
      uVar21 = (*(code *)puVar12)(0x180224000);
      (*extraout_x11_21)(uVar21,0,3,&local_e8);
    }
  }
  if (*(char *)(param_1 + 0xf68a) != '\0' || local_f8 != param_1) {
    uVar17 = *(uint *)(param_1 + 0x18);
    lVar18 = *(longlong *)(param_1 + 0xf6d0);
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    lVar25 = lVar18 + (ulonglong)uVar17 * 0x18c0;
    cVar14 = *(longlong *)(lVar25 + 0xbc0) != 0;
    if ((bool)cVar14) {
      *(undefined8 *)(lVar25 + 0xbc0) = 0;
    }
    if (*(longlong *)(lVar25 + 0xbc8) != 0) {
      *(undefined8 *)(lVar25 + 0xbc8) = 0;
      cVar14 = cVar14 + '\x01';
    }
    if (*(longlong *)(lVar25 + 0xbd0) != 0) {
      *(undefined8 *)(lVar25 + 0xbd0) = 0;
      cVar14 = cVar14 + '\x01';
    }
    if (*(longlong *)(lVar25 + 0xbd8) != 0) {
      *(undefined8 *)(lVar25 + 0xbd8) = 0;
      cVar14 = cVar14 + '\x01';
    }
    if ((cVar14 != '\0') || (*(longlong *)(lVar25 + 0xbe0) != 0)) {
      uVar21 = (*(code *)puVar12)();
      (*extraout_x11_22)(uVar21,4,&local_a8,0);
      *(undefined8 *)(lVar18 + (ulonglong)uVar17 * 0x18c0 + 0xbe0) = 0;
    }
  }
  if (*(char *)(param_1 + 0xf689) != '\0' || local_f8 != param_1) {
    lVar25 = *(longlong *)(param_1 + 0xf6d0) + (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0;
    if (*(char *)(local_f0 + 0x662) == '\0') {
      if (*(longlong *)(lVar25 + 0x9f0) != *(longlong *)(param_1 + 0xf7e8)) {
        *(longlong *)(lVar25 + 0x9f0) = *(longlong *)(param_1 + 0xf7e8);
        uVar21 = (*(code *)puVar12)();
        (*extraout_x11_23)(uVar21,0x30,1,extraout_x8 + 0x9f0);
      }
      lVar25 = *(longlong *)(param_1 + 0xf6d0) + (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0;
      bVar13 = *(longlong *)(lVar25 + 0x870) != *(longlong *)(param_1 + 0xf828);
      if (bVar13) {
        *(longlong *)(lVar25 + 0x870) = *(longlong *)(param_1 + 0xf828);
      }
      uVar17 = (uint)bVar13;
      if (*(longlong *)(lVar25 + 0x878) == *(longlong *)(param_1 + 0xf830)) {
LAB_18013504c:
        uVar38 = 3;
        iVar15 = 0;
      }
      else {
        *(longlong *)(lVar25 + 0x878) = *(longlong *)(param_1 + 0xf830);
        if (bVar13) {
          uVar17 = 2;
          goto LAB_18013504c;
        }
        iVar15 = 1;
        uVar17 = 1;
        uVar38 = 2;
      }
      uVar16 = uVar17;
      if ((*(longlong *)(lVar25 + 0x880) != *(longlong *)(param_1 + 0xf838)) &&
         (*(longlong *)(lVar25 + 0x880) = *(longlong *)(param_1 + 0xf838), uVar16 = uVar38,
         uVar17 == 0)) {
        iVar15 = 2;
        uVar16 = 1;
      }
      if (*(longlong *)(lVar25 + 0x888) != *(longlong *)(param_1 + 0xf840)) {
        *(longlong *)(lVar25 + 0x888) = *(longlong *)(param_1 + 0xf840);
        if (uVar16 == 0) {
          iVar15 = 3;
          uVar16 = 1;
        }
        else {
          uVar16 = 4 - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x890) != *(longlong *)(param_1 + 0xf848)) {
        *(longlong *)(lVar25 + 0x890) = *(longlong *)(param_1 + 0xf848);
        if (uVar16 == 0) {
          iVar15 = 4;
          uVar16 = 1;
        }
        else {
          uVar16 = 5 - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x898) != *(longlong *)(param_1 + 0xf850)) {
        *(longlong *)(lVar25 + 0x898) = *(longlong *)(param_1 + 0xf850);
        if (uVar16 == 0) {
          iVar15 = 5;
          uVar16 = 1;
        }
        else {
          uVar16 = 6 - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x8a0) != *(longlong *)(param_1 + 0xf858)) {
        *(longlong *)(lVar25 + 0x8a0) = *(longlong *)(param_1 + 0xf858);
        if (uVar16 == 0) {
          iVar15 = 6;
          uVar16 = 1;
        }
        else {
          uVar16 = 7 - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x8a8) != *(longlong *)(param_1 + 0xf860)) {
        *(longlong *)(lVar25 + 0x8a8) = *(longlong *)(param_1 + 0xf860);
        if (uVar16 == 0) {
          iVar15 = 7;
          uVar16 = 1;
        }
        else {
          uVar16 = 8 - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x8b0) != *(longlong *)(param_1 + 0xf868)) {
        *(longlong *)(lVar25 + 0x8b0) = *(longlong *)(param_1 + 0xf868);
        if (uVar16 == 0) {
          iVar15 = 8;
          uVar16 = 1;
        }
        else {
          uVar16 = 9 - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x8b8) != *(longlong *)(param_1 + 0xf870)) {
        *(longlong *)(lVar25 + 0x8b8) = *(longlong *)(param_1 + 0xf870);
        if (uVar16 == 0) {
          iVar15 = 9;
          uVar16 = 1;
        }
        else {
          uVar16 = 10 - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x8c0) != *(longlong *)(param_1 + 0xf878)) {
        *(longlong *)(lVar25 + 0x8c0) = *(longlong *)(param_1 + 0xf878);
        if (uVar16 == 0) {
          iVar15 = 10;
          uVar16 = 1;
        }
        else {
          uVar16 = 0xb - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x8c8) != *(longlong *)(param_1 + 0xf880)) {
        *(longlong *)(lVar25 + 0x8c8) = *(longlong *)(param_1 + 0xf880);
        if (uVar16 == 0) {
          iVar15 = 0xb;
          uVar16 = 1;
        }
        else {
          uVar16 = 0xc - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x8d0) != *(longlong *)(param_1 + 0xf888)) {
        *(longlong *)(lVar25 + 0x8d0) = *(longlong *)(param_1 + 0xf888);
        if (uVar16 == 0) {
          iVar15 = 0xc;
          uVar16 = 1;
        }
        else {
          uVar16 = 0xd - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x8d8) != *(longlong *)(param_1 + 0xf890)) {
        *(longlong *)(lVar25 + 0x8d8) = *(longlong *)(param_1 + 0xf890);
        if (uVar16 == 0) {
          iVar15 = 0xd;
          uVar16 = 1;
        }
        else {
          uVar16 = 0xe - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x8e0) != *(longlong *)(param_1 + 0xf898)) {
        *(longlong *)(lVar25 + 0x8e0) = *(longlong *)(param_1 + 0xf898);
        if (uVar16 == 0) {
          iVar15 = 0xe;
          uVar16 = 1;
        }
        else {
          uVar16 = 0xf - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x8e8) == *(longlong *)(param_1 + 0xf8a0)) {
LAB_1801352f0:
        if (uVar16 != 0) goto LAB_1801352f4;
      }
      else {
        *(longlong *)(lVar25 + 0x8e8) = *(longlong *)(param_1 + 0xf8a0);
        if (uVar16 != 0) {
          uVar16 = 0x10 - iVar15;
          goto LAB_1801352f0;
        }
        iVar15 = 0xf;
        uVar16 = 1;
LAB_1801352f4:
        (*(code *)puVar12)(*(undefined8 *)(lVar25 + 0x6b8),iVar15,uVar16);
        (*extraout_x11_24)();
      }
      lVar25 = *(longlong *)(param_1 + 0xf6d0) + (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0;
      bVar13 = *(longlong *)(lVar25 + 0x8f0) != *(longlong *)(param_1 + 0xf8a8);
      if (bVar13) {
        *(longlong *)(lVar25 + 0x8f0) = *(longlong *)(param_1 + 0xf8a8);
      }
      uVar17 = (uint)bVar13;
      if (*(longlong *)(lVar25 + 0x8f8) == *(longlong *)(param_1 + 0xf8b0)) {
LAB_180135380:
        uVar38 = 3;
        iVar15 = 0x10;
      }
      else {
        *(longlong *)(lVar25 + 0x8f8) = *(longlong *)(param_1 + 0xf8b0);
        if (bVar13) {
          uVar17 = 2;
          goto LAB_180135380;
        }
        iVar15 = 0x11;
        uVar17 = 1;
        uVar38 = 2;
      }
      uVar16 = uVar17;
      if ((*(longlong *)(lVar25 + 0x900) != *(longlong *)(param_1 + 0xf8b8)) &&
         (*(longlong *)(lVar25 + 0x900) = *(longlong *)(param_1 + 0xf8b8), uVar16 = uVar38,
         uVar17 == 0)) {
        iVar15 = 0x12;
        uVar16 = 1;
      }
      if (*(longlong *)(lVar25 + 0x908) != *(longlong *)(param_1 + 0xf8c0)) {
        *(longlong *)(lVar25 + 0x908) = *(longlong *)(param_1 + 0xf8c0);
        if (uVar16 == 0) {
          iVar15 = 0x13;
          uVar16 = 1;
        }
        else {
          uVar16 = 0x14 - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x910) != *(longlong *)(param_1 + 0xf8c8)) {
        *(longlong *)(lVar25 + 0x910) = *(longlong *)(param_1 + 0xf8c8);
        if (uVar16 == 0) {
          iVar15 = 0x14;
          uVar16 = 1;
        }
        else {
          uVar16 = 0x15 - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x918) != *(longlong *)(param_1 + 0xf8d0)) {
        *(longlong *)(lVar25 + 0x918) = *(longlong *)(param_1 + 0xf8d0);
        if (uVar16 == 0) {
          iVar15 = 0x15;
          uVar16 = 1;
        }
        else {
          uVar16 = 0x16 - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x920) != *(longlong *)(param_1 + 0xf8d8)) {
        *(longlong *)(lVar25 + 0x920) = *(longlong *)(param_1 + 0xf8d8);
        if (uVar16 == 0) {
          iVar15 = 0x16;
          uVar16 = 1;
        }
        else {
          uVar16 = 0x17 - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x928) != *(longlong *)(param_1 + 0xf8e0)) {
        *(longlong *)(lVar25 + 0x928) = *(longlong *)(param_1 + 0xf8e0);
        if (uVar16 == 0) {
          iVar15 = 0x17;
          uVar16 = 1;
        }
        else {
          uVar16 = 0x18 - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x930) != *(longlong *)(param_1 + 0xf8e8)) {
        *(longlong *)(lVar25 + 0x930) = *(longlong *)(param_1 + 0xf8e8);
        if (uVar16 == 0) {
          iVar15 = 0x18;
          uVar16 = 1;
        }
        else {
          uVar16 = 0x19 - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x938) != *(longlong *)(param_1 + 0xf8f0)) {
        *(longlong *)(lVar25 + 0x938) = *(longlong *)(param_1 + 0xf8f0);
        if (uVar16 == 0) {
          iVar15 = 0x19;
          uVar16 = 1;
        }
        else {
          uVar16 = 0x1a - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x940) != *(longlong *)(param_1 + 0xf8f8)) {
        *(longlong *)(lVar25 + 0x940) = *(longlong *)(param_1 + 0xf8f8);
        if (uVar16 == 0) {
          iVar15 = 0x1a;
          uVar16 = 1;
        }
        else {
          uVar16 = 0x1b - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x948) != *(longlong *)(param_1 + 0xf900)) {
        *(longlong *)(lVar25 + 0x948) = *(longlong *)(param_1 + 0xf900);
        if (uVar16 == 0) {
          iVar15 = 0x1b;
          uVar16 = 1;
        }
        else {
          uVar16 = 0x1c - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x950) != *(longlong *)(param_1 + 0xf908)) {
        *(longlong *)(lVar25 + 0x950) = *(longlong *)(param_1 + 0xf908);
        if (uVar16 == 0) {
          iVar15 = 0x1c;
          uVar16 = 1;
        }
        else {
          uVar16 = 0x1d - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x958) != *(longlong *)(param_1 + 0xf910)) {
        *(longlong *)(lVar25 + 0x958) = *(longlong *)(param_1 + 0xf910);
        if (uVar16 == 0) {
          iVar15 = 0x1d;
          uVar16 = 1;
        }
        else {
          uVar16 = 0x1e - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x960) != *(longlong *)(param_1 + 0xf918)) {
        *(longlong *)(lVar25 + 0x960) = *(longlong *)(param_1 + 0xf918);
        if (uVar16 == 0) {
          iVar15 = 0x1e;
          uVar16 = 1;
        }
        else {
          uVar16 = 0x1f - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x968) == *(longlong *)(param_1 + 0xf920)) {
LAB_180135624:
        if (uVar16 != 0) goto LAB_180135628;
      }
      else {
        *(longlong *)(lVar25 + 0x968) = *(longlong *)(param_1 + 0xf920);
        if (uVar16 != 0) {
          uVar16 = 0x20 - iVar15;
          goto LAB_180135624;
        }
        iVar15 = 0x1f;
        uVar16 = 1;
LAB_180135628:
        (*(code *)puVar12)(*(undefined8 *)(lVar25 + 0x6b8),iVar15,uVar16);
        (*extraout_x11_25)();
      }
      lVar25 = *(longlong *)(param_1 + 0xf6d0) + (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0;
      bVar13 = *(longlong *)(lVar25 + 0x970) != *(longlong *)(param_1 + 0xf928);
      if (bVar13) {
        *(longlong *)(lVar25 + 0x970) = *(longlong *)(param_1 + 0xf928);
      }
      uVar17 = (uint)bVar13;
      if (*(longlong *)(lVar25 + 0x978) == *(longlong *)(param_1 + 0xf930)) {
LAB_1801356b4:
        uVar38 = 3;
        iVar15 = 0x20;
      }
      else {
        *(longlong *)(lVar25 + 0x978) = *(longlong *)(param_1 + 0xf930);
        if (bVar13) {
          uVar17 = 2;
          goto LAB_1801356b4;
        }
        iVar15 = 0x21;
        uVar17 = 1;
        uVar38 = 2;
      }
      uVar16 = uVar17;
      if ((*(longlong *)(lVar25 + 0x980) != *(longlong *)(param_1 + 0xf938)) &&
         (*(longlong *)(lVar25 + 0x980) = *(longlong *)(param_1 + 0xf938), uVar16 = uVar38,
         uVar17 == 0)) {
        iVar15 = 0x22;
        uVar16 = 1;
      }
      if (*(longlong *)(lVar25 + 0x988) != *(longlong *)(param_1 + 0xf940)) {
        *(longlong *)(lVar25 + 0x988) = *(longlong *)(param_1 + 0xf940);
        if (uVar16 == 0) {
          iVar15 = 0x23;
          uVar16 = 1;
        }
        else {
          uVar16 = 0x24 - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x990) != *(longlong *)(param_1 + 0xf948)) {
        *(longlong *)(lVar25 + 0x990) = *(longlong *)(param_1 + 0xf948);
        if (uVar16 == 0) {
          iVar15 = 0x24;
          uVar16 = 1;
        }
        else {
          uVar16 = 0x25 - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x998) != *(longlong *)(param_1 + 0xf950)) {
        *(longlong *)(lVar25 + 0x998) = *(longlong *)(param_1 + 0xf950);
        if (uVar16 == 0) {
          iVar15 = 0x25;
          uVar16 = 1;
        }
        else {
          uVar16 = 0x26 - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x9a0) != *(longlong *)(param_1 + 0xf958)) {
        *(longlong *)(lVar25 + 0x9a0) = *(longlong *)(param_1 + 0xf958);
        if (uVar16 == 0) {
          iVar15 = 0x26;
          uVar16 = 1;
        }
        else {
          uVar16 = 0x27 - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x9a8) != *(longlong *)(param_1 + 0xf960)) {
        *(longlong *)(lVar25 + 0x9a8) = *(longlong *)(param_1 + 0xf960);
        if (uVar16 == 0) {
          iVar15 = 0x27;
          uVar16 = 1;
        }
        else {
          uVar16 = 0x28 - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x9b0) != *(longlong *)(param_1 + 0xf968)) {
        *(longlong *)(lVar25 + 0x9b0) = *(longlong *)(param_1 + 0xf968);
        if (uVar16 == 0) {
          iVar15 = 0x28;
          uVar16 = 1;
        }
        else {
          uVar16 = 0x29 - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x9b8) != *(longlong *)(param_1 + 0xf970)) {
        *(longlong *)(lVar25 + 0x9b8) = *(longlong *)(param_1 + 0xf970);
        if (uVar16 == 0) {
          iVar15 = 0x29;
          uVar16 = 1;
        }
        else {
          uVar16 = 0x2a - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x9c0) != *(longlong *)(param_1 + 0xf978)) {
        *(longlong *)(lVar25 + 0x9c0) = *(longlong *)(param_1 + 0xf978);
        if (uVar16 == 0) {
          iVar15 = 0x2a;
          uVar16 = 1;
        }
        else {
          uVar16 = 0x2b - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x9c8) != *(longlong *)(param_1 + 0xf980)) {
        *(longlong *)(lVar25 + 0x9c8) = *(longlong *)(param_1 + 0xf980);
        if (uVar16 == 0) {
          iVar15 = 0x2b;
          uVar16 = 1;
        }
        else {
          uVar16 = 0x2c - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x9d0) != *(longlong *)(param_1 + 0xf988)) {
        *(longlong *)(lVar25 + 0x9d0) = *(longlong *)(param_1 + 0xf988);
        if (uVar16 == 0) {
          iVar15 = 0x2c;
          uVar16 = 1;
        }
        else {
          uVar16 = 0x2d - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x9d8) != *(longlong *)(param_1 + 0xf990)) {
        *(longlong *)(lVar25 + 0x9d8) = *(longlong *)(param_1 + 0xf990);
        if (uVar16 == 0) {
          iVar15 = 0x2d;
          uVar16 = 1;
        }
        else {
          uVar16 = 0x2e - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x9e0) != *(longlong *)(param_1 + 0xf998)) {
        *(longlong *)(lVar25 + 0x9e0) = *(longlong *)(param_1 + 0xf998);
        if (uVar16 == 0) {
          iVar15 = 0x2e;
          uVar16 = 1;
        }
        else {
          uVar16 = 0x2f - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x9e8) != *(longlong *)(param_1 + 0xf9a0)) {
        *(longlong *)(lVar25 + 0x9e8) = *(longlong *)(param_1 + 0xf9a0);
        if (uVar16 == 0) {
          iVar15 = 0x2f;
          uVar16 = 1;
          goto LAB_180135e10;
        }
        iVar29 = 0x30;
LAB_180135e08:
        uVar16 = iVar29 - iVar15;
      }
LAB_180135e0c:
      if (uVar16 != 0) goto LAB_180135e10;
    }
    else {
      bVar13 = *(longlong *)(lVar25 + 0x8f0) != 0;
      if (bVar13) {
        *(undefined8 *)(lVar25 + 0x8f0) = 0;
      }
      uVar17 = (uint)bVar13;
      if (*(longlong *)(lVar25 + 0x8f8) == 0) {
LAB_180135990:
        uVar38 = 3;
        iVar15 = 0x10;
      }
      else {
        *(undefined8 *)(lVar25 + 0x8f8) = 0;
        if (bVar13) {
          uVar17 = 2;
          goto LAB_180135990;
        }
        iVar15 = 0x11;
        uVar17 = 1;
        uVar38 = 2;
      }
      uVar16 = uVar17;
      if ((*(longlong *)(lVar25 + 0x900) != 0) &&
         (*(undefined8 *)(lVar25 + 0x900) = 0, uVar16 = uVar38, uVar17 == 0)) {
        iVar15 = 0x12;
        uVar16 = 1;
      }
      if (*(longlong *)(lVar25 + 0x908) != 0) {
        *(undefined8 *)(lVar25 + 0x908) = 0;
        if (uVar16 == 0) {
          iVar15 = 0x13;
          uVar16 = 1;
        }
        else {
          uVar16 = 0x14 - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x910) != 0) {
        *(undefined8 *)(lVar25 + 0x910) = 0;
        if (uVar16 == 0) {
          iVar15 = 0x14;
          uVar16 = 1;
        }
        else {
          uVar16 = 0x15 - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x918) != 0) {
        *(undefined8 *)(lVar25 + 0x918) = 0;
        if (uVar16 == 0) {
          iVar15 = 0x15;
          uVar16 = 1;
        }
        else {
          uVar16 = 0x16 - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x920) != 0) {
        *(undefined8 *)(lVar25 + 0x920) = 0;
        if (uVar16 == 0) {
          iVar15 = 0x16;
          uVar16 = 1;
        }
        else {
          uVar16 = 0x17 - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x928) != 0) {
        *(undefined8 *)(lVar25 + 0x928) = 0;
        if (uVar16 == 0) {
          iVar15 = 0x17;
          uVar16 = 1;
        }
        else {
          uVar16 = 0x18 - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x930) != 0) {
        *(undefined8 *)(lVar25 + 0x930) = 0;
        if (uVar16 == 0) {
          iVar15 = 0x18;
          uVar16 = 1;
        }
        else {
          uVar16 = 0x19 - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x938) != 0) {
        *(undefined8 *)(lVar25 + 0x938) = 0;
        if (uVar16 == 0) {
          iVar15 = 0x19;
          uVar16 = 1;
        }
        else {
          uVar16 = 0x1a - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x940) != 0) {
        *(undefined8 *)(lVar25 + 0x940) = 0;
        if (uVar16 == 0) {
          iVar15 = 0x1a;
          uVar16 = 1;
        }
        else {
          uVar16 = 0x1b - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x948) != 0) {
        *(undefined8 *)(lVar25 + 0x948) = 0;
        if (uVar16 == 0) {
          iVar15 = 0x1b;
          uVar16 = 1;
        }
        else {
          uVar16 = 0x1c - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x950) != 0) {
        *(undefined8 *)(lVar25 + 0x950) = 0;
        if (uVar16 == 0) {
          iVar15 = 0x1c;
          uVar16 = 1;
        }
        else {
          uVar16 = 0x1d - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x958) != 0) {
        *(undefined8 *)(lVar25 + 0x958) = 0;
        if (uVar16 == 0) {
          iVar15 = 0x1d;
          uVar16 = 1;
        }
        else {
          uVar16 = 0x1e - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x960) != 0) {
        *(undefined8 *)(lVar25 + 0x960) = 0;
        if (uVar16 == 0) {
          iVar15 = 0x1e;
          uVar16 = 1;
        }
        else {
          uVar16 = 0x1f - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x968) == 0) {
LAB_180135b8c:
        if (uVar16 != 0) goto LAB_180135b90;
      }
      else {
        *(undefined8 *)(lVar25 + 0x968) = 0;
        if (uVar16 != 0) {
          uVar16 = 0x20 - iVar15;
          goto LAB_180135b8c;
        }
        iVar15 = 0x1f;
        uVar16 = 1;
LAB_180135b90:
        (*(code *)puVar12)(*(undefined8 *)(lVar25 + 0x6b8),iVar15,uVar16);
        (*extraout_x11_26)();
      }
      lVar25 = *(longlong *)(param_1 + 0xf6d0) + (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0;
      bVar13 = *(longlong *)(lVar25 + 0x870) != *(longlong *)(param_1 + 0xf9a8);
      if (bVar13) {
        *(longlong *)(lVar25 + 0x870) = *(longlong *)(param_1 + 0xf9a8);
      }
      uVar17 = (uint)bVar13;
      if (*(longlong *)(lVar25 + 0x878) == 0) {
LAB_180135c10:
        uVar38 = 3;
        iVar15 = 0;
      }
      else {
        *(undefined8 *)(lVar25 + 0x878) = 0;
        if (bVar13) {
          uVar17 = 2;
          goto LAB_180135c10;
        }
        iVar15 = 1;
        uVar17 = 1;
        uVar38 = 2;
      }
      uVar16 = uVar17;
      if ((*(longlong *)(lVar25 + 0x880) != 0) &&
         (*(undefined8 *)(lVar25 + 0x880) = 0, uVar16 = uVar38, uVar17 == 0)) {
        iVar15 = 2;
        uVar16 = 1;
      }
      if (*(longlong *)(lVar25 + 0x888) != 0) {
        *(undefined8 *)(lVar25 + 0x888) = 0;
        if (uVar16 == 0) {
          iVar15 = 3;
          uVar16 = 1;
        }
        else {
          uVar16 = 4 - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x890) != 0) {
        *(undefined8 *)(lVar25 + 0x890) = 0;
        if (uVar16 == 0) {
          iVar15 = 4;
          uVar16 = 1;
        }
        else {
          uVar16 = 5 - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x898) != 0) {
        *(undefined8 *)(lVar25 + 0x898) = 0;
        if (uVar16 == 0) {
          iVar15 = 5;
          uVar16 = 1;
        }
        else {
          uVar16 = 6 - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x8a0) != 0) {
        *(undefined8 *)(lVar25 + 0x8a0) = 0;
        if (uVar16 == 0) {
          iVar15 = 6;
          uVar16 = 1;
        }
        else {
          uVar16 = 7 - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x8a8) != 0) {
        *(undefined8 *)(lVar25 + 0x8a8) = 0;
        if (uVar16 == 0) {
          iVar15 = 7;
          uVar16 = 1;
        }
        else {
          uVar16 = 8 - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x8b0) != 0) {
        *(undefined8 *)(lVar25 + 0x8b0) = 0;
        if (uVar16 == 0) {
          iVar15 = 8;
          uVar16 = 1;
        }
        else {
          uVar16 = 9 - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x8b8) != 0) {
        *(undefined8 *)(lVar25 + 0x8b8) = 0;
        if (uVar16 == 0) {
          iVar15 = 9;
          uVar16 = 1;
        }
        else {
          uVar16 = 10 - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x8c0) != 0) {
        *(undefined8 *)(lVar25 + 0x8c0) = 0;
        if (uVar16 == 0) {
          iVar15 = 10;
          uVar16 = 1;
        }
        else {
          uVar16 = 0xb - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x8c8) != 0) {
        *(undefined8 *)(lVar25 + 0x8c8) = 0;
        if (uVar16 == 0) {
          iVar15 = 0xb;
          uVar16 = 1;
        }
        else {
          uVar16 = 0xc - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x8d0) != 0) {
        *(undefined8 *)(lVar25 + 0x8d0) = 0;
        if (uVar16 == 0) {
          iVar15 = 0xc;
          uVar16 = 1;
        }
        else {
          uVar16 = 0xd - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x8d8) != 0) {
        *(undefined8 *)(lVar25 + 0x8d8) = 0;
        if (uVar16 == 0) {
          iVar15 = 0xd;
          uVar16 = 1;
        }
        else {
          uVar16 = 0xe - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x8e0) != 0) {
        *(undefined8 *)(lVar25 + 0x8e0) = 0;
        if (uVar16 == 0) {
          iVar15 = 0xe;
          uVar16 = 1;
        }
        else {
          uVar16 = 0xf - iVar15;
        }
      }
      if (*(longlong *)(lVar25 + 0x8e8) == 0) goto LAB_180135e0c;
      *(undefined8 *)(lVar25 + 0x8e8) = 0;
      if (uVar16 != 0) {
        iVar29 = 0x10;
        goto LAB_180135e08;
      }
      iVar15 = 0xf;
      uVar16 = 1;
LAB_180135e10:
      (*(code *)puVar12)(*(undefined8 *)(lVar25 + 0x6b8),iVar15,uVar16);
      (*extraout_x11_27)();
    }
    *(undefined1 *)(param_1 + 0xf689) = 0;
  }
  if ((*(char *)(param_1 + 0xf6c0) != '\0' || local_f8 != param_1) &&
     (*(char *)(local_f0 + 0x662) == '\0')) {
    lVar25 = (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0 + *(longlong *)(param_1 + 0xf6d0);
    bVar13 = *(longlong *)(lVar25 + 0x810) != *(longlong *)(param_1 + 0xfba0);
    if (bVar13) {
      *(longlong *)(lVar25 + 0x810) = *(longlong *)(param_1 + 0xfba0);
    }
    uVar17 = (uint)bVar13;
    if (*(longlong *)(lVar25 + 0x818) == *(longlong *)(param_1 + 0xfba8)) {
LAB_180135ecc:
      uVar38 = 3;
      iVar15 = 0;
    }
    else {
      *(longlong *)(lVar25 + 0x818) = *(longlong *)(param_1 + 0xfba8);
      if (bVar13) {
        uVar17 = 2;
        goto LAB_180135ecc;
      }
      iVar15 = 1;
      uVar17 = 1;
      uVar38 = 2;
    }
    uVar16 = uVar17;
    if ((*(longlong *)(lVar25 + 0x820) != *(longlong *)(param_1 + 0xfbb0)) &&
       (*(longlong *)(lVar25 + 0x820) = *(longlong *)(param_1 + 0xfbb0), uVar16 = uVar38,
       uVar17 == 0)) {
      iVar15 = 2;
      uVar16 = 1;
    }
    if (*(longlong *)(lVar25 + 0x828) == *(longlong *)(param_1 + 0xfbb8)) {
LAB_180135f30:
      if (uVar16 != 0) goto LAB_180135f34;
    }
    else {
      *(longlong *)(lVar25 + 0x828) = *(longlong *)(param_1 + 0xfbb8);
      if (uVar16 != 0) {
        uVar16 = 4 - iVar15;
        goto LAB_180135f30;
      }
      iVar15 = 3;
      uVar16 = 1;
LAB_180135f34:
      (*(code *)puVar12)(*(undefined8 *)(lVar25 + 0x6b8),iVar15,uVar16);
      (*extraout_x11_28)();
    }
    lVar25 = *(longlong *)(param_1 + 0xf6d0) + (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0;
    bVar13 = *(longlong *)(lVar25 + 0x838) != *(longlong *)(param_1 + 0xfbc8);
    if (bVar13) {
      *(longlong *)(lVar25 + 0x838) = *(longlong *)(param_1 + 0xfbc8);
    }
    uVar17 = (uint)bVar13;
    if (*(longlong *)(lVar25 + 0x840) == *(longlong *)(param_1 + 0xfbd0)) {
LAB_180135fc8:
      uVar38 = 3;
      iVar15 = 5;
    }
    else {
      *(longlong *)(lVar25 + 0x840) = *(longlong *)(param_1 + 0xfbd0);
      if (bVar13) {
        uVar17 = 2;
        goto LAB_180135fc8;
      }
      iVar15 = 6;
      uVar17 = 1;
      uVar38 = 2;
    }
    uVar16 = uVar17;
    if ((*(longlong *)(lVar25 + 0x848) != *(longlong *)(param_1 + 0xfbd8)) &&
       (*(longlong *)(lVar25 + 0x848) = *(longlong *)(param_1 + 0xfbd8), uVar16 = uVar38,
       uVar17 == 0)) {
      iVar15 = 7;
      uVar16 = 1;
    }
    if (*(longlong *)(lVar25 + 0x850) == *(longlong *)(param_1 + 0xfbe0)) {
LAB_18013602c:
      if (uVar16 != 0) goto LAB_180136030;
    }
    else {
      *(longlong *)(lVar25 + 0x850) = *(longlong *)(param_1 + 0xfbe0);
      if (uVar16 != 0) {
        uVar16 = 9 - iVar15;
        goto LAB_18013602c;
      }
      iVar15 = 8;
      uVar16 = 1;
LAB_180136030:
      (*(code *)puVar12)(*(undefined8 *)(lVar25 + 0x6b8),iVar15,uVar16);
      (*extraout_x11_29)();
    }
    lVar25 = *(longlong *)(param_1 + 0xf6d0) + (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0;
    bVar13 = *(longlong *)(lVar25 + 0x860) != *(longlong *)(param_1 + 0xfbf0);
    if (bVar13) {
      *(longlong *)(lVar25 + 0x860) = *(longlong *)(param_1 + 0xfbf0);
    }
    uVar17 = (uint)bVar13;
    if (*(longlong *)(lVar25 + 0x868) == *(longlong *)(param_1 + 0xfbf8)) {
LAB_1801360bc:
      uVar38 = 3;
      iVar15 = 10;
    }
    else {
      *(longlong *)(lVar25 + 0x868) = *(longlong *)(param_1 + 0xfbf8);
      if (bVar13) {
        uVar17 = 2;
        goto LAB_1801360bc;
      }
      iVar15 = 0xb;
      uVar17 = 1;
      uVar38 = 2;
    }
    uVar16 = uVar17;
    if ((*(longlong *)(lVar25 + 0x870) != *(longlong *)(param_1 + 0xfc00)) &&
       (*(longlong *)(lVar25 + 0x870) = *(longlong *)(param_1 + 0xfc00), uVar16 = uVar38,
       uVar17 == 0)) {
      iVar15 = 0xc;
      uVar16 = 1;
    }
    if (*(longlong *)(lVar25 + 0x878) == *(longlong *)(param_1 + 0xfc08)) {
LAB_180136120:
      if (uVar16 != 0) goto LAB_180136124;
    }
    else {
      *(longlong *)(lVar25 + 0x878) = *(longlong *)(param_1 + 0xfc08);
      if (uVar16 != 0) {
        uVar16 = 0xe - iVar15;
        goto LAB_180136120;
      }
      iVar15 = 0xd;
      uVar16 = 1;
LAB_180136124:
      (*(code *)puVar12)(*(undefined8 *)(lVar25 + 0x6b8),iVar15,uVar16);
      (*extraout_x11_30)();
    }
    *(undefined1 *)(param_1 + 0xf6c0) = 0;
  }
  if ((*(char *)(param_1 + 0xf68a) != '\0') || (local_f8 != param_1)) {
    uVar17 = *(uint *)(param_1 + 0x18);
    lVar18 = *(longlong *)(param_1 + 0xf6d0);
    bVar13 = *(char *)(local_f0 + 0x65d) == '\0';
    lVar25 = 0xfc68;
    if (bVar13) {
      lVar25 = 0xfb00;
    }
    local_a8 = *(longlong *)(param_1 + lVar25);
    lVar25 = 0xfc70;
    if (bVar13) {
      lVar25 = 0xfb08;
    }
    local_a0 = *(longlong *)(param_1 + lVar25);
    lVar25 = 0xfc78;
    if (bVar13) {
      lVar25 = 0xfb10;
    }
    local_98 = *(longlong *)(param_1 + lVar25);
    lVar25 = 0xfc80;
    if (bVar13) {
      lVar25 = 0xfb18;
    }
    lVar28 = lVar18 + (ulonglong)uVar17 * 0x18c0;
    local_90 = *(longlong *)(param_1 + lVar25);
    lVar25 = *(longlong *)(param_1 + 0xfcb0);
    cVar14 = *(longlong *)(lVar28 + 0xbc0) != local_a8;
    if ((bool)cVar14) {
      *(longlong *)(lVar28 + 0xbc0) = local_a8;
    }
    if (*(longlong *)(lVar28 + 0xbc8) != local_a0) {
      *(longlong *)(lVar28 + 0xbc8) = local_a0;
      cVar14 = cVar14 + '\x01';
    }
    if (*(longlong *)(lVar28 + 0xbd0) != local_98) {
      *(longlong *)(lVar28 + 0xbd0) = local_98;
      cVar14 = cVar14 + '\x01';
    }
    if (*(longlong *)(lVar28 + 0xbd8) != local_90) {
      *(longlong *)(lVar28 + 0xbd8) = local_90;
      cVar14 = cVar14 + '\x01';
    }
    if ((cVar14 != '\0') || (lVar25 != *(longlong *)(lVar28 + 0xbe0))) {
      uVar21 = (*(code *)puVar12)();
      (*extraout_x11_31)(uVar21,4,&local_a8,lVar25);
      *(longlong *)(lVar18 + (ulonglong)uVar17 * 0x18c0 + 0xbe0) = lVar25;
    }
    *(undefined1 *)(param_1 + 0xf68a) = 0;
  }
  if (*(char *)(param_1 + 0xf68b) != '\0' || local_f8 != param_1) {
    puVar20 = (undefined8 *)(param_1 + 0x10420);
    if (*(char *)(local_f0 + 0x662) == '\0') {
      if (*(char *)(local_f0 + 0x66a) == '\0') {
        puVar27 = (undefined8 *)(param_1 + 0x7b0);
      }
      else {
        puVar27 = (undefined8 *)(param_1 + 0xb80);
      }
      uVar21 = *puVar27;
      uVar37 = puVar27[3];
      uVar41 = puVar27[2];
      *(undefined8 *)(param_1 + 0x10428) = puVar27[1];
      *puVar20 = uVar21;
      *(undefined8 *)(param_1 + 0x10438) = uVar37;
      *(undefined8 *)(param_1 + 0x10430) = uVar41;
      uVar21 = puVar27[4];
      *(undefined8 *)(param_1 + 0x10448) = puVar27[5];
      *(undefined8 *)(param_1 + 0x10440) = uVar21;
      *(undefined4 *)(param_1 + 0x10450) = *(undefined4 *)(puVar27 + 6);
      bVar7 = *(byte *)(local_f0 + 0x5a2);
      *(byte *)(param_1 + 0x10430) = *(byte *)(param_1 + 0x10430) & bVar7;
      *(byte *)(param_1 + 0x10431) = *(byte *)(param_1 + 0x10431) & bVar7;
      uVar8 = *(undefined1 *)(local_f0 + 0x5a0);
    }
    else {
      *(undefined8 *)(param_1 + 0x10428) = *(undefined8 *)(param_1 + 0xbbc);
      *puVar20 = *(undefined8 *)(param_1 + 0xbb4);
      *(undefined8 *)(param_1 + 0x10438) = *(undefined8 *)(param_1 + 0xbcc);
      *(undefined8 *)(param_1 + 0x10430) = *(undefined8 *)(param_1 + 0xbc4);
      *(undefined8 *)(param_1 + 0x10448) = *(undefined8 *)(param_1 + 0xbdc);
      *(undefined8 *)(param_1 + 0x10440) = *(undefined8 *)(param_1 + 0xbd4);
      *(undefined4 *)(param_1 + 0x10450) = *(undefined4 *)(param_1 + 0xbe4);
      bVar7 = *(byte *)(local_f0 + 0x5a2);
      *(byte *)(param_1 + 0x10430) = *(byte *)(param_1 + 0x10430) & bVar7;
      *(byte *)(param_1 + 0x10431) = *(byte *)(param_1 + 0x10431) & bVar7;
      uVar8 = *(undefined1 *)(local_f0 + 0x5a1);
    }
    FUN_1801ff3a8(*(undefined8 *)(param_1 + 0xf6d0),*(undefined4 *)(param_1 + 0x18),puVar20,uVar8);
    *(undefined1 *)(param_1 + 0xf68b) = 0;
  }
  lVar25 = local_f0;
  if (*(char *)(param_1 + 0xf68c) != '\0' || local_f8 != param_1) {
    if (*(uint *)(param_1 + 0xe5c) < 2) {
      uVar39 = 0xffffffff;
    }
    else {
      uVar39 = *(undefined4 *)(param_1 + 0xe58);
    }
    local_d0 = CONCAT44(local_d0._4_4_,uVar39);
    lVar18 = 0;
    *(uint *)(param_1 + 0x10454) = (uint)(*(int *)(param_1 + 0xe9c) == 1);
    do {
      if (*(longlong *)(param_1 + 0xf9b0 + lVar18 * 8) != 0) {
        cVar14 = *(char *)(lVar25 + 0x662);
        if (*(char *)(lVar25 + 0x669) == '\0') {
          if (cVar14 == '\0') {
            (*(code *)puVar12)(0x180224000);
            cVar14 = (*extraout_x11_33)();
            lVar28 = 0xbe8;
            lVar33 = 0xc68;
            goto LAB_18013645c;
          }
          lVar28 = 0xde8;
        }
        else if (cVar14 == '\0') {
          (*(code *)puVar12)(0x180224000);
          cVar14 = (*extraout_x11_32)();
          lVar28 = 0xce8;
          lVar33 = 0xd68;
LAB_18013645c:
          if (cVar14 == '\0') {
            lVar28 = lVar33;
          }
          lVar28 = lVar28 + lVar18 * 0x20;
        }
        else {
          lVar28 = 0xde8;
        }
        puVar32 = (undefined4 *)(lVar28 + param_1);
        lVar28 = lVar18 * 0x20 + param_1;
        *(undefined4 *)(lVar28 + 0x1045c) = *puVar32;
        *(undefined4 *)(param_1 + lVar18 * 0x20 + 0x10460) = puVar32[1];
        *(undefined4 *)(lVar28 + 0x10464) = puVar32[2];
        *(undefined4 *)(lVar28 + 0x10468) = puVar32[3];
        *(undefined4 *)(lVar28 + 0x1046c) = puVar32[4];
        *(undefined4 *)(lVar28 + 0x10470) = puVar32[5];
        *(undefined4 *)(lVar28 + 0x10474) = puVar32[6];
        *(undefined1 *)(lVar28 + 0x10478) = *(undefined1 *)(puVar32 + 7);
      }
      lVar18 = lVar18 + 1;
    } while (lVar18 != 4);
    FUN_1801fec48(*(undefined8 *)(param_1 + 0xf6d0),*(undefined4 *)(param_1 + 0x18),
                  param_1 + 0x10454,param_1 + 0xe80,local_d0 & 0xffffffff,1);
    *(undefined1 *)(param_1 + 0xf68c) = 0;
  }
  if (*(char *)(param_1 + 0xf68d) != '\0' || local_f8 != param_1) {
    *(undefined4 *)(param_1 + 0xe3c) = 0;
    *(undefined4 *)(param_1 + 0xe14) = 0;
    if (*(longlong *)(param_1 + 0xf9d0) != 0) {
      if (*(uint *)(&DAT_18022e050 +
                   (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xf9d0) + 0x2c) * 4) == 0x20) {
        iVar15 = 0;
      }
      else {
        iVar15 = (int)((float)((1 << (ulonglong)
                                     (*(uint *)(&DAT_18022e050 +
                                               (ulonglong)
                                               *(uint *)(*(longlong *)(param_1 + 0xf9d0) + 0x2c) * 4
                                               ) & 0x1f)) + -1) * *(float *)(param_1 + 0xe90));
      }
      *(int *)(param_1 + 0xe3c) = iVar15;
      *(int *)(param_1 + 0xe14) = iVar15;
    }
    if (*(char *)(local_f0 + 0x662) == '\0') {
      lVar25 = 0xe30;
      if (*(char *)(local_f0 + 0x668) == '\0') {
        lVar25 = 0xe08;
      }
      puVar32 = (undefined4 *)(lVar25 + param_1);
    }
    else {
      puVar32 = &DAT_180247588;
    }
    *(undefined4 *)(param_1 + 0x1055c) = *puVar32;
    *(undefined4 *)(param_1 + 0x10560) = puVar32[1];
    *(undefined4 *)(param_1 + 0x10564) = puVar32[2];
    *(undefined4 *)(param_1 + 0x10568) = puVar32[3];
    *(undefined4 *)(param_1 + 0x1056c) = puVar32[4];
    *(undefined4 *)(param_1 + 0x10570) = puVar32[5];
    *(undefined4 *)(param_1 + 0x10574) = puVar32[6];
    *(undefined4 *)(param_1 + 0x10578) = puVar32[7];
    *(undefined4 *)(param_1 + 0x1057c) = puVar32[8];
    *(undefined4 *)(param_1 + 0x10580) = puVar32[9];
    FUN_1801ff6a0(*(undefined8 *)(param_1 + 0xf6d0),*(undefined4 *)(param_1 + 0x18),
                  param_1 + 0x1055c);
    *(undefined1 *)(param_1 + 0xf68d) = 0;
  }
  if (*(char *)(param_1 + 0xf68e) != '\0' || local_f8 != param_1) {
    iVar15 = *(int *)(local_b0 + 0x363c);
    if ((*(char *)(local_f0 + 0x662) == '\0') &&
       ((iVar15 != 0 || ((*(uint *)(local_b0 + 0x3654) & 1) != 0)))) {
      lVar25 = 0xee0;
    }
    else {
      lVar25 = 0xef8;
    }
    uVar21 = *(undefined8 *)(lVar25 + param_1);
    puVar20 = (undefined8 *)(param_1 + 0xfd88);
    iVar29 = *(int *)(local_108 + 0x37e0);
    *(undefined8 *)(param_1 + 0xfd90) = ((undefined8 *)(lVar25 + param_1))[1];
    *puVar20 = uVar21;
    *(undefined8 *)(param_1 + 0xfd98) = *(undefined8 *)(lVar25 + param_1 + 0x10);
    if (0xafff < iVar29) {
      *(float *)(local_108 + 0x3d88) = *(float *)(param_1 + 0xf10) + *(float *)(local_108 + 0x3d88);
      *(float *)(local_108 + 0x3d8c) = *(float *)(local_108 + 0x3d8c) + *(float *)(param_1 + 0xf14);
    }
    if (iVar15 == 0) {
      *(undefined4 *)(local_108 + 0x3d98) = 0;
      *(undefined4 *)(param_1 + 0xfd9c) = 0x3f800000;
    }
    lVar25 = *(longlong *)(param_1 + 0xf6d0) + (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0;
    if (((((*(float *)(local_108 + 0x3d88) != *(float *)(lVar25 + 0xb80)) ||
          (*(float *)(local_108 + 0x3d8c) != *(float *)(lVar25 + 0xb84))) ||
         (*(float *)(local_108 + 0x3d90) != *(float *)(lVar25 + 0xb88))) ||
        ((*(float *)(local_108 + 0x3d94) != *(float *)(lVar25 + 0xb8c) ||
         (*(float *)(local_108 + 0x3d98) != *(float *)(lVar25 + 0xb90))))) ||
       (*(float *)(param_1 + 0xfd9c) != *(float *)(lVar25 + 0xb94))) {
      uVar21 = (*(code *)puVar12)();
      (*extraout_x11_34)(uVar21,1,puVar20);
      uVar21 = *puVar20;
      *(undefined8 *)(lVar25 + 0xb88) = *(undefined8 *)(param_1 + 0xfd90);
      *(undefined8 *)(lVar25 + 0xb80) = uVar21;
      *(undefined8 *)(lVar25 + 0xb90) = *(undefined8 *)(param_1 + 0xfd98);
    }
    *(undefined1 *)(param_1 + 0xf68e) = 0;
  }
  if (*(char *)(param_1 + 0x10588) != '\0' || local_f8 != param_1) {
    FUN_1801fff80(*(undefined8 *)(param_1 + 0xf6d0),*(undefined4 *)(param_1 + 0x18),
                  *(undefined4 *)(local_108 + 0x3d80),*(undefined8 *)(param_1 + 0xfcb8),
                  *(undefined8 *)(param_1 + 0xfcc0),*(undefined8 *)(param_1 + 0xfcc8),
                  *(undefined8 *)(param_1 + 0xfcd0));
    *(undefined1 *)(param_1 + 0x10588) = 0;
  }
  uVar17 = *(uint *)(local_108 + 0x3684);
  if (uVar17 != 0 || local_f8 != param_1) {
    if (*(char *)(local_f0 + 0x662) == '\0') {
      uVar38 = (uVar17 & 0xaaaaaaaa) >> 1 | (uVar17 & 0x55555555) << 1;
      uVar38 = (uVar38 & 0xcccccccc) >> 2 | (uVar38 & 0x33333333) << 2;
      uVar38 = (uVar38 & 0xf0f0f0f0) >> 4 | (uVar38 & 0xf0f0f0f) << 4;
      uVar38 = (uVar38 & 0xff00ff00) >> 8 | (uVar38 & 0xff00ff) << 8;
      local_100 = (uint *)CONCAT44(local_100._4_4_,uVar17);
      lVar25 = LZCOUNT(uVar38 >> 0x10 | uVar38 << 0x10);
      uVar17 = (uint)lVar25;
      if ((1 - (uVar17 >> 5) & 0xff) == 0) {
        uVar26 = FUN_180136a7c(0xfb20);
        return uVar26;
      }
      *(byte *)((longlong)&local_100 + (longlong)((int)uVar17 >> 3)) =
           *(byte *)((longlong)&local_100 + (longlong)((int)uVar17 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar17 & 7)) ^ 0xff);
      plVar4 = (longlong *)(param_1 + 0xfb20);
      local_88 = param_1 + 0x7550;
      local_b8 = param_1 + 0xfda0;
      local_e8 = (undefined8 *)(param_1 + 0x3f0);
      do {
        lVar18 = param_1 + lVar25 * 8;
        if (*(uint *)(lVar18 + 0x734) < (uint)*(byte *)(lVar18 + 0x733)) {
          fVar42 = (float)*(byte *)(lVar18 + 0x733);
        }
        else {
          fVar42 = (float)*(uint *)(lVar18 + 0x734);
        }
        lVar33 = lVar25 * 0x34;
        lVar28 = param_1 + lVar33;
        *(float *)(lVar28 + 0xdc) = fVar42;
        bVar7 = *(byte *)(lVar18 + 0x731);
        bVar9 = *(byte *)(lVar18 + 0x732);
        uVar26 = (ulonglong)bVar9;
        uVar17 = (uint)*(byte *)(lVar18 + 0x730);
        bVar13 = uVar17 == 2;
        if (bVar13) {
          uVar17 = 0;
        }
        if (!bVar13) {
          fVar42 = 3.4028235e+38;
        }
        uVar38 = (uint)bVar9;
        *(float *)(lVar28 + 0xe0) = fVar42;
        *(float *)(lVar28 + 0x420) = fVar42;
        if (bVar7 == 2 || uVar38 == 2) {
          *(undefined4 *)(lVar28 + 0xb0) = 0x55;
          if (bVar7 != 2 && bVar9 != 2) goto LAB_180136974;
          uVar39 = 0xd5;
        }
        else {
          uVar26 = (ulonglong)uVar38;
          *(undefined4 *)(lVar28 + 0xb0) =
               *(undefined4 *)
                (&DAT_18022c130 +
                ((ulonglong)uVar17 | ((ulonglong)(uint)bVar7 | (ulonglong)uVar38 << 1) << 1) * 4);
LAB_180136974:
          uVar39 = *(undefined4 *)
                    (&DAT_18022c110 +
                    ((ulonglong)uVar17 | ((ulonglong)bVar7 | uVar26 << 1) << 1) * 4);
        }
        *(undefined4 *)((longlong)local_e8 + lVar33) = uVar39;
        puVar20 = (undefined8 *)(lVar33 + local_b8);
        lVar18 = 0x3f0;
        if (1 < (*(int *)(local_88 + lVar25 * 4) + 0xfbU & 0xff)) {
          lVar18 = 0xb0;
        }
        puVar27 = (undefined8 *)(lVar28 + lVar18);
        uVar21 = *puVar27;
        uVar37 = puVar27[3];
        uVar41 = puVar27[2];
        puVar20[1] = puVar27[1];
        *puVar20 = uVar21;
        puVar20[3] = uVar37;
        puVar20[2] = uVar41;
        uVar21 = puVar27[4];
        puVar20[5] = puVar27[5];
        puVar20[4] = uVar21;
        *(undefined4 *)(puVar20 + 6) = *(undefined4 *)(puVar27 + 6);
        lVar18 = FUN_180200a68(*(longlong *)(param_1 + 0xf6d8) + 0x628);
        if (lVar18 != plVar4[lVar25]) {
          FUN_180200e40(*(longlong *)(param_1 + 0xf6d8) + 0x628);
          plVar4[lVar25] = lVar18;
        }
        iVar15 = (int)(uint)lVar25 >> 3;
        *(byte *)(param_1 + 0xf684 + (longlong)iVar15) =
             *(byte *)(param_1 + 0xf684 + (longlong)iVar15) &
             ((byte)(1 << (ulonglong)((uint)lVar25 & 7)) ^ 0xff);
        uVar17 = ((uint)(float)local_100 & 0xaaaaaaaa) >> 1 |
                 ((uint)(float)local_100 & 0x55555555) << 1;
        uVar17 = (uVar17 & 0xcccccccc) >> 2 | (uVar17 & 0x33333333) << 2;
        uVar17 = (uVar17 & 0xf0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f) << 4;
        uVar17 = (uVar17 & 0xff00ff00) >> 8 | (uVar17 & 0xff00ff) << 8;
        lVar25 = LZCOUNT(uVar17 >> 0x10 | uVar17 << 0x10);
        uVar17 = (uint)lVar25;
        if ((1 - (uVar17 >> 5) & 0xff) == 0) goto FUN_180136a74;
        *(byte *)((longlong)&local_100 + (longlong)((int)uVar17 >> 3)) =
             *(byte *)((longlong)&local_100 + (longlong)((int)uVar17 >> 3)) &
             ((byte)(1 << (ulonglong)(uVar17 & 7)) ^ 0xff);
      } while( true );
    }
    if (*(longlong *)(param_1 + 0xf9a8) != 0) {
      lVar25 = *(longlong *)(param_1 + 0xf6d0) + (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0;
      if (*(longlong *)(lVar25 + 0x790) != *(longlong *)(param_1 + 0xf720)) {
        *(longlong *)(lVar25 + 0x790) = *(longlong *)(param_1 + 0xf720);
        uVar21 = (*(code *)puVar12)();
        (*extraout_x11_36)(uVar21,0,1,lVar25 + 0x790);
      }
      *(byte *)(param_1 + 0xf684) = *(byte *)(param_1 + 0xf684) & 0xfe;
    }
  }
LAB_180136e24:
  uVar17 = *(uint *)(local_108 + 0x36bc);
  if (uVar17 == 0 && local_f8 == param_1) goto LAB_1801370bc;
  local_100 = (uint *)(CONCAT44(local_100._4_4_,uVar17) & 0xffffffff0000000f);
  uVar17 = (uVar17 & 10) >> 1 | (uVar17 & 5) << 1;
  lVar25 = LZCOUNT((uVar17 >> 2 | (uVar17 & 0x33333333) << 2) << 0x1c);
  uVar17 = (uint)lVar25;
  if ((1 - (uVar17 >> 5) & 0xff) == 0) {
    uVar26 = FUN_180136fb8(0xfc88);
    return uVar26;
  }
  *(byte *)((longlong)&local_100 + (longlong)((int)uVar17 >> 3)) =
       *(byte *)((longlong)&local_100 + (longlong)((int)uVar17 >> 3)) &
       ((byte)(1 << (ulonglong)(uVar17 & 7)) ^ 0xff);
  plVar4 = (longlong *)(param_1 + 0xfc88);
  while( true ) {
    lVar18 = param_1 + lVar25 * 8;
    if (*(uint *)(lVar18 + 0x81c) < (uint)*(byte *)(lVar18 + 0x81b)) {
      fVar42 = (float)*(byte *)(lVar18 + 0x81b);
    }
    else {
      fVar42 = (float)*(uint *)(lVar18 + 0x81c);
    }
    lVar28 = param_1 + lVar25 * 0x34;
    *(float *)(lVar28 + 0x86c) = fVar42;
    bVar7 = *(byte *)(lVar18 + 0x819);
    bVar9 = *(byte *)(lVar18 + 0x81a);
    bVar10 = *(byte *)(lVar18 + 0x818);
    *(undefined4 *)(lVar28 + 0x870) = 0x7f7fffff;
    if (bVar7 == 2 || bVar9 == 2) {
      uVar39 = 0;
    }
    else {
      uVar39 = *(undefined4 *)
                (&DAT_18022c130 +
                ((ulonglong)bVar10 | ((ulonglong)(uint)bVar7 | (ulonglong)(uint)bVar9 << 1) << 1) *
                4);
    }
    *(undefined4 *)(lVar28 + 0x840) = uVar39;
    puVar20 = (undefined8 *)(param_1 + 0x100e0 + lVar25 * 0x34);
    puVar27 = (undefined8 *)(param_1 + 0x840 + lVar25 * 0x34);
    uVar21 = *puVar27;
    uVar37 = puVar27[3];
    uVar41 = puVar27[2];
    puVar20[1] = puVar27[1];
    *puVar20 = uVar21;
    puVar20[3] = uVar37;
    puVar20[2] = uVar41;
    uVar21 = puVar27[4];
    uVar39 = *(undefined4 *)(puVar27 + 6);
    puVar20[5] = puVar27[5];
    puVar20[4] = uVar21;
    *(undefined4 *)(puVar20 + 6) = uVar39;
    lVar18 = FUN_180200a68(*(longlong *)(param_1 + 0xf6d8) + 0x628);
    if (lVar18 != plVar4[lVar25]) {
      FUN_180200e40(*(longlong *)(param_1 + 0xf6d8) + 0x628);
      plVar4[lVar25] = lVar18;
    }
    uVar17 = ((uint)(float)local_100 & 0xaaaaaaaa) >> 1 | ((uint)(float)local_100 & 0x55555555) << 1
    ;
    uVar17 = (uVar17 & 0xcccccccc) >> 2 | (uVar17 & 0x33333333) << 2;
    uVar17 = (uVar17 & 0xf0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f) << 4;
    uVar17 = (uVar17 & 0xff00ff00) >> 8 | (uVar17 & 0xff00ff) << 8;
    lVar25 = LZCOUNT(uVar17 >> 0x10 | uVar17 << 0x10);
    uVar17 = (uint)lVar25;
    if ((1 - (uVar17 >> 5) & 0xff) == 0) break;
    *(byte *)((longlong)&local_100 + (longlong)((int)uVar17 >> 3)) =
         *(byte *)((longlong)&local_100 + (longlong)((int)uVar17 >> 3)) &
         ((byte)(1 << (ulonglong)(uVar17 & 7)) ^ 0xff);
  }
  lVar25 = (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0 + *(longlong *)(param_1 + 0xf6d0);
  bVar13 = *(longlong *)(lVar25 + 0x710) != *plVar4;
  if (bVar13) {
    *(longlong *)(lVar25 + 0x710) = *plVar4;
  }
  uVar17 = (uint)bVar13;
  if (*(longlong *)(lVar25 + 0x718) == *(longlong *)(param_1 + 0xfc90)) {
LAB_18013701c:
    uVar38 = 3;
    iVar15 = 0;
  }
  else {
    *(longlong *)(lVar25 + 0x718) = *(longlong *)(param_1 + 0xfc90);
    if (bVar13) {
      uVar17 = 2;
      goto LAB_18013701c;
    }
    iVar15 = 1;
    uVar17 = 1;
    uVar38 = 2;
  }
  uVar16 = uVar17;
  if ((*(longlong *)(lVar25 + 0x720) != *(longlong *)(param_1 + 0xfc98)) &&
     (*(longlong *)(lVar25 + 0x720) = *(longlong *)(param_1 + 0xfc98), uVar16 = uVar38, uVar17 == 0)
     ) {
    iVar15 = 2;
    uVar16 = 1;
  }
  if (*(longlong *)(lVar25 + 0x728) == *(longlong *)(param_1 + 0xfca0)) {
LAB_180137080:
    if (uVar16 != 0) goto LAB_180137084;
  }
  else {
    *(longlong *)(lVar25 + 0x728) = *(longlong *)(param_1 + 0xfca0);
    if (uVar16 != 0) {
      uVar16 = 4 - iVar15;
      goto LAB_180137080;
    }
    iVar15 = 3;
    uVar16 = 1;
LAB_180137084:
    (*(code *)puVar12)(*(undefined8 *)(lVar25 + 0x6b8),iVar15,uVar16);
    (*extraout_x11_37)();
  }
  *(undefined4 *)(local_108 + 0x36bc) = 0;
LAB_1801370bc:
  if (*(char *)(param_1 + 0xf68f) != '\0' || local_f8 != param_1) {
    lVar5 = param_1 + 0xfcd8;
    uVar26 = 0;
    iVar15 = 0;
    lVar33 = 0;
    lVar34 = *(longlong *)(param_1 + 0xf6d0) + (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0;
    uVar24 = 0;
    lVar25 = lVar34 + 0xaf0;
    lVar18 = lVar34 + 0xb30;
    lVar28 = lVar34 + 0xa70;
    do {
      lVar23 = *(longlong *)(lVar5 + lVar33 * 8);
      iVar29 = (int)uVar24;
      if (((*(longlong *)(lVar28 + lVar33 * 8) != lVar23) ||
          (lVar6 = param_1 + lVar33 * 4, *(int *)(lVar25 + lVar33 * 4) != *(int *)(lVar6 + 0xfe8)))
         || (*(int *)(lVar18 + lVar33 * 4) != *(int *)(lVar6 + 0x102c))) {
        lVar6 = param_1 + lVar33 * 4;
        *(longlong *)(lVar28 + lVar33 * 8) = lVar23;
        *(undefined4 *)(lVar25 + lVar33 * 4) = *(undefined4 *)(lVar6 + 0xfe8);
        *(undefined4 *)(lVar18 + lVar33 * 4) = *(undefined4 *)(lVar6 + 0x102c);
        if (iVar15 == 0) {
          iVar15 = 1;
          uVar26 = uVar24;
        }
        else {
          iVar15 = (iVar29 - (int)uVar26) + 1;
        }
      }
      uVar17 = iVar29 + 1;
      lVar23 = *(longlong *)(lVar5 + (ulonglong)uVar17 * 8);
      if (((*(longlong *)(lVar28 + (ulonglong)uVar17 * 8) != lVar23) ||
          (lVar6 = param_1 + (ulonglong)uVar17 * 4,
          *(int *)(lVar25 + (ulonglong)uVar17 * 4) != *(int *)(lVar6 + 0xfe8))) ||
         (*(int *)(lVar34 + (ulonglong)uVar17 * 4 + 0xb30) != *(int *)(lVar6 + 0x102c))) {
        lVar6 = param_1 + (ulonglong)uVar17 * 4;
        *(longlong *)(lVar28 + (ulonglong)uVar17 * 8) = lVar23;
        lVar23 = lVar34 + (ulonglong)uVar17 * 4;
        *(undefined4 *)(lVar23 + 0xaf0) = *(undefined4 *)(lVar6 + 0xfe8);
        *(undefined4 *)(lVar23 + 0xb30) = *(undefined4 *)(lVar6 + 0x102c);
        if (iVar15 == 0) {
          uVar26 = (ulonglong)uVar17;
          iVar15 = 1;
        }
        else {
          iVar15 = (iVar29 - (int)uVar26) + 2;
        }
      }
      uVar17 = iVar29 + 2;
      lVar23 = *(longlong *)(lVar5 + (ulonglong)uVar17 * 8);
      if (((*(longlong *)(lVar28 + (ulonglong)uVar17 * 8) != lVar23) ||
          (lVar6 = param_1 + (ulonglong)uVar17 * 4,
          *(int *)(lVar34 + (ulonglong)uVar17 * 4 + 0xaf0) != *(int *)(lVar6 + 0xfe8))) ||
         (*(int *)(lVar18 + (ulonglong)uVar17 * 4) != *(int *)(lVar6 + 0x102c))) {
        lVar6 = param_1 + (ulonglong)uVar17 * 4;
        *(longlong *)(lVar28 + (ulonglong)uVar17 * 8) = lVar23;
        *(undefined4 *)(lVar34 + (ulonglong)uVar17 * 4 + 0xaf0) = *(undefined4 *)(lVar6 + 0xfe8);
        *(undefined4 *)(lVar18 + (ulonglong)uVar17 * 4) = *(undefined4 *)(lVar6 + 0x102c);
        if (iVar15 == 0) {
          uVar26 = (ulonglong)uVar17;
          iVar15 = 1;
        }
        else {
          iVar15 = (iVar29 - (int)uVar26) + 3;
        }
      }
      uVar17 = iVar29 + 3;
      lVar23 = *(longlong *)(lVar5 + (ulonglong)uVar17 * 8);
      if (((*(longlong *)(lVar28 + (ulonglong)uVar17 * 8) != lVar23) ||
          (lVar6 = param_1 + (ulonglong)uVar17 * 4,
          *(int *)(lVar25 + (ulonglong)uVar17 * 4) != *(int *)(lVar6 + 0xfe8))) ||
         (*(int *)(lVar34 + (ulonglong)uVar17 * 4 + 0xb30) != *(int *)(lVar6 + 0x102c))) {
        lVar6 = param_1 + (ulonglong)uVar17 * 4;
        *(longlong *)(lVar28 + (ulonglong)uVar17 * 8) = lVar23;
        *(undefined4 *)(lVar25 + (ulonglong)uVar17 * 4) = *(undefined4 *)(lVar6 + 0xfe8);
        *(undefined4 *)(lVar34 + (ulonglong)uVar17 * 4 + 0xb30) = *(undefined4 *)(lVar6 + 0x102c);
        if (iVar15 == 0) {
          uVar26 = (ulonglong)uVar17;
          iVar15 = 1;
        }
        else {
          iVar15 = (iVar29 - (int)uVar26) + 4;
        }
      }
      uVar17 = iVar29 + 4;
      lVar23 = *(longlong *)(lVar5 + (ulonglong)uVar17 * 8);
      if (((*(longlong *)(lVar28 + (ulonglong)uVar17 * 8) != lVar23) ||
          (lVar6 = param_1 + (ulonglong)uVar17 * 4,
          *(int *)(lVar25 + (ulonglong)uVar17 * 4) != *(int *)(lVar6 + 0xfe8))) ||
         (*(int *)(lVar18 + (ulonglong)uVar17 * 4) != *(int *)(lVar6 + 0x102c))) {
        lVar6 = param_1 + (ulonglong)uVar17 * 4;
        *(longlong *)(lVar28 + (ulonglong)uVar17 * 8) = lVar23;
        *(undefined4 *)(lVar34 + (ulonglong)uVar17 * 4 + 0xaf0) = *(undefined4 *)(lVar6 + 0xfe8);
        *(undefined4 *)(lVar18 + (ulonglong)uVar17 * 4) = *(undefined4 *)(lVar6 + 0x102c);
        if (iVar15 == 0) {
          uVar26 = (ulonglong)uVar17;
          iVar15 = 1;
        }
        else {
          iVar15 = (iVar29 - (int)uVar26) + 5;
        }
      }
      uVar17 = iVar29 + 5;
      lVar23 = *(longlong *)(lVar5 + (ulonglong)uVar17 * 8);
      if (*(longlong *)(lVar28 + (ulonglong)uVar17 * 8) == lVar23) {
        lVar6 = lVar34 + (ulonglong)uVar17 * 4;
        lVar2 = param_1 + (ulonglong)uVar17 * 4;
        if ((*(int *)(lVar6 + 0xaf0) != *(int *)(lVar2 + 0xfe8)) ||
           (*(int *)(lVar6 + 0xb30) != *(int *)(lVar2 + 0x102c))) goto LAB_180137368;
      }
      else {
LAB_180137368:
        lVar6 = param_1 + (ulonglong)uVar17 * 4;
        *(longlong *)(lVar28 + (ulonglong)uVar17 * 8) = lVar23;
        lVar23 = lVar34 + (ulonglong)uVar17 * 4;
        *(undefined4 *)(lVar23 + 0xaf0) = *(undefined4 *)(lVar6 + 0xfe8);
        *(undefined4 *)(lVar23 + 0xb30) = *(undefined4 *)(lVar6 + 0x102c);
        if (iVar15 == 0) {
          uVar26 = (ulonglong)uVar17;
          iVar15 = 1;
        }
        else {
          iVar15 = (iVar29 - (int)uVar26) + 6;
        }
      }
      uVar17 = iVar29 + 6;
      lVar23 = *(longlong *)(lVar5 + (ulonglong)uVar17 * 8);
      if (((*(longlong *)(lVar28 + (ulonglong)uVar17 * 8) != lVar23) ||
          (lVar6 = param_1 + (ulonglong)uVar17 * 4,
          *(int *)(lVar25 + (ulonglong)uVar17 * 4) != *(int *)(lVar6 + 0xfe8))) ||
         (*(int *)(lVar18 + (ulonglong)uVar17 * 4) != *(int *)(lVar6 + 0x102c))) {
        lVar6 = param_1 + (ulonglong)uVar17 * 4;
        *(longlong *)(lVar28 + (ulonglong)uVar17 * 8) = lVar23;
        *(undefined4 *)(lVar25 + (ulonglong)uVar17 * 4) = *(undefined4 *)(lVar6 + 0xfe8);
        *(undefined4 *)(lVar18 + (ulonglong)uVar17 * 4) = *(undefined4 *)(lVar6 + 0x102c);
        if (iVar15 == 0) {
          uVar26 = (ulonglong)uVar17;
          iVar15 = 1;
        }
        else {
          iVar15 = (iVar29 - (int)uVar26) + 7;
        }
      }
      uVar24 = (ulonglong)(iVar29 + 7);
      lVar23 = *(longlong *)(lVar5 + uVar24 * 8);
      if (((*(longlong *)(lVar28 + uVar24 * 8) != lVar23) ||
          (lVar6 = param_1 + uVar24 * 4, *(int *)(lVar25 + uVar24 * 4) != *(int *)(lVar6 + 0xfe8)))
         || (*(int *)(lVar34 + uVar24 * 4 + 0xb30) != *(int *)(lVar6 + 0x102c))) {
        lVar6 = param_1 + uVar24 * 4;
        *(longlong *)(lVar28 + uVar24 * 8) = lVar23;
        lVar23 = lVar34 + uVar24 * 4;
        *(undefined4 *)(lVar23 + 0xaf0) = *(undefined4 *)(lVar6 + 0xfe8);
        *(undefined4 *)(lVar23 + 0xb30) = *(undefined4 *)(lVar6 + 0x102c);
        if (iVar15 == 0) {
          iVar15 = 1;
          uVar26 = uVar24;
        }
        else {
          iVar15 = (iVar29 - (int)uVar26) + 8;
        }
      }
      uVar24 = (ulonglong)(iVar29 + 8U);
      lVar33 = lVar33 + 8;
    } while (iVar29 + 8U < 0x10);
    if (iVar15 != 0) {
      (*(code *)puVar12)();
      (*extraout_x11_38)();
    }
    *(undefined1 *)(param_1 + 0xf68f) = 0;
  }
  if (*(char *)(param_1 + 0xf690) != '\0' || local_f8 != param_1) {
    lVar25 = *(longlong *)(param_1 + 0xfd58);
    if (lVar25 == *(longlong *)(param_1 + 0xf710)) {
      iVar15 = 0x2a;
    }
    else {
      iVar15 = *(int *)(local_108 + 0x3d70);
    }
    lVar18 = *(longlong *)(param_1 + 0xf6d0) + (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0;
    if (((lVar25 != *(longlong *)(lVar18 + 0xb70)) || (iVar15 != *(int *)(lVar18 + 0xb78))) ||
       (*(int *)(lVar18 + 0xb7c) != 0)) {
      *(longlong *)(lVar18 + 0xb70) = lVar25;
      *(int *)(lVar18 + 0xb78) = iVar15;
      *(undefined4 *)(lVar18 + 0xb7c) = 0;
      (*(code *)puVar12)();
      (*extraout_x11_39)();
    }
    *(undefined1 *)(param_1 + 0xf690) = 0;
  }
  lVar25 = *(longlong *)(param_1 + 0xf9b0);
  if (lVar25 != 0) {
    local_e8 = (undefined8 *)0x0;
    uVar38 = *(uint *)(local_108 + 0x39d8);
    uVar17 = *(uint *)(lVar25 + 0x24) >> (ulonglong)(uVar38 & 0x1f);
    if (uVar17 == 0) {
      uVar17 = 1;
    }
    uVar16 = *(uint *)(lVar25 + 0x28) >> (ulonglong)(uVar38 & 0x1f);
    if (uVar16 == 0) {
      uVar16 = 1;
    }
    uStack_e0 = CONCAT44(uVar16,uVar17);
    auVar44 = (*(code *)puVar12)(lVar25,uVar38 + *(int *)(lVar25 + 0x3c) *
                                                 *(int *)(local_108 + 0x39e8));
    (*extraout_x11_40)(auVar44._0_8_,auVar44._8_8_,&local_e8);
  }
  lVar25 = *(longlong *)(param_1 + 0xf9b8);
  if (lVar25 != 0) {
    local_e8 = (undefined8 *)0x0;
    uVar38 = *(uint *)(local_108 + 0x39dc);
    uVar17 = *(uint *)(lVar25 + 0x24) >> (ulonglong)(uVar38 & 0x1f);
    if (uVar17 == 0) {
      uVar17 = 1;
    }
    uVar16 = *(uint *)(lVar25 + 0x28) >> (ulonglong)(uVar38 & 0x1f);
    if (uVar16 == 0) {
      uVar16 = 1;
    }
    uStack_e0 = CONCAT44(uVar16,uVar17);
    auVar44 = (*(code *)puVar12)(lVar25,uVar38 + *(int *)(lVar25 + 0x3c) *
                                                 *(int *)(local_108 + 0x39ec));
    (*extraout_x11_41)(auVar44._0_8_,auVar44._8_8_,&local_e8);
  }
  lVar25 = *(longlong *)(param_1 + 0xf9c0);
  if (lVar25 != 0) {
    local_e8 = (undefined8 *)0x0;
    uVar38 = *(uint *)(local_108 + 0x39e0);
    uVar17 = *(uint *)(lVar25 + 0x24) >> (ulonglong)(uVar38 & 0x1f);
    if (uVar17 == 0) {
      uVar17 = 1;
    }
    uVar16 = *(uint *)(lVar25 + 0x28) >> (ulonglong)(uVar38 & 0x1f);
    if (uVar16 == 0) {
      uVar16 = 1;
    }
    uStack_e0 = CONCAT44(uVar16,uVar17);
    auVar44 = (*(code *)puVar12)(lVar25,uVar38 + *(int *)(lVar25 + 0x3c) *
                                                 *(int *)(local_108 + 0x39f0));
    (*extraout_x11_42)(auVar44._0_8_,auVar44._8_8_,&local_e8);
  }
  lVar25 = *(longlong *)(param_1 + 0xf9c8);
  if (lVar25 != 0) {
    local_e8 = (undefined8 *)0x0;
    uVar38 = *(uint *)(local_108 + 0x39e4);
    uVar17 = *(uint *)(lVar25 + 0x24) >> (ulonglong)(uVar38 & 0x1f);
    if (uVar17 == 0) {
      uVar17 = 1;
    }
    uVar16 = *(uint *)(lVar25 + 0x28) >> (ulonglong)(uVar38 & 0x1f);
    if (uVar16 == 0) {
      uVar16 = 1;
    }
    uStack_e0 = CONCAT44(uVar16,uVar17);
    auVar44 = (*(code *)puVar12)(lVar25,uVar38 + *(int *)(lVar25 + 0x3c) *
                                                 *(int *)(local_108 + 0x39f4));
    (*extraout_x11_43)(auVar44._0_8_,auVar44._8_8_,&local_e8);
  }
  lVar25 = 0xbb4;
  if (*(char *)(local_f0 + 0x662) == '\0') {
    lVar25 = 0x7b0;
  }
  lVar18 = *(longlong *)(param_1 + 0xf9d0);
  if ((lVar18 != 0) && (*(int *)(param_1 + lVar25) != 0)) {
    lVar25 = 3000;
    if (*(char *)(local_f0 + 0x662) == '\0') {
      lVar25 = 0x7b4;
    }
    if (*(int *)(param_1 + lVar25) != 0) {
      uVar38 = *(uint *)(local_108 + 0x39f8);
      local_e8 = (undefined8 *)0x0;
      uVar17 = *(uint *)(lVar18 + 0x24) >> (ulonglong)(uVar38 & 0x1f);
      if (uVar17 == 0) {
        uVar17 = 1;
      }
      uVar16 = *(uint *)(lVar18 + 0x28) >> (ulonglong)(uVar38 & 0x1f);
      if (uVar16 == 0) {
        uVar16 = 1;
      }
      uStack_e0 = CONCAT44(uVar16,uVar17);
      auVar44 = (*(code *)puVar12)(lVar18,uVar38 + *(int *)(local_108 + 0x39fc) *
                                                   *(int *)(lVar18 + 0x3c));
      (*extraout_x11_44)(auVar44._0_8_,auVar44._8_8_,&local_e8);
    }
  }
  return (ulonglong)local_110[0];
}

