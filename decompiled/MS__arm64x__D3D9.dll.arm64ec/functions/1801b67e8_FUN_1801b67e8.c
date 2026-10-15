/*
 * FUN_1801b67e8 at 1801b67e8
 * undefined FUN_1801b67e8(void)
 * Address ranges: 1801b67e8-1801b6aab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1801b67e8(undefined8 param_1,uint *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  uint local_90 [2];
  uint local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  uVar1 = FUN_180213760(param_2 + 4,4,1);
  if ((((*(char *)((longlong)param_2 + 5) == '\0') && (*(char *)((longlong)param_2 + 6) == '\0')) &&
      (*(char *)((longlong)param_2 + 7) == '\0')) && ((char)param_2[2] == '\0')) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_180213760(param_2 + 4,2,1);
  }
  local_80 = 4;
  *(byte *)(param_2 + 0x20) = (byte)param_2[0x20] | 3;
  local_68 = 0x68;
  uStack_60 = 0;
  local_70 = CONCAT44(local_70._4_4_,0xe4);
  local_78 = CONCAT44(local_78._4_4_,param_2[0x16]);
  local_88 = 0x210101;
  local_90[0] = 3;
  FUN_180214c88(param_2 + 4,param_1,0x33,uVar1,local_90,0x38);
  if (iVar2 != 0) {
    if ((*(char *)((longlong)param_2 + 5) == '\0') && (*(char *)((longlong)param_2 + 7) == '\0')) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    if ((*(char *)((longlong)param_2 + 6) == '\0') && ((char)param_2[2] == '\0')) {
      local_90[0] = 0;
    }
    else {
      local_90[0] = 2;
    }
    local_90[0] = local_90[0] | uVar4;
    local_78 = 0;
    local_80 = 4;
    local_88 = uVar1;
    FUN_180214c88(param_2 + 4,param_1,0x1a,iVar2,local_90,0x20);
  }
  local_78 = 0;
  local_80 = 4;
  local_90[0] = 3;
  local_88 = uVar1;
  FUN_180214c88(param_2 + 4,param_1,0x1b,uVar1,local_90,0x20);
  local_78 = 0x60;
  local_70 = 0;
  local_80 = 0x10;
  local_88 = param_2[0x16];
  local_90[0] = 0xc;
  FUN_180214c88(param_2 + 4,param_1,0x36,uVar1,local_90,0x28);
  uVar4 = *param_2 & 0xf;
  if (uVar4 - 3 < 2) {
    uVar3 = FUN_1801b5770(param_1,param_2,uVar1,iVar2,param_4,param_3,param_5);
  }
  else {
    uVar3 = 0;
    if (1 < uVar4 - 6) {
      if (uVar4 == 0) {
        uVar3 = FUN_1801b3bf8(param_1,param_2,uVar1,iVar2);
      }
      else if (uVar4 == 1) {
        uVar3 = FUN_1801b43c0(param_1,param_2,uVar1,iVar2,0,param_4,param_3,param_5);
      }
      else if (uVar4 == 2) {
        uVar3 = FUN_1801b4f28(param_1,param_2,uVar1,iVar2);
      }
      else if (uVar4 == 5) {
        uVar3 = FUN_1801b5f50(param_1,param_2,uVar1,iVar2,param_4,param_3,param_5);
      }
    }
  }
  return uVar3;
}

