/*
 * FUN_10007fbb at 10007fbb
 * undefined4 __thiscall FUN_10007fbb(void * this, uint param_1, int param_2, uint param_3)
 * Address ranges: 10007fbb-10008064
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10007fbb(void *this,uint param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  
  uVar2 = 0;
  bVar7 = param_1 != 0;
  if (bVar7) {
    for (; (param_1 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
    }
  }
  cVar4 = '\x01';
  while (bVar7) {
    uVar6 = uVar2 & 0xff;
    pbVar3 = (byte *)((int)&param_1 + ((int)uVar2 >> 3));
    *pbVar3 = *pbVar3 & ~('\x01' << (uVar2 & 7));
    if (cVar4 == '\0') break;
    iVar1 = *(int *)((int)this + uVar6 * 4 + 0x57bc);
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 0x48) == 0) {
        iVar5 = (**(code **)(**(int **)(iVar1 + 0x54) + 0x10))(*(int *)(iVar1 + 0x10) + 0x1000,1);
        *(int *)(iVar1 + 0x48) = iVar5;
        if (iVar5 != 0) {
          (**(code **)(**(int **)((int)this + 0x14) + 0xb0))
                    (uVar6,*(undefined4 *)(*(int *)((int)this + uVar6 * 4 + 0x57bc) + 0x48),
                     *(undefined4 *)((int)this + uVar6 * 4 + 0x583c),
                     *(undefined4 *)((int)this + uVar6 * 4 + 0x57fc));
        }
      }
      cVar4 = FUN_10010c88(*(void **)((int)this + uVar6 * 4 + 0x57bc),param_2,param_3,
                           *(int *)((int)this + uVar6 * 4 + 0x583c),
                           *(int *)((int)this + uVar6 * 4 + 0x57fc));
    }
    uVar2 = 0;
    bVar7 = param_1 != 0;
    if (bVar7) {
      for (; (param_1 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
  }
  return CONCAT31((int3)(uVar2 >> 8),cVar4);
}

