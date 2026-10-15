/*
 * FUN_180025850 at 180025850
 * undefined FUN_180025850(void)
 * Address ranges: 180025850-1800258cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180025850(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)FUN_180102f80(0x28);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x250);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 600);
    *puVar1 = &PTR_FUN_180233ef0;
    puVar1[1] = uVar3;
    uVar2 = FUN_180030608(puVar1,param_2);
    if ((uVar2 & 1) == 0) {
      FUN_180030588(puVar1);
      FUN_180102fc0(puVar1,0x28);
      puVar1 = (undefined8 *)0x0;
    }
  }
  return puVar1;
}

