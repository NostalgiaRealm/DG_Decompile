/*
 * FUN_100472d0 at 100472d0
 * undefined FUN_100472d0(void)
 * Address ranges: 100472d0-1004737b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100472d0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1007e450(param_2,&DAT_10098470,0x10);
  if (iVar1 == 0) {
    iVar1 = param_1 + 0x18;
  }
  else {
    iVar1 = FUN_1007e450(param_2,&DAT_10098480,0x10);
    if (iVar1 == 0) {
      iVar1 = param_1 + 0x24;
    }
    else {
      iVar1 = FUN_1007e450(param_2,&DAT_10098490,0x10);
      if (iVar1 == 0) {
        iVar1 = param_1 + 0x30;
      }
      else {
        iVar1 = 0;
        iVar2 = FUN_1007e450(param_2,&DAT_100984a0,0x10);
        if (iVar2 == 0) {
          iVar1 = param_1 + 0x3c;
        }
      }
    }
  }
  return iVar1;
}

