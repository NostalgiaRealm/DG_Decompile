/*
 * FUN_10065420 at 10065420
 * undefined FUN_10065420(void)
 * Address ranges: 10065420-10065497
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10065420(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_10081e90(param_2,&DAT_1009c5d0,0x10);
  if ((iVar1 == 0) || (iVar1 = FUN_10081e90(param_2,&DAT_1009c4e0,0x10), iVar1 == 0)) {
    *param_3 = param_1;
    uVar2 = 0;
    if (param_1 == 0) {
      uVar2 = 0x8007000e;
    }
  }
  else {
    uVar2 = 0x80004002;
  }
  return uVar2;
}

