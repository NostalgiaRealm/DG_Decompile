/*
 * FUN_180053500 at 180053500
 * undefined FUN_180053500(void)
 * Address ranges: 180053500-1800539b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_180053500(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  char cVar12;
  longlong lVar13;
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
  ulonglong local_710;
  longlong lStack_708;
  longlong lStack_700;
  longlong lStack_6f8;
  longlong local_6f0;
  longlong lStack_6e8;
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
  
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  plVar1 = param_2 + 1;
  param_2[9] = 0;
  param_2[8] = 0;
  param_2[0xb] = 0;
  param_2[10] = 0;
  iVar6 = *(int *)(*(longlong *)(param_1 + 8) + (ulonglong)*(uint *)(param_1 + 0x10) * 0x1ac0 +
                  0x904);
  if (((uint)param_3 >> 8 & 1) == 0) {
    local_778 = 1;
    local_780 = 0x100;
    local_790 = thunk_FUN_180102f80(0x100);
    local_730 = auStack_2a0;
    uVar2 = *(undefined1 *)(param_1 + 0x2f0);
    uStack_7b0 = 0;
    local_7b8 = 0;
    local_7a8 = 0;
    uStack_718 = 0;
    uStack_720 = 0;
    local_788 = local_790;
    uStack_728 = param_3;
    func_0x000180222c50(auStack_6d0,0,0x430);
    uVar10 = 0x10051;
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
    uStack_568 = 0;
    local_580 = param_1 + 0x30;
    uVar4 = func_0x000180213038(0x10051);
    local_6bb = uVar4 < 0x50;
    local_6bc = 0;
    local_6e0 = auStack_6ba;
    lStack_6e8 = 0;
    local_6f0 = 0;
    lStack_708 = 0;
    lStack_6f8 = 0;
    lStack_700 = 0;
    local_6d8 = 0x40;
    local_710 = (ulonglong)uVar10;
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
    FUN_1800f5a90(&local_790,&local_7c0,0x2c);
    local_7a8 = CONCAT71(local_7a8._1_7_,1);
    bVar3 = false;
    *(int *)(local_790 + 0x20) = (int)local_788 - (int)local_790;
    uStack_7b0 = 0x800;
    local_7c0 = thunk_FUN_180102f80(0x800);
    if (uStack_568._3_1_ != '\0') {
      cVar12 = '\0';
      uVar11 = 0;
      do {
        *(char *)((longlong)&uStack_5f0 + uVar11 + 6) = cVar12;
        uVar4 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar4;
        cVar12 = cVar12 + '\x01';
      } while (uVar4 < 0x11);
    }
    local_738 = 1;
    local_740 = 0x200;
    local_7b8 = local_7c0;
    local_750 = thunk_FUN_180102f80(0x200);
    lStack_748 = local_750;
    uVar5 = FUN_1800f5ce8(&local_750,local_710 & 0xffffffff);
    FUN_1800f5f08(local_710 & 0xffffffff,&local_750,0);
    local_770 = 0;
    local_768 = 0;
    local_760 = 0x80;
    local_758 = 1;
    local_770 = thunk_FUN_180102f80(0x80);
    local_768 = local_770;
    FUN_180076788(param_1 + 0x20,&local_770,&local_730,uVar2);
    uVar7 = FUN_1800f5730(&local_710,&local_770,0x3e,0);
    uVar7 = FUN_1800714c0(uVar7,&local_750,&local_730);
    if (uStack_568._3_1_ == '\0') {
      uVar11 = 0;
      if ((uint)uStack_5d8 != 0) {
        do {
          uVar7 = FUN_1800f5b00(&local_750,3,0x300005f,
                                (uint)*(byte *)((longlong)&local_600 +
                                               (ulonglong)
                                               *(byte *)((longlong)&uStack_5f0 + uVar11 + 6) + 4) <<
                                4 | 0x101002,uVar11);
          uVar4 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar4;
        } while (uVar4 < (uint)uStack_5d8);
      }
    }
    else {
      lVar13 = 0;
      do {
        uVar4 = (uint)*(byte *)((longlong)&local_600 + lVar13 + 4);
        if (uVar4 != 0) {
          uVar7 = FUN_1800f5b00(&local_750,3,0x300005f,uVar4 << 4 | 0x101002,
                                *(undefined1 *)((longlong)&uStack_5f0 + lVar13 + 6));
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 != 0x11);
    }
    FUN_18006ead8(uVar7,&local_750,&local_730);
    if (local_6d8._1_1_ != '\0') {
      FUN_1800f5b00(&local_750,2,0x2000068);
    }
    FUN_1800f5d48(&local_750,&local_770,uVar5);
    lVar13 = local_750;
    FUN_1800f5a90(&local_7c0,local_750,lStack_748 - local_750);
    thunk_FUN_180102fc0(local_770);
    uVar7 = thunk_FUN_180102fc0(lVar13);
    uVar11 = FUN_180071738(uVar7,&local_790,&local_730,0);
    lVar13 = local_7c0;
    if ((uVar11 & 1) != 0) {
      *(int *)(local_790 + 0x24) = (int)local_788 - (int)local_790;
      iVar6 = FUN_18006e6c8(uVar11,&local_790,&local_730);
      if (iVar6 != 0) {
        *(int *)(local_790 + 0x28) = (int)local_788 - (int)local_790;
        FUN_1800f5a90(&local_790,lVar13,local_7b8 - lVar13);
        FUN_1800f5ba0(&local_790);
        if (plVar1 != (longlong *)0x0) {
          param_2[2] = lStack_700;
          *plVar1 = lStack_708;
          param_2[4] = local_6f0;
          param_2[3] = lStack_6f8;
          param_2[5] = lStack_6e8;
        }
        bVar3 = true;
      }
    }
    uVar7 = thunk_FUN_180102fc0(lVar13);
    lVar13 = local_790;
    if (bVar3) {
      lVar8 = FUN_1800f41c8(uVar7,local_788 - local_790,local_790);
      *param_2 = lVar8;
    }
  }
  else {
    local_7a8 = CONCAT71(local_7a8._1_7_,1);
    uStack_7b0 = 0x100;
    local_7c0 = thunk_FUN_180102f80(0x100);
    local_760 = 0x100;
    local_758 = 1;
    local_7b8 = local_7c0;
    local_770 = thunk_FUN_180102f80(0x100);
    local_768 = local_770;
    uVar11 = FUN_18006ca00(param_1 + 0x20,param_1 + 0x30,param_3,*(undefined1 *)(param_1 + 0x2f0),
                           iVar6 == 0x1002,0x10051,&local_7c0,plVar1,0x20051,&local_770,param_2 + 7)
    ;
    lVar8 = local_770;
    lVar13 = local_7c0;
    if ((uVar11 & 1) != 0) {
      lVar9 = FUN_1800f41c8(uVar11,local_7b8 - local_7c0,local_7c0);
      *param_2 = lVar9;
      if (lVar9 != 0) {
        lVar9 = FUN_1800f41c8(lVar9,local_768 - lVar8,lVar8);
        param_2[6] = lVar9;
        if (lVar9 == 0) {
          (**(code **)(*(longlong *)*param_2 + 0x10))();
          *param_2 = 0;
        }
      }
    }
    thunk_FUN_180102fc0(lVar8);
  }
  thunk_FUN_180102fc0(lVar13);
  return param_2;
}

