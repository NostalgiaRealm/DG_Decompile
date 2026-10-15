/*
 * _grFogColorValue@4 at 180003040
 * undefined __cdecl _grFogColorValue@4(uint param_1)
 * Address ranges: 180003040-1800030bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grFogColorValue_4(uint param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *extraout_x10;
  
                    /* 0x3040  41  _grFogColorValue@4
                       0x3040  202  grFogColorValue */
  lVar2 = FUN_180017788();
  if (*(char *)(lVar2 + 100) != '\0') {
    FUN_180061700((uint *)(lVar2 + 0x60));
    uVar1 = FUN_1800200d0(*(longlong *)(lVar2 + 0x18),param_1);
    if (uVar1 != *(uint *)((longlong)extraout_x10 + 0x143)) {
      (**(code **)(*extraout_x10 + 0x1a0))(extraout_x10,uVar1);
      *(uint *)(*(longlong *)(lVar2 + 0x18) + 0x143) = uVar1;
    }
    FUN_1800616f0((uint *)(lVar2 + 0x60));
  }
  return;
}

