/*
 * FUN_100614e8 at 100614e8
 * undefined FUN_100614e8(void)
 * Address ranges: 100614e8-100615db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 *
FUN_100614e8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_10083310(0x78);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[2] = param_1;
    puVar1[3] = param_2;
    puVar1[4] = 0;
    *(undefined8 *)(puVar1 + 6) = 0;
    *(undefined8 *)(puVar1 + 8) = 0;
    puVar1[10] = param_4;
    *(undefined8 *)(puVar1 + 0xb) = 0;
    *(undefined1 *)(puVar1 + 0xd) = 0;
    puVar1[0x10] = param_3;
    puVar1[0x11] = param_5;
    *(undefined8 *)(puVar1 + 0x12) = 0;
    *(undefined8 *)(puVar1 + 0x14) = 0;
    puVar1[0x16] = 0xffffffff;
    *(undefined8 *)(puVar1 + 0x1a) = 0;
    *(undefined8 *)(puVar1 + 0x18) = 0;
    *(undefined8 *)(puVar1 + 0x1c) = 0;
    *puVar1 = &PTR_FUN_1009f2a4;
    puVar1[0xe] = &PTR_FUN_1009f2cc;
  }
  return puVar1;
}

