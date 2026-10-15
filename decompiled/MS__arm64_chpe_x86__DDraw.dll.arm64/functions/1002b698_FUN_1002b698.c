/*
 * FUN_1002b698 at 1002b698
 * undefined FUN_1002b698(void)
 * Address ranges: 1002b698-1002b88f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002b698(undefined4 param_1,uint *param_2,uint param_3,uint param_4,undefined4 param_5,
                 uint param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint *local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  uint uStack_84;
  uint local_80;
  uint uStack_7c;
  uint local_78;
  uint uStack_74;
  uint local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 local_50;
  uint *local_4c;
  uint *local_48;
  undefined4 local_44;
  
  iVar3 = 6;
  if ((*param_2 & 0x400) != 0) {
    iVar3 = 8;
  }
  uVar4 = 2;
  if (*(char *)(iVar3 + (int)param_2) == '\0') {
    uVar4 = 0;
  }
  iVar3 = 5;
  if ((*param_2 & 0x400) != 0) {
    iVar3 = 7;
  }
  uVar4 = uVar4 | *(char *)(iVar3 + (int)param_2) != '\0';
  local_44 = param_5;
  uVar2 = param_6;
  if (param_6 == 0) {
    uVar2 = FUN_1002b328(param_2,param_3,uVar4);
  }
  local_50 = 0x27;
  if ((*param_2 & 0x1000) == 0) {
    local_50 = 0x20;
  }
  if ((*param_2 & 0xf) - 3 < 2) {
    uStack_6c = 0x84;
    uVar5 = 0x7c;
  }
  else {
    uStack_6c = 0x80;
    uVar5 = 0x78;
  }
  local_90 = param_2 + 3;
  uVar1 = *(byte *)(uVar4 + 0x100b3560) | 0x100;
  uVar4 = (uint)(byte)(&DAT_100b3514)[uVar4];
  uStack_8c = param_1;
  uStack_84 = uVar2;
  local_80 = uVar4;
  uStack_7c = param_3;
  local_78 = uVar1;
  local_4c = local_90;
  if (param_4 == 0) {
    local_48 = param_2 + 0x14;
    uStack_74 = *local_48;
    local_68 = 0;
    local_70 = 0;
    local_88 = 1;
    FUN_10084ec8(&local_90,0x2c);
    local_68 = 0;
    local_70 = 0;
    uStack_74 = *local_48;
    local_90 = local_4c;
    local_88 = local_50;
    uStack_8c = param_1;
    uStack_84 = uVar2;
    local_80 = uVar4;
    uStack_7c = uVar2;
    local_78 = uVar1;
    uStack_6c = uVar5;
    FUN_10084ec8(&local_90,0x2c);
  }
  else {
    uStack_6c = 0;
    local_88 = local_50;
    uStack_74 = param_4;
    local_70 = uVar1;
    FUN_10084ec8(&local_90,0x28);
  }
  FUN_1002b3c0(param_1,param_2,local_44,uVar2);
  if ((param_6 != uVar2) &&
     ((((uVar2 ^ param_3) & 0xff) != 0 || (((uVar2 ^ param_3) & 0x3f00) != 0)))) {
    FUN_10083ff0(local_4c,uVar2);
  }
  return;
}

