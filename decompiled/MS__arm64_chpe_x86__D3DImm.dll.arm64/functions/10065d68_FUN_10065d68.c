/*
 * FUN_10065d68 at 10065d68
 * undefined FUN_10065d68(void)
 * Address ranges: 10065d68-10065e33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10065d68(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined **ppuVar2;
  
  iVar1 = FUN_10081e90(param_2,&DAT_1009c5d0,0x10);
  if (iVar1 == 0) {
    if (param_3 == (undefined4 *)0x0) {
      return;
    }
    ppuVar2 = &PTR_FUN_1009cd48;
  }
  else {
    iVar1 = FUN_10081e90(param_2,&DAT_1009c4f0,0x10);
    if (iVar1 == 0) {
      if (param_3 == (undefined4 *)0x0) {
        return;
      }
      ppuVar2 = &PTR_FUN_1009cd24;
    }
    else {
      iVar1 = FUN_10081e90(param_2,&DAT_1009c500,0x10);
      if (iVar1 == 0) {
        if (param_3 == (undefined4 *)0x0) {
          return;
        }
        ppuVar2 = &PTR_FUN_1009cd0c;
      }
      else {
        iVar1 = FUN_10081e90(param_2,&DAT_1009c510,0x10);
        if (iVar1 != 0) {
          return;
        }
        if (param_3 == (undefined4 *)0x0) {
          return;
        }
        ppuVar2 = &PTR_FUN_1009ccf4;
      }
    }
  }
  *param_3 = ppuVar2;
  FUN_10081d50(param_3,8);
  return;
}

