/*
 * FUN_18000a4d8 at 18000a4d8
 * longlong __cdecl FUN_18000a4d8(longlong param_1, undefined8 param_2)
 * Address ranges: 18000a4d8-18000a4df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_18000a4d8(longlong param_1,byte *param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_180061160(param_2,&DAT_180062440,0x10);
  if (iVar1 == 0) {
    lVar2 = param_1 + 0x28;
  }
  else {
    iVar1 = FUN_180061160(param_2,&DAT_180062450,0x10);
    if (iVar1 == 0) {
      lVar2 = param_1 + 0x38;
    }
    else {
      iVar1 = FUN_180061160(param_2,&DAT_180062460,0x10);
      if (iVar1 == 0) {
        lVar2 = param_1 + 0x48;
      }
      else {
        lVar2 = 0;
        iVar1 = FUN_180061160(param_2,&DAT_180062470,0x10);
        if (iVar1 == 0) {
          lVar2 = param_1 + 0x58;
        }
      }
    }
  }
  return lVar2;
}

