/*
 * FUN_1003e044 at 1003e044
 * bool __fastcall FUN_1003e044(byte * param_1, byte * param_2, byte * param_3)
 * Address ranges: 1003e044-1003e0a2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_1003e044(byte *param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  byte local_88 [132];
  
  iVar1 = FUN_100616be(param_1,(byte *)" %s %c");
  if ((iVar1 == 1) && (iVar1 = FUN_10061253(local_88,param_2), iVar1 == 0)) {
    return true;
  }
  iVar1 = FUN_100616be(param_1,param_3);
  return iVar1 == 1;
}

