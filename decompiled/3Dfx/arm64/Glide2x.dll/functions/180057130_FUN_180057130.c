/*
 * FUN_180057130 at 180057130
 * ulonglong __cdecl FUN_180057130(longlong param_1, int param_2)
 * Address ranges: 180057130-180057167
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180057130(longlong param_1,int param_2)

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

