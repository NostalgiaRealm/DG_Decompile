/*
 * FUN_1002c4a8 at 1002c4a8
 * bool __fastcall FUN_1002c4a8(byte * param_1, byte * param_2, byte * param_3)
 * Address ranges: 1002c4a8-1002c506
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_1002c4a8(byte *param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  byte local_88 [132];
  
  iVar1 = FUN_10052e41(param_1,(byte *)" %s %c");
  if ((iVar1 == 1) && (iVar1 = FUN_1005231b(local_88,param_2), iVar1 == 0)) {
    return true;
  }
  iVar1 = FUN_10052e41(param_1,param_3);
  return iVar1 == 1;
}

