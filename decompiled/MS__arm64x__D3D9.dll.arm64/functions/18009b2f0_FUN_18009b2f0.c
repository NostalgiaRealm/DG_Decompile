/*
 * FUN_18009b2f0 at 18009b2f0
 * undefined FUN_18009b2f0(void)
 * Address ranges: 18009b2f0-18009b4b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18009b2f0(undefined8 param_1,longlong param_2,undefined4 param_3,undefined1 param_4,
                  undefined4 param_5,int param_6,int param_7)

{
  undefined8 uVar1;
  
  if (param_7 == 0) {
    if (param_6 == 0) {
      return;
    }
    if (param_6 != 1) {
      if (param_6 != 2) {
        return;
      }
      FUN_1800f5730(param_2 + 0x10,param_1,0x56,param_5,param_4,param_5,0x1e4,0);
    }
    FUN_1800f5730(param_2 + 0x10,param_1,0x38,param_3,param_4,param_5,0x1e4,
                  *(undefined4 *)(param_2 + 100),0xe4,0x3b808081,0x3b808081,0x3b808081,0x3b808081,0)
    ;
    return;
  }
  if (param_7 == 1) {
    if (param_6 == 0) {
      FUN_1800f5730(param_2 + 0x10,param_1,0x38,param_3,param_4,param_5,0x1e4,
                    *(undefined4 *)(param_2 + 100),0xe4,0x437f0000,0x437f0000,0x437f0000,0x437f0000,
                    0);
      return;
    }
    if (param_6 != 2) {
      return;
    }
    uVar1 = 0x56;
  }
  else {
    if (param_7 != 2) {
      return;
    }
    if (param_6 == 0) {
      FUN_1800f5730(param_2 + 0x10,param_1,0x32,param_5,param_4,param_5,0x1e4,
                    *(undefined4 *)(param_2 + 100),0xe4,0x437f0000,0x437f0000,0x437f0000,0x437f0000,
                    *(undefined4 *)(param_2 + 100),0xe4,0x38d1b717,0x38d1b717,0x38d1b717,0x38d1b717,
                    0);
    }
    else if (param_6 != 1) {
      return;
    }
    uVar1 = 0x1c;
  }
  FUN_1800f5730(param_2 + 0x10,param_1,uVar1,param_3,param_4,param_5,0x1e4,0);
  return;
}

