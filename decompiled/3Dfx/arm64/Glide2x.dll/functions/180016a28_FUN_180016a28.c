/*
 * FUN_180016a28 at 180016a28
 * undefined1 __cdecl FUN_180016a28(longlong param_1)
 * Address ranges: 180016a28-180016af3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_180016a28(longlong param_1)

{
  WNDPROC pWVar1;
  undefined1 *puVar2;
  undefined4 uStack_1c;
  
  if (*(char *)(param_1 + 0x66) == '\0') {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined2 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined2 *)(param_1 + 0x67) = 0;
    *(undefined1 *)(param_1 + 0xd8) = 0;
    pWVar1 = FUN_180005f48();
    *(WNDPROC *)(param_1 + 0x30) = pWVar1;
    if (pWVar1 != (WNDPROC)0x0) {
      pWVar1 = FUN_180005f48();
      if (pWVar1 != (WNDPROC)0x0) {
        uRam000000018006b4f8 = *(undefined8 *)(pWVar1 + 0xd8);
        _DAT_18006b4f0 = *(undefined8 *)(pWVar1 + 0xd0);
        uRam000000018006b508 = *(undefined8 *)(pWVar1 + 0xe8);
        PTR_DAT_18006b500 = *(undefined **)(pWVar1 + 0xe0);
        DAT_18006b510 = *(undefined8 *)(pWVar1 + 0xf0);
        FUN_180006738((undefined8 *)pWVar1);
      }
      *(undefined8 *)(param_1 + 0xa8) = 0;
      *(undefined8 *)(param_1 + 0xa0) = 0;
      *(undefined8 *)(param_1 + 0xb8) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0xb0) = 0;
      *(ulonglong *)(param_1 + 0xc0) = CONCAT44(uStack_1c,0xffffffff);
      puVar2 = (undefined1 *)thunk_FUN_18005fb88(0x34000);
      *(undefined1 **)(param_1 + 0xa0) = puVar2;
      if (puVar2 == (undefined1 *)0x0) {
        FUN_18005fbc8((LPVOID)0x0);
        *(undefined8 *)(param_1 + 0xa0) = 0;
      }
      else {
        FUN_180060360(puVar2,0,0x34000);
      }
      *(undefined1 *)(param_1 + 0x66) = 1;
    }
  }
  return *(undefined1 *)(param_1 + 0x66);
}

