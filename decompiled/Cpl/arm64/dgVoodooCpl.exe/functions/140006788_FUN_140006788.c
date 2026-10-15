/*
 * FUN_140006788 at 140006788
 * undefined __cdecl FUN_140006788(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined1 * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
 * Address ranges: 140006788-140006d1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140006788(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte bVar9;
  undefined1 auStack_760 [4];
  uint local_75c;
  int local_758;
  int local_754;
  uint local_750 [4];
  undefined8 local_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 local_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 local_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 local_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 local_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 local_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 local_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 local_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 local_640;
  undefined8 local_638;
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
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 local_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  byte local_520 [128];
  byte local_4a0 [128];
  byte local_420 [1024];
  
  local_640 = 0;
  local_638 = 0;
  bVar2 = FUN_140001c30(param_1 + 0x148,(uint *)&local_640,param_3,param_4,param_5,param_6,param_7,
                        param_8);
  if (bVar2) {
    *(uint *)(*(longlong *)(param_1 + 0x80) + 0x8a) = (uint)local_640;
    *(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x8e) = local_640._4_4_;
    *(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x92) = (undefined4)local_638;
    *(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x96) = local_638._4_4_;
  }
  iVar3 = FUN_14000ffb8(param_1,0x3f2);
  if (iVar3 == -1) {
    uStack_738 = 0;
    local_740 = 0;
    uStack_728 = 0;
    uStack_730 = 0;
    uStack_718 = 0;
    local_720 = 0;
    uStack_708 = 0;
    uStack_710 = 0;
    uStack_6f8 = 0;
    local_700 = 0;
    uStack_6e8 = 0;
    uStack_6f0 = 0;
    uStack_6d8 = 0;
    local_6e0 = 0;
    uStack_6c8 = 0;
    uStack_6d0 = 0;
    uStack_6b8 = 0;
    local_6c0 = 0;
    uStack_6a8 = 0;
    uStack_6b0 = 0;
    uStack_698 = 0;
    local_6a0 = 0;
    uStack_688 = 0;
    uStack_690 = 0;
    uStack_678 = 0;
    local_680 = 0;
    uStack_668 = 0;
    uStack_670 = 0;
    uStack_658 = 0;
    local_660 = 0;
    uStack_648 = 0;
    uStack_650 = 0;
    FUN_14000fca8(param_1,0x3f2,(LPARAM)&local_740,0x100);
    local_75c = 0;
    local_758 = 0;
    param_5 = auStack_760;
    iVar3 = FUN_1400248b0((byte *)&local_740,(byte *)" x : %d, y : %d %c",&local_758,&local_75c,
                          param_5,param_6,param_7,param_8);
    if (iVar3 == 2) {
      *(int *)(*(longlong *)(param_1 + 0x80) + 0xa2) = local_758;
      *(uint *)(*(longlong *)(param_1 + 0x80) + 0xa6) = local_75c;
    }
    else {
      iVar3 = FUN_1400248b0((byte *)&local_740,(byte *)" %d %c",&local_758,auStack_760,param_5,
                            param_6,param_7,param_8);
      if (iVar3 == 1) {
        *(int *)(*(longlong *)(param_1 + 0x80) + 0xa6) = local_758;
        *(int *)(*(longlong *)(param_1 + 0x80) + 0xa2) = local_758;
      }
    }
  }
  iVar3 = FUN_14000ffb8(param_1,0x3f3);
  if (iVar3 == -1) {
    uStack_738 = 0;
    local_740 = 0;
    uStack_728 = 0;
    uStack_730 = 0;
    uStack_718 = 0;
    local_720 = 0;
    uStack_708 = 0;
    uStack_710 = 0;
    uStack_6f8 = 0;
    local_700 = 0;
    uStack_6e8 = 0;
    uStack_6f0 = 0;
    uStack_6d8 = 0;
    local_6e0 = 0;
    uStack_6c8 = 0;
    uStack_6d0 = 0;
    uStack_6b8 = 0;
    local_6c0 = 0;
    uStack_6a8 = 0;
    uStack_6b0 = 0;
    uStack_698 = 0;
    local_6a0 = 0;
    uStack_688 = 0;
    uStack_690 = 0;
    uStack_678 = 0;
    local_680 = 0;
    uStack_668 = 0;
    uStack_670 = 0;
    uStack_658 = 0;
    local_660 = 0;
    uStack_648 = 0;
    uStack_650 = 0;
    FUN_14000fca8(param_1,0x3f3,(LPARAM)&local_740,0x100);
    local_75c = 0;
    iVar3 = FUN_1400248b0((byte *)&local_740,(byte *)" %d %c",&local_75c,auStack_760,param_5,param_6
                          ,param_7,param_8);
    if (iVar3 == 1) {
      *(uint *)(*(longlong *)(param_1 + 0x80) + 0x9e) = local_75c;
    }
  }
  iVar3 = FUN_14000ffb8(param_1,0x3f7);
  if (iVar3 == -1) {
    uStack_738 = 0;
    local_740 = 0;
    uStack_728 = 0;
    uStack_730 = 0;
    uStack_718 = 0;
    local_720 = 0;
    uStack_708 = 0;
    uStack_710 = 0;
    uStack_6f8 = 0;
    local_700 = 0;
    uStack_6e8 = 0;
    uStack_6f0 = 0;
    uStack_6d8 = 0;
    local_6e0 = 0;
    uStack_6c8 = 0;
    uStack_6d0 = 0;
    uStack_6b8 = 0;
    local_6c0 = 0;
    uStack_6a8 = 0;
    uStack_6b0 = 0;
    uStack_698 = 0;
    local_6a0 = 0;
    uStack_688 = 0;
    uStack_690 = 0;
    uStack_678 = 0;
    local_680 = 0;
    uStack_668 = 0;
    uStack_670 = 0;
    uStack_658 = 0;
    local_660 = 0;
    uStack_648 = 0;
    uStack_650 = 0;
    FUN_14000fca8(param_1,0x3f7,(LPARAM)&local_740,0x100);
    local_75c = 0;
    iVar3 = FUN_1400248b0((byte *)&local_740,(byte *)" %d %c",&local_75c,auStack_760,param_5,param_6
                          ,param_7,param_8);
    if (iVar3 == 1) {
      *(uint *)(*(longlong *)(param_1 + 0x80) + 0xaa) = local_75c;
    }
  }
  iVar3 = FUN_14000ffb8(param_1,0x3f5);
  if (iVar3 != -1) goto LAB_140006b9c;
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
  uStack_598 = 0;
  local_5a0 = 0;
  uStack_588 = 0;
  uStack_590 = 0;
  uStack_578 = 0;
  local_580 = 0;
  uStack_568 = 0;
  uStack_570 = 0;
  uStack_558 = 0;
  local_560 = 0;
  uStack_548 = 0;
  uStack_550 = 0;
  uStack_538 = 0;
  local_540 = 0;
  uStack_528 = 0;
  uStack_530 = 0;
  FUN_14000fca8(param_1,0x3f5,(LPARAM)&local_620,0x100);
  local_754 = 0;
  local_750[0] = 0;
  local_75c = 0;
  local_758 = 0;
  pbVar8 = (byte *)&local_620;
  bVar2 = false;
  uVar6 = 0;
  if ((byte)local_620 == 0) {
    bVar9 = 0;
  }
  else {
    do {
      bVar9 = *pbVar8;
      if (bVar9 == 0x2c) goto LAB_140006a30;
      local_520[uVar6] = bVar9;
      pbVar8 = pbVar8 + 1;
      uVar6 = (ulonglong)((int)uVar6 + 1);
    } while (*pbVar8 != 0);
    bVar9 = 0;
  }
LAB_140006a30:
  local_520[uVar6] = 0;
  if (bVar9 == 0x2c) {
    pbVar7 = pbVar8 + 1;
    uVar6 = 0;
    bVar9 = pbVar8[1];
    while (bVar9 != 0) {
      local_4a0[uVar6] = *pbVar7;
      pbVar7 = pbVar7 + 1;
      uVar6 = (ulonglong)((int)uVar6 + 1);
      bVar9 = *pbVar7;
    }
    local_4a0[uVar6] = 0;
    cVar1 = '\x02';
LAB_140006a88:
    param_5 = auStack_760;
    iVar3 = FUN_1400248b0(local_520,(byte *)" %d_%d %c",&local_758,local_750,param_5,param_6,param_7
                          ,param_8);
    if (iVar3 == 2) {
      bVar2 = true;
      local_750[0] = local_750[0] | local_758 << 0x10;
      local_758 = -1;
    }
    else {
      param_5 = auStack_760;
      iVar3 = FUN_1400248b0(local_520,(byte *)" ( %d | %d ) %c",&local_758,local_750,param_5,param_6
                            ,param_7,param_8);
      bVar2 = iVar3 == 2;
    }
  }
  else {
    cVar1 = (int)uVar6 != 0;
    if ((int)uVar6 != 0) goto LAB_140006a88;
  }
  local_75c = 0xffffffff;
  local_754 = -1;
  if (bVar2) {
    if (cVar1 == '\x02') {
      iVar3 = FUN_1400248b0(local_4a0,(byte *)" pos:%s %c",&local_740,auStack_760,param_5,param_6,
                            param_7,param_8);
      if ((iVar3 == 1) && (uVar4 = FUN_140024ce0((byte *)&local_740,(byte *)"centered"), uVar4 == 0)
         ) {
        local_75c = 0xffffffff;
        local_754 = -1;
      }
      else {
        param_5 = auStack_760;
        iVar3 = FUN_1400248b0(local_4a0,(byte *)" pos:(%d|%d) %c",&local_754,&local_75c,param_5,
                              param_6,param_7,param_8);
        if (iVar3 != 2) goto LAB_140006b9c;
      }
    }
    *(int *)(*(longlong *)(param_1 + 0x80) + 0xb6) = local_758;
    *(uint *)(*(longlong *)(param_1 + 0x80) + 0xba) = local_750[0];
    *(int *)(*(longlong *)(param_1 + 0x80) + 0xae) = local_754;
    *(uint *)(*(longlong *)(param_1 + 0x80) + 0xb2) = local_75c;
  }
LAB_140006b9c:
  iVar3 = FUN_14000ffb8(param_1,0x3f8);
  if (iVar3 == -1) {
    uVar5 = 0x100;
    uStack_738 = 0;
    local_740 = 0;
    uStack_728 = 0;
    uStack_730 = 0;
    uStack_718 = 0;
    local_720 = 0;
    uStack_708 = 0;
    uStack_710 = 0;
    uStack_6f8 = 0;
    local_700 = 0;
    uStack_6e8 = 0;
    uStack_6f0 = 0;
    uStack_6d8 = 0;
    local_6e0 = 0;
    uStack_6c8 = 0;
    uStack_6d0 = 0;
    uStack_6b8 = 0;
    local_6c0 = 0;
    uStack_6a8 = 0;
    uStack_6b0 = 0;
    uStack_698 = 0;
    local_6a0 = 0;
    uStack_688 = 0;
    uStack_690 = 0;
    uStack_678 = 0;
    local_680 = 0;
    uStack_668 = 0;
    uStack_670 = 0;
    uStack_658 = 0;
    local_660 = 0;
    uStack_648 = 0;
    uStack_650 = 0;
    FUN_14000fca8(param_1,0x3f8,(LPARAM)&local_740,0x100);
    local_75c = 0;
    local_754 = 0;
    uVar6 = FUN_140015530((byte *)&local_740,&local_75c,&local_754,uVar5,param_5,param_6,param_7,
                          param_8);
    if ((uVar6 & 1) != 0) {
      *(uint *)(*(longlong *)(param_1 + 0x80) + 0xda) = local_75c;
      *(int *)(*(longlong *)(param_1 + 0x80) + 0xde) = local_754;
    }
  }
  iVar3 = FUN_14000ffb8(param_1,0x3fb);
  if (iVar3 == -1) {
    uStack_738 = 0;
    local_740 = 0;
    uStack_728 = 0;
    uStack_730 = 0;
    uStack_718 = 0;
    local_720 = 0;
    uStack_708 = 0;
    uStack_710 = 0;
    uStack_6f8 = 0;
    local_700 = 0;
    uStack_6e8 = 0;
    uStack_6f0 = 0;
    uStack_6d8 = 0;
    local_6e0 = 0;
    uStack_6c8 = 0;
    uStack_6d0 = 0;
    uStack_6b8 = 0;
    local_6c0 = 0;
    uStack_6a8 = 0;
    uStack_6b0 = 0;
    uStack_698 = 0;
    local_6a0 = 0;
    uStack_688 = 0;
    uStack_690 = 0;
    uStack_678 = 0;
    local_680 = 0;
    uStack_668 = 0;
    uStack_670 = 0;
    uStack_658 = 0;
    local_660 = 0;
    uStack_648 = 0;
    uStack_650 = 0;
    FUN_14000fca8(param_1,0x3fb,(LPARAM)&local_740,0x100);
    FUN_140025250(local_420,0,0x400);
    local_75c = 0;
    iVar3 = FUN_1400248b0((byte *)&local_740,(byte *)"%d %s",&local_75c,local_420,param_5,param_6,
                          param_7,param_8);
    if (iVar3 == 2) {
      pbVar8 = local_420;
      while (local_420[0] != 0) {
        iVar3 = FUN_140024c68((int)(char)*pbVar8);
        *pbVar8 = (byte)iVar3;
        pbVar8 = pbVar8 + 1;
        local_420[0] = *pbVar8;
      }
      uVar4 = FUN_140024ce0(local_420,&DAT_1400282b4);
      if (((uVar4 != 0) && (uVar4 = FUN_140024ce0(local_420,&DAT_1400282b8), uVar4 != 0)) &&
         (uVar4 = FUN_140024ce0(local_420,&DAT_1400282c0), uVar4 != 0)) {
        local_75c = 0;
      }
    }
    *(uint *)(*(longlong *)(param_1 + 0x80) + 0xd6) = local_75c;
  }
  return;
}

