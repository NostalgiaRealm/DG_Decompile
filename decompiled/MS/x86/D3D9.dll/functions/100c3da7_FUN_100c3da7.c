/*
 * FUN_100c3da7 at 100c3da7
 * undefined __thiscall FUN_100c3da7(void * this, byte * param_1)
 * Address ranges: 100c3da7-100c3dfa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100c3da7(void *this,byte *param_1)

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
LAB_100c3ddb:
        uVar5 = -(uint)bVar7 | 1;
        goto LAB_100c3de0;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_100c3ddb;
      pbVar4 = pbVar4 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    uVar5 = 0;
LAB_100c3de0:
    if (uVar5 == 0) break;
    iVar3 = iVar3 + 1;
    iVar2 = *(int *)((int)this + iVar3 * 4);
  }
  if (*(int *)((int)this + iVar3 * 4) == 0) {
    *(byte **)((int)this + iVar3 * 4) = param_1;
  }
  return;
}

