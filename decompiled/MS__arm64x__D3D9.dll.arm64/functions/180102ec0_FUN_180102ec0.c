/*
 * FUN_180102ec0 at 180102ec0
 * undefined FUN_180102ec0(void)
 * Address ranges: 180102ec0-180102f6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180102ec0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = func_0x000180222c00(param_2,&DAT_180229448,0x10);
  if (iVar1 == 0) {
    lVar2 = param_1 + 0x28;
  }
  else {
    iVar1 = func_0x000180222c00(param_2,&DAT_180229458,0x10);
    if (iVar1 == 0) {
      lVar2 = param_1 + 0x38;
    }
    else {
      iVar1 = func_0x000180222c00(param_2,&DAT_180229468,0x10);
      if (iVar1 == 0) {
        lVar2 = param_1 + 0x48;
      }
      else {
        lVar2 = 0;
        iVar1 = func_0x000180222c00(param_2,&DAT_180229478,0x10);
        if (iVar1 == 0) {
          lVar2 = param_1 + 0x58;
        }
      }
    }
  }
  return lVar2;
}

