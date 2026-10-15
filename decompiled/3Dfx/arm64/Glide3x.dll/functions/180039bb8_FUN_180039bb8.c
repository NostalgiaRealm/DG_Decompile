/*
 * FUN_180039bb8 at 180039bb8
 * longlong __cdecl FUN_180039bb8(longlong param_1, byte * param_2)
 * Address ranges: 180039bb8-180039bbf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180039bb8(longlong param_1,byte *param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_180063e48(param_2,&DAT_180065440,0x10);
  if (iVar1 == 0) {
    lVar2 = param_1 + 0x28;
  }
  else {
    iVar1 = FUN_180063e48(param_2,&DAT_180065450,0x10);
    if (iVar1 == 0) {
      lVar2 = param_1 + 0x38;
    }
    else {
      iVar1 = FUN_180063e48(param_2,&DAT_180065460,0x10);
      if (iVar1 == 0) {
        lVar2 = param_1 + 0x48;
      }
      else {
        lVar2 = 0;
        iVar1 = FUN_180063e48(param_2,&DAT_180065470,0x10);
        if (iVar1 == 0) {
          lVar2 = param_1 + 0x58;
        }
      }
    }
  }
  return lVar2;
}

