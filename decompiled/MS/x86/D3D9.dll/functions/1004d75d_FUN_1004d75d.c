/*
 * FUN_1004d75d at 1004d75d
 * undefined __thiscall FUN_1004d75d(void * this, int param_1, int param_2)
 * Address ranges: 1004d75d-1004d830
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004d75d(void *this,int param_1,int param_2)

{
  byte bVar1;
  char *pcVar2;
  uint uVar3;
  uint extraout_EDX;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte local_70c [4];
  uint auStack_708 [447];
  void *local_c;
  undefined4 *local_8;
  
  local_8 = *(undefined4 **)(param_1 + 8);
  puVar5 = (undefined4 *)0x0;
  puVar6 = puVar5;
  local_c = this;
  if (local_8 != (undefined4 *)0x0) {
    do {
      uVar4 = (uint)*(byte *)(param_1 + 0x214 + (int)puVar6);
      pcVar2 = FUN_100733bc(CONCAT31((int3)((uint)this >> 8),
                                     *(undefined1 *)(param_1 + 0x19 + uVar4 * 8)));
      *(char **)(local_70c + (int)puVar6 * 0x1c) = pcVar2;
      auStack_708[(int)puVar6 * 7] = extraout_EDX & 0xf;
      bVar1 = *(byte *)(param_1 + 0x18 + uVar4 * 8);
      uVar3 = (uint)*(char *)(param_1 + 0x14 + uVar4 * 8);
      auStack_708[(int)puVar6 * 7 + 2] = uVar3;
      auStack_708[(int)puVar6 * 7 + 1] = *(uint *)(&DAT_100d5bc8 + (uint)bVar1 * 4);
      auStack_708[(int)puVar6 * 7 + 3] = (uint)*(byte *)(param_1 + 0x17 + uVar4 * 8) << 2;
      if (param_2 == 0) {
        this = (void *)0x0;
      }
      else {
        this = *(void **)(param_2 + uVar3 * 4);
      }
      puVar5 = (undefined4 *)((int)puVar6 + 1);
      auStack_708[(int)puVar6 * 7 + 4] = (uint)(this != (void *)0x0);
      auStack_708[(int)puVar6 * 7 + 5] = (uint)this;
      puVar6 = puVar5;
    } while (puVar5 < local_8);
  }
  FUN_100be213((void *)(*(int *)((int)local_c + 8) * 0x16c0 + *(int *)((int)local_c + 4) + 0x1cf0),
               local_70c,puVar5);
  return;
}

