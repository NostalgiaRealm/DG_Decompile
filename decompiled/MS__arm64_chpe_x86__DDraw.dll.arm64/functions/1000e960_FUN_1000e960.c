/*
 * FUN_1000e960 at 1000e960
 * undefined FUN_1000e960(void)
 * Address ranges: 1000e960-1000ea53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1000e960(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = FUN_100913c0(0x184);
  if (iVar1 != 0) {
    iVar1 = FUN_10014428(iVar1,param_1,param_4,param_5,param_7,param_8,param_2,param_3,param_6);
    if (iVar1 != 0) {
      uVar2 = FUN_10012b30(iVar1);
      if ((uVar2 & 1) != 0) {
        return iVar1 + 0x88;
      }
      FUN_10014610(iVar1);
      FUN_10091460(iVar1,0x184);
    }
  }
  return 0;
}

