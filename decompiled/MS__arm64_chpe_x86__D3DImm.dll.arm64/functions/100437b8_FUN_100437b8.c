/*
 * FUN_100437b8 at 100437b8
 * undefined FUN_100437b8(void)
 * Address ranges: 100437b8-1004389f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100437b8(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined1 param_6,undefined4 param_7,ulonglong param_8)

{
  int local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  
  if ((param_8 >> 0x32 & 1) == 0) {
    local_68 = 0xe4;
    local_64 = 0;
    local_70 = (uint)*(byte *)(param_2 + 0x24c);
    local_78 = 0x56;
    local_80 = param_2;
    uStack_7c = param_7;
    uStack_74 = param_4;
    local_6c = param_4;
    param_1 = FUN_1007a868(&local_80,0x20);
  }
  if (((param_8 >> 0x28 & 1) == 0) && ((param_8 >> 0x30 & 1) != 0)) {
    local_64 = *(undefined4 *)(param_2 + 0x234);
    uStack_60 = 0;
    local_6c = *(undefined4 *)(param_2 + 0x90);
    local_68 = 0xe4;
    local_70 = 8;
    local_78 = 0x36;
    local_80 = param_2;
    uStack_7c = param_7;
    uStack_74 = param_4;
    param_1 = FUN_1007a868(&local_80,0x24);
  }
  FUN_10042fc0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}

