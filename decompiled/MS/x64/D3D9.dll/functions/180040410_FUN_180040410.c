/*
 * FUN_180040410 at 180040410
 * undefined8 * __fastcall FUN_180040410(longlong param_1, int param_2)
 * Address ranges: 180040410-1800404d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180040410(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800fbccc(0x60);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = *(undefined8 *)(param_1 + 0x198);
    *puVar1 = &PTR_FUN_1801022c0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 10) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x54) = 0;
    *(undefined1 *)(puVar1 + 0xb) = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    *(int *)(puVar1 + 2) = param_2;
    if (param_2 == 8) {
      return puVar1;
    }
    if (param_2 == 9) {
      return puVar1;
    }
    if (param_2 == 10) {
      return puVar1;
    }
    if (param_2 == 0xb) {
      return puVar1;
    }
    if (param_2 == 0xc) {
      return puVar1;
    }
    *puVar1 = &PTR_FUN_180101c40;
    FUN_1800fbcf0(puVar1);
  }
  return (undefined8 *)0x0;
}

