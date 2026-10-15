/*
 * FUN_1005f018 at 1005f018
 * undefined4 __stdcall FUN_1005f018(int * param_1, int * param_2)
 * Address ranges: 1005f018-1005f04c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1005f018(int *param_1,int *param_2)

{
  uint in_EAX;
  uint uVar1;
  
  if ((param_2[7] == 0) && (param_1[7] == 0)) {
    in_EAX = (**(code **)(*param_2 + 0x54))();
    if ((char)in_EAX == '\0') {
      in_EAX = (**(code **)(*param_1 + 0x54))();
      if ((char)in_EAX == '\0') goto LAB_1005f046;
    }
    uVar1 = CONCAT31((int3)(in_EAX >> 8),1);
  }
  else {
LAB_1005f046:
    uVar1 = in_EAX & 0xffffff00;
  }
  return uVar1;
}

