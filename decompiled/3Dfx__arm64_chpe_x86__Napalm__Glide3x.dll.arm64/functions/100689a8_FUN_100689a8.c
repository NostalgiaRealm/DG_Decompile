/*
 * FUN_100689a8 at 100689a8
 * undefined FUN_100689a8(void)
 * Address ranges: 100689a8-10068a57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100689a8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = FUN_10083310(0x968);
  if ((iVar1 != 0) &&
     (iVar1 = FUN_100682e8(iVar1,param_1,param_2,param_3,param_4,param_5), iVar1 != 0)) {
    uVar2 = FUN_10068a58(iVar1);
    if ((uVar2 & 1) != 0) {
      return iVar1;
    }
    FUN_100684a0(iVar1);
    FUN_100833b0(iVar1,0x968);
  }
  return 0;
}

