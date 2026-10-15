/*
 * FUN_180221598 at 180221598
 * undefined FUN_180221598(void)
 * Address ranges: 180221598-180221643
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180221598(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_180222c00(param_2,&DAT_1802290c0,0x10);
  if (iVar1 == 0) {
    lVar2 = param_1 + 0x28;
  }
  else {
    iVar1 = FUN_180222c00(param_2,&DAT_1802290d0,0x10);
    if (iVar1 == 0) {
      lVar2 = param_1 + 0x38;
    }
    else {
      iVar1 = FUN_180222c00(param_2,&DAT_1802290e0,0x10);
      if (iVar1 == 0) {
        lVar2 = param_1 + 0x48;
      }
      else {
        lVar2 = 0;
        iVar1 = FUN_180222c00(param_2,&DAT_1802290f0,0x10);
        if (iVar1 == 0) {
          lVar2 = param_1 + 0x58;
        }
      }
    }
  }
  return lVar2;
}

