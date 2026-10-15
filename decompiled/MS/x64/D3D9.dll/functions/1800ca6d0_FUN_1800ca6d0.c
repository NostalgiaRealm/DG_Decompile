/*
 * FUN_1800ca6d0 at 1800ca6d0
 * undefined8 __fastcall FUN_1800ca6d0(byte * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined4 * param_5)
 * Address ranges: 1800ca6d0-1800ca74f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1800ca6d0(byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  int iVar1;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 uVar2;
  
  iVar1 = FUN_1800fc950(param_1,(byte *)"%d x %d %c",param_2,param_3);
  if (iVar1 == 2) {
    uVar2 = CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),1);
  }
  else {
    *param_5 = 1;
    iVar1 = FUN_1800fc950(param_1,(byte *)"%d x %d @ %d %c",param_2,param_3);
    uVar2 = CONCAT71((int7)(CONCAT44(extraout_var_00,iVar1) >> 8),iVar1 == 3);
  }
  return uVar2;
}

