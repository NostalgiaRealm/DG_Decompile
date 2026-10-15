/*
 * _grConstantColorValue@4 at 180002b80
 * undefined __cdecl _grConstantColorValue@4(uint param_1)
 * Address ranges: 180002b80-180002bf7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grConstantColorValue_4(uint param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *extraout_x10;
  
                    /* 0x2b80  25  _grConstantColorValue@4
                       0x2b80  181  grConstantColorValue */
  lVar2 = FUN_180016878();
  if (*(char *)(lVar2 + 100) != '\0') {
    FUN_1800608b0((uint *)(lVar2 + 0x60));
    uVar1 = FUN_18001f280(*(longlong *)(lVar2 + 0x18),param_1);
    if (uVar1 != *(uint *)((longlong)extraout_x10 + 0xf6)) {
      (**(code **)(*extraout_x10 + 0x160))(extraout_x10,uVar1);
      *(uint *)(*(longlong *)(lVar2 + 0x18) + 0xf6) = uVar1;
    }
    FUN_1800608a0((uint *)(lVar2 + 0x60));
  }
  return;
}

