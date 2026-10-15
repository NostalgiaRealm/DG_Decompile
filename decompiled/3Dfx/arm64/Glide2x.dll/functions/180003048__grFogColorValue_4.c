/*
 * _grFogColorValue@4 at 180003048
 * undefined __cdecl _grFogColorValue@4(uint param_1)
 * Address ranges: 180003048-1800030c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grFogColorValue_4(uint param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *extraout_x10;
  
                    /* 0x3048  41  _grFogColorValue@4
                       0x3048  198  grFogColorValue */
  lVar2 = FUN_180016878();
  if (*(char *)(lVar2 + 100) != '\0') {
    FUN_1800608b0((uint *)(lVar2 + 0x60));
    uVar1 = FUN_18001f280(*(longlong *)(lVar2 + 0x18),param_1);
    if (uVar1 != *(uint *)((longlong)extraout_x10 + 0x143)) {
      (**(code **)(*extraout_x10 + 0x1a0))(extraout_x10,uVar1);
      *(uint *)(*(longlong *)(lVar2 + 0x18) + 0x143) = uVar1;
    }
    FUN_1800608a0((uint *)(lVar2 + 0x60));
  }
  return;
}

