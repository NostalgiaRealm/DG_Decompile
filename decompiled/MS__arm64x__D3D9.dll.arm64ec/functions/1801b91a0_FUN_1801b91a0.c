/*
 * FUN_1801b91a0 at 1801b91a0
 * undefined FUN_1801b91a0(void)
 * Address ranges: 1801b91a0-1801b91ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1801b91a0(longlong param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (*(uint *)(param_1 + 0x100b8) != 0) {
    uVar2 = 0;
    do {
      if (param_2 == **(longlong **)(uVar2 * 0x30 + *(longlong *)(param_1 + 0x100b0))) {
        return uVar2 * 0x30 + *(longlong *)(param_1 + 0x100b0);
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x100b8));
  }
  return 0;
}

