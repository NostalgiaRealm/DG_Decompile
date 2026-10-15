/*
 * FUN_18005cba0 at 18005cba0
 * undefined FUN_18005cba0(void)
 * Address ranges: 18005cba0-18005cd47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18005cba0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  int local_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  int iStack_60;
  undefined4 local_5c;
  longlong local_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined1 local_40;
  
  local_70 = 0x4e47534f;
  iStack_6c = 0;
  uStack_68 = 0;
  local_64 = 8;
  uVar5 = (uint)(*(char *)(param_3 + 0x55) != -1);
  if (*(char *)(param_3 + 0x56) != -1) {
    uVar5 = uVar5 + 1;
  }
  iVar1 = uVar5 + (*(char *)(param_3 + 0x54) != -1) + (uint)(*(char *)(param_3 + 0x53) != -1) +
          (uint)(*(char *)(param_3 + 0x52) != -1);
  iVar2 = iVar1 * 0x18;
  local_48 = 0x210;
  local_40 = 1;
  local_58 = thunk_FUN_180102f80(0x210);
  lStack_50 = local_58;
  FUN_1800f5a90(&local_58,&local_70,0x10);
  local_70 = iVar2 + 8;
  uStack_68 = 0;
  local_64 = 3;
  local_5c = 0xf;
  uVar6 = 0;
  do {
    iStack_60 = (int)((char *)(param_3 + 0x52))[uVar6];
    if (iStack_60 != -1) {
      iStack_6c = (int)uVar6;
      FUN_1800f5a90(&local_58,&local_70,0x18);
    }
    uVar5 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar5;
  } while (uVar5 < 4);
  local_70 = iVar2 + 0x12;
  iStack_6c = 0;
  uStack_68 = 0;
  local_64 = 3;
  iStack_60 = 0xffffffff;
  local_5c = 0xe01;
  uVar4 = 10;
  if (*(char *)(param_3 + 0x56) != -1) {
    FUN_1800f5a90(&local_58,&local_70,0x18);
    uVar4 = 0x13;
  }
  FUN_1800f5a90(&local_58,s_SV_TARGET_18024c460,uVar4);
  FUN_1800f5a90(&local_58,&DAT_180234958,-((int)lStack_50 - (int)local_58) & 3);
  lVar3 = local_58;
  *(int *)(local_58 + 4) = ((int)lStack_50 - (int)local_58) + -8;
  *(int *)(local_58 + 8) = iVar1;
  FUN_1800f5a90(param_2,local_58,lStack_50 - local_58);
  thunk_FUN_180102fc0(lVar3);
  return 1;
}

