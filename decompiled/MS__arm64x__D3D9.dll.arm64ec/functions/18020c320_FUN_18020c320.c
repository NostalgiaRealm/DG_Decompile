/*
 * FUN_18020c320 at 18020c320
 * undefined FUN_18020c320(void)
 * Address ranges: 18020c320-18020c3ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_18020c320(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  
  puVar1 = (undefined8 *)FUN_1802229a8(0x40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[4] = 0;
    puVar1[5] = 1;
    *(undefined4 *)(puVar1 + 1) = param_2;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined4 *)(puVar1 + 6) = param_3;
    puVar1[7] = param_4;
    uVar2 = FUN_18020c1a0();
    if ((uVar2 & 1) != 0) {
      return puVar1;
    }
    FUN_18020c138(puVar1);
    FUN_1802229d8(puVar1,0x40);
  }
  return (undefined8 *)0x0;
}

