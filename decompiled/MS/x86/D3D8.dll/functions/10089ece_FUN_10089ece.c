/*
 * FUN_10089ece at 10089ece
 * bool __fastcall FUN_10089ece(byte * param_1, byte * param_2, byte * param_3)
 * Address ranges: 10089ece-10089f2c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_10089ece(byte *param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  byte local_88 [132];
  
  iVar1 = FUN_100adf60(param_1,(byte *)" %s %c");
  if ((iVar1 == 1) && (iVar1 = FUN_100ad5d0(local_88,param_2), iVar1 == 0)) {
    return true;
  }
  iVar1 = FUN_100adf60(param_1,param_3);
  return iVar1 == 1;
}

