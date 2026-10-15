/*
 * FUN_10082d68 at 10082d68
 * undefined FUN_10082d68(void)
 * Address ranges: 10082d68-10082e17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_10082d68(undefined8 param_1,uint *param_2,int param_3,undefined4 param_4,uint param_5)

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
    FUN_10082c40(param_1,param_3,param_4);
    uVar1 = *(uint *)(param_3 + 0x208);
  }
  else {
    if (uVar1 == 0x20) {
      puVar2 = (uint *)(param_3 + 0x20c);
      uVar1 = *puVar2;
      if (uVar1 == 0) {
        uVar1 = FUN_10121590(param_3,4,1);
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

