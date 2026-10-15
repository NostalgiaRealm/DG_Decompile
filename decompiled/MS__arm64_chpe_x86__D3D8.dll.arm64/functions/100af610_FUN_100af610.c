/*
 * FUN_100af610 at 100af610
 * undefined FUN_100af610(void)
 * Address ranges: 100af610-100af65b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100af610(int param_1,uint param_2,ulonglong param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if (((param_2 < *(uint *)(param_1 + -0x24)) && ((param_3 & 0xfffffffd) == 0)) && (param_4 != 0)) {
    uVar1 = FUN_100058d0(param_1 + -0x70,param_2,param_4);
  }
  return uVar1;
}

