/*
 * FUN_1003a3a8 at 1003a3a8
 * undefined FUN_1003a3a8(void)
 * Address ranges: 1003a3a8-1003a45f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1003a3a8(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar1 == 0) {
    FUN_10001c10(0);
  }
  if ((*(uint *)(&DAT_100bd4f0 + *(int *)(param_1 + 0x40) * 0x1a8) >> 10 & 1) == 0) {
    for (iVar1 = *(int *)(param_1 + 0xf4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x110)) {
      if ((*(uint *)(*(int *)(iVar1 + 4) + 200) >> 1 & 1) != 0) {
        FUN_10043a60(*(int *)(param_1 + 0xf4),iVar1,8);
        break;
      }
    }
  }
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return 0;
}

