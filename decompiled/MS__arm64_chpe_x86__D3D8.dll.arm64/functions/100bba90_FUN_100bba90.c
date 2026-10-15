/*
 * FUN_100bba90 at 100bba90
 * undefined FUN_100bba90(void)
 * Address ranges: 100bba90-100bbacb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100bba90(int param_1)

{
  ulonglong uVar1;
  undefined4 uVar2;
  
  uVar1 = ((&DAT_101389b8)[*(int *)(param_1 + -0x4db4) * 0x45] & 0xfffffffffff00000) +
          ((&DAT_101389b8)[*(int *)(param_1 + -0x4db4) * 0x45] & 0x80000) * 2;
  uVar2 = (undefined4)uVar1;
  if (0xffffffff < uVar1) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

