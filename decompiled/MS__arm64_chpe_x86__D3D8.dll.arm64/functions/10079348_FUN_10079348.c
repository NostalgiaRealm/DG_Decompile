/*
 * FUN_10079348 at 10079348
 * undefined FUN_10079348(void)
 * Address ranges: 10079348-10079437
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10079348(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  uint uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  byte local_40;
  byte local_3f [15];
  
  local_60 = 0;
  uStack_5c = 1;
  local_68 = 0x4000067;
  uStack_64 = 0x1020f2;
  uStack_6c = 4;
  local_70 = param_2;
  FUN_100ef760(&local_70,0x18);
  uVar2 = 1;
  do {
    uVar1 = FUN_100f0050(param_2,uVar2,0xf);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0xd);
  local_40 = 0;
  local_3f[0] = 0;
  FUN_10078f18(uVar1,param_3,&local_40,local_3f);
  if (local_40 != 0) {
    uStack_64 = (uint)local_40 << 4 | 0x102002;
    local_60 = 0xd;
    uStack_5c = 2;
    local_68 = 0x4000067;
    uStack_6c = 4;
    local_70 = param_2;
    FUN_100ef760(&local_70,0x18);
  }
  if (local_3f[0] != 0) {
    uStack_64 = (uint)local_3f[0] << 4 | 0x102002;
    local_60 = 0xe;
    uStack_5c = 2;
    local_68 = 0x4000067;
    uStack_6c = 4;
    local_70 = param_2;
    FUN_100ef760(&local_70,0x18);
  }
  return;
}

