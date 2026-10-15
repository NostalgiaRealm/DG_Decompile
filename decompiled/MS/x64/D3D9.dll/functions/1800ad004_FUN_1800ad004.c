/*
 * FUN_1800ad004 at 1800ad004
 * undefined8 * __fastcall FUN_1800ad004(longlong param_1, undefined8 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined1 param_8)
 * Address ranges: 1800ad004-1800ad100
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_1800ad004(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_1800fbccc(0xa8);
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0x13] = 0;
    puVar1[0x14] = puVar1 + 0x12;
    puVar1[6] = 0;
    puVar1[7] = 0;
    *(undefined4 *)(puVar1 + 9) = 6;
    puVar1[1] = 0;
    puVar1[8] = -(ulonglong)(param_1 != 0) & param_1 + 0x6838U;
    *(undefined4 *)((longlong)puVar1 + 0x54) = param_5;
    *(undefined4 *)(puVar1 + 0xb) = param_6;
    *(undefined4 *)((longlong)puVar1 + 0x5c) = param_7;
    *(undefined1 *)(puVar1 + 0x11) = param_8;
    *puVar1 = &PTR_FUN_180104cb0;
    puVar1[0x12] = &PTR_FUN_180104c40;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined4 *)(puVar1 + 4) = param_3;
    *(undefined4 *)((longlong)puVar1 + 0x24) = 0;
    *(undefined4 *)(puVar1 + 5) = param_3;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = 0;
    *(undefined4 *)(puVar1 + 10) = param_4;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = param_2;
    *(undefined4 *)(puVar1 + 0x10) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x84) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x89) = 0;
    puVar2 = puVar1;
  }
  return puVar2;
}

