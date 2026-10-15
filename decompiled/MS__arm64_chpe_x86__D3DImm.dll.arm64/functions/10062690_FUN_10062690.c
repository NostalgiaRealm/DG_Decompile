/*
 * FUN_10062690 at 10062690
 * undefined FUN_10062690(void)
 * Address ranges: 10062690-10062783
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10062690(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined **ppuVar2;
  
  iVar1 = FUN_10081e90(param_2,&DAT_1009c5d0,0x10);
  if (iVar1 == 0) {
    if (param_3 == (undefined4 *)0x0) {
      return;
    }
    ppuVar2 = &PTR_FUN_1009ca34;
  }
  else {
    iVar1 = FUN_10081e90(param_2,&DAT_1009c3f0,0x10);
    if (iVar1 == 0) {
      if (param_3 == (undefined4 *)0x0) {
        return;
      }
      ppuVar2 = &PTR_FUN_1009ca10;
    }
    else {
      iVar1 = FUN_10081e90(param_2,&DAT_1009c400,0x10);
      if (iVar1 == 0) {
        if (param_3 == (undefined4 *)0x0) {
          return;
        }
        ppuVar2 = &PTR_FUN_1009c9ec;
      }
      else {
        iVar1 = FUN_10081e90(param_2,&DAT_1009c410,0x10);
        if (iVar1 == 0) {
          if (param_3 == (undefined4 *)0x0) {
            return;
          }
          ppuVar2 = &PTR_FUN_1009c9bc;
        }
        else {
          iVar1 = FUN_10081e90(param_2,&DAT_1009c420,0x10);
          if (iVar1 != 0) {
            return;
          }
          if (param_3 == (undefined4 *)0x0) {
            return;
          }
          ppuVar2 = &PTR_FUN_1009c99c;
        }
      }
    }
  }
  *param_3 = ppuVar2;
  FUN_10081d50(param_3,8);
  return;
}

