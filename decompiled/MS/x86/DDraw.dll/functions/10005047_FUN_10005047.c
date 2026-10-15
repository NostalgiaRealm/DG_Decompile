/*
 * FUN_10005047 at 10005047
 * undefined4 __stdcall FUN_10005047(void)
 * Address ranges: 10005047-1000506a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10005047(void)

{
  uint uVar1;
  undefined4 uVar2;
  int local_8;
  
  uVar1 = FUN_100034ea(&local_8);
  if (uVar1 == 0xffffffff) {
    uVar2 = FUN_10003458(&local_8);
    return uVar2;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}

