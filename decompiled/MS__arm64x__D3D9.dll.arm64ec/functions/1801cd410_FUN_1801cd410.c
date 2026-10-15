/*
 * FUN_1801cd410 at 1801cd410
 * undefined FUN_1801cd410(void)
 * Address ranges: 1801cd410-1801cd46f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801cd410(longlong param_1,longlong param_2)

{
  if (param_2 != *(longlong *)(param_1 + 0xc498)) {
    if (param_2 != 0) {
      FUN_1801042e0(param_2 + 0xc);
    }
    if (*(longlong *)(param_1 + 0xc498) != 0) {
      FUN_1801e3bf8();
    }
    *(longlong *)(param_1 + 0xc498) = param_2;
    *(undefined1 *)(param_1 + 0xc50a) = 1;
  }
  return;
}

