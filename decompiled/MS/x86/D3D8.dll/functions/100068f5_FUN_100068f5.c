/*
 * FUN_100068f5 at 100068f5
 * undefined __thiscall FUN_100068f5(void * this, int param_1)
 * Address ranges: 100068f5-10006944
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100068f5(void *this,int param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint local_8;
  
  uVar3 = (uint)*(ushort *)(param_1 + 0x2c);
  *(undefined1 *)(param_1 + 0x32) = 1;
  if (uVar3 != 0) {
    local_8 = uVar3;
    uVar2 = 0;
    if (uVar3 != 0) {
      for (; (*(ushort *)(param_1 + 0x2c) >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
    do {
      pbVar1 = (byte *)((int)&local_8 + ((int)uVar2 >> 3));
      *pbVar1 = *pbVar1 & ~('\x01' << (uVar2 & 7));
      (**(code **)(**(int **)((int)this + 0x14) + 0x6c))
                (uVar2 & 0xff,0,*(undefined4 *)(param_1 + 0x94),0,0,0,0);
      uVar2 = 0;
      if (local_8 != 0) {
        for (; (local_8 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
        }
      }
    } while (local_8 != 0);
    *(uint *)((int)this + 0xa08) = *(uint *)((int)this + 0xa08) | uVar3;
  }
  return;
}

