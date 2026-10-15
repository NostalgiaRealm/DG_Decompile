/*
 * FUN_140011ff8 at 140011ff8
 * undefined1 __cdecl FUN_140011ff8(longlong param_1)
 * Address ranges: 140011ff8-14001205b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_140011ff8(longlong param_1)

{
  char cVar1;
  
  if (((*(char *)(param_1 + 0x23) == '\0') &&
      (FUN_140011fb8(param_1), *(char *)(param_1 + 0x21) != '\0')) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), cVar1 != '\0')) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
    *(undefined1 *)(param_1 + 0x23) = 1;
  }
  return *(undefined1 *)(param_1 + 0x23);
}

