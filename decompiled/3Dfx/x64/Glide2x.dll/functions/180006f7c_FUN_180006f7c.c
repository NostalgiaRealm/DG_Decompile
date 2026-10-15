/*
 * FUN_180006f7c at 180006f7c
 * longlong __fastcall FUN_180006f7c(longlong param_1, byte * param_2)
 * Address ranges: 180006f7c-18000700b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180006f7c(longlong param_1,byte *param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_18005f350(param_2,&DAT_180060468,0x10);
  if (iVar1 == 0) {
    lVar2 = param_1 + 0x28;
  }
  else {
    iVar1 = FUN_18005f350(param_2,&DAT_180060478,0x10);
    if (iVar1 == 0) {
      lVar2 = param_1 + 0x38;
    }
    else {
      iVar1 = FUN_18005f350(param_2,&DAT_180060488,0x10);
      if (iVar1 == 0) {
        lVar2 = param_1 + 0x48;
      }
      else {
        lVar2 = 0;
        iVar1 = FUN_18005f350(param_2,&DAT_180060498,0x10);
        if (iVar1 == 0) {
          lVar2 = param_1 + 0x58;
        }
      }
    }
  }
  return lVar2;
}

