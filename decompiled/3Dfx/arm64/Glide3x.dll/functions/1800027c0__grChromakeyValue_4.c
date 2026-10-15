/*
 * _grChromakeyValue@4 at 1800027c0
 * undefined __cdecl _grChromakeyValue@4(uint param_1)
 * Address ranges: 1800027c0-18000283f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grChromakeyValue_4(uint param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *extraout_x10;
  
                    /* 0x27c0  13  _grChromakeyValue@4
                       0x27c0  113  grChromakeyValue */
  lVar2 = FUN_180008ce0();
  if (*(char *)(lVar2 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar2 + 0x60));
    uVar1 = FUN_18000d3f8(*(longlong *)(lVar2 + 0x18),param_1);
    if (uVar1 != *(uint *)((longlong)extraout_x10 + 0x10a)) {
      (**(code **)(*extraout_x10 + 0x178))(extraout_x10,uVar1);
      *(uint *)(*(longlong *)(lVar2 + 0x18) + 0x10a) = uVar1;
    }
    FUN_1800643d0((uint *)(lVar2 + 0x60));
  }
  return;
}

