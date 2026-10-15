/*
 * FUN_1002baa0 at 1002baa0
 * undefined FUN_1002baa0(void)
 * Address ranges: 1002baa0-1002bcaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1002baa0(undefined4 param_1,uint *param_2,uint param_3,undefined4 param_4,uint param_5)

{
  uint uVar1;
  byte bVar2;
  uint *puVar3;
  uint *local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  uint uStack_74;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  uint local_50;
  undefined4 local_4c;
  uint local_48;
  
  local_50 = *param_2 & 0xc00;
  local_4c = param_4;
  local_48 = param_5;
  if ((((*(char *)((int)param_2 + 5) == '\0') && (*(char *)((int)param_2 + 6) == '\0')) &&
      (*(char *)((int)param_2 + 7) == '\0')) && ((char)param_2[2] == '\0')) {
    if (param_5 == 0 || local_50 != 0) {
      param_5 = param_3;
    }
  }
  else {
    param_5 = FUN_10083f38(param_2 + 3,4,1);
  }
  puVar3 = param_2 + 3;
  bVar2 = *(byte *)((int)param_2 + 0x61);
  uVar1 = 0;
  param_2[bVar2 + 0x1f] = 4;
  FUN_1002b890(param_1,param_2,param_3,bVar2 | 0x410700,param_5);
  if ((*param_2 >> 10 & 1) != 0) {
    bVar2 = 2;
    if ((char)param_2[2] == '\0') {
      bVar2 = 0;
    }
    uVar1 = FUN_1002b328(param_2,param_5,bVar2 | *(char *)((int)param_2 + 7) != '\0');
    bVar2 = *(byte *)((int)param_2 + 0x62);
    param_2[bVar2 + 0x1f] = 4;
    FUN_1002b890(param_1,param_2,param_3,bVar2 | 0x410700,uVar1);
  }
  if (param_3 != param_5) {
    FUN_10083ff0(puVar3,param_3);
  }
  if ((local_50 != 0) &&
     ((FUN_1002b698(param_1,param_2,param_5,uVar1,local_4c,0), ((uVar1 ^ param_5) & 0xff) != 0 ||
      (((uVar1 ^ param_5) & 0x3f00) != 0)))) {
    FUN_10083ff0(puVar3,uVar1);
  }
  uVar1 = local_48;
  if (local_48 != 0 && param_5 != local_48) {
    local_68 = 0;
    uStack_64 = 0;
    local_70 = 1;
    local_78 = 0x36;
    uStack_74 = local_48;
    local_80 = puVar3;
    uStack_7c = param_1;
    uStack_6c = param_5;
    FUN_10084ec8(&local_80,0x20);
    FUN_10083ff0(puVar3,param_5);
    param_5 = uVar1;
  }
  return param_5;
}

