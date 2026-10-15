/*
 * FUN_1800aceb8 at 1800aceb8
 * undefined8 * __fastcall FUN_1800aceb8(longlong param_1, int param_2, int param_3, undefined2 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined8 param_9, undefined4 param_10)
 * Address ranges: 1800aceb8-1800ad002
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_1800aceb8(longlong param_1,int param_2,int param_3,undefined2 param_4,undefined4 param_5,
             undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined8 param_9,
             undefined4 param_10)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_1800fbccc(0x148);
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0x14] = 0;
    puVar1[0x15] = puVar1 + 0x13;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 4) = 3;
    puVar1[5] = 0;
    puVar1[3] = -(ulonglong)(param_1 != 0) & param_1 + 0x6838U;
    puVar1[10] = param_9;
    *(undefined4 *)(puVar1 + 0xe) = param_5;
    *(undefined4 *)((longlong)puVar1 + 0x74) = param_6;
    *(undefined4 *)(puVar1 + 0xf) = param_8;
    *(undefined4 *)((longlong)puVar1 + 0x7c) = param_7;
    *(undefined4 *)((longlong)puVar1 + 0x84) = param_10;
    *puVar1 = &PTR_LAB_180104bf8;
    puVar1[0x12] = &PTR_LAB_1800fd8f0;
    puVar1[0x13] = &PTR_FUN_180104b48;
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 7) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x3c) = param_4;
    puVar1[8] = puVar1 + 0x16;
    puVar1[9] = (LPRECT)(puVar1 + 0x26);
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    *(int *)(puVar1 + 0xd) = param_2;
    *(int *)((longlong)puVar1 + 0x6c) = param_3;
    *(undefined4 *)(puVar1 + 0x10) = 1;
    *(undefined2 *)(puVar1 + 0x11) = 0;
    *(undefined4 *)(puVar1 + 0x28) = 2;
    FUN_1800fbea0((undefined1 *)(puVar1 + 0x16),0,0x80);
    SetRect((LPRECT)(puVar1 + 0x26),0,0,param_2,param_3);
    puVar2 = puVar1;
  }
  return puVar2;
}

