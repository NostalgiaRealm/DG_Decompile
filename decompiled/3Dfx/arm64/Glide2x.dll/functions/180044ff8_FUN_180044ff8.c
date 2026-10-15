/*
 * FUN_180044ff8 at 180044ff8
 * undefined8 * __cdecl FUN_180044ff8(undefined8 param_1, undefined4 param_2, undefined8 param_3, undefined4 param_4, undefined8 param_5)
 * Address ranges: 180044ff8-180045093
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_180044ff8(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_18005fb88(0x90);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1[0xd] = 0xffffffff00000000;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
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
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[0x11] = 0;
    puVar1[0x10] = 0;
    *puVar1 = &PTR_FUN_180064e30;
    puVar1[8] = &PTR_LAB_180064e98;
  }
  return puVar1;
}

