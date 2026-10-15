/*
 * FUN_100e0a68 at 100e0a68
 * undefined FUN_100e0a68(void)
 * Address ranges: 100e0a68-100e0b17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100e0a68(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = FUN_100febf0(0x968);
  if ((iVar1 != 0) &&
     (iVar1 = FUN_100e03a8(iVar1,param_1,param_2,param_3,param_4,param_5), iVar1 != 0)) {
    uVar2 = FUN_100e0b18(iVar1);
    if ((uVar2 & 1) != 0) {
      return iVar1;
    }
    FUN_100e0560(iVar1);
    FUN_100fec90(iVar1,0x968);
  }
  return 0;
}

