/*
 * FUN_10067098 at 10067098
 * undefined FUN_10067098(void)
 * Address ranges: 10067098-1006713b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10067098(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined **ppuVar2;
  
  iVar1 = FUN_10081e90(param_2,&DAT_1009c5d0,0x10);
  if (iVar1 == 0) {
    if (param_3 == (undefined4 *)0x0) {
      return;
    }
    ppuVar2 = &PTR_FUN_1009cddc;
  }
  else {
    iVar1 = FUN_10081e90(param_2,&DAT_1009c560,0x10);
    if (iVar1 == 0) {
      if (param_3 == (undefined4 *)0x0) {
        return;
      }
      ppuVar2 = &PTR_FUN_1009cdbc;
    }
    else {
      iVar1 = FUN_10081e90(param_2,&DAT_1009c570,0x10);
      if (iVar1 != 0) {
        return;
      }
      if (param_3 == (undefined4 *)0x0) {
        return;
      }
      ppuVar2 = &PTR_FUN_1009cd98;
    }
  }
  *param_3 = ppuVar2;
  FUN_10081d50(param_3,8);
  return;
}

