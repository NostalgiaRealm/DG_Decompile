/*
 * FUN_100e38d0 at 100e38d0
 * undefined FUN_100e38d0(void)
 * Address ranges: 100e38d0-100e3947
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100e38d0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 auStack_30 [4];
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  
  iVar1 = -0x7789f795;
  if ((*(char *)(param_1 + -0x14) == '\0') &&
     (iVar1 = FUN_100e36b0(param_1 + -0x66b4,param_2,auStack_30,0), -1 < iVar1)) {
    *param_3 = local_2c;
    param_3[1] = uStack_28;
    param_3[3] = uStack_20;
    param_3[2] = local_24;
  }
  return iVar1;
}

