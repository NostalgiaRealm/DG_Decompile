/*
 * _grChromakeyValue@4 at 180002890
 * undefined __cdecl _grChromakeyValue@4(uint param_1)
 * Address ranges: 180002890-18000290f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grChromakeyValue_4(uint param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *extraout_x10;
  
                    /* 0x2890  20  _grChromakeyValue@4
                       0x2890  181  grChromakeyValue */
  lVar2 = FUN_180017788();
  if (*(char *)(lVar2 + 100) != '\0') {
    FUN_180061700((uint *)(lVar2 + 0x60));
    uVar1 = FUN_1800200d0(*(longlong *)(lVar2 + 0x18),param_1);
    if (uVar1 != *(uint *)((longlong)extraout_x10 + 0x10a)) {
      (**(code **)(*extraout_x10 + 0x158))(extraout_x10,uVar1);
      *(uint *)(*(longlong *)(lVar2 + 0x18) + 0x10a) = uVar1;
    }
    FUN_1800616f0((uint *)(lVar2 + 0x60));
  }
  return;
}

