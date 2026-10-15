/*
 * FUN_100a1552 at 100a1552
 * undefined __thiscall FUN_100a1552(void * this, byte * param_1)
 * Address ranges: 100a1552-100a15a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100a1552(void *this,byte *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  bool bVar7;
  
  iVar3 = 0;
  iVar2 = *(int *)this;
  while (iVar2 != 0) {
    pbVar6 = *(byte **)((int)this + iVar3 * 4);
    pbVar4 = param_1;
    do {
      bVar1 = *pbVar4;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_100a1586:
        uVar5 = -(uint)bVar7 | 1;
        goto LAB_100a158b;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_100a1586;
      pbVar4 = pbVar4 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    uVar5 = 0;
LAB_100a158b:
    if (uVar5 == 0) break;
    iVar3 = iVar3 + 1;
    iVar2 = *(int *)((int)this + iVar3 * 4);
  }
  if (*(int *)((int)this + iVar3 * 4) == 0) {
    *(byte **)((int)this + iVar3 * 4) = param_1;
  }
  return;
}

