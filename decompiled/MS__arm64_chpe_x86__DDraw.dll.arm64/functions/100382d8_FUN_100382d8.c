/*
 * FUN_100382d8 at 100382d8
 * undefined FUN_100382d8(void)
 * Address ranges: 100382d8-100383f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100382d8(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined **ppuVar2;
  
  iVar1 = FUN_10091750(param_2,&DAT_100b1a30,0x10);
  if (iVar1 == 0) {
    if (param_3 == (undefined4 *)0x0) {
      return;
    }
    ppuVar2 = &PTR_FUN_100b2890;
  }
  else {
    iVar1 = FUN_10091750(param_2,&DAT_100b1820,0x10);
    if (iVar1 == 0) {
      if (param_3 == (undefined4 *)0x0) {
        return;
      }
      ppuVar2 = &PTR_FUN_100b2834;
    }
    else {
      iVar1 = FUN_10091750(param_2,&DAT_100b1830,0x10);
      if (iVar1 == 0) {
        if (param_3 == (undefined4 *)0x0) {
          return;
        }
        ppuVar2 = &PTR_FUN_100b27d4;
      }
      else {
        iVar1 = FUN_10091750(param_2,&DAT_100b1840,0x10);
        if (iVar1 == 0) {
          if (param_3 == (undefined4 *)0x0) {
            return;
          }
          ppuVar2 = &PTR_FUN_100b2764;
        }
        else {
          iVar1 = FUN_10091750(param_2,&DAT_100b1850,0x10);
          if (iVar1 == 0) {
            if (param_3 == (undefined4 *)0x0) {
              return;
            }
            ppuVar2 = &PTR_FUN_100b26ec;
          }
          else {
            iVar1 = FUN_10091750(param_2,&DAT_100b17e0,0x10);
            if (iVar1 != 0) {
              return;
            }
            if (param_3 == (undefined4 *)0x0) {
              return;
            }
            ppuVar2 = &PTR_FUN_100b26d0;
          }
        }
      }
    }
  }
  *param_3 = ppuVar2;
  FUN_10091460(param_3,8);
  return;
}

