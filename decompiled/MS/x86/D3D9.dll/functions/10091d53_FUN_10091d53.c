/*
 * FUN_10091d53 at 10091d53
 * undefined4 __stdcall FUN_10091d53(int param_1)
 * Address ranges: 10091d53-10091d71
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10091d53(int param_1)

{
  undefined4 in_EAX;
  
  if (((*(int *)(param_1 + 0x10) != 0) && (*(int *)(param_1 + 0x10) != 1)) ||
     (in_EAX = 0, *(int *)(param_1 + 0x14) != 0)) {
    in_EAX = CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  return in_EAX;
}

