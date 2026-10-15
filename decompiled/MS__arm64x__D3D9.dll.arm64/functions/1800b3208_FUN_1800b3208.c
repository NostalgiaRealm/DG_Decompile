/*
 * FUN_1800b3208 at 1800b3208
 * undefined FUN_1800b3208(void)
 * Address ranges: 1800b3208-1800b3267
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800b3208(longlong param_1,longlong param_2)

{
  if (param_2 != *(longlong *)(param_1 + 0xc498)) {
    if (param_2 != 0) {
      FUN_1800015a0(param_2 + 0xc);
    }
    if (*(longlong *)(param_1 + 0xc498) != 0) {
      FUN_1800c85b8();
    }
    *(longlong *)(param_1 + 0xc498) = param_2;
    *(undefined1 *)(param_1 + 0xc50a) = 1;
  }
  return;
}

