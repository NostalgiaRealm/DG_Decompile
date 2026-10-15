/*
 * FUN_1001a070 at 1001a070
 * undefined FUN_1001a070(void)
 * Address ranges: 1001a070-1001a103
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1001a070(ulonglong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = ((uint)param_1 & 0x1800 | (uint)(param_1 >> 0x14) & 0x7ff) >> 8;
  uVar1 = (uint)param_1 & 0x7ff;
  if (uVar2 == 0) {
    uVar3 = uVar1 + 0x13;
  }
  else {
    uVar3 = uVar1;
    if (uVar2 != 1) {
      if (uVar2 == 2) {
        uVar3 = uVar1 + 0x26;
      }
      else if (uVar2 == 3) {
        uVar3 = uVar1 + 0x429;
      }
      else if (uVar2 == 4) {
        uVar3 = uVar1 + 0x455;
      }
      else if (uVar2 == 5) {
        uVar3 = uVar1 + 0x458;
      }
      else if (uVar2 == 6) {
        uVar3 = uVar1 + 0x44d;
      }
      else {
        uVar3 = 0;
        if (uVar2 == 0x13) {
          uVar3 = uVar1 + 0x42a;
        }
      }
    }
  }
  return uVar3;
}

