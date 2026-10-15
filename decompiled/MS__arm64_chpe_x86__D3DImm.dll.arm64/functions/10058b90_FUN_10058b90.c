/*
 * FUN_10058b90 at 10058b90
 * undefined FUN_10058b90(void)
 * Address ranges: 10058b90-10058c6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10058b90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_30 [16];
  
  iVar1 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar1 == 0) {
    FUN_1004bc70(0);
  }
  FUN_10096840(auStack_30);
  uVar2 = FUN_10003950(param_1,param_2,param_3,0x1009e450,0x1009e4b0,0x18,0x28,&DAT_1009e550,
                       &DAT_1009e560);
  FUN_10096790(auStack_30);
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar2;
}

