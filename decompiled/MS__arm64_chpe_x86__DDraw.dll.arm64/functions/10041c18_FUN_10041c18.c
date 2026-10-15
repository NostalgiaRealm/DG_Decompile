/*
 * FUN_10041c18 at 10041c18
 * undefined FUN_10041c18(void)
 * Address ranges: 10041c18-10041d33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10041c18(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined **ppuVar2;
  
  iVar1 = FUN_10091750(param_2,&DAT_100b1a30,0x10);
  if (iVar1 == 0) {
    if (param_3 == (undefined4 *)0x0) {
      return;
    }
    ppuVar2 = &PTR_FUN_100b2be0;
  }
  else {
    iVar1 = FUN_10091750(param_2,&DAT_100b1860,0x10);
    if (iVar1 == 0) {
      if (param_3 == (undefined4 *)0x0) {
        return;
      }
      ppuVar2 = &PTR_FUN_100b2b50;
    }
    else {
      iVar1 = FUN_10091750(param_2,&DAT_100b1870,0x10);
      if (iVar1 == 0) {
        if (param_3 == (undefined4 *)0x0) {
          return;
        }
        ppuVar2 = &PTR_FUN_100b2ab4;
      }
      else {
        iVar1 = FUN_10091750(param_2,&DAT_100b1880,0x10);
        if (iVar1 == 0) {
          if (param_3 == (undefined4 *)0x0) {
            return;
          }
          ppuVar2 = &PTR_FUN_100b2a14;
        }
        else {
          iVar1 = FUN_10091750(param_2,&DAT_100b1890,0x10);
          if (iVar1 == 0) {
            if (param_3 == (undefined4 *)0x0) {
              return;
            }
            ppuVar2 = &PTR_FUN_100b2960;
          }
          else {
            iVar1 = FUN_10091750(param_2,&DAT_100b18a0,0x10);
            if (iVar1 != 0) {
              return;
            }
            if (param_3 == (undefined4 *)0x0) {
              return;
            }
            ppuVar2 = &PTR_FUN_100b289c;
          }
        }
      }
    }
  }
  *param_3 = ppuVar2;
  FUN_10091460(param_3,8);
  return;
}

