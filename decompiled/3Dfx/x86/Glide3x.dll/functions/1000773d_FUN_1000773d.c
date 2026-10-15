/*
 * FUN_1000773d at 1000773d
 * undefined __thiscall FUN_1000773d(void * this, int param_1, int param_2, int param_3)
 * Address ranges: 1000773d-10007821
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000773d(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  bool bVar6;
  uint local_8;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    iVar1 = *(int *)((int)this + 0x1d0);
    local_8 = *(uint *)((int)this + 0xe8) & *(uint *)((int)this + 0xe4);
    uVar3 = 0;
    bVar6 = local_8 != 0;
    if (bVar6) {
      for (; (local_8 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
      }
    }
    while (bVar6) {
      uVar5 = uVar3 & 0xff;
      pbVar4 = (byte *)((int)&local_8 + ((int)uVar3 >> 3));
      *pbVar4 = *pbVar4 & ~('\x01' << (uVar3 & 7));
      iVar2 = *(int *)((int)this + uVar5 * 0x10 + 0xc);
      **(undefined4 **)((int)this + uVar5 * 0x10 + 0x10) =
           *(undefined4 *)(param_1 + *(int *)((int)this + uVar5 * 0x10 + 4));
      *(undefined4 *)(iVar1 + *(int *)((int)this + uVar5 * 0x10 + 8) * 4) =
           **(undefined4 **)((int)this + uVar5 * 0x10 + 0x10);
      if (iVar2 != 1) {
        *(undefined4 *)(*(int *)((int)this + uVar5 * 0x10 + 0x10) + 4) =
             *(undefined4 *)(param_1 + 4 + *(int *)((int)this + uVar5 * 0x10 + 4));
        *(undefined4 *)(iVar1 + 4 + *(int *)((int)this + uVar5 * 0x10 + 8) * 4) =
             *(undefined4 *)(*(int *)((int)this + uVar5 * 0x10 + 0x10) + 4);
        if (iVar2 != 2) {
          *(undefined4 *)(*(int *)((int)this + uVar5 * 0x10 + 0x10) + 8) =
               *(undefined4 *)(param_1 + 8 + *(int *)((int)this + uVar5 * 0x10 + 4));
          *(undefined4 *)(iVar1 + 8 + *(int *)((int)this + uVar5 * 0x10 + 8) * 4) =
               *(undefined4 *)(*(int *)((int)this + uVar5 * 0x10 + 0x10) + 8);
        }
      }
      uVar3 = 0;
      bVar6 = local_8 != 0;
      if (bVar6) {
        for (; (local_8 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
        }
      }
    }
    param_1 = param_1 + param_2;
    *(int *)((int)this + 0x1d0) = *(int *)((int)this + 0x1d0) + 0x50;
  }
  return;
}

