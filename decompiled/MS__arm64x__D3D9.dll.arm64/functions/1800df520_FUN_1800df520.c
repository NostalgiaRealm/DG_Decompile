/*
 * FUN_1800df520 at 1800df520
 * undefined FUN_1800df520(void)
 * Address ranges: 1800df520-1800df573
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800df520(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong extraout_x12;
  ulonglong uVar3;
  longlong extraout_x13;
  
  uVar2 = func_0x0001801faba0();
  uVar3 = extraout_x12;
  if (uVar2 != 0xffffffff) {
    uVar1 = *(uint *)(extraout_x13 + (ulonglong)uVar2 * 4 + 0x434);
    if (uVar1 == 0xffffffff || uVar1 <= param_3) {
      return 0;
    }
    uVar3 = (ulonglong)
            *(byte *)((ulonglong)uVar2 + (ulonglong)param_3 * 0x10 + extraout_x13 + 0x334);
  }
  return uVar3 & 0xffffffff;
}

