/*
 * FUN_180055960 at 180055960
 * undefined8 __fastcall FUN_180055960(int param_1)
 * Address ranges: 180055960-1800559ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180055960(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x40;
  if (param_1 != 0x40) {
    if (param_1 != 0x41) {
      if (param_1 == 0x50) {
        return 0x50;
      }
      if (param_1 == 0x51) {
        return 0x51;
      }
      if (param_1 == 0x10040) {
        return 0x40;
      }
      if (param_1 == 0x10050) {
        return 0x50;
      }
      if (param_1 != 0x10051) {
        if (param_1 == 0x20050) {
          return 0x50;
        }
        if (param_1 != 0x20051) {
          return 0;
        }
      }
      return 0x51;
    }
    uVar1 = 0x41;
  }
  return uVar1;
}

