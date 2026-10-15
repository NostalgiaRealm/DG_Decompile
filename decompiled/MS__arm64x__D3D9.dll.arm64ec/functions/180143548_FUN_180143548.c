/*
 * FUN_180143548 at 180143548
 * undefined FUN_180143548(void)
 * Address ranges: 180143548-1801435d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180143548(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_1802229a8(0x60);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)(param_1 + 0x198);
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *puVar1 = &PTR_FUN_18022bbd0;
    puVar1[1] = uVar2;
    *(undefined4 *)(puVar1 + 10) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x54) = 0;
    *(undefined1 *)(puVar1 + 0xb) = 0;
    puVar1[8] = 0;
    puVar1[7] = 0;
    puVar1[9] = 0;
    *(int *)(puVar1 + 2) = param_2;
    if (param_2 - 8U < 5) {
      return puVar1;
    }
    *puVar1 = &PTR_FUN_18022aea8;
    FUN_1802229d8(puVar1,0x60);
  }
  return (undefined8 *)0x0;
}

