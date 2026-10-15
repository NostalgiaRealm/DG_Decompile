/*
 * FUN_180009814 at 180009814
 * undefined8 __fastcall FUN_180009814(byte * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined4 * param_5)
 * Address ranges: 180009814-180009893
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_180009814(byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  int iVar1;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 uVar2;
  
  iVar1 = FUN_18005f830(param_1,(byte *)"%d x %d %c",param_2,param_3);
  if (iVar1 == 2) {
    uVar2 = CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),1);
  }
  else {
    *param_5 = 1;
    iVar1 = FUN_18005f830(param_1,(byte *)"%d x %d @ %d %c",param_2,param_3);
    uVar2 = CONCAT71((int7)(CONCAT44(extraout_var_00,iVar1) >> 8),iVar1 == 3);
  }
  return uVar2;
}

