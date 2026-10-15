/*
 * FUN_18003b0e8 at 18003b0e8
 * ulonglong __cdecl FUN_18003b0e8(ulonglong param_1, short param_2)
 * Address ranges: 18003b0e8-18003b1a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18003b0e8(ulonglong param_1,short param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar3 = (uint)param_1;
  if (param_2 == 0) {
    uVar1 = uVar3 & 0xf00;
    if ((param_1 & 0xe00) == 0) {
      return param_1;
    }
    if (uVar1 != 0x200) {
      if (uVar1 == 0x300) {
        uVar3 = 0xf0;
        if ((param_1 & 0xf0) == 0) {
          uVar3 = 0;
        }
        return (ulonglong)uVar3;
      }
      if (uVar1 != 0x400) goto LAB_18003b124;
    }
    uVar2 = 0;
  }
  else {
    if (param_2 != 0x100) {
      return param_1;
    }
    uVar1 = uVar3 & 0xf00;
    if ((param_1 & 0xf00) == 0) {
      return (ulonglong)(uVar3 & 0xf0ff | 0x100);
    }
    if (uVar1 == 0x100) {
      return (ulonglong)(uVar3 & 0xf0ff);
    }
    if (uVar1 != 0x200) {
      if (uVar1 == 0x300) {
        uVar3 = 0xf0;
        if ((param_1 & 0xf0) == 0) {
          uVar3 = 0x100;
        }
        return (ulonglong)uVar3;
      }
      if (uVar1 != 0x400) {
LAB_18003b124:
        if ((uVar3 & 0xf00) != 0x500) {
          return param_1;
        }
        return 0xf0;
      }
    }
    uVar2 = 0x100;
  }
  return uVar2;
}

