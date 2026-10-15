/*
 * FUN_10056600 at 10056600
 * undefined FUN_10056600(void)
 * Address ranges: 10056600-1005668b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10056600(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0x80070057;
  if (param_2 < 6 && param_3 != 0) {
    iVar1 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
    if (iVar1 == 0) {
      FUN_1004bc70(0);
    }
    FUN_100056b0(param_1,param_2,param_3);
    uVar2 = 0;
    (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  }
  return uVar2;
}

