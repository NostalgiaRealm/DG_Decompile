/*
 * FUN_180073d58 at 180073d58
 * undefined FUN_180073d58(void)
 * Address ranges: 180073d58-180073e6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180073d58(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_4 == 0) {
    param_4 = FUN_1800f42d0(param_3 + 0x20,3,1);
    FUN_1800f5730(param_3 + 0x20,param_2,0x11,param_4,1,*(undefined4 *)(param_3 + 0x160),0xe4,
                  *(undefined4 *)(param_3 + 0xd0),0xe4,0x1b0,0);
    FUN_1800f5730(param_3 + 0x20,param_2,0x11,param_4,2,*(undefined4 *)(param_3 + 0x160),0xe4,
                  *(undefined4 *)(param_3 + 0xd0),0xe4,0x1c0,0);
    uVar1 = FUN_1800f5730(param_3 + 0x20,param_2,0x11,param_4,4,*(undefined4 *)(param_3 + 0x160),
                          0xe4,*(undefined4 *)(param_3 + 0xd0),0xe4,0x1d0,0);
    if ((*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44) >> 0x17 & 1) != 0) {
      FUN_180072118(uVar1,param_2,param_3,param_4);
    }
  }
  return param_4;
}

