/*
 * FUN_1008e1f8 at 1008e1f8
 * undefined FUN_1008e1f8(void)
 * Address ranges: 1008e1f8-1008e293
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1008e1f8(int param_1,char param_2)

{
  if (*(int *)(param_1 + 0x330) != 0) {
    *(int *)(param_1 + 0x330) = 0;
    *(undefined4 *)(param_1 + 0x334) = 0;
    (*(code *)PTR_FUN_100ba06c)(*(undefined4 *)(param_1 + 0x338));
    (*(code *)PTR_FUN_100ba06c)(*(undefined4 *)(param_1 + 0x33c));
    *(undefined8 *)(param_1 + 0x338) = 0;
    if (param_2 != '\0') {
      FUN_100917a0(param_1 + 0x54c,param_1 + 0x340,0x20c);
      *(undefined1 *)(param_1 + 0x759) = 1;
      return 1;
    }
  }
  return 0;
}

