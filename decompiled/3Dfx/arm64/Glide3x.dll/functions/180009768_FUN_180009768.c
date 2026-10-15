/*
 * FUN_180009768 at 180009768
 * undefined1 __cdecl FUN_180009768(longlong param_1)
 * Address ranges: 180009768-1800097f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_180009768(longlong param_1)

{
  byte bVar1;
  WNDPROC pWVar2;
  
  if (*(char *)(param_1 + 0x66) == '\0') {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined2 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined2 *)(param_1 + 0x67) = 0;
    *(undefined1 *)(param_1 + 0xb0) = 0;
    pWVar2 = FUN_180006148();
    *(WNDPROC *)(param_1 + 0x30) = pWVar2;
    if (pWVar2 != (WNDPROC)0x0) {
      pWVar2 = FUN_180006148();
      if (pWVar2 != (WNDPROC)0x0) {
        uRam000000018006f648 = *(undefined8 *)(pWVar2 + 0xd8);
        _DAT_18006f640 = *(undefined8 *)(pWVar2 + 0xd0);
        uRam000000018006f658 = *(undefined8 *)(pWVar2 + 0xe8);
        PTR_DAT_18006f650 = *(undefined **)(pWVar2 + 0xe0);
        DAT_18006f660 = *(undefined8 *)(pWVar2 + 0xf0);
        FUN_180006938((undefined8 *)pWVar2);
      }
      bVar1 = FUN_180008208();
      if ((bVar1 & 1) != 0) {
        *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 0x857) = 1;
      }
      *(undefined1 *)(param_1 + 0x66) = 1;
    }
  }
  return *(undefined1 *)(param_1 + 0x66);
}

