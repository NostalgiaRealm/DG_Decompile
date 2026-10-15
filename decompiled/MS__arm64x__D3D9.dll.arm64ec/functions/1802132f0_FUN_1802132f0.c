/*
 * FUN_1802132f0 at 1802132f0
 * undefined FUN_1802132f0(void)
 * Address ranges: 1802132f0-18021338f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1802132f0(int param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 extraout_x9;
  
  if ((0x10 < param_1 - 0x40U) || ((0x10003U >> (ulonglong)(param_1 - 0x40U & 0x1f) & 1) == 0)) {
    if ((param_1 - 0x51U & 0xfffcffff) == 0 && param_1 != 0x30051) {
      param_3 = param_3 & 0xf7b000;
      uVar1 = 0x108086a;
      goto LAB_180213370;
    }
    if (param_1 == 0x20040 || (param_1 - 0x10040U & 0xfffeffef) != 0) {
      return;
    }
  }
  uVar1 = FUN_180213038();
  if (0x4f < uVar1) {
    param_3 = param_3 & 0xffffbfff;
  }
  param_3 = param_3 & 0xfff000;
  uVar1 = 0x100086a;
  param_2 = extraout_x9;
LAB_180213370:
  FUN_180215058(param_2,1,param_3 | uVar1,param_4,&stack0xfffffffffffffff0,0);
  return;
}

