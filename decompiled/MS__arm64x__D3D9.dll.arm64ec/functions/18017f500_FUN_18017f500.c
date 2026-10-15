/*
 * FUN_18017f500 at 18017f500
 * undefined FUN_18017f500(void)
 * Address ranges: 18017f500-18017f797
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_18017f500(undefined8 param_1,longlong param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,uint param_6,undefined8 param_7,undefined8 param_8,uint param_9,
             longlong *param_10,undefined8 *param_11)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong local_8e0;
  longlong lStack_8d8;
  undefined8 local_8d0;
  undefined8 local_8c8;
  undefined8 local_8c0;
  undefined4 local_8b8;
  longlong local_8b0;
  longlong lStack_8a8;
  undefined8 local_8a0;
  undefined1 local_898;
  undefined1 auStack_890 [8];
  undefined8 local_888;
  ulonglong local_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 local_850;
  undefined8 uStack_848;
  undefined1 *local_840;
  undefined8 local_838;
  undefined1 local_81c;
  undefined1 auStack_81a [66];
  undefined8 local_7d8;
  undefined4 local_7d0;
  undefined8 local_7c0;
  undefined8 uStack_7b8;
  undefined4 local_7b0;
  longlong lStack_75c;
  undefined8 uStack_754;
  undefined2 local_74c;
  longlong lStack_74a;
  undefined8 uStack_742;
  undefined2 local_73a;
  undefined4 local_738;
  uint local_6e4;
  longlong local_6e0;
  undefined1 *puStack_6d8;
  undefined1 local_6c5;
  undefined1 local_6c4;
  undefined8 local_370;
  int local_364;
  undefined2 local_352;
  undefined1 local_350;
  undefined1 local_34f;
  
  uVar4 = FUN_180222c50(auStack_890,0,0x850);
  uStack_868 = 0;
  uStack_858 = 0;
  uStack_860 = 0;
  uStack_848 = 0;
  local_850 = 0;
  local_870 = (ulonglong)param_9;
  local_840 = auStack_81a;
  local_838 = 0x40;
  local_6c5 = 0;
  local_352 = 0;
  local_350 = 1;
  local_6e4 = *(uint *)(param_2 + 0x44) & 0x77fff;
  puStack_6d8 = auStack_890;
  local_7b0 = 0x410802;
  local_7d8 = 0x41040000110400;
  local_7d0 = 0x20000d00;
  uStack_7b8 = 0x11080000210800;
  local_7c0 = 0x31080000410800;
  local_888 = param_3;
  local_81c = param_5;
  local_6e0 = param_2;
  local_370 = param_3;
  local_34f = param_4;
  FUN_18017e8e8(uVar4,auStack_890);
  local_8c0 = 0;
  local_8e0 = 0x43425844;
  lStack_8d8 = 0;
  local_8b8 = 0;
  local_8d0 = 0x100000000;
  local_8c8 = 0x300000000;
  bVar1 = false;
  FUN_180214fe8(param_10,&local_8e0,0x2c);
  local_6c4 = 1;
  local_8c8 = CONCAT71(local_8c8._1_7_,1);
  local_8d0 = 0x800;
  local_8e0 = FUN_1802229a8(0x800);
  lStack_8d8 = local_8e0;
  local_364 = FUN_180181500(local_8e0,&local_8e0,auStack_890);
  lVar2 = local_8e0;
  if (local_364 != 0) {
    local_898 = 1;
    local_8a0 = 0x800;
    local_8b0 = FUN_1802229a8(0x800);
    lStack_8a8 = local_8b0;
    uVar5 = FUN_18017f058(param_1,&local_8b0,auStack_890);
    lVar3 = local_8b0;
    if ((uVar5 & 1) != 0) {
      *(int *)(*param_10 + 0x20) = (int)param_10[1] - (int)*param_10;
      uVar5 = FUN_1801849b8(uVar5,param_10,auStack_890,1);
      if ((uVar5 & 1) != 0) {
        *(int *)(*param_10 + 0x24) = (int)param_10[1] - (int)*param_10;
        FUN_180214fe8(param_10,lVar2,lStack_8d8 - lVar2);
        *(int *)(*param_10 + 0x28) = (int)param_10[1] - (int)*param_10;
        FUN_180214fe8(param_10,lVar3,lStack_8a8 - lVar3);
        FUN_180212ef0(param_10);
        if (param_11 != (undefined8 *)0x0) {
          param_11[1] = uStack_860;
          *param_11 = uStack_868;
          param_11[3] = local_850;
          param_11[2] = uStack_858;
          param_11[4] = uStack_848;
        }
        bVar1 = true;
      }
    }
    FUN_1802229d8(lVar3);
  }
  FUN_1802229d8(lVar2);
  uVar4 = 0;
  if (bVar1) {
    local_840 = auStack_81a;
    local_81c = 0;
    uStack_848 = 0;
    local_850 = 0;
    uStack_868 = 0;
    uStack_858 = 0;
    uStack_860 = 0;
    local_838 = 0x40;
    local_870 = (ulonglong)param_6;
    lStack_8a8 = uStack_754;
    local_8b0 = lStack_75c;
    local_8a0 = CONCAT62(local_8a0._2_6_,local_74c);
    lStack_8d8 = uStack_742;
    local_8e0 = lStack_74a;
    local_8d0 = CONCAT62(local_8d0._2_6_,local_73a);
    uVar4 = FUN_18017f1e0(param_1,auStack_890,param_7,&local_8e0,&local_8b0,local_738,param_8);
  }
  return uVar4;
}

