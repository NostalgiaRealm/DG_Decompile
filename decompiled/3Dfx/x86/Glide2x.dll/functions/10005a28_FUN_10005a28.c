/*
 * FUN_10005a28 at 10005a28
 * bool __fastcall FUN_10005a28(byte * param_1, byte * param_2, byte * param_3)
 * Address ranges: 10005a28-10005a86
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_10005a28(byte *param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  byte local_88 [132];
  
  iVar1 = FUN_10050231(param_1,(byte *)" %s %c");
  if ((iVar1 == 1) && (iVar1 = FUN_1004f6cb(local_88,param_2), iVar1 == 0)) {
    return true;
  }
  iVar1 = FUN_10050231(param_1,param_3);
  return iVar1 == 1;
}

