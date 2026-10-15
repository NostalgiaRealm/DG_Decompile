/*
 * FUN_1800eedb0 at 1800eedb0
 * undefined FUN_1800eedb0(void)
 * Address ranges: 1800eedb0-1800eee3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_1800eedb0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  
  puVar1 = (undefined8 *)FUN_180102f80(0x40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[4] = 0;
    puVar1[5] = 1;
    *(undefined4 *)(puVar1 + 1) = param_2;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined4 *)(puVar1 + 6) = param_3;
    puVar1[7] = param_4;
    uVar2 = FUN_1800eec88();
    if ((uVar2 & 1) != 0) {
      return puVar1;
    }
    FUN_1800eec40(puVar1);
    FUN_180102fc0(puVar1,0x40);
  }
  return (undefined8 *)0x0;
}

