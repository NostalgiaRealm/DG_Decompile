/*
 * FUN_1800256b0 at 1800256b0
 * undefined FUN_1800256b0(void)
 * Address ranges: 1800256b0-18002573b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800256b0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)FUN_180102f80(0x38);
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
    *puVar2 = &PTR_FUN_180233f40;
    puVar2[1] = uVar4;
    uVar3 = FUN_180030720();
    if ((uVar3 & 1) == 0) {
      FUN_1800306e8(puVar2);
      FUN_180102fc0(puVar2,0x38);
      puVar2 = (undefined8 *)0x0;
    }
  }
  return puVar2;
}

