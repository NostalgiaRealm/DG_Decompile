/*
 * FUN_1800341ac at 1800341ac
 * longlong __fastcall FUN_1800341ac(longlong param_1, byte * param_2)
 * Address ranges: 1800341ac-18003423b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1800341ac(longlong param_1,byte *param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_180060f70(param_2,&DAT_1800624e0,0x10);
  if (iVar1 == 0) {
    lVar2 = param_1 + 0x28;
  }
  else {
    iVar1 = FUN_180060f70(param_2,&DAT_1800624f0,0x10);
    if (iVar1 == 0) {
      lVar2 = param_1 + 0x38;
    }
    else {
      iVar1 = FUN_180060f70(param_2,&DAT_180062500,0x10);
      if (iVar1 == 0) {
        lVar2 = param_1 + 0x48;
      }
      else {
        lVar2 = 0;
        iVar1 = FUN_180060f70(param_2,&DAT_180062510,0x10);
        if (iVar1 == 0) {
          lVar2 = param_1 + 0x58;
        }
      }
    }
  }
  return lVar2;
}

