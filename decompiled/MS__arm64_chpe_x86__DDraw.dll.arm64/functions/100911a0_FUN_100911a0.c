/*
 * FUN_100911a0 at 100911a0
 * undefined FUN_100911a0(void)
 * Address ranges: 100911a0-1009124b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100911a0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_10091750(param_2,&DAT_100b17a0,0x10);
  if (iVar1 == 0) {
    iVar1 = param_1 + 0x18;
  }
  else {
    iVar1 = FUN_10091750(param_2,&DAT_100b17b0,0x10);
    if (iVar1 == 0) {
      iVar1 = param_1 + 0x24;
    }
    else {
      iVar1 = FUN_10091750(param_2,&DAT_100b17c0,0x10);
      if (iVar1 == 0) {
        iVar1 = param_1 + 0x30;
      }
      else {
        iVar1 = 0;
        iVar2 = FUN_10091750(param_2,&DAT_100b17d0,0x10);
        if (iVar2 == 0) {
          iVar1 = param_1 + 0x3c;
        }
      }
    }
  }
  return iVar1;
}

