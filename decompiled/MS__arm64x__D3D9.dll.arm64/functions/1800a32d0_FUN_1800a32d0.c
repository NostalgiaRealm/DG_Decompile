/*
 * FUN_1800a32d0 at 1800a32d0
 * undefined FUN_1800a32d0(void)
 * Address ranges: 1800a32d0-1800a335f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_1800a32d0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180102f80(0x298);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = &PTR_FUN_180236c38;
    puVar1[1] = 0;
    puVar1[2] = puVar1;
    puVar1[3] = param_1;
    thunk_FUN_180001218(puVar1 + 4,param_2,0x254);
    *(undefined2 *)(puVar1 + 0x52) = 0;
    puVar1[0x4f] = 0;
    puVar1[0x50] = 0;
    *(undefined4 *)(puVar1 + 0x51) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x28c) = param_3;
    *(undefined1 *)((longlong)puVar1 + 0x292) = param_4;
    *(undefined1 *)((longlong)puVar1 + 0x293) = param_5;
  }
  return puVar1;
}

