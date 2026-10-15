/*
 * FUN_18006ca00 at 18006ca00
 * undefined FUN_18006ca00(void)
 * Address ranges: 18006ca00-18006cc93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_18006ca00(undefined8 param_1,longlong param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,uint param_6,undefined8 param_7,undefined8 param_8,uint param_9,
             longlong *param_10,undefined8 *param_11)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong local_8f0;
  longlong lStack_8e8;
  undefined8 local_8e0;
  undefined8 local_8d8;
  undefined8 local_8d0;
  undefined4 local_8c8;
  longlong local_8c0;
  longlong lStack_8b8;
  undefined8 local_8b0;
  undefined1 local_8a8;
  undefined1 auStack_8a0 [8];
  undefined8 local_898;
  ulonglong local_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 local_860;
  undefined8 uStack_858;
  undefined1 *local_850;
  undefined8 local_848;
  undefined1 local_82c;
  undefined1 auStack_82a [66];
  undefined8 local_7e8;
  undefined4 local_7e0;
  undefined8 local_7d0;
  undefined8 uStack_7c8;
  undefined4 local_7c0;
  longlong lStack_76c;
  undefined8 uStack_764;
  undefined2 local_75c;
  longlong lStack_75a;
  undefined8 uStack_752;
  undefined2 local_74a;
  undefined4 local_748;
  uint local_6f4;
  longlong local_6f0;
  undefined1 *puStack_6e8;
  undefined1 local_6d5;
  undefined1 local_6d4;
  undefined8 local_380;
  int local_374;
  undefined2 local_362;
  undefined1 local_360;
  undefined1 local_35f;
  
  uVar4 = func_0x000180222c50(auStack_8a0,0,0x850);
  uStack_878 = 0;
  uStack_868 = 0;
  uStack_870 = 0;
  uStack_858 = 0;
  local_860 = 0;
  local_880 = (ulonglong)param_9;
  local_850 = auStack_82a;
  local_848 = 0x40;
  local_6d5 = 0;
  local_362 = 0;
  local_6f4 = *(uint *)(param_2 + 0x44) & 0x77fff;
  local_360 = 1;
  puStack_6e8 = auStack_8a0;
  local_7c0 = 0x410802;
  local_7e8 = 0x41040000110400;
  local_7e0 = 0x20000d00;
  uStack_7c8 = 0x11080000210800;
  local_7d0 = 0x31080000410800;
  local_898 = param_3;
  local_82c = param_5;
  local_6f0 = param_2;
  local_380 = param_3;
  local_35f = param_4;
  FUN_18006bea8(uVar4,auStack_8a0);
  local_8d0 = 0;
  local_8f0 = 0x43425844;
  lStack_8e8 = 0;
  local_8c8 = 0;
  local_8e0 = 0x100000000;
  local_8d8 = 0x300000000;
  bVar1 = false;
  FUN_1800f5a90(param_10,&local_8f0,0x2c);
  local_6d4 = 1;
  local_8d8 = CONCAT71(local_8d8._1_7_,1);
  local_8e0 = 0x800;
  local_8f0 = thunk_FUN_180102f80(0x800);
  lStack_8e8 = local_8f0;
  local_374 = FUN_18006e6c8(local_8f0,&local_8f0,auStack_8a0);
  lVar2 = local_8f0;
  if (local_374 != 0) {
    local_8b0 = 0x800;
    local_8a8 = 1;
    local_8c0 = thunk_FUN_180102f80(0x800);
    lStack_8b8 = local_8c0;
    uVar5 = FUN_18006c558(param_1,&local_8c0,auStack_8a0);
    lVar3 = local_8c0;
    if ((uVar5 & 1) != 0) {
      *(int *)(*param_10 + 0x20) = (int)param_10[1] - (int)*param_10;
      uVar5 = FUN_180071738(uVar5,param_10,auStack_8a0,1);
      if ((uVar5 & 1) != 0) {
        *(int *)(*param_10 + 0x24) = (int)param_10[1] - (int)*param_10;
        FUN_1800f5a90(param_10,lVar2,lStack_8e8 - lVar2);
        *(int *)(*param_10 + 0x28) = (int)param_10[1] - (int)*param_10;
        FUN_1800f5a90(param_10,lVar3,lStack_8b8 - lVar3);
        FUN_1800f5ba0(param_10);
        if (param_11 != (undefined8 *)0x0) {
          param_11[1] = uStack_870;
          *param_11 = uStack_878;
          param_11[3] = local_860;
          param_11[2] = uStack_868;
          param_11[4] = uStack_858;
        }
        bVar1 = true;
      }
    }
    thunk_FUN_180102fc0(lVar3);
  }
  thunk_FUN_180102fc0(lVar2);
  uVar4 = 0;
  if (bVar1) {
    local_850 = auStack_82a;
    local_82c = 0;
    uStack_858 = 0;
    local_860 = 0;
    uStack_878 = 0;
    uStack_868 = 0;
    uStack_870 = 0;
    local_880 = (ulonglong)param_6;
    local_848 = 0x40;
    lStack_8b8 = uStack_764;
    local_8c0 = lStack_76c;
    local_8b0 = CONCAT62(local_8b0._2_6_,local_75c);
    lStack_8e8 = uStack_752;
    local_8f0 = lStack_75a;
    local_8e0 = CONCAT62(local_8e0._2_6_,local_74a);
    uVar4 = FUN_18006c6f8(param_1,auStack_8a0,param_7,&local_8f0,&local_8c0,local_748,param_8);
  }
  return uVar4;
}

