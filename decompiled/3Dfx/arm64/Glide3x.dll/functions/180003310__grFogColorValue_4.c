/*
 * _grFogColorValue@4 at 180003310
 * undefined __cdecl _grFogColorValue@4(uint param_1)
 * Address ranges: 180003310-18000338f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grFogColorValue_4(uint param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *extraout_x10;
  
                    /* 0x3310  37  _grFogColorValue@4
                       0x3310  137  grFogColorValue */
  lVar2 = FUN_180008ce0();
  if (*(char *)(lVar2 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar2 + 0x60));
    uVar1 = FUN_18000d3f8(*(longlong *)(lVar2 + 0x18),param_1);
    if (uVar1 != *(uint *)((longlong)extraout_x10 + 0x143)) {
      (**(code **)(*extraout_x10 + 0x1c0))(extraout_x10,uVar1);
      *(uint *)(*(longlong *)(lVar2 + 0x18) + 0x143) = uVar1;
    }
    FUN_1800643d0((uint *)(lVar2 + 0x60));
  }
  return;
}

