/*
 * FUN_1003fe01 at 1003fe01
 * undefined __thiscall FUN_1003fe01(void * this, undefined4 * param_1)
 * Address ranges: 1003fe01-1003fec9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003fe01(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 *extraout_ECX;
  uint extraout_EDX;
  uint uVar5;
  byte local_1e8 [4];
  uint auStack_1e4 [118];
  void *local_c;
  undefined4 *local_8;
  
  puVar1 = param_1;
  puVar2 = (undefined4 *)0x0;
  param_1 = (undefined4 *)0x0;
  puVar4 = (undefined4 *)puVar1[2];
  local_c = this;
  local_8 = puVar4;
  if (puVar4 != (undefined4 *)0x0) {
    do {
      uVar5 = (uint)*(byte *)((int)(puVar1 + 0x27) + (int)param_1);
      pcVar3 = FUN_1005d644(CONCAT31((int3)((uint)puVar4 >> 8),
                                     *(undefined1 *)((int)puVar1 + uVar5 * 8 + 0x19)));
      *(char **)(local_1e8 + (int)param_1 * 0x1c) = pcVar3;
      auStack_1e4[(int)param_1 * 7] = extraout_EDX & 0xf;
      auStack_1e4[(int)param_1 * 7 + 1] =
           *(uint *)(&DAT_100b25ec + (uint)*(byte *)(puVar1 + uVar5 * 2 + 6) * 4);
      auStack_1e4[(int)param_1 * 7 + 2] = (int)*(char *)(puVar1 + uVar5 * 2 + 5);
      auStack_1e4[(int)param_1 * 7 + 3] = (uint)*(byte *)((int)puVar1 + uVar5 * 8 + 0x17) << 2;
      puVar2 = (undefined4 *)((int)param_1 + 1);
      auStack_1e4[(int)param_1 * 7 + 4] = 0;
      auStack_1e4[(int)param_1 * 7 + 5] = 0;
      puVar4 = extraout_ECX;
      param_1 = puVar2;
    } while (puVar2 < local_8);
  }
  FUN_1009bc3b((void *)(*(int *)((int)local_c + 8) * 0x16c0 + *(int *)((int)local_c + 4) + 0x1cf0),
               local_1e8,puVar2);
  return;
}

