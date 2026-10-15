/*
 * _grConstantColorValue@4 at 180002b78
 * undefined __cdecl _grConstantColorValue@4(uint param_1)
 * Address ranges: 180002b78-180002bef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grConstantColorValue_4(uint param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *extraout_x10;
  
                    /* 0x2b78  25  _grConstantColorValue@4
                       0x2b78  185  grConstantColorValue */
  lVar2 = FUN_180017788();
  if (*(char *)(lVar2 + 100) != '\0') {
    FUN_180061700((uint *)(lVar2 + 0x60));
    uVar1 = FUN_1800200d0(*(longlong *)(lVar2 + 0x18),param_1);
    if (uVar1 != *(uint *)((longlong)extraout_x10 + 0xf6)) {
      (**(code **)(*extraout_x10 + 0x160))(extraout_x10,uVar1);
      *(uint *)(*(longlong *)(lVar2 + 0x18) + 0xf6) = uVar1;
    }
    FUN_1800616f0((uint *)(lVar2 + 0x60));
  }
  return;
}

