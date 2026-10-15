/*
 * FUN_10013480 at 10013480
 * undefined FUN_10013480(void)
 * Address ranges: 10013480-1001352f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10013480(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  
  puVar3 = (undefined4 *)FUN_10081cb0(0x1c);
  if (puVar3 != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)(param_1 + 0x134);
    uVar2 = *(undefined4 *)(param_1 + 0x130);
    *puVar3 = &PTR_FUN_1009c748;
    puVar3[1] = uVar2;
    *(undefined8 *)(puVar3 + 2) = 0;
    puVar3[4] = uVar1;
    puVar3[5] = param_2;
    puVar3[6] = param_3;
    uVar4 = FUN_1001b1d0(puVar3);
    if ((uVar4 & 1) != 0) {
      return puVar3;
    }
    FUN_1001b190(puVar3);
    FUN_10081d50(puVar3,0x1c);
  }
  return (undefined4 *)0x0;
}

