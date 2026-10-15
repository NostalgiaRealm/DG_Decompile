/*
 * FUN_100957b0 at 100957b0
 * undefined FUN_100957b0(void)
 * Address ranges: 100957b0-100958a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100957b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = FUN_100febf0(0x1f0);
  if (iVar1 != 0) {
    iVar1 = FUN_1009fe38(iVar1,param_1,param_4,param_5,param_7,param_8,param_2,param_3,param_6);
    if (iVar1 != 0) {
      uVar2 = FUN_1009e980(iVar1);
      if ((uVar2 & 1) != 0) {
        return iVar1 + 0xc0;
      }
      FUN_100a0030(iVar1);
      FUN_100fec90(iVar1,0x1f0);
    }
  }
  return 0;
}

