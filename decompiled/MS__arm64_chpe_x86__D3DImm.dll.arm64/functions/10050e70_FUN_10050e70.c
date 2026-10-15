/*
 * FUN_10050e70 at 10050e70
 * undefined FUN_10050e70(void)
 * Address ranges: 10050e70-10050f63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10050e70(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined **ppuVar2;
  
  iVar1 = FUN_10081e90(param_2,&DAT_1009c5d0,0x10);
  if (iVar1 == 0) {
    if (param_3 == (undefined4 *)0x0) {
      return;
    }
    ppuVar2 = &PTR_FUN_1009ccb4;
  }
  else {
    iVar1 = FUN_10081e90(param_2,&DAT_1009c480,0x10);
    if (iVar1 == 0) {
      if (param_3 == (undefined4 *)0x0) {
        return;
      }
      ppuVar2 = &PTR_FUN_1009cc5c;
    }
    else {
      iVar1 = FUN_10081e90(param_2,&DAT_1009c490,0x10);
      if (iVar1 == 0) {
        if (param_3 == (undefined4 *)0x0) {
          return;
        }
        ppuVar2 = &PTR_FUN_1009cbd8;
      }
      else {
        iVar1 = FUN_10081e90(param_2,&DAT_1009c4a0,0x10);
        if (iVar1 == 0) {
          if (param_3 == (undefined4 *)0x0) {
            return;
          }
          ppuVar2 = &PTR_FUN_1009cb30;
        }
        else {
          iVar1 = FUN_10081e90(param_2,&DAT_1009c4b0,0x10);
          if (iVar1 != 0) {
            return;
          }
          if (param_3 == (undefined4 *)0x0) {
            return;
          }
          ppuVar2 = &PTR_FUN_1009ca6c;
        }
      }
    }
  }
  *param_3 = ppuVar2;
  FUN_10081d50(param_3,8);
  return;
}

