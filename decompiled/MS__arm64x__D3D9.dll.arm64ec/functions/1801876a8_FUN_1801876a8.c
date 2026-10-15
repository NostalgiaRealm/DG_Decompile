/*
 * FUN_1801876a8 at 1801876a8
 * undefined FUN_1801876a8(void)
 * Address ranges: 1801876a8-1801877fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1801876a8(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  undefined4 local_70 [2];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined8 local_40;
  
  if (param_4 == 0) {
    param_4 = FUN_180213760(param_3 + 0x20,3,1);
    local_40 = 0;
    local_48 = 0x1b0;
    local_58 = *(undefined4 *)(param_3 + 0xd0);
    local_50 = 0xe4;
    local_60 = 0xe4;
    local_68 = *(undefined4 *)(param_3 + 0x160);
    local_70[0] = 1;
    FUN_180214c88(param_3 + 0x20,param_2,0x11,param_4,local_70,0x38);
    local_48 = 0x1c0;
    local_58 = *(undefined4 *)(param_3 + 0xd0);
    local_40 = 0;
    local_50 = 0xe4;
    local_60 = 0xe4;
    local_68 = *(undefined4 *)(param_3 + 0x160);
    local_70[0] = 2;
    FUN_180214c88(param_3 + 0x20,param_2,0x11,param_4,local_70,0x38);
    local_48 = 0x1d0;
    local_58 = *(undefined4 *)(param_3 + 0xd0);
    local_40 = 0;
    local_50 = 0xe4;
    local_60 = 0xe4;
    local_68 = *(undefined4 *)(param_3 + 0x160);
    local_70[0] = 4;
    uVar1 = FUN_180214c88(param_3 + 0x20,param_2,0x11,param_4,local_70,0x38);
    if ((*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44) >> 0x17 & 1) != 0) {
      FUN_1801854b8(uVar1,param_2,param_3,param_4);
    }
  }
  return param_4;
}

