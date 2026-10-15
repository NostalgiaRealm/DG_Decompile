/*
 * FUN_140012128 at 140012128
 * undefined1 __cdecl FUN_140012128(longlong param_1)
 * Address ranges: 140012128-14001212b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_140012128(longlong param_1)

{
  char cVar1;
  
  if ((((DAT_14002c2c8 == 0) || (DAT_14002c2c8 == param_1)) &&
      (FUN_140011fb8(param_1), *(char *)(param_1 + 0x22) == '\0')) &&
     (*(char *)(param_1 + 0x21) != '\0')) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    *(char *)(param_1 + 0x22) = cVar1;
    if (cVar1 != '\0') {
      DAT_14002c2c8 = param_1;
      *(undefined1 *)(param_1 + 0x23) = 1;
    }
  }
  return *(undefined1 *)(param_1 + 0x22);
}

