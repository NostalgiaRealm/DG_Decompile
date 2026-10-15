/*
 * FUN_10067cb8 at 10067cb8
 * undefined FUN_10067cb8(void)
 * Address ranges: 10067cb8-10067d83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10067cb8(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined **ppuVar2;
  
  iVar1 = FUN_10081e90(param_2,&DAT_1009c5d0,0x10);
  if (iVar1 == 0) {
    if (param_3 == (undefined4 *)0x0) {
      return;
    }
    ppuVar2 = &PTR_FUN_1009cee4;
  }
  else {
    iVar1 = FUN_10081e90(param_2,&DAT_1009c530,0x10);
    if (iVar1 == 0) {
      if (param_3 == (undefined4 *)0x0) {
        return;
      }
      ppuVar2 = &PTR_FUN_1009ce90;
    }
    else {
      iVar1 = FUN_10081e90(param_2,&DAT_1009c540,0x10);
      if (iVar1 == 0) {
        if (param_3 == (undefined4 *)0x0) {
          return;
        }
        ppuVar2 = &PTR_FUN_1009ce3c;
      }
      else {
        iVar1 = FUN_10081e90(param_2,&DAT_1009c550,0x10);
        if (iVar1 != 0) {
          return;
        }
        if (param_3 == (undefined4 *)0x0) {
          return;
        }
        ppuVar2 = &PTR_FUN_1009cde8;
      }
    }
  }
  *param_3 = ppuVar2;
  FUN_10081d50(param_3,8);
  return;
}

