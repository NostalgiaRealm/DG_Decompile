/*
 * FUN_100e3760 at 100e3760
 * undefined FUN_100e3760(void)
 * Address ranges: 100e3760-100e379b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100e3760(int param_1)

{
  ulonglong uVar1;
  undefined4 uVar2;
  
  uVar1 = ((&DAT_10171578)[*(int *)(param_1 + -0x58c4) * 0x45] & 0xfffffffffff00000) +
          ((&DAT_10171578)[*(int *)(param_1 + -0x58c4) * 0x45] & 0x80000) * 2;
  uVar2 = (undefined4)uVar1;
  if (0xffffffff < uVar1) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

