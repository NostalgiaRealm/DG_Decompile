/*
 * FUN_100fb840 at 100fb840
 * undefined FUN_100fb840(void)
 * Address ranges: 100fb840-100fb8db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100fb840(int param_1,char param_2)

{
  if (*(int *)(param_1 + 0x330) != 0) {
    *(int *)(param_1 + 0x330) = 0;
    *(undefined4 *)(param_1 + 0x334) = 0;
    (*(code *)PTR_FUN_10134044)(*(undefined4 *)(param_1 + 0x338));
    (*(code *)PTR_FUN_10134044)(*(undefined4 *)(param_1 + 0x33c));
    *(undefined8 *)(param_1 + 0x338) = 0;
    if (param_2 != '\0') {
      FUN_100ff660(param_1 + 0x54c,param_1 + 0x340,0x20c);
      *(undefined1 *)(param_1 + 0x759) = 1;
      return 1;
    }
  }
  return 0;
}

