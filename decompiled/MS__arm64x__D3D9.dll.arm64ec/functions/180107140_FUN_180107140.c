/*
 * FUN_180107140 at 180107140
 * undefined FUN_180107140(void)
 * Address ranges: 180107140-1801071c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180107140(int param_1)

{
  undefined8 uVar1;
  
  if ((((param_1 == 0x31495441) || (param_1 == 0x31545844)) || (param_1 == 0x32495441)) ||
     (param_1 == 0x32545844)) {
LAB_1801071bc:
    uVar1 = 4;
  }
  else {
    if (param_1 != 0x32595559) {
      if (((param_1 == 0x33545844) || (param_1 == 0x34545844)) || (param_1 == 0x35545844))
      goto LAB_1801071bc;
      if (param_1 != 0x59565955) {
        return 1;
      }
    }
    uVar1 = 2;
  }
  return uVar1;
}

