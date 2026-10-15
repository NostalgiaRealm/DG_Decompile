/*
 * FUN_1004c990 at 1004c990
 * undefined FUN_1004c990(void)
 * Address ranges: 1004c990-1004ca3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1004c990(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_10083af0(param_2,&DAT_1009e7b0,0x10);
  if (iVar1 == 0) {
    iVar1 = param_1 + 0x18;
  }
  else {
    iVar1 = FUN_10083af0(param_2,&DAT_1009e7c0,0x10);
    if (iVar1 == 0) {
      iVar1 = param_1 + 0x24;
    }
    else {
      iVar1 = FUN_10083af0(param_2,&DAT_1009e7d0,0x10);
      if (iVar1 == 0) {
        iVar1 = param_1 + 0x30;
      }
      else {
        iVar1 = 0;
        iVar2 = FUN_10083af0(param_2,&DAT_1009e7e0,0x10);
        if (iVar2 == 0) {
          iVar1 = param_1 + 0x3c;
        }
      }
    }
  }
  return iVar1;
}

