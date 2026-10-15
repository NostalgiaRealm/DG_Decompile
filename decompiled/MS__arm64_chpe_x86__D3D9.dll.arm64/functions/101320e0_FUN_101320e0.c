/*
 * FUN_101320e0 at 101320e0
 * undefined FUN_101320e0(void)
 * Address ranges: 101320e0-1013218b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_101320e0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_10132550(param_2,&DAT_1015e3c0,0x10);
  if (iVar1 == 0) {
    iVar1 = param_1 + 0x18;
  }
  else {
    iVar1 = FUN_10132550(param_2,&DAT_1015e3d0,0x10);
    if (iVar1 == 0) {
      iVar1 = param_1 + 0x24;
    }
    else {
      iVar1 = FUN_10132550(param_2,&DAT_1015e3e0,0x10);
      if (iVar1 == 0) {
        iVar1 = param_1 + 0x30;
      }
      else {
        iVar1 = 0;
        iVar2 = FUN_10132550(param_2,&DAT_1015e3f0,0x10);
        if (iVar2 == 0) {
          iVar1 = param_1 + 0x3c;
        }
      }
    }
  }
  return iVar1;
}

