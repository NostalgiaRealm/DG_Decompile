/*
 * FUN_1801faba0 at 1801faba0
 * undefined FUN_1801faba0(void)
 * Address ranges: 1801faba0-1801fabd7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1801faba0(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (*(uint *)(param_1 + 0x328) != 0) {
    uVar2 = 0;
    do {
      if (*(int *)(*(longlong *)(param_1 + 800) + uVar2 * 4) == param_2) {
        return uVar2;
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x328));
  }
  return 0xffffffff;
}

