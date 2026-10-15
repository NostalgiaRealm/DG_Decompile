/*
 * FUN_100071bf at 100071bf
 * undefined __thiscall FUN_100071bf(void * this, int param_1)
 * Address ranges: 100071bf-10007270
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100071bf(void *this,int param_1)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_8;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 != 0) {
    uVar5 = *(uint *)(iVar1 + 0x2c);
    uVar3 = uVar5 & 0xffff;
    *(undefined1 *)(iVar1 + 0x32) = 1;
    if (uVar3 != 0) {
      local_8 = uVar3;
      uVar4 = 0;
      if (uVar3 != 0) {
        for (; (uVar3 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
        }
      }
      do {
        pbVar2 = (byte *)((int)&local_8 + ((int)uVar4 >> 3));
        *pbVar2 = *pbVar2 & ~('\x01' << (uVar4 & 7));
        if ((*(int *)(iVar1 + 0x18) == 3) || (*(int *)(iVar1 + 0x18) == 5)) {
          (**(code **)(**(int **)((int)this + 0x14) + 0x6c))
                    (uVar4 & 0xff,0,*(undefined4 *)(iVar1 + 0x44),0,0,0,0);
        }
        uVar4 = 0;
        if (local_8 != 0) {
          for (; (local_8 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
          }
        }
      } while (local_8 != 0);
      *(uint *)((int)this + 0xccc) = *(uint *)((int)this + 0xccc) | uVar3;
    }
    uVar5 = uVar5 >> 0x10;
    if (uVar5 != 0) {
      local_8 = uVar5;
      uVar3 = 0;
      if (uVar5 != 0) {
        for (; (uVar5 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
        }
      }
      do {
        pbVar2 = (byte *)((int)&local_8 + ((int)uVar3 >> 3));
        *pbVar2 = *pbVar2 & ~('\x01' << (uVar3 & 7));
        if ((*(int *)(iVar1 + 0x18) == 3) || (*(int *)(iVar1 + 0x18) == 5)) {
          (**(code **)(**(int **)((int)this + 0x14) + 0xd4))
                    (uVar3 & 0xff,0,*(undefined4 *)(iVar1 + 0x44),0);
        }
        uVar3 = 0;
        if (local_8 != 0) {
          for (; (local_8 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
      } while (local_8 != 0);
      *(uint *)((int)this + 0x6680) = *(uint *)((int)this + 0x6680) | uVar5;
    }
  }
  return;
}

