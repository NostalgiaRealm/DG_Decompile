/*
 * FUN_10036df0 at 10036df0
 * undefined __thiscall FUN_10036df0(void * this, uint param_1)
 * Address ranges: 10036df0-10036e22
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10036df0(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  bool bVar5;
  
  param_1 = *(uint *)(param_1 + 0x10);
  uVar4 = 0;
  bVar5 = param_1 == 0;
  if (!bVar5) {
    for (; (param_1 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
    }
  }
  while (!bVar5) {
    pbVar3 = (byte *)((int)&param_1 + ((int)uVar4 >> 3));
    *pbVar3 = *pbVar3 & ~('\x01' << (uVar4 & 7));
    iVar2 = *(int *)((int)this + (uVar4 & 0xff) * 4 + 0xdc98);
    if (iVar2 != 0) {
      LOCK();
      piVar1 = (int *)(iVar2 + 0x30);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    uVar4 = 0;
    bVar5 = param_1 == 0;
    if (!bVar5) {
      for (; (param_1 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
  }
  return;
}

