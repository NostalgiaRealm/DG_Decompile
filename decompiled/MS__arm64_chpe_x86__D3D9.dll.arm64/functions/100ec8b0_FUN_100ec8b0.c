/*
 * FUN_100ec8b0 at 100ec8b0
 * undefined FUN_100ec8b0(void)
 * Address ranges: 100ec8b0-100ec8e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100ec8b0(int param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x8876086c;
  if (param_2 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)(param_1 + -0x28);
    uVar1 = 0;
    param_2[1] = *(undefined8 *)(param_1 + -0x20);
    *param_2 = uVar2;
    param_2[2] = *(undefined8 *)(param_1 + -0x18);
    *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + -0x10);
  }
  return uVar1;
}

