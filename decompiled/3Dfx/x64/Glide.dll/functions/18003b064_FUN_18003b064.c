/*
 * FUN_18003b064 at 18003b064
 * undefined8 __fastcall FUN_18003b064(longlong param_1, uint param_2, byte param_3)
 * Address ranges: 18003b064-18003b09b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18003b064(longlong param_1,uint param_2,byte param_3)

{
  undefined8 in_RAX;
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  
  uVar1 = CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)param_2) & 0xfffffffffffffff0;
  if ((char)uVar1 == -0x80) {
    uVar1 = (ulonglong)(param_2 & 0xf);
    uVar3 = *(uint *)(param_1 + 0x98 + uVar1 * 4) >> 0x12;
    bVar2 = (byte)uVar3 & 3;
    if ((uVar3 & 3) != 0) {
      do {
        uVar1 = 0;
        param_3 = param_3 & 3 | param_3 << 2;
        bVar2 = bVar2 - 1;
      } while (bVar2 != 0);
    }
  }
  return CONCAT71((int7)(uVar1 >> 8),param_3);
}

