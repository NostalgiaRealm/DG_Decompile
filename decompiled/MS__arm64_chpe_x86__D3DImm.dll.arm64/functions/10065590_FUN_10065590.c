/*
 * FUN_10065590 at 10065590
 * undefined FUN_10065590(void)
 * Address ranges: 10065590-100655d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10065590(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x88760005;
  if (*(char *)(param_1 + 0xa1) == '\0') {
    uVar1 = 0;
    *(undefined8 *)(param_1 + 0x54) = 0;
    *(undefined8 *)(param_1 + 0x4c) = 0;
    *(undefined8 *)(param_1 + 100) = 0;
    *(undefined8 *)(param_1 + 0x5c) = 0;
    *(undefined8 *)(param_1 + 0x74) = 0;
    *(undefined8 *)(param_1 + 0x6c) = 0;
    *(undefined8 *)(param_1 + 0x84) = 0;
    *(undefined8 *)(param_1 + 0x7c) = 0;
    *(undefined8 *)(param_1 + 0x94) = 0;
    *(undefined8 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0x50;
    *(char *)(param_1 + 0xa1) = '\x01';
  }
  return uVar1;
}

