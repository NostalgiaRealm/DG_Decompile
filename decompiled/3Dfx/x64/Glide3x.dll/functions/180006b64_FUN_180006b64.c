/*
 * FUN_180006b64 at 180006b64
 * undefined __fastcall FUN_180006b64(WNDPROC param_1)
 * Address ranges: 180006b64-180006c14
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code FUN_180006b64(WNDPROC param_1)

{
  char cVar1;
  WNDPROC pWVar2;
  WNDPROC pWVar3;
  
  if (param_1[0x66] == (WNDPROC)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined2 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined2 *)(param_1 + 0x67) = 0;
    param_1[0xb0] = (code)0x0;
    pWVar3 = param_1;
    pWVar2 = FUN_180003f68();
    *(WNDPROC *)(param_1 + 0x30) = pWVar2;
    if (pWVar2 != (WNDPROC)0x0) {
      pWVar2 = FUN_180003f68();
      if (pWVar2 != (WNDPROC)0x0) {
        _DAT_18006d640 = *(undefined8 *)(pWVar2 + 0xd0);
        uRam000000018006d648 = *(undefined8 *)(pWVar2 + 0xd8);
        PTR_DAT_18006d650 = *(undefined **)(pWVar2 + 0xe0);
        uRam000000018006d658 = *(undefined8 *)(pWVar2 + 0xe8);
        _DAT_18006d660 = *(undefined8 *)(pWVar2 + 0xf0);
        FUN_180004010((undefined8 *)pWVar2);
        pWVar3 = pWVar2;
      }
      cVar1 = FUN_1800057b0((ulonglong)pWVar3);
      if (cVar1 != '\0') {
        *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 0x857) = 1;
      }
      param_1[0x66] = (code)0x1;
    }
  }
  return param_1[0x66];
}

