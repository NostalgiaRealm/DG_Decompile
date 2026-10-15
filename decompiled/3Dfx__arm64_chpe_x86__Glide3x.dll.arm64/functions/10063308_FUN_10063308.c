/*
 * FUN_10063308 at 10063308
 * undefined FUN_10063308(void)
 * Address ranges: 10063308-100633b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10063308(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = FUN_1007dc70(0x968);
  if ((iVar1 != 0) &&
     (iVar1 = FUN_10062c48(iVar1,param_1,param_2,param_3,param_4,param_5), iVar1 != 0)) {
    uVar2 = FUN_100633b8(iVar1);
    if ((uVar2 & 1) != 0) {
      return iVar1;
    }
    FUN_10062e00(iVar1);
    FUN_1007dd10(iVar1,0x968);
  }
  return 0;
}

