/*
 * FUN_1004c700 at 1004c700
 * undefined FUN_1004c700(void)
 * Address ranges: 1004c700-1004c75f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1004c700(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_10083310(0x6c);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else if (param_2 == (undefined4 *)0x0) {
    uVar2 = FUN_1004d380(iVar1);
  }
  else {
    uVar2 = FUN_1004d450(iVar1,*param_2,param_2[1],param_2[2]);
  }
  return uVar2;
}

