/*
 * FUN_10007dcc at 10007dcc
 * undefined __thiscall FUN_10007dcc(void * this, int * param_1, int param_2)
 * Address ranges: 10007dcc-10007eb6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10007dcc(void *this,int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  bool bVar7;
  uint local_8;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    iVar1 = *param_1;
    iVar2 = *(int *)((int)this + 0x1d0);
    local_8 = *(uint *)((int)this + 0xe8) & *(uint *)((int)this + 0xe4);
    uVar4 = 0;
    bVar7 = local_8 != 0;
    if (bVar7) {
      for (; (local_8 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
    while (bVar7) {
      uVar6 = uVar4 & 0xff;
      pbVar5 = (byte *)((int)&local_8 + ((int)uVar4 >> 3));
      *pbVar5 = *pbVar5 & ~('\x01' << (uVar4 & 7));
      iVar3 = *(int *)((int)this + uVar6 * 0x10 + 0xc);
      **(undefined4 **)((int)this + uVar6 * 0x10 + 0x10) =
           *(undefined4 *)(iVar1 + *(int *)((int)this + uVar6 * 0x10 + 4));
      *(undefined4 *)(iVar2 + *(int *)((int)this + uVar6 * 0x10 + 8) * 4) =
           **(undefined4 **)((int)this + uVar6 * 0x10 + 0x10);
      if (iVar3 != 1) {
        *(undefined4 *)(*(int *)((int)this + uVar6 * 0x10 + 0x10) + 4) =
             *(undefined4 *)(iVar1 + 4 + *(int *)((int)this + uVar6 * 0x10 + 4));
        *(undefined4 *)(iVar2 + 4 + *(int *)((int)this + uVar6 * 0x10 + 8) * 4) =
             *(undefined4 *)(*(int *)((int)this + uVar6 * 0x10 + 0x10) + 4);
        if (iVar3 != 2) {
          *(undefined4 *)(*(int *)((int)this + uVar6 * 0x10 + 0x10) + 8) =
               *(undefined4 *)(iVar1 + 8 + *(int *)((int)this + uVar6 * 0x10 + 4));
          *(undefined4 *)(iVar2 + 8 + *(int *)((int)this + uVar6 * 0x10 + 8) * 4) =
               *(undefined4 *)(*(int *)((int)this + uVar6 * 0x10 + 0x10) + 8);
        }
      }
      uVar4 = 0;
      bVar7 = local_8 != 0;
      if (bVar7) {
        for (; (local_8 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
        }
      }
    }
    param_1 = param_1 + 1;
    *(int *)((int)this + 0x1d0) = *(int *)((int)this + 0x1d0) + 0x50;
  }
  return;
}

