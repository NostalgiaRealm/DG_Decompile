/*
 * FUN_180001380 at 180001380
 * undefined __cdecl FUN_180001380(void)
 * Address ranges: 180001380-1800013af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180001380(void)

{
  undefined1 *puVar1;
  longlong in_x15;
  undefined1 *puVar2;
  longlong in_x18;
  
  puVar2 = *(undefined1 **)(in_x18 + 0x10);
  puVar1 = (undefined1 *)0x0;
  if ((undefined1 *)(in_x15 * 0x10) <= &stack0x00000000) {
    puVar1 = &stack0x00000000 + in_x15 * -0x10;
  }
  if (puVar2 <= puVar1) {
    return;
  }
  do {
    puVar2 = puVar2 + -0x1000;
  } while (puVar2 != (undefined1 *)((ulonglong)puVar1 & 0xfffffffffffff000));
  return;
}

