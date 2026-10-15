/*
 * FUN_100e4f10 at 100e4f10
 * undefined FUN_100e4f10(void)
 * Address ranges: 100e4f10-100e4f6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100e4f10(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = *(uint *)(param_1 + -0x58e0);
  if (param_2 < uVar1) {
    if (uVar1 < param_2 + param_4) {
      param_4 = uVar1 - param_2;
    }
  }
  else {
    param_4 = 0;
  }
  uVar2 = FUN_10009b20(param_1 + -0x66b4,param_2,param_3,param_4);
  return uVar2;
}

