/*
 * FUN_180015564 at 180015564
 * undefined1 __fastcall FUN_180015564(longlong param_1)
 * Address ranges: 180015564-180015666
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_180015564(longlong param_1)

{
  WNDPROC pWVar1;
  undefined1 *puVar2;
  undefined4 local_14;
  
  if (*(char *)(param_1 + 0x66) == '\0') {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined2 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined2 *)(param_1 + 0x67) = 0;
    *(undefined1 *)(param_1 + 0xd8) = 0;
    pWVar1 = FUN_1800041ec();
    *(WNDPROC *)(param_1 + 0x30) = pWVar1;
    if (pWVar1 != (WNDPROC)0x0) {
      pWVar1 = FUN_1800041ec();
      if (pWVar1 != (WNDPROC)0x0) {
        _DAT_18006c500 = *(undefined8 *)(pWVar1 + 0xd0);
        uRam000000018006c508 = *(undefined8 *)(pWVar1 + 0xd8);
        PTR_DAT_18006c510 = *(undefined **)(pWVar1 + 0xe0);
        uRam000000018006c518 = *(undefined8 *)(pWVar1 + 0xe8);
        _DAT_18006c520 = *(undefined8 *)(pWVar1 + 0xf0);
        FUN_1800043e8((undefined8 *)pWVar1);
      }
      *(undefined8 *)(param_1 + 0xa0) = 0;
      *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
      *(undefined4 *)(param_1 + 0xbc) = 0xffffffff;
      *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
      *(undefined4 *)(param_1 + 0xc4) = local_14;
      *(undefined8 *)(param_1 + 0xa8) = 0;
      *(undefined8 *)(param_1 + 0xb0) = 0;
      puVar2 = (undefined1 *)thunk_FUN_18005db9c(0x34000);
      *(undefined1 **)(param_1 + 0xa0) = puVar2;
      if (puVar2 == (undefined1 *)0x0) {
        FUN_18005dbc0((LPVOID)0x0);
        *(undefined8 *)(param_1 + 0xa0) = 0;
      }
      else {
        FUN_18005f814(puVar2,0,0x34000);
      }
      *(undefined1 *)(param_1 + 0x66) = 1;
    }
  }
  return *(undefined1 *)(param_1 + 0x66);
}

