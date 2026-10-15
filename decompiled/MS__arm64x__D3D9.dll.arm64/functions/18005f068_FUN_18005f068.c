/*
 * FUN_18005f068 at 18005f068
 * undefined FUN_18005f068(void)
 * Address ranges: 18005f068-18005f103
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_18005f068(undefined8 param_1,uint *param_2,longlong param_3,undefined8 param_4,
                    uint param_5)

{
  uint uVar1;
  
  *param_2 = 0;
  *(undefined1 *)(param_2 + 1) = 0xe4;
  uVar1 = param_5 & 0xf0;
  param_2[6] = 0xffffffff;
  param_2[7] = 0xffffffff;
  param_2[4] = 0xffffffff;
  param_2[5] = 0xffffffff;
  if (uVar1 == 0x10) {
    FUN_18005ef80(param_1,param_3,param_4);
    uVar1 = *(uint *)(param_3 + 0x218);
  }
  else {
    if (uVar1 == 0x20) {
      uVar1 = *(uint *)(param_3 + 0x21c);
      if (uVar1 == 0) {
        uVar1 = FUN_1800f42d0(param_3,4,1);
        *(uint *)(param_3 + 0x21c) = uVar1;
      }
      *param_2 = uVar1;
      return param_2;
    }
    if (uVar1 != 0xb0) {
      return param_2;
    }
    uVar1 = (int)(param_5 & 0xffff) >> 10 | 0x410000;
  }
  *param_2 = uVar1;
  return param_2;
}

