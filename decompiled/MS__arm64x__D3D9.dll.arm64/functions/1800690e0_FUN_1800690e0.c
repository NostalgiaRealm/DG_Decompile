/*
 * FUN_1800690e0 at 1800690e0
 * undefined FUN_1800690e0(void)
 * Address ranges: 1800690e0-18006919f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800690e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint *param_4,
                  undefined8 param_5)

{
  uint uVar1;
  
  while( true ) {
    while( true ) {
      uVar1 = *param_4 & 0xffff;
      if (uVar1 != 0) break;
      param_4 = param_4 + 1;
    }
    if (uVar1 == 0x1c) break;
    if ((uVar1 == 0x1f) || (uVar1 == 0x2f)) {
      param_4 = param_4 + 3;
    }
    else if ((uVar1 == 0x30) || (uVar1 == 0x51)) {
      param_4 = param_4 + 6;
    }
    else if (uVar1 == 0xfffe) {
      param_4 = param_4 + ((*param_4 >> 0x10) + 1);
    }
    else {
      if (uVar1 == 0xffff) {
        return;
      }
      param_4 = (uint *)FUN_1800670e0(param_1,param_2,param_3,param_4,param_5);
    }
  }
  return;
}

