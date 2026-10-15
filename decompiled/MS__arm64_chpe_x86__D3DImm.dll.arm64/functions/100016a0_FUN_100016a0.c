/*
 * FUN_100016a0 at 100016a0
 * undefined FUN_100016a0(void)
 * Address ranges: 100016a0-10001747
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_100016a0(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  
  *param_1 = 0;
  puVar2 = (undefined8 *)((int)param_1 + 0x58c);
  iVar3 = 0xe;
  do {
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    iVar3 = iVar3 + -1;
    *(undefined4 *)((int)puVar2 + 0x3c) = 0x3f800000;
    *(undefined4 *)(puVar2 + 5) = 0x3f800000;
    puVar1 = (undefined4 *)((int)puVar2 + 0x14);
    *(undefined4 *)puVar2 = 0x3f800000;
    puVar2 = puVar2 + 8;
    *puVar1 = 0x3f800000;
  } while (iVar3 != 0);
  *(undefined8 *)((int)param_1 + 0x9cc) = 0;
  *(undefined8 *)((int)param_1 + 0x9d4) = 0;
  *(undefined8 *)((int)param_1 + 0xa24) = 0;
  *(undefined8 *)((int)param_1 + 0xa1c) = 0;
  *(undefined4 *)((int)param_1 + 0xa2c) = 0;
  param_1[0x147] = 0;
  param_1[0x146] = 0;
  param_1[0x148] = 0;
  *(undefined4 *)(param_1 + 0x149) = 0;
  *(undefined4 *)((int)param_1 + 0xa4c) = 0;
  *(undefined4 *)(param_1 + 0x14a) = 0;
  *(undefined4 *)((int)param_1 + 0xa54) = 0;
  *(undefined2 *)(param_1 + 0x14b) = 0;
  return param_1;
}

