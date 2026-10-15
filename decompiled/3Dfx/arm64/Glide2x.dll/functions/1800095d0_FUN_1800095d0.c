/*
 * FUN_1800095d0 at 1800095d0
 * longlong __cdecl FUN_1800095d0(longlong param_1, byte * param_2)
 * Address ranges: 1800095d0-180009673
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1800095d0(longlong param_1,byte *param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_180060310(param_2,&DAT_180061440,0x10);
  if (iVar1 == 0) {
    lVar2 = param_1 + 0x28;
  }
  else {
    iVar1 = FUN_180060310(param_2,&DAT_180061450,0x10);
    if (iVar1 == 0) {
      lVar2 = param_1 + 0x38;
    }
    else {
      iVar1 = FUN_180060310(param_2,&DAT_180061460,0x10);
      if (iVar1 == 0) {
        lVar2 = param_1 + 0x48;
      }
      else {
        lVar2 = 0;
        iVar1 = FUN_180060310(param_2,&DAT_180061470,0x10);
        if (iVar1 == 0) {
          lVar2 = param_1 + 0x58;
        }
      }
    }
  }
  return lVar2;
}

