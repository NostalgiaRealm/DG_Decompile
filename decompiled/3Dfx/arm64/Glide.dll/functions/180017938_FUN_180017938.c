/*
 * FUN_180017938 at 180017938
 * undefined1 __cdecl FUN_180017938(longlong param_1)
 * Address ranges: 180017938-180017a03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_180017938(longlong param_1)

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
    pWVar1 = FUN_180006e60();
    *(WNDPROC *)(param_1 + 0x30) = pWVar1;
    if (pWVar1 != (WNDPROC)0x0) {
      pWVar1 = FUN_180006e60();
      if (pWVar1 != (WNDPROC)0x0) {
        uRam000000018006c4f8 = *(undefined8 *)(pWVar1 + 0xd8);
        _DAT_18006c4f0 = *(undefined8 *)(pWVar1 + 0xd0);
        uRam000000018006c508 = *(undefined8 *)(pWVar1 + 0xe8);
        PTR_DAT_18006c500 = *(undefined **)(pWVar1 + 0xe0);
        DAT_18006c510 = *(undefined8 *)(pWVar1 + 0xf0);
        FUN_180007650((undefined8 *)pWVar1);
      }
      *(undefined8 *)(param_1 + 0xa8) = 0;
      *(undefined8 *)(param_1 + 0xa0) = 0;
      *(undefined8 *)(param_1 + 0xb8) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0xb0) = 0;
      *(ulonglong *)(param_1 + 0xc0) = CONCAT44(uStack_1c,0xffffffff);
      puVar2 = (undefined1 *)thunk_FUN_1800609d8(0x34000);
      *(undefined1 **)(param_1 + 0xa0) = puVar2;
      if (puVar2 == (undefined1 *)0x0) {
        FUN_180060a18((LPVOID)0x0);
        *(undefined8 *)(param_1 + 0xa0) = 0;
      }
      else {
        FUN_1800611b0(puVar2,0,0x34000);
      }
      *(undefined1 *)(param_1 + 0x66) = 1;
    }
  }
  return *(undefined1 *)(param_1 + 0x66);
}

