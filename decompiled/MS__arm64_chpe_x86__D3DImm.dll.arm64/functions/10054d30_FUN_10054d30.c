/*
 * FUN_10054d30 at 10054d30
 * undefined FUN_10054d30(void)
 * Address ranges: 10054d30-10054dcf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10054d30(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar1 == 0) {
    FUN_1004bc70(0);
  }
  uVar2 = 0x80070057;
  if ((param_3 != 0) && (uVar2 = 0x88760307, *(int *)(param_1 + 0x1520) != 0)) {
    FUN_10067d90(*(undefined4 *)(param_1 + 0x151c),param_2,param_3);
    uVar2 = 0;
  }
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar2;
}

