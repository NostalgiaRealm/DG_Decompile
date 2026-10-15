/*
 * FUN_10086ad8 at 10086ad8
 * undefined FUN_10086ad8(void)
 * Address ranges: 10086ad8-1008708f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_10086ad8(int param_1,undefined4 param_2,ulonglong param_3,undefined1 param_4,uint param_5,
            int *param_6,undefined4 param_7)

{
  byte *pbVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong extraout_x14;
  int *local_5f0;
  undefined4 *local_5ec;
  undefined4 local_5e8;
  uint local_5e4;
  undefined4 local_5e0;
  uint local_5dc;
  uint local_5d8;
  undefined4 local_5d4;
  undefined4 local_5d0;
  undefined4 local_5cc;
  undefined4 uStack_5c8;
  undefined4 local_5c4;
  undefined4 uStack_5c0;
  int local_5a0;
  int iStack_59c;
  undefined4 local_598;
  undefined1 local_594;
  undefined4 local_590;
  undefined4 uStack_58c;
  undefined4 local_588;
  undefined1 local_584;
  undefined8 local_580;
  ulonglong uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined4 local_548;
  undefined8 local_544;
  undefined6 uStack_53c;
  undefined2 local_536;
  undefined2 uStack_534;
  undefined1 local_532;
  undefined5 uStack_531;
  undefined8 uStack_52c;
  undefined2 uStack_524;
  byte local_522;
  undefined4 local_514;
  byte abStack_4d4 [4];
  undefined1 auStack_4d0 [324];
  byte local_38c;
  undefined1 local_38b;
  char acStack_38a [8];
  byte local_382;
  undefined1 local_37e;
  undefined1 local_37d;
  undefined8 local_378;
  undefined8 uStack_370;
  uint local_368;
  
  uVar7 = FUN_101325d0(&local_544,0,0x504);
  local_548 = 0;
  uStack_578 = 0;
  uStack_568 = 0;
  uStack_570 = 0;
  local_550 = (ulonglong)CONCAT24(0x40,auStack_4d0);
  uStack_558 = 0;
  local_560 = 0;
  local_580 = (ulonglong)param_5;
  FUN_1007ff68(uVar7,&local_580);
  uVar7 = FUN_10082370(param_1,param_2,&local_580,param_4);
  uStack_53c = 0;
  local_536 = 0;
  local_544 = 0;
  uStack_52c = 0;
  uStack_534 = 0;
  local_532 = 0;
  uStack_531 = 0;
  uStack_524 = 0;
  local_522 = 0;
  FUN_10080008(uVar7,&local_544,param_3);
  local_38c = local_38c | local_382 ^ 0xff;
  local_544 = CONCAT53(local_544._3_5_,CONCAT12(local_38c,(undefined2)local_544)) &
              0xffffffffff0fffff;
  local_544 = CONCAT44(local_544._4_4_,CONCAT13(local_38b,(undefined3)local_544)) &
              0xffffffff08ffffff | 0x7000000;
  local_37e = FUN_10123210(0xe4,local_38c & 0xf);
  uVar7 = FUN_10123210(0xe4,extraout_x14 & 0xffffffff);
  uVar9 = 0;
  local_37d = (undefined1)uVar7;
  do {
    if (acStack_38a[uVar9] != '\0') {
      *(undefined1 *)((int)&local_544 + uVar9 + 5) = 0xf;
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 8);
  local_536 = 0xff00;
  uStack_534 = 0xffff;
  local_532 = 0xff;
  local_522 = (byte)(param_3 >> 0x30) & 1;
  uVar8 = FUN_10080058(uVar7,param_6,&local_580);
  if ((uVar8 & 1) == 0) {
    uVar7 = 0;
  }
  else {
    local_598 = 0x200;
    local_594 = 1;
    local_5a0 = FUN_101322b0(0x200);
    iStack_59c = local_5a0;
    uVar4 = FUN_10122ff8(&local_5a0,param_5);
    local_584 = 1;
    local_588 = 0x80;
    uVar7 = FUN_101322b0(0x80);
    local_590 = (undefined4)uVar7;
    uStack_58c = local_590;
    FUN_10080658(uVar7,&local_580,&local_590,param_3);
    local_368 = 0;
    local_378 = 0;
    uStack_370 = 0;
    uVar7 = FUN_100865c8(param_1,param_2,&local_580,&local_590,param_3);
    uVar7 = FUN_10082c40(uVar7,&local_580,&local_590);
    FUN_10082ce0(uVar7,&local_580,&local_590);
    uVar9 = local_368;
    if ((local_368 & 0x3f00) == 0) {
      FUN_10121648(&local_580,local_368);
    }
    uVar5 = FUN_10121590(&local_580,3,0);
    uVar2 = (undefined4)local_378;
    uVar6 = FUN_10123210(local_37d,7);
    local_5d8 = uVar6 & 0xff | 0x100;
    local_5d4 = uVar2;
    local_5d0 = 0x1a4;
    local_5cc = 0;
    local_5e0 = 7;
    local_5e8 = 0x2000;
    local_5ec = &local_590;
    local_5f0 = (int *)&local_580;
    local_5e4 = uVar5;
    local_5dc = uVar9;
    FUN_10122a88(&local_5f0,0x28);
    local_5c4 = 0xa4;
    uStack_5c0 = 0;
    local_5cc = 0xa4;
    uStack_5c8 = uVar2;
    local_5d4 = 0x9c;
    local_5d8 = 0xff;
    local_5dc = local_514;
    local_5e0 = 7;
    local_5e8 = 0x37;
    local_5e4 = uVar2;
    local_5ec = &local_590;
    local_5f0 = (int *)&local_580;
    local_5d0 = uVar5;
    uVar7 = FUN_10122a88(&local_5f0,0x34);
    uVar7 = FUN_100808d8(uVar7,&local_580,&local_590,(undefined4)local_378,param_3);
    uVar7 = FUN_10080ba0(uVar7,&local_580,&local_590,(undefined4)local_378,param_3);
    FUN_10080e98(uVar7,&local_580,&local_590,(undefined4)local_378,param_3);
    local_5d8 = 0xe4;
    local_5d4 = 0;
    local_5e0 = 0xf;
    local_5dc = uVar2;
    local_5e4 = 0x410200;
    local_5e8 = 0x2036;
    local_5ec = &local_590;
    local_5f0 = (int *)&local_580;
    FUN_10122a88(&local_5f0,0x20);
    local_5e8 = 0x3e;
    local_5e4 = 0;
    local_5ec = &local_590;
    local_5f0 = (int *)&local_580;
    FUN_10122a88(&local_5f0,0x10);
    FUN_101232a8((int)local_580,&local_5a0,0);
    if ((uStack_578 & 1) != 0) {
      FUN_10123390((int)local_580,&local_5a0,0,0,0xc20,local_580._4_4_ & 1);
    }
    uVar7 = FUN_10123390((int)local_580,&local_5a0,3,1,0x4d0,0);
    uVar9 = 0;
    do {
      if (acStack_38a[uVar9] != '\0') {
        abStack_4d4[(int)uVar9 >> 3] =
             abStack_4d4[(int)uVar9 >> 3] | (byte)(1 << (ulonglong)(uVar9 & 7));
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < 8);
    FUN_10081010(uVar7,&local_580,&local_5a0,param_3);
    uVar2 = 6;
    if (local_522 == 0) {
      uVar2 = 2;
    }
    if ((char)local_544 != '\0') {
      uVar5 = 7;
      if (local_522 == 0) {
        uVar5 = 4;
      }
      switchD_10123638::caseD_10123570(&local_5a0,0,(char)local_544,uVar5);
    }
    if (local_544._1_1_ != '\0') {
      FUN_10123518(&local_5a0,1,local_544._1_1_,uVar2);
    }
    uVar8 = param_3 >> 0x37 & 1;
    if (local_544._2_1_ != '\0') {
      uVar5 = uVar2;
      if ((int)uVar8 != 0) {
        uVar5 = 1;
      }
      FUN_10123518(&local_5a0,2,local_544._2_1_,uVar5);
    }
    if (local_544._3_1_ != '\0') {
      uVar5 = uVar2;
      if (uVar8 != 0) {
        uVar5 = 1;
      }
      FUN_10123518(&local_5a0,3,local_544._3_1_,uVar5);
    }
    if (local_544._4_1_ != '\0') {
      FUN_10123518(&local_5a0,4,local_544._4_1_,uVar2);
    }
    uVar9 = 0;
    do {
      if (acStack_38a[uVar9] != '\0') {
        FUN_10123518(&local_5a0,uVar9 + 5,0xf,uVar2);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < 8);
    FUN_101235c8(&local_5a0,0,0xf);
    if (local_550._5_1_ != 0) {
      local_5e8 = 0x2000068;
      local_5f0 = &local_5a0;
      local_5ec = (undefined4 *)0x2;
      local_5e4 = (uint)local_550._5_1_;
      FUN_10122cd8(&local_5f0,0x10);
    }
    FUN_10121648(&local_580,(undefined4)local_378);
    FUN_10123060(&local_5a0,&local_590,uVar4);
    iVar3 = local_5a0;
    FUN_10122c50(param_6,local_5a0,iStack_59c - local_5a0);
    if (*(int *)(param_1 + 8) != 0) {
      pbVar1 = (byte *)(*param_6 + ((uint)(param_6[1] - *param_6) >> 1));
      *pbVar1 = *pbVar1 ^ 0x2a;
    }
    uVar7 = FUN_10122e00(param_6);
    FUN_100819e0(uVar7,&local_580,param_7);
    FUN_101322d0(local_590);
    FUN_101322d0(iVar3);
    uVar7 = 1;
  }
  return uVar7;
}

