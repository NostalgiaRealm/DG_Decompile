/*
 * FUN_10065390 at 10065390
 * undefined FUN_10065390(void)
 * Address ranges: 10065390-1006541b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10065390(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar1 == 0) {
    FUN_1004bc70(0);
  }
  if (*(int *)(param_1[0x12] + 0xc) != 0) {
    FUN_10063550(*(int *)(param_1[0x12] + 0xc),param_1);
  }
  FUN_10065a00(param_1 + 1);
  *param_1 = &PTR_FUN_1009ca40;
  FUN_10081d50(param_1,0xa4);
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return;
}

