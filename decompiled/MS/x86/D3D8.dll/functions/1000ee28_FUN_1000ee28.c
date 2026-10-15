/*
 * FUN_1000ee28 at 1000ee28
 * byte __fastcall FUN_1000ee28(int param_1)
 * Address ranges: 1000ee28-1000ee57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte __fastcall FUN_1000ee28(int param_1)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  
  uVar2 = *(uint *)(param_1 + 0x30) & 2;
  if (*(int *)(param_1 + 0x2c) == 3) {
    bVar1 = 1;
    bVar3 = 4;
  }
  else {
    bVar3 = 5;
    if (*(int *)(param_1 + 0x2c) != 5) {
      return -(uVar2 != 0) & 3;
    }
    bVar1 = 2;
  }
  if (uVar2 != 0) {
    bVar1 = bVar3;
  }
  return bVar1;
}

