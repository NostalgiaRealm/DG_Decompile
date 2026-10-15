/*
 * FUN_10008dc3 at 10008dc3
 * undefined4 __fastcall FUN_10008dc3(int param_1)
 * Address ranges: 10008dc3-10008dee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10008dc3(int param_1)

{
  uint uVar1;
  undefined1 uVar2;
  
  uVar2 = 0;
  uVar1 = 0;
  while (((*(uint *)(param_1 + 0x520 + uVar1 * 100) & 0x30000) == 0 &&
         (*(char *)(param_1 + 0x554 + uVar1 * 100) == '\0'))) {
    uVar1 = uVar1 + 1;
    if (7 < uVar1) {
LAB_10008deb:
      return CONCAT31((int3)(uVar1 >> 8),uVar2);
    }
  }
  uVar2 = 1;
  goto LAB_10008deb;
}

