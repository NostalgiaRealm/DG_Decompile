/*
 * FUN_100088cf at 100088cf
 * undefined __thiscall FUN_100088cf(void * this, int param_1, uint param_2, int param_3, int param_4)
 * Address ranges: 100088cf-1000896b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100088cf(void *this,int param_1,uint param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      uVar4 = (uint)*(byte *)(param_1 + 0x214 + uVar7);
      bVar1 = *(byte *)(param_1 + 0x14 + uVar4 * 8);
      iVar6 = (int)(char)bVar1;
      iVar5 = uVar7 * 0xc;
      if ((param_2 & 1 << (bVar1 & 0x1f)) == 0) {
        iVar6 = 0;
      }
      else {
        iVar2 = *(int *)((int)this + iVar6 * 4 + 26000);
        iVar3 = *(int *)((int)this + iVar6 * 4 + 0x65d0);
        *(int *)(param_4 + 4 + iVar5) = iVar3;
        iVar6 = iVar3 * param_3 + (uint)*(byte *)(param_1 + 0x17 + uVar4 * 8) * 4 +
                *(int *)((int)this + iVar6 * 4 + 0x6610) + *(int *)(iVar2 + 4);
        *(undefined4 *)(param_4 + 8 + iVar5) = 1;
      }
      uVar7 = uVar7 + 1;
      *(int *)(param_4 + iVar5) = iVar6;
    } while (uVar7 < *(uint *)(param_1 + 8));
  }
  return;
}

