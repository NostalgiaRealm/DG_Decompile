/*
 * FUN_1800671f8 at 1800671f8
 * uint * __fastcall FUN_1800671f8(undefined8 param_1, uint * param_2, longlong param_3)
 * Address ranges: 1800671f8-180067249
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_1800671f8(undefined8 param_1,uint *param_2,longlong param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_3 + 0x220);
  if (uVar1 == 0) {
    uVar1 = FUN_1800ec8c0(param_3,4,'\x01');
    *(uint *)(param_3 + 0x220) = uVar1;
  }
  *param_2 = uVar1;
  param_2[4] = 0xffffffff;
  param_2[5] = 0xffffffff;
  param_2[6] = 0xffffffff;
  param_2[7] = 0xffffffff;
  *(undefined1 *)(param_2 + 1) = 0xe4;
  return param_2;
}

