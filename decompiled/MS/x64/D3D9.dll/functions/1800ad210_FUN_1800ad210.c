/*
 * FUN_1800ad210 at 1800ad210
 * undefined8 * __fastcall FUN_1800ad210(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined2 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, undefined8 param_10, undefined4 param_11)
 * Address ranges: 1800ad210-1800ad363
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_1800ad210(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined2 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9,undefined8 param_10,undefined4 param_11)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_1800fbccc(0x138);
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0x24] = 0;
    puVar1[0x25] = puVar1 + 0x23;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 4) = 4;
    puVar1[5] = 0;
    puVar1[3] = -(ulonglong)(param_1 != 0) & param_1 + 0x6838U;
    *(undefined2 *)((longlong)puVar1 + 0x3c) = param_5;
    puVar1[0x1b] = param_10;
    *(undefined4 *)((longlong)puVar1 + 0xf4) = param_6;
    *(undefined4 *)(puVar1 + 0x1f) = param_7;
    *(undefined4 *)((longlong)puVar1 + 0xfc) = param_9;
    *(undefined4 *)(puVar1 + 0x20) = param_8;
    *(undefined4 *)((longlong)puVar1 + 0x104) = param_11;
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 7) = 0;
    puVar1[0x1c] = 0;
    *(undefined4 *)(puVar1 + 0x1d) = param_2;
    *(undefined4 *)((longlong)puVar1 + 0xec) = param_3;
    *(undefined4 *)(puVar1 + 0x1e) = param_4;
    *(undefined1 *)(puVar1 + 0x21) = 0;
    FUN_1800fbea0((undefined1 *)(puVar1 + 8),0,0x80);
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    *puVar1 = &PTR_D3DPERF_SetMarker_180104e28;
    puVar1[0x22] = &PTR_LAB_180100b80;
    puVar1[0x23] = &PTR_FUN_180104d78;
    *(undefined4 *)(puVar1 + 0x26) = 2;
    puVar2 = puVar1;
  }
  return puVar2;
}

