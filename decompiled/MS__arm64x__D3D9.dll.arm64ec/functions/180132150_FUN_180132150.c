/*
 * FUN_180132150 at 180132150
 * undefined FUN_180132150(void)
 * Address ranges: 180132150-1801321db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180132150(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)FUN_1802229a8(0x38);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 600);
    uVar4 = *(undefined8 *)(param_1 + 0x250);
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    *(undefined4 *)(puVar2 + 6) = param_3;
    *(undefined4 *)(puVar2 + 5) = uVar1;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = param_2;
    *puVar2 = &PTR_FUN_18022aed0;
    puVar2[1] = uVar4;
    uVar3 = FUN_18013e2f0();
    if ((uVar3 & 1) == 0) {
      FUN_18013e2b0(puVar2);
      FUN_1802229d8(puVar2,0x38);
      puVar2 = (undefined8 *)0x0;
    }
  }
  return puVar2;
}

