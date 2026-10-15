/*
 * FUN_100cfc90 at 100cfc90
 * undefined FUN_100cfc90(void)
 * Address ranges: 100cfc90-100cfd4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 *
FUN_100cfc90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
            undefined1 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_101321c0(0x27c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *(undefined8 *)(puVar1 + 1) = 0;
    puVar1[3] = puVar1;
    *puVar1 = &PTR_FUN_1015fd68;
    puVar1[4] = param_1;
    FUN_101325a0(puVar1 + 5,param_2,0x254);
    *(undefined8 *)(puVar1 + 0x9a) = 0;
    puVar1[0x9c] = 0;
    puVar1[0x9d] = param_3;
    *(undefined2 *)(puVar1 + 0x9e) = 0;
    *(undefined1 *)((int)puVar1 + 0x27a) = param_4;
    *(undefined1 *)((int)puVar1 + 0x27b) = param_5;
  }
  return puVar1;
}

