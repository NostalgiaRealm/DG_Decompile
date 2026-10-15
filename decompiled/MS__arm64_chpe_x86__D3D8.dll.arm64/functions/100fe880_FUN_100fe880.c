/*
 * FUN_100fe880 at 100fe880
 * undefined FUN_100fe880(void)
 * Address ranges: 100fe880-100fe8df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100fe880(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100febf0(0x6c);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else if (param_2 == (undefined4 *)0x0) {
    uVar2 = FUN_100c9160(iVar1);
  }
  else {
    uVar2 = FUN_100c9230(iVar1,*param_2,param_2[1],param_2[2]);
  }
  return uVar2;
}

