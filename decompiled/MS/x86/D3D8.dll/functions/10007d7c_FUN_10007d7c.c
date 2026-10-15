/*
 * FUN_10007d7c at 10007d7c
 * undefined __thiscall FUN_10007d7c(void * this, int param_1, uint param_2, int param_3, int param_4)
 * Address ranges: 10007d7c-10007e01
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10007d7c(void *this,int param_1,uint param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      uVar4 = (uint)*(byte *)(param_1 + 0x9c + uVar6);
      bVar1 = *(byte *)(param_1 + 0x14 + uVar4 * 8);
      iVar5 = (int)(char)bVar1;
      if ((param_2 & 1 << (bVar1 & 0x1f)) == 0) {
        iVar5 = 0;
      }
      else {
        iVar2 = *(int *)((int)this + iVar5 * 4 + 0x57bc);
        iVar3 = *(int *)((int)this + iVar5 * 4 + 0x57fc);
        *(int *)(param_4 + 4 + uVar6 * 8) = iVar3;
        iVar5 = iVar3 * param_3 + (uint)*(byte *)(param_1 + 0x17 + uVar4 * 8) * 4 +
                *(int *)((int)this + iVar5 * 4 + 0x583c) + *(int *)(iVar2 + 4);
      }
      *(int *)(param_4 + uVar6 * 8) = iVar5;
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 8));
  }
  return;
}

