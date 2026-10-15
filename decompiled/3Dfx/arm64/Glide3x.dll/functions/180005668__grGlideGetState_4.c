/*
 * _grGlideGetState@4 at 180005668
 * undefined __cdecl _grGlideGetState@4(undefined8 * param_1)
 * Address ranges: 180005668-1800056fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _grGlideGetState_4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
                    /* 0x5668  44  _grGlideGetState@4
                       0x5668  144  grGlideGetState */
  lVar4 = FUN_180008ce0();
  if (*(char *)(lVar4 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar4 + 0x60));
    if (param_1 != (undefined8 *)0x0) {
      thunk_FUN_1800010d8(param_1,(undefined8 *)(*(longlong *)(lVar4 + 0x18) + 0xf0),0x1af);
      uVar3 = uRam000000018006f9f8;
      uVar2 = _DAT_18006f9f0;
      uVar1 = _DAT_18006f9e0;
      *(undefined8 *)((longlong)param_1 + 0x1b7) = uRam000000018006f9e8;
      *(undefined8 *)((longlong)param_1 + 0x1af) = uVar1;
      *(undefined8 *)((longlong)param_1 + 0x1c7) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x1bf) = uVar2;
      uVar3 = uRam000000018006fa18;
      uVar2 = _DAT_18006fa10;
      uVar1 = _DAT_18006fa00;
      *(undefined8 *)((longlong)param_1 + 0x1d7) = uRam000000018006fa08;
      *(undefined8 *)((longlong)param_1 + 0x1cf) = uVar1;
      *(undefined8 *)((longlong)param_1 + 0x1e7) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x1df) = uVar2;
      uVar3 = uRam000000018006fa38;
      uVar2 = _DAT_18006fa30;
      uVar1 = _DAT_18006fa20;
      *(undefined8 *)((longlong)param_1 + 0x1f7) = uRam000000018006fa28;
      *(undefined8 *)((longlong)param_1 + 0x1ef) = uVar1;
      *(undefined8 *)((longlong)param_1 + 0x207) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x1ff) = uVar2;
      uVar1 = _DAT_18006fa40;
      *(undefined8 *)((longlong)param_1 + 0x217) = uRam000000018006fa48;
      *(undefined8 *)((longlong)param_1 + 0x20f) = uVar1;
      (**(code **)(**(longlong **)(lVar4 + 0x18) + 0x1e0))
                (*(longlong **)(lVar4 + 0x18),(longlong)param_1 + 0x21f);
    }
    FUN_1800643d0((uint *)(lVar4 + 0x60));
  }
  return;
}

