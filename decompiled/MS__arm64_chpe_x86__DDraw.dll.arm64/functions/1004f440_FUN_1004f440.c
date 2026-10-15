/*
 * FUN_1004f440 at 1004f440
 * undefined FUN_1004f440(void)
 * Address ranges: 1004f440-1004f4d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1004f440(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar1 == 0) {
    FUN_10001c10(0);
  }
  uVar2 = 0x80070057;
  if ((param_2 == 0) && (uVar2 = 0x887601c2, *(char *)(param_1 + 8) == '\0')) {
    if ((*(uint *)(param_1 + 0x1b8) >> 0xb & 1) != 0) {
      *(int *)(param_1 + 0x1d8) = *(int *)(param_1 + 0x1d8) + 1;
    }
    uVar2 = 0;
  }
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return uVar2;
}

