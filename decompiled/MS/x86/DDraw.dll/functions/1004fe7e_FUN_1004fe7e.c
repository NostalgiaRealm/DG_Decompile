/*
 * FUN_1004fe7e at 1004fe7e
 * undefined4 __fastcall FUN_1004fe7e(uint param_1, uint param_2, byte param_3)
 * Address ranges: 1004fe7e-1004feae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1004fe7e(uint param_1,uint param_2,byte param_3)

{
  uint in_EAX;
  uint uVar1;
  
  if (param_1 != param_2) {
    if (param_1 == 0) {
      uVar1 = 0x3fcf;
      if ((param_3 & 5) == 0) {
        uVar1 = 0xcc0;
      }
      in_EAX = uVar1 & param_2;
      if (in_EAX == param_2) {
        param_2 = 0;
      }
      if (param_2 == 0) goto LAB_1004feab;
    }
    return CONCAT31((int3)(in_EAX >> 8),1);
  }
LAB_1004feab:
  return in_EAX & 0xffffff00;
}

