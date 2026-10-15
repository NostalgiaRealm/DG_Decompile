/*
 * FUN_1801fb788 at 1801fb788
 * undefined FUN_1801fb788(void)
 * Address ranges: 1801fb788-1801fb7db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1801fb788(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong extraout_x12;
  ulonglong uVar3;
  longlong extraout_x15;
  
  uVar2 = FUN_1801faba0();
  uVar3 = extraout_x12;
  if (uVar2 != 0xffffffff) {
    uVar1 = *(uint *)(extraout_x15 + (ulonglong)uVar2 * 4 + 0x434);
    if (uVar1 == 0xffffffff || uVar1 <= param_3) {
      return 0;
    }
    uVar3 = (ulonglong)
            *(byte *)((ulonglong)uVar2 + (ulonglong)param_3 * 0x10 + extraout_x15 + 0x334);
  }
  return uVar3 & 0xffffffff;
}

