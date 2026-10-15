/*
 * FUN_1009e818 at 1009e818
 * undefined FUN_1009e818(void)
 * Address ranges: 1009e818-1009ebff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1009e818(undefined4 param_1,uint param_2,undefined8 param_3,uint param_4,int *param_5,
            undefined1 param_6,undefined8 *param_7)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  char cVar8;
  undefined8 uVar9;
  ulonglong *local_790;
  undefined4 *local_78c;
  undefined4 local_788;
  uint local_784;
  int local_770;
  int iStack_76c;
  undefined4 local_768;
  undefined1 local_764;
  undefined4 local_760;
  undefined4 uStack_75c;
  undefined4 local_758;
  undefined1 local_754;
  undefined8 local_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 local_730;
  undefined4 local_728;
  undefined8 local_720;
  undefined8 uStack_718;
  undefined8 local_710;
  ulonglong local_708;
  undefined8 local_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 local_6e0;
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
  ulonglong local_580;
  undefined8 uStack_578;
  undefined8 local_570;
  undefined1 auStack_2a0 [608];
  
  local_750 = CONCAT44(local_750._4_4_,auStack_2a0);
  uStack_740 = 0;
  local_710 = 0;
  local_720 = local_750;
  uStack_748 = param_3;
  uStack_718 = param_3;
  FUN_101325d0(auStack_6d0,0,0x430);
  uStack_598 = 0;
  local_5a0 = 0;
  uStack_590 = 0;
  uStack_578 = 0;
  uStack_658 = 0;
  local_660 = 0;
  uStack_648 = 0;
  local_650 = 0;
  lStack_588 = ((ulonglong)*(uint *)(param_2 + 0x44) & 0xfffff) << 0x20;
  local_580 = (ulonglong)param_2;
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
  local_570 = (ulonglong)((param_4 - 0x10051 & 0xfffeffff) != 0) << 0x18;
  uStack_5b8 = 0;
  local_5c0 = 0;
  uStack_5a8 = 0;
  uStack_5b0 = 0;
  uVar3 = FUN_10122f60(param_4);
  local_6bb = uVar3 < 0x50;
  local_6bc = 0;
  local_730 = 0;
  local_700 = 0;
  uStack_6f0 = 0;
  uStack_6f8 = 0;
  local_6e0 = 0;
  uStack_6e8 = 0;
  local_708 = (ulonglong)param_4;
  uStack_658 = 0x11080000210800;
  local_660 = 0x31080000410800;
  local_6d8 = (ulonglong)CONCAT24(0x40,auStack_6ba);
  local_728 = 0;
  local_650 = CONCAT44(local_650._4_4_,0x410802);
  local_678 = 0x41040000110400;
  local_670 = 0x20000d00;
  local_750 = 0x43425844;
  uStack_748 = 0;
  uStack_740 = 0x100000000;
  uStack_738 = 0x300000000;
  FUN_10122c50(param_5,&local_750,0x2c);
  piVar1 = param_5 + 1;
  uVar9 = 0;
  *(int *)(*param_5 + 0x20) = *piVar1 - *param_5;
  uStack_748 = CONCAT35(uStack_748._5_3_,0x100000800);
  uVar4 = FUN_101322b0(0x800);
  local_750 = CONCAT44(uVar4,uVar4);
  if (local_570._3_1_ != '\0') {
    cVar8 = '\0';
    uVar3 = 0;
    do {
      iVar2 = uVar3 + 6;
      uVar3 = uVar3 + 1;
      *(char *)((int)&uStack_5f0 + iVar2) = cVar8;
      cVar8 = cVar8 + '\x01';
    } while (uVar3 < 0x11);
  }
  local_764 = 1;
  local_768 = 0x200;
  local_770 = FUN_101322b0(0x200);
  iStack_76c = local_770;
  uVar4 = FUN_10122ff8(&local_770,(undefined4)local_708);
  FUN_101232a8((undefined4)local_708,&local_770,0);
  local_754 = 1;
  local_758 = 0x80;
  local_760 = FUN_101322b0(0x80);
  uStack_75c = local_760;
  FUN_1009d550(param_1,&local_760,&local_720,param_6);
  local_788 = 0x3e;
  local_784 = 0;
  local_78c = &local_760;
  local_790 = &local_708;
  uVar6 = FUN_10122a88(&local_790,0x10);
  uVar6 = FUN_100986a8(uVar6,&local_770,&local_720);
  uVar3 = 0;
  if (local_570._3_1_ == '\0') {
    if ((uint)uStack_5d8 != 0) {
      do {
        uVar6 = FUN_10123478(&local_770,uVar3,
                             *(undefined1 *)
                              ((int)&local_600 + *(byte *)((int)&uStack_5f0 + uVar3 + 6) + 4));
        uVar3 = uVar3 + 1;
      } while (uVar3 < (uint)uStack_5d8);
    }
  }
  else {
    do {
      cVar8 = *(char *)((int)&local_600 + uVar3 + 4);
      if (cVar8 != '\0') {
        uVar6 = FUN_10123478(&local_770,*(undefined1 *)((int)&uStack_5f0 + uVar3 + 6),cVar8);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x11);
  }
  FUN_10095ab0(uVar6,&local_770,&local_720);
  if (local_6d8._5_1_ != 0) {
    local_788 = 0x2000068;
    local_78c = (undefined4 *)0x2;
    local_790 = (ulonglong *)&local_770;
    local_784 = (uint)local_6d8._5_1_;
    FUN_10122cd8(&local_790,0x10);
  }
  FUN_10123060(&local_770,&local_760,uVar4);
  iVar2 = local_770;
  FUN_10122c50(&local_750,local_770,iStack_76c - local_770);
  FUN_101322d0(local_760);
  uVar6 = FUN_101322d0(iVar2);
  uVar7 = FUN_10098928(uVar6,param_5,&local_720,0);
  iVar2 = (int)local_750;
  if ((uVar7 & 1) != 0) {
    *(int *)(*param_5 + 0x24) = *piVar1 - *param_5;
    iVar5 = FUN_10095708(uVar7,param_5,&local_720);
    if (iVar5 != 0) {
      *(int *)(*param_5 + 0x28) = *piVar1 - *param_5;
      FUN_10122c50(param_5,iVar2,local_750._4_4_ - iVar2);
      FUN_10122e00(param_5);
      if (param_7 != (undefined8 *)0x0) {
        param_7[1] = uStack_6f8;
        *param_7 = local_700;
        param_7[3] = uStack_6e8;
        param_7[2] = uStack_6f0;
        param_7[4] = local_6e0;
      }
      uVar9 = 1;
    }
  }
  FUN_101322d0(iVar2);
  return uVar9;
}

