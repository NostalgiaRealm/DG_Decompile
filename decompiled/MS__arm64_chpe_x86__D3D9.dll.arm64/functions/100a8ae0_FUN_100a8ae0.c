/*
 * FUN_100a8ae0 at 100a8ae0
 * undefined FUN_100a8ae0(void)
 * Address ranges: 100a8ae0-100a8bd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100a8ae0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = FUN_101321c0(0x184);
  if (iVar1 != 0) {
    iVar1 = FUN_100aebc8(iVar1,param_1,param_4,param_5,param_7,param_8,param_2,param_3,param_6);
    if (iVar1 != 0) {
      uVar2 = FUN_100ad2d0(iVar1);
      if ((uVar2 & 1) != 0) {
        return iVar1 + 0x88;
      }
      FUN_100aedb0(iVar1);
      FUN_10132260(iVar1,0x184);
    }
  }
  return 0;
}

