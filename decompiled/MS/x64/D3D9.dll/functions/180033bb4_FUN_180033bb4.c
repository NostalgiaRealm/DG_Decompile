/*
 * FUN_180033bb4 at 180033bb4
 * undefined8 * __fastcall FUN_180033bb4(longlong param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 180033bb4-180033c43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180033bb4(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_1800fbccc(0x38);
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = *(undefined4 *)(param_1 + 600);
    uVar3 = *(undefined8 *)(param_1 + 0x250);
    *puVar2 = &PTR_FUN_180101c68;
    puVar2[1] = uVar3;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    *(undefined4 *)(puVar2 + 5) = uVar1;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = param_2;
    *(undefined4 *)(puVar2 + 6) = param_3;
    uVar3 = FUN_18003cc70((longlong)puVar2);
    if ((char)uVar3 != '\0') {
      return puVar2;
    }
    FUN_18003cc48(puVar2);
    FUN_1800fbcf0(puVar2);
  }
  return (undefined8 *)0x0;
}

