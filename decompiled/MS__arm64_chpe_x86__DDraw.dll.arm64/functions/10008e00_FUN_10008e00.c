/*
 * FUN_10008e00 at 10008e00
 * undefined FUN_10008e00(void)
 * Address ranges: 10008e00-10008e77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_10008e00(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  
  FUN_10008d08(param_1);
  if ((*(uint *)(param_1 + 0x34) >> 4 & 1) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_10007270(param_1,*(undefined4 *)(param_1 + 0xc4),
                         *(int *)(param_1 + 0x10) * 0x40 + 0xfffU & 0xfffff000,param_4,
                         *(char *)(param_1 + 0x48) == '\0');
  }
  return uVar1;
}

