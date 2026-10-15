/*
 * FUN_1010f568 at 1010f568
 * undefined FUN_1010f568(void)
 * Address ranges: 1010f568-1010f6bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1010f568(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  *param_1 = &PTR_D3DPERF_GetStatus_native_10160040;
  puVar3 = param_1 + 6;
  iVar2 = 0x10;
  do {
    iVar2 = iVar2 + -1;
    FUN_1010cb90(puVar3);
    puVar3 = puVar3 + 10;
  } while (iVar2 != 0);
  param_1[0xa6] = param_2;
  *(undefined8 *)(param_1 + 0xa7) = 0;
  *(undefined8 *)(param_1 + 0xa9) = 0;
  *(undefined8 *)(param_1 + 0xab) = 0;
  *(undefined8 *)(param_1 + 0xad) = 0;
  *(undefined8 *)(param_1 + 0xaf) = 0;
  *(undefined8 *)(param_1 + 0xb1) = 0;
  *(undefined8 *)(param_1 + 0xb3) = 0;
  param_1[0xb5] = 0x10000;
  *(undefined1 *)(param_1 + 0xb6) = 0;
  iVar2 = 8;
  puVar1 = (undefined8 *)(param_1 + 0xb8);
  do {
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 7;
  } while (iVar2 != 0);
  param_1[0x127] = 0;
  *(undefined8 *)(param_1 + 0x12e) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x132) = 0;
  param_1[0x138] = 0;
  *(undefined1 *)(param_1 + 0x139) = 0;
  param_1[0x13a] = param_3;
  *(undefined8 *)(param_1 + 0x13b) = 0;
  *(undefined8 *)(param_1 + 0x13d) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x12a) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 300) = 0;
  *(undefined8 *)(param_1 + 0x136) = 0;
  *(undefined8 *)(param_1 + 0x134) = 0;
  return param_1;
}

