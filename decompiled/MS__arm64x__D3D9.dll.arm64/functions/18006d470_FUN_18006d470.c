/*
 * FUN_18006d470 at 18006d470
 * undefined FUN_18006d470(void)
 * Address ranges: 18006d470-18006d63f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18006d470(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong local_a0;
  longlong lStack_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_68;
  longlong local_60;
  longlong lStack_58;
  undefined8 local_50;
  undefined1 local_48;
  
  local_90 = 0x200;
  local_88 = 1;
  iVar6 = 0;
  local_a0 = thunk_FUN_180102f80(0x200);
  lStack_98 = local_a0;
  uVar2 = FUN_180069260(local_a0,&local_a0,param_3);
  lVar7 = local_a0;
  if ((int)uVar2 != 0) {
    lVar7 = 0;
    uVar3 = uVar2;
    do {
      pcVar1 = (char *)(*(longlong *)(param_3 + 0x10) + lVar7);
      uVar5 = (uint)(byte)pcVar1[0x10];
      if ((uVar5 != 0) && (*pcVar1 != -1)) {
        uVar3 = FUN_1800f5b00(&local_a0,4,0x400005f,uVar5 << 4 | 0x201002,3,iVar6);
        iVar6 = iVar6 + 1;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0x10);
    if (*(int *)(param_3 + 0x528) != -1) {
      uVar3 = FUN_1800f5b00(&local_a0,4,0x400005f,0x201072,3,iVar6);
    }
    FUN_180069398(uVar3,&local_a0,param_3);
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0x80;
    local_68 = 1;
    local_80 = thunk_FUN_180102f80(0x80);
    local_60 = 0;
    lStack_58 = 0;
    local_50 = 0x80;
    local_48 = 1;
    uStack_78 = local_80;
    local_60 = thunk_FUN_180102f80(0x80);
    lStack_58 = local_60;
    FUN_180069560(param_1,&local_80,&local_60,param_3);
    FUN_1800f5730(param_3 + 0x20,&local_80,0x3e,0);
    uVar4 = FUN_1800f5a90(&local_80,local_60,lStack_58 - local_60);
    uVar4 = FUN_1800795d0(uVar4,&local_a0,param_3);
    uVar4 = FUN_18006f730(uVar4,param_3,&local_a0);
    FUN_180069470(uVar4,&local_a0,param_3);
    FUN_1800f5d48(&local_a0,&local_80,uVar2 & 0xffffffff);
    lVar7 = local_a0;
    FUN_1800f5a90(param_2,local_a0,lStack_98 - local_a0);
    iVar6 = 1;
    thunk_FUN_180102fc0(local_60);
    thunk_FUN_180102fc0(local_80);
  }
  thunk_FUN_180102fc0(lVar7);
  return iVar6;
}

