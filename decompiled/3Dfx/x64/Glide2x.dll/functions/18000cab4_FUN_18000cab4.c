/*
 * FUN_18000cab4 at 18000cab4
 * undefined8 __fastcall FUN_18000cab4(undefined8 param_1, longlong * param_2, undefined4 param_3, undefined4 param_4, undefined4 * param_5, int param_6)
 * Address ranges: 18000cab4-18000cb44
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18000cab4(undefined8 param_1,longlong *param_2,undefined4 param_3,uint param_4,
                       undefined4 *param_5,int param_6)

{
  int iVar1;
  byte *pbVar2;
  undefined4 extraout_var;
  ulonglong uVar3;
  undefined4 extraout_var_00;
  
  uVar3 = (ulonglong)param_4;
  if (param_6 == 1) {
    pbVar2 = (byte *)(**(code **)(*param_2 + 0x50))(param_2,param_3,uVar3,0);
    iVar1 = FUN_18005d788(pbVar2,(byte *)"disable");
    if (iVar1 == 0) {
      *param_5 = 0;
      param_5 = (undefined4 *)CONCAT44(extraout_var,iVar1);
    }
    else {
      iVar1 = FUN_18005d788(pbVar2,(byte *)"enable");
      if (iVar1 == 0) {
        *param_5 = 1;
      }
      else {
        iVar1 = FUN_18005d788(pbVar2,(byte *)"enablebreak");
        uVar3 = CONCAT44(extraout_var_00,iVar1);
        if (iVar1 != 0) goto LAB_18000cb3d;
        *param_5 = 2;
      }
    }
    uVar3 = CONCAT71((int7)((ulonglong)param_5 >> 8),1);
  }
  else {
LAB_18000cb3d:
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  return uVar3;
}

