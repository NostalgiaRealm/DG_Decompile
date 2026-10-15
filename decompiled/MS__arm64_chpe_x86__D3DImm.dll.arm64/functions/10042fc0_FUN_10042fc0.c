/*
 * FUN_10042fc0 at 10042fc0
 * undefined FUN_10042fc0(void)
 * Address ranges: 10042fc0-1004308f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10042fc0(undefined8 param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                 uint param_6,undefined4 param_7)

{
  int local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  int iStack_6c;
  undefined4 local_68;
  int iStack_64;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  
  if (param_5 != 0) {
    local_60 = param_6 & 3;
    local_68 = 0xe4;
    local_70 = 0xf;
    local_60 = (local_60 | (local_60 | (param_6 & 3) << 2) << 2) << 2 | local_60;
    iStack_5c = 0;
    local_78 = 1;
    local_80 = param_2;
    uStack_7c = param_7;
    uStack_74 = param_4;
    iStack_6c = param_4;
    iStack_64 = param_5;
    FUN_1007a868(&local_80,0x28);
  }
  iStack_6c = *(int *)(param_2 + 0x248);
  if (iStack_6c != 0) {
    local_50 = 0;
    uStack_54 = 0xe4;
    iStack_5c = param_3 * 0x120 + 0xa80;
    local_70 = 0xf;
    local_60 = 0xe4;
    iStack_64 = *(undefined4 *)(param_2 + 0x80);
    local_68 = 0;
    local_78 = 0x37;
    local_80 = param_2;
    uStack_7c = param_7;
    uStack_74 = param_4;
    local_58 = param_4;
    FUN_1007a868(&local_80,0x34);
  }
  return;
}

