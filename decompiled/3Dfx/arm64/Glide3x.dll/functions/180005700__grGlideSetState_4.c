/*
 * _grGlideSetState@4 at 180005700
 * undefined __cdecl _grGlideSetState@4(undefined8 * param_1)
 * Address ranges: 180005700-1800057f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _grGlideSetState_4(undefined8 *param_1)

{
  longlong lVar1;
  int iVar2;
  
                    /* 0x5700  47  _grGlideSetState@4
                       0x5700  147  grGlideSetState */
  lVar1 = FUN_180008ce0();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar1 + 0x60));
    if (param_1 != (undefined8 *)0x0) {
      (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x1d8))(*(longlong **)(lVar1 + 0x18),param_1);
      thunk_FUN_1800010d8((undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0xf0),param_1,0x1af);
      iVar2 = 0;
      if (0 < *(int *)(*(longlong *)(lVar1 + 0x30) + 0x833)) {
        do {
          FUN_180008ae0(lVar1,iVar2,1);
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(*(longlong *)(lVar1 + 0x30) + 0x833));
      }
      FUN_18000a6b8(lVar1);
      uRam000000018006f9e8 = *(undefined8 *)((longlong)param_1 + 0x1b7);
      _DAT_18006f9e0 = *(undefined8 *)((longlong)param_1 + 0x1af);
      uRam000000018006f9f8 = *(undefined8 *)((longlong)param_1 + 0x1c7);
      _DAT_18006f9f0 = *(undefined8 *)((longlong)param_1 + 0x1bf);
      uRam000000018006fa08 = *(undefined8 *)((longlong)param_1 + 0x1d7);
      _DAT_18006fa00 = *(undefined8 *)((longlong)param_1 + 0x1cf);
      uRam000000018006fa18 = *(undefined8 *)((longlong)param_1 + 0x1e7);
      _DAT_18006fa10 = *(undefined8 *)((longlong)param_1 + 0x1df);
      uRam000000018006fa28 = *(undefined8 *)((longlong)param_1 + 0x1f7);
      _DAT_18006fa20 = *(undefined8 *)((longlong)param_1 + 0x1ef);
      uRam000000018006fa38 = *(undefined8 *)((longlong)param_1 + 0x207);
      _DAT_18006fa30 = *(undefined8 *)((longlong)param_1 + 0x1ff);
      uRam000000018006fa48 = *(undefined8 *)((longlong)param_1 + 0x217);
      _DAT_18006fa40 = *(undefined8 *)((longlong)param_1 + 0x20f);
      (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x1e8))
                (*(longlong **)(lVar1 + 0x18),(longlong)param_1 + 0x21f);
    }
    FUN_1800643d0((uint *)(lVar1 + 0x60));
  }
  return;
}

