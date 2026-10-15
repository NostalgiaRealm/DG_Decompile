/*
 * FUN_1004f4e0 at 1004f4e0
 * undefined FUN_1004f4e0(void)
 * Address ranges: 1004f4e0-1004f57f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1004f4e0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar1 == 0) {
    FUN_10001c10(0);
  }
  uVar2 = 0x80070057;
  if ((param_2 == 0) && (uVar2 = 0x887601c2, *(char *)(param_1 + 8) == '\0')) {
    uVar2 = 0x88760294;
    if (-1 < (int)*(uint *)(param_1 + 0x1b8)) {
      if ((*(uint *)(param_1 + 0x1b8) >> 0xb & 1) != 0) {
        iVar1 = *(int *)(param_1 + 0x1d8);
        if (iVar1 != 0) {
          *(int *)(param_1 + 0x1d8) = iVar1 + -1;
        }
      }
      uVar2 = 0;
    }
  }
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return uVar2;
}

