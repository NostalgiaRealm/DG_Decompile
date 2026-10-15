/*
 * FUN_18000aa08 at 18000aa08
 * undefined __cdecl FUN_18000aa08(longlong param_1, undefined8 * param_2, byte param_3)
 * Address ranges: 18000aa08-18000ab03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18000aa08(longlong param_1,undefined8 *param_2,byte param_3)

{
  int iVar1;
  
  if (*(char *)(param_1 + 100) != '\0') {
    FUN_1800643e0((uint *)(param_1 + 0x60));
    if (param_2 != (undefined8 *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x1d8))(*(longlong **)(param_1 + 0x18),param_2)
      ;
      thunk_FUN_1800010d8((undefined8 *)(*(longlong *)(param_1 + 0x18) + 0xf0),param_2,0x1af);
      iVar1 = 0;
      if (0 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x833)) {
        do {
          FUN_180008ae0(param_1,iVar1,1);
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x833));
      }
      FUN_18000a6b8(param_1);
      if ((param_3 & 1) == 0) {
        uRam000000018006f9e8 = *(undefined8 *)((longlong)param_2 + 0x1b7);
        _DAT_18006f9e0 = *(undefined8 *)((longlong)param_2 + 0x1af);
        uRam000000018006f9f8 = *(undefined8 *)((longlong)param_2 + 0x1c7);
        _DAT_18006f9f0 = *(undefined8 *)((longlong)param_2 + 0x1bf);
        uRam000000018006fa08 = *(undefined8 *)((longlong)param_2 + 0x1d7);
        _DAT_18006fa00 = *(undefined8 *)((longlong)param_2 + 0x1cf);
        uRam000000018006fa18 = *(undefined8 *)((longlong)param_2 + 0x1e7);
        _DAT_18006fa10 = *(undefined8 *)((longlong)param_2 + 0x1df);
        uRam000000018006fa28 = *(undefined8 *)((longlong)param_2 + 0x1f7);
        _DAT_18006fa20 = *(undefined8 *)((longlong)param_2 + 0x1ef);
        uRam000000018006fa38 = *(undefined8 *)((longlong)param_2 + 0x207);
        _DAT_18006fa30 = *(undefined8 *)((longlong)param_2 + 0x1ff);
        uRam000000018006fa48 = *(undefined8 *)((longlong)param_2 + 0x217);
        _DAT_18006fa40 = *(undefined8 *)((longlong)param_2 + 0x20f);
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x1e8))
                  (*(longlong **)(param_1 + 0x18),(longlong)param_2 + 0x21f);
      }
    }
    FUN_1800643d0((uint *)(param_1 + 0x60));
  }
  return;
}

