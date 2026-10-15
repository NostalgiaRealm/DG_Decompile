/*
 * FUN_10038c1e at 10038c1e
 * undefined __thiscall FUN_10038c1e(void * this, int * param_1, uint param_2)
 * Address ranges: 10038c1e-10038cac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10038c1e(void *this,int *param_1,uint param_2)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar3 = param_2;
  uVar4 = 0;
  param_2 = *(uint *)(param_2 + 8) & 0x3f;
  uVar1 = 0;
  bVar5 = param_2 != 0;
  if (bVar5) {
    for (; (param_2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  while (bVar5) {
    pbVar2 = (byte *)((int)&param_2 + ((int)uVar1 >> 3));
    *pbVar2 = *pbVar2 & ~('\x01' << (uVar1 & 7));
    FUN_100380e6(this,uVar3,param_1,0x11,(uVar4 >> 2) + 0xd,'\x01' << ((byte)uVar4 & 3),
                 *(uint *)(uVar3 + 0x130));
    uVar4 = uVar4 + 1;
    *(uint *)(uVar3 + 0x3c) = *(uint *)(uVar3 + 0x3c) | 1 << (uVar1 & 0x1f);
    uVar1 = 0;
    bVar5 = param_2 != 0;
    if (bVar5) {
      for (; (param_2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
  }
  return;
}

