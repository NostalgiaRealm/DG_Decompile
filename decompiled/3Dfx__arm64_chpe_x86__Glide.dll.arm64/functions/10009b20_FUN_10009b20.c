/*
 * FUN_10009b20 at 10009b20
 * undefined FUN_10009b20(void)
 * Address ranges: 10009b20-10009b7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10009b20(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_1007a3d0(0x6c);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else if (param_2 == (undefined4 *)0x0) {
    uVar2 = FUN_1000a7a0(iVar1);
  }
  else {
    uVar2 = FUN_1000a870(iVar1,*param_2,param_2[1],param_2[2]);
  }
  return uVar2;
}

