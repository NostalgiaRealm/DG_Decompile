/*
 * FUN_100028e0 at 100028e0
 * undefined FUN_100028e0(void)
 * Address ranges: 100028e0-10002923
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100028e0(int param_1)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0x28) != 0;
  FUN_10001dc0(param_1,7,bVar1);
  *(uint *)(param_1 + 0x2ac) = (uint)bVar1;
  return;
}

