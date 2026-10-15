/*
 * FUN_1003f35a at 1003f35a
 * undefined4 __fastcall FUN_1003f35a(uint param_1, uint param_2, byte param_3)
 * Address ranges: 1003f35a-1003f38a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1003f35a(uint param_1,uint param_2,byte param_3)

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
      if (param_2 == 0) goto LAB_1003f387;
    }
    return CONCAT31((int3)(in_EAX >> 8),1);
  }
LAB_1003f387:
  return in_EAX & 0xffffff00;
}

