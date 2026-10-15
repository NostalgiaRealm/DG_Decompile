/*
 * FUN_1801071f0 at 1801071f0
 * undefined FUN_1801071f0(void)
 * Address ranges: 1801071f0-180107273
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801071f0(int param_1)

{
  undefined8 uVar1;
  
  if ((((param_1 == 0x31495441) || (param_1 == 0x31545844)) || (param_1 == 0x32495441)) ||
     (param_1 == 0x32545844)) {
LAB_18010726c:
    uVar1 = 4;
  }
  else {
    if (param_1 != 0x32595559) {
      if (((param_1 == 0x33545844) || (param_1 == 0x34545844)) || (param_1 == 0x35545844))
      goto LAB_18010726c;
      if (param_1 != 0x59565955) {
        return 1;
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}

