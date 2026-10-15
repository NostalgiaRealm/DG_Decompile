/*
 * FUN_180142348 at 180142348
 * undefined FUN_180142348(void)
 * Address ranges: 180142348-180142867
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180142348(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  ulonglong uVar10;
  char cVar11;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  longlong lVar12;
  longlong lVar13;
  undefined1 auVar14 [16];
  undefined4 local_7f0 [2];
  longlong *local_7e8;
  undefined8 uStack_7e0;
  longlong local_7c0;
  longlong local_7b8;
  undefined8 uStack_7b0;
  undefined8 local_7a8;
  undefined8 local_7a0;
  undefined4 local_798;
  longlong local_790;
  longlong local_788;
  undefined8 local_780;
  undefined1 local_778;
  longlong local_770;
  longlong local_768;
  undefined8 local_760;
  undefined1 local_758;
  longlong local_750;
  longlong lStack_748;
  undefined8 local_740;
  undefined1 local_738;
  undefined1 *local_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  ulonglong local_710 [6];
  undefined1 *local_6e0;
  undefined8 local_6d8;
  undefined1 auStack_6d0 [20];
  undefined1 local_6bc;
  undefined1 local_6bb;
  undefined1 auStack_6ba [66];
  undefined8 local_678;
  undefined4 local_670;
  undefined8 local_660;
  undefined8 uStack_658;
  undefined8 local_650;
  undefined8 uStack_648;
  undefined8 local_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 local_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 local_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  longlong lStack_588;
  longlong local_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined1 auStack_2a0 [608];
  
  *param_2 = 0;
  param_2[1] = 0;
  lVar13 = *(longlong *)(param_1 + 8) + (ulonglong)*(uint *)(param_1 + 0x10) * 0x18c0;
  iVar8 = *(int *)(lVar13 + 0x6d0);
  if (((uint)param_3 >> 8 & 1) == 0) {
    local_778 = 1;
    local_780 = 0x100;
    local_790 = FUN_1802229a8(0x100);
    uVar2 = *(undefined1 *)(param_1 + 0x2f0);
    uStack_7b0 = 0;
    local_7b8 = 0;
    local_7a8 = 0;
    uVar1 = 0x10050;
    if (*(int *)(lVar13 + 0x6cc) < 0xb000) {
      uVar1 = 0x10040;
    }
    local_730 = auStack_2a0;
    uStack_718 = 0;
    uStack_720 = 0;
    local_788 = local_790;
    uStack_728 = param_3;
    FUN_180222c50(auStack_6d0,0,0x430);
    uStack_578 = 0;
    uStack_570 = 0;
    uStack_598 = 0;
    local_5a0 = 0;
    uStack_590 = 0;
    lStack_588 = ((ulonglong)*(uint *)(param_1 + 0x74) & 0xfffff) << 0x20;
    uStack_658 = 0;
    local_660 = 0;
    uStack_648 = 0;
    local_650 = 0;
    uStack_638 = 0;
    local_640 = 0;
    uStack_628 = 0;
    uStack_630 = 0;
    uStack_618 = 0;
    local_620 = 0;
    uStack_608 = 0;
    uStack_610 = 0;
    uStack_5f8 = 0;
    local_600 = 0;
    uStack_5e8 = 0;
    uStack_5f0 = 0;
    uStack_5d8 = 0;
    local_5e0 = 0;
    uStack_5c8 = 0;
    uStack_5d0 = 0;
    uStack_5b8 = 0;
    local_5c0 = 0;
    uStack_5a8 = 0;
    uStack_5b0 = 0;
    uStack_568 = 0x1000000;
    local_580 = param_1 + 0x30;
    uVar6 = FUN_180213038(uVar1);
    local_6bb = uVar6 < 0x50;
    local_6bc = 0;
    local_6e0 = auStack_6ba;
    local_710[5] = 0;
    local_710[4] = 0;
    local_710[1] = 0;
    local_710[3] = 0;
    local_710[2] = 0;
    local_6d8 = 0x40;
    local_710[0] = (ulonglong)uVar1;
    local_650 = CONCAT44(local_650._4_4_,0x410802);
    uStack_658 = 0x11080000210800;
    local_660 = 0x31080000410800;
    local_678 = 0x41040000110400;
    local_7a0 = 0;
    local_670 = 0x20000d00;
    local_798 = 0;
    local_7c0 = 0x43425844;
    local_7b8 = 0;
    uStack_7b0 = 0x100000000;
    local_7a8 = 0x300000000;
    FUN_180214fe8(&local_790,&local_7c0,0x2c);
    local_7a8 = CONCAT71(local_7a8._1_7_,1);
    *(int *)(local_790 + 0x20) = (int)local_788 - (int)local_790;
    uStack_7b0 = 0x800;
    local_7c0 = FUN_1802229a8(0x800);
    if (uStack_568._3_1_ != '\0') {
      cVar11 = '\0';
      uVar10 = 0;
      do {
        *(char *)((longlong)&uStack_5f0 + uVar10 + 6) = cVar11;
        uVar1 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar1;
        cVar11 = cVar11 + '\x01';
      } while (uVar1 < 0x11);
    }
    local_738 = 1;
    local_740 = 0x200;
    local_7b8 = local_7c0;
    local_750 = FUN_1802229a8(0x200);
    lStack_748 = local_750;
    uVar7 = FUN_1802130a8(&local_750,local_710[0] & 0xffffffff);
    FUN_1802132f0(local_710[0] & 0xffffffff,&local_750,0);
    local_770 = 0;
    local_768 = 0;
    local_760 = 0x80;
    local_758 = 1;
    local_770 = FUN_1802229a8(0x80);
    local_768 = local_770;
    FUN_18018a780(param_1 + 0x20,&local_770,&local_730,uVar2);
    uVar9 = FUN_180214c88(local_710,&local_770,0x3e,0,local_7f0,0);
    uVar9 = FUN_180184740(uVar9,&local_750,&local_730);
    if (uStack_568._3_1_ == '\0') {
      uVar10 = 0;
      if ((uint)uStack_5d8 != 0) {
        do {
          uVar9 = FUN_1802134a0(&local_750,uVar10,
                                *(undefined1 *)
                                 ((longlong)&local_600 +
                                 (ulonglong)*(byte *)((longlong)&uStack_5f0 + uVar10 + 6) + 4));
          uVar1 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar1;
        } while (uVar1 < (uint)uStack_5d8);
      }
    }
    else {
      lVar13 = 0;
      do {
        if (*(char *)((longlong)&local_600 + lVar13 + 4) != '\0') {
          uVar9 = FUN_1802134a0(&local_750,*(undefined1 *)((longlong)&uStack_5f0 + lVar13 + 6));
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 != 0x11);
    }
    FUN_180181910(uVar9,&local_750,&local_730);
    if (local_6d8._1_1_ != '\0') {
      FUN_180215058(&local_750,2,0x2000068,local_6d8._1_1_,local_7f0,0);
    }
    FUN_180213108(&local_750,&local_770,uVar7);
    lVar13 = local_750;
    FUN_180214fe8(&local_7c0,local_750,lStack_748 - local_750);
    FUN_1802229d8(local_770);
    uVar9 = FUN_1802229d8(lVar13);
    bVar3 = false;
    uVar10 = FUN_1801849b8(uVar9,&local_790,&local_730,0);
    lVar13 = local_7c0;
    if ((uVar10 & 1) != 0) {
      *(int *)(local_790 + 0x24) = (int)local_788 - (int)local_790;
      iVar8 = FUN_180181500(uVar10,&local_790,&local_730);
      if (iVar8 != 0) {
        *(int *)(local_790 + 0x28) = (int)local_788 - (int)local_790;
        FUN_180214fe8(&local_790,lVar13,local_7b8 - lVar13);
        FUN_180212ef0(&local_790);
        bVar3 = true;
      }
    }
    FUN_1802229d8(lVar13);
    lVar13 = local_790;
    if (bVar3) {
      uVar9 = (*(code *)__hybrid_os_arm64x_dispatch_icall)
                        (0x180224000,
                         *(undefined8 *)
                          (*(longlong *)(param_1 + 8) +
                           (ulonglong)*(uint *)(param_1 + 0x10) * 0x18c0 + 0x6b0),extraout_x1,
                         local_788 - local_790);
      (*extraout_x11)(uVar9,lVar13);
    }
  }
  else {
    local_7a8 = CONCAT71(local_7a8._1_7_,1);
    uStack_7b0 = 0x100;
    local_7c0 = FUN_1802229a8(0x100);
    local_760 = 0x100;
    local_758 = 1;
    local_7b8 = local_7c0;
    local_770 = FUN_1802229a8(0x100);
    local_7e8 = &local_770;
    uStack_7e0 = 0;
    local_7f0[0] = 0x20050;
    local_768 = local_770;
    auVar14 = FUN_18017f500(param_1 + 0x20,param_1 + 0x30,param_3,*(undefined1 *)(param_1 + 0x2f0),
                            iVar8 == 0x1002,0x10050,&local_7c0,0);
    lVar5 = local_770;
    lVar13 = local_7c0;
    puVar4 = __hybrid_os_arm64x_dispatch_icall;
    if ((auVar14._0_8_ & 1) != 0) {
      lVar12 = *(longlong *)(param_1 + 8) + (ulonglong)*(uint *)(param_1 + 0x10) * 0x18c0;
      uVar9 = (*(code *)__hybrid_os_arm64x_dispatch_icall)
                        (0x180224000,*(undefined8 *)(lVar12 + 0x6b0),auVar14._8_8_,
                         local_7b8 - local_7c0);
      iVar8 = (*extraout_x11_00)(uVar9,lVar13);
      if (-1 < iVar8) {
        uVar9 = (*(code *)puVar4)(0x180224000,*(undefined8 *)(lVar12 + 0x6b0),extraout_x1_00,
                                  local_768 - lVar5);
        iVar8 = (*extraout_x11_01)(uVar9,lVar5);
        if (iVar8 < 0) {
          (*(code *)puVar4)(0x180224000);
          (*extraout_x11_02)();
          *param_2 = 0;
        }
      }
    }
    FUN_1802229d8(lVar5);
  }
  FUN_1802229d8(lVar13);
  return param_2;
}

