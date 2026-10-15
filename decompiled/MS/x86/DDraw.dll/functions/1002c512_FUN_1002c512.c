/*
 * FUN_1002c512 at 1002c512
 * undefined4 __stdcall FUN_1002c512(uint param_1, int param_2)
 * Address ranges: 1002c512-1002c542
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1002c512(uint param_1,int param_2)

{
  uint in_EAX;
  uint uVar1;
  
  if (((param_1 & 0x2000400) == 0) &&
     (((param_1 & 0x20000) == 0 ||
      ((in_EAX = param_2, *(int *)(param_2 + 8) != 0x42 && (*(int *)(param_2 + 8) != 0xff0062))))))
  {
    uVar1 = in_EAX & 0xffffff00;
  }
  else {
    uVar1 = CONCAT31((int3)(in_EAX >> 8),1);
  }
  return uVar1;
}

