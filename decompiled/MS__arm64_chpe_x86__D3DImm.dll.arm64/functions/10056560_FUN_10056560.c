/*
 * FUN_10056560 at 10056560
 * undefined FUN_10056560(void)
 * Address ranges: 10056560-100565f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10056560(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0x80070057;
  if ((param_3 != 0) && (param_2 != 0 && param_2 < 0x18)) {
    uVar2 = *(undefined4 *)(&DAT_1009e680 + param_2 * 4);
    iVar1 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
    if (iVar1 == 0) {
      FUN_1004bc70(0);
    }
    FUN_10005170(param_1,uVar2,param_3);
    uVar2 = 0;
    (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  }
  return uVar2;
}

