/*
 * FUN_100074c8 at 100074c8
 * undefined __thiscall FUN_100074c8(void * this, undefined4 * param_1, int param_2, uint param_3)
 * Address ranges: 100074c8-100075a4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100074c8(void *this,undefined4 *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  
  iVar4 = param_2 * 0x50 + 0x10c + (int)this;
  if ((char)param_3 == '\0') {
    if (iVar4 == 0) {
      iVar4 = *(int *)((int)this + 0x1d0);
    }
    param_3 = *(uint *)((int)this + 0xe8) & *(uint *)((int)this + 0xe4);
    uVar2 = 0;
    bVar6 = param_3 != 0;
    if (bVar6) {
      for (; (param_3 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
    while (bVar6) {
      uVar5 = uVar2 & 0xff;
      pbVar3 = (byte *)((int)&param_3 + ((int)uVar2 >> 3));
      *pbVar3 = *pbVar3 & ~('\x01' << (uVar2 & 7));
      iVar1 = *(int *)((int)this + uVar5 * 0x10 + 0xc);
      **(undefined4 **)((int)this + uVar5 * 0x10 + 0x10) =
           *(undefined4 *)((int)param_1 + *(int *)((int)this + uVar5 * 0x10 + 4));
      *(undefined4 *)(iVar4 + *(int *)((int)this + uVar5 * 0x10 + 8) * 4) =
           **(undefined4 **)((int)this + uVar5 * 0x10 + 0x10);
      if (iVar1 != 1) {
        *(undefined4 *)(*(int *)((int)this + uVar5 * 0x10 + 0x10) + 4) =
             *(undefined4 *)((int)param_1 + *(int *)((int)this + uVar5 * 0x10 + 4) + 4);
        *(undefined4 *)(iVar4 + 4 + *(int *)((int)this + uVar5 * 0x10 + 8) * 4) =
             *(undefined4 *)(*(int *)((int)this + uVar5 * 0x10 + 0x10) + 4);
        if (iVar1 != 2) {
          *(undefined4 *)(*(int *)((int)this + uVar5 * 0x10 + 0x10) + 8) =
               *(undefined4 *)((int)param_1 + *(int *)((int)this + uVar5 * 0x10 + 4) + 8);
          *(undefined4 *)(iVar4 + 8 + *(int *)((int)this + uVar5 * 0x10 + 8) * 4) =
               *(undefined4 *)(*(int *)((int)this + uVar5 * 0x10 + 0x10) + 8);
        }
      }
      uVar2 = 0;
      bVar6 = param_3 != 0;
      if (bVar6) {
        for (; (param_3 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
        }
      }
    }
  }
  else {
    FUN_1000790d(this,param_1,iVar4);
  }
  return;
}

