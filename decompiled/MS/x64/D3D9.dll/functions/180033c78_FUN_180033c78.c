/*
 * FUN_180033c78 at 180033c78
 * undefined8 * __fastcall FUN_180033c78(longlong param_1, undefined4 param_2, undefined4 param_3, undefined1 param_4)
 * Address ranges: 180033c78-180033d13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_180033c78(longlong param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_1800fbccc(0x38);
  if (puVar4 != (undefined8 *)0x0) {
    uVar1 = *(undefined4 *)(param_1 + 600);
    uVar2 = *(undefined8 *)(param_1 + 0x250);
    *puVar4 = &PTR_FUN_180101bb8;
    puVar4[1] = uVar2;
    *(undefined4 *)(puVar4 + 2) = uVar1;
    puVar4[3] = 0;
    puVar4[4] = 0;
    *(undefined4 *)(puVar4 + 5) = param_2;
    *(undefined4 *)((longlong)puVar4 + 0x2c) = 0;
    *(undefined4 *)(puVar4 + 6) = param_3;
    *(undefined1 *)((longlong)puVar4 + 0x34) = param_4;
    uVar3 = FUN_18003c93c((longlong)puVar4);
    if ((char)uVar3 != '\0') {
      return puVar4;
    }
    FUN_18003c848(puVar4);
    FUN_1800fbcf0(puVar4);
  }
  return (undefined8 *)0x0;
}

