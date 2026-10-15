/*
 * FUN_14001212c at 14001212c
 * undefined1 __cdecl FUN_14001212c(longlong param_1)
 * Address ranges: 14001212c-14001219f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_14001212c(longlong param_1)

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

