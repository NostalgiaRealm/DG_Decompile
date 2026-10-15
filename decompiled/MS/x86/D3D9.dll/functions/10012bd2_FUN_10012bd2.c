/*
 * FUN_10012bd2 at 10012bd2
 * byte __fastcall FUN_10012bd2(int param_1)
 * Address ranges: 10012bd2-10012c01
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte __fastcall FUN_10012bd2(int param_1)

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

