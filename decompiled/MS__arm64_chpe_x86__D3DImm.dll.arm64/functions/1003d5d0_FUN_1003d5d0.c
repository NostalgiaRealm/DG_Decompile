/*
 * FUN_1003d5d0 at 1003d5d0
 * undefined FUN_1003d5d0(void)
 * Address ranges: 1003d5d0-1003d67f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_1003d5d0(undefined8 param_1,uint *param_2,int param_3,undefined4 param_4,uint param_5)

{
  uint uVar1;
  uint *puVar2;
  
  *param_2 = 0;
  *(undefined1 *)(param_2 + 1) = 0xe4;
  param_2[6] = 0xffffffff;
  param_2[7] = 0xffffffff;
  param_2[4] = 0xffffffff;
  param_2[5] = 0xffffffff;
  uVar1 = param_5 & 0xf0;
  if (uVar1 == 0x10) {
    FUN_1003d530(param_1,param_3,param_4);
    uVar1 = *(uint *)(param_3 + 0x1f8);
  }
  else {
    if (uVar1 == 0x20) {
      puVar2 = (uint *)(param_3 + 0x1fc);
      uVar1 = *puVar2;
      if (uVar1 == 0) {
        uVar1 = FUN_10079948(param_3,4,1);
        *puVar2 = uVar1;
      }
      *param_2 = uVar1;
      return param_2;
    }
    if (uVar1 != 0xb0) {
      return param_2;
    }
    uVar1 = (param_5 & 0xffff) >> 10 | 0x410000;
  }
  *param_2 = uVar1;
  return param_2;
}

