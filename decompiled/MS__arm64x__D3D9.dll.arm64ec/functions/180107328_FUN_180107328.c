/*
 * FUN_180107328 at 180107328
 * undefined FUN_180107328(void)
 * Address ranges: 180107328-18010737f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180107328(int param_1)

{
  undefined8 uVar1;
  
  if (((((((param_1 == 0x59565955 || param_1 == 0x32595559) || param_1 == 0x31545844) ||
         param_1 == 0x32545844) || param_1 == 0x33545844) || param_1 == 0x34545844) ||
       param_1 == 0x35545844) || (uVar1 = 0, (param_1 + 0xceb6abbfU & 0xfeffffff) == 0)) {
    uVar1 = 1;
  }
  return uVar1;
}

