/*
 * FUN_100684fa at 100684fa
 * undefined1 __stdcall FUN_100684fa(char param_1, undefined4 * param_2)
 * Address ranges: 100684fa-10068554
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_100684fa(char param_1,undefined4 *param_2)

{
  if ((param_1 != '\0') && (param_1 != '\x01')) {
    if (param_1 == '\x02') {
      *param_2 = 1;
      return 0xf;
    }
    if ((param_1 == '\x03') || (param_1 == '\x04')) {
      *param_2 = 2;
      return 0xf;
    }
    if ((param_1 == '\x05') || (param_1 == '\x06')) {
      *param_2 = 1;
      return 1;
    }
  }
  *param_2 = 3;
  return 0xf;
}

