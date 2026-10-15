/*
 * FUN_100b58d0 at 100b58d0
 * undefined FUN_100b58d0(void)
 * Address ranges: 100b58d0-100b59c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100b58d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = FUN_101321c0(0x1f0);
  if (iVar1 != 0) {
    iVar1 = FUN_100c0458(iVar1,param_1,param_4,param_5,param_7,param_8,param_2,param_3,param_6);
    if (iVar1 != 0) {
      uVar2 = FUN_100bef90(iVar1);
      if ((uVar2 & 1) != 0) {
        return iVar1 + 0xc0;
      }
      FUN_100c0650(iVar1);
      FUN_10132260(iVar1,0x1f0);
    }
  }
  return 0;
}

