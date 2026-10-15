/*
 * FUN_100feb10 at 100feb10
 * undefined FUN_100feb10(void)
 * Address ranges: 100feb10-100febbb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100feb10(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_100ff610(param_2,&DAT_10129030,0x10);
  if (iVar1 == 0) {
    iVar1 = param_1 + 0x18;
  }
  else {
    iVar1 = FUN_100ff610(param_2,&DAT_10129040,0x10);
    if (iVar1 == 0) {
      iVar1 = param_1 + 0x24;
    }
    else {
      iVar1 = FUN_100ff610(param_2,&DAT_10129050,0x10);
      if (iVar1 == 0) {
        iVar1 = param_1 + 0x30;
      }
      else {
        iVar1 = 0;
        iVar2 = FUN_100ff610(param_2,&DAT_10129060,0x10);
        if (iVar2 == 0) {
          iVar1 = param_1 + 0x3c;
        }
      }
    }
  }
  return iVar1;
}

