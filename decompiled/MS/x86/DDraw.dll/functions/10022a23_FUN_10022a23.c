/*
 * FUN_10022a23 at 10022a23
 * undefined4 __stdcall FUN_10022a23(int param_1)
 * Address ranges: 10022a23-10022a6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10022a23(int param_1)

{
  uint in_EAX;
  uint *puVar1;
  uint uVar2;
  
  if ((param_1 != 0) && (uVar2 = 0, DAT_100707b8 != 0)) {
    if (DAT_100707b8 == 0) {
      puVar1 = (uint *)&DAT_00000004;
      goto LAB_10022a54;
    }
    do {
      puVar1 = (uint *)(uVar2 * 0x10 + 0xc + DAT_100707b4);
LAB_10022a54:
      in_EAX = *puVar1;
      if (*(int *)(in_EAX + 8) == param_1) {
        return in_EAX & 0xffffff00;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < DAT_100707b8);
  }
  return CONCAT31((int3)(in_EAX >> 8),1);
}

