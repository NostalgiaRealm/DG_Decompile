/*
 * FUN_180113fa0 at 180113fa0
 * undefined FUN_180113fa0(void)
 * Address ranges: 180113fa0-180114037
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180113fa0(ulonglong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)param_1 & 0x1800 | (uint)(param_1 >> 0x14) & 0x700;
  uVar1 = (uint)param_1 & 0x7ff;
  if (uVar2 < 0x100) {
    uVar3 = uVar1 + 0x13;
  }
  else {
    uVar2 = uVar2 >> 8;
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

