/*
 * FUN_10009db0 at 10009db0
 * undefined FUN_10009db0(void)
 * Address ranges: 10009db0-10009e5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10009db0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1007abb0(param_2,&DAT_10094620,0x10);
  if (iVar1 == 0) {
    iVar1 = param_1 + 0x18;
  }
  else {
    iVar1 = FUN_1007abb0(param_2,&DAT_10094630,0x10);
    if (iVar1 == 0) {
      iVar1 = param_1 + 0x24;
    }
    else {
      iVar1 = FUN_1007abb0(param_2,&DAT_10094640,0x10);
      if (iVar1 == 0) {
        iVar1 = param_1 + 0x30;
      }
      else {
        iVar1 = 0;
        iVar2 = FUN_1007abb0(param_2,&DAT_10094650,0x10);
        if (iVar2 == 0) {
          iVar1 = param_1 + 0x3c;
        }
      }
    }
  }
  return iVar1;
}

