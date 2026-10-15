/*
 * FUN_100efd30 at 100efd30
 * undefined FUN_100efd30(void)
 * Address ranges: 100efd30-100efdf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100efd30(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  undefined4 extraout_w1;
  undefined4 local_20;
  undefined4 uStack_1c;
  uint local_18;
  
  if ((param_1 - 0x51U & 0xfffcffff) == 0 && param_1 != 0x30051) {
    local_18 = param_3 & 0xf7b000 | 0x108086a;
    uStack_1c = 1;
    local_20 = param_2;
    FUN_100ef760(&local_20,0xc);
  }
  else if (((param_1 - 0x10040U & 0xfffeffef) == 0 && param_1 != 0x20040) ||
          ((param_1 - 0x40U < 0x11 && ((0x10003U >> (ulonglong)(param_1 - 0x40U & 0x1f) & 1) != 0)))
          ) {
    uVar1 = FUN_100ef9e8(param_1);
    if (0x4f < uVar1) {
      param_3 = param_3 & 0xffffbfff;
    }
    local_18 = param_3 & 0xfff000 | 0x100086a;
    uStack_1c = 1;
    local_20 = extraout_w1;
    FUN_100ef760(&local_20,0xc);
  }
  return;
}

