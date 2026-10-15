/*
 * FUN_100ac0e4 at 100ac0e4
 * bool __fastcall FUN_100ac0e4(byte * param_1, byte * param_2, byte * param_3)
 * Address ranges: 100ac0e4-100ac142
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_100ac0e4(byte *param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  byte local_88 [132];
  
  iVar1 = FUN_100d083e(param_1,(byte *)" %s %c");
  if ((iVar1 == 1) && (iVar1 = FUN_100d03d3(local_88,param_2), iVar1 == 0)) {
    return true;
  }
  iVar1 = FUN_100d083e(param_1,param_3);
  return iVar1 == 1;
}

