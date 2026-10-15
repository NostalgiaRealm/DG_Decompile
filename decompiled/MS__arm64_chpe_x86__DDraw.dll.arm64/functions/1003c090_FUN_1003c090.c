/*
 * FUN_1003c090 at 1003c090
 * undefined FUN_1003c090(void)
 * Address ranges: 1003c090-1003c12f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1003c090(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar1 == 0) {
    FUN_10001c10(0);
  }
  iVar1 = 0;
  uVar2 = 0;
  if (*(uint *)(param_1 + 300) != 0) {
    do {
      iVar1 = FUN_1004f590(*(undefined4 *)(*(int *)(param_1 + 0x128) + uVar2 * 4));
      if (iVar1 < 0) break;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 300));
  }
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return iVar1;
}

