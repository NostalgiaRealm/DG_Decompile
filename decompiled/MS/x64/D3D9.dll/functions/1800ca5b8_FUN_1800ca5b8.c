/*
 * FUN_1800ca5b8 at 1800ca5b8
 * undefined8 __fastcall FUN_1800ca5b8(undefined8 param_1, longlong * param_2, undefined4 param_3, undefined4 param_4, undefined1 * param_5, uint param_6)
 * Address ranges: 1800ca5b8-1800ca683
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1800ca5b8(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
             undefined1 *param_5,uint param_6)

{
  int iVar1;
  ulonglong in_RAX;
  byte *pbVar2;
  undefined4 extraout_var;
  
  if (param_6 == 1) {
    pbVar2 = (byte *)(**(code **)(*param_2 + 0x50))(param_2,param_3,param_4,0);
    iVar1 = FUN_1800fc514(pbVar2,&DAT_180104fc4);
    if (iVar1 == 0) {
      *param_5 = 1;
      param_5 = (undefined1 *)CONCAT44(extraout_var,iVar1);
    }
    else {
      iVar1 = FUN_1800fc514(pbVar2,(byte *)"false");
      if (iVar1 == 0) {
        *param_5 = 0;
      }
      else {
        param_6 = 0;
        in_RAX = (**(code **)(*param_2 + 0x58))(param_2,param_3,param_4,0,&param_6);
        if (((char)in_RAX == '\0') || (in_RAX = (ulonglong)param_6, 1 < param_6))
        goto LAB_1800ca679;
        *param_5 = param_6 != 0;
      }
    }
    return CONCAT71((int7)((ulonglong)param_5 >> 8),1);
  }
LAB_1800ca679:
  return in_RAX & 0xffffffffffffff00;
}

