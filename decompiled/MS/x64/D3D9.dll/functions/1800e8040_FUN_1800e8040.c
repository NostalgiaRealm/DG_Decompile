/*
 * FUN_1800e8040 at 1800e8040
 * undefined8 * __fastcall FUN_1800e8040(undefined8 param_1, undefined4 param_2, undefined8 param_3, undefined4 param_4, undefined8 param_5)
 * Address ranges: 1800e8040-1800e80db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_1800e8040(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_1800fbccc(0x90);
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = param_2;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = param_4;
    *(undefined8 *)((longlong)puVar1 + 0x34) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x3c) = 0;
    puVar1[9] = param_3;
    puVar1[10] = param_5;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    *(undefined4 *)(puVar1 + 0xd) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x6c) = 0xffffffff;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    *puVar1 = &PTR_FUN_180106e80;
    puVar1[8] = &PTR_LAB_180106ee8;
    puVar2 = puVar1;
  }
  return puVar2;
}

