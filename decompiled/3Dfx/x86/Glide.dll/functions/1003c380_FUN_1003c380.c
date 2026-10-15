/*
 * FUN_1003c380 at 1003c380
 * undefined __thiscall FUN_1003c380(void * this, uint param_1, int param_2)
 * Address ranges: 1003c380-1003c3e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003c380(void *this,uint param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = param_1 & 0xffff;
  uVar5 = param_2 + uVar6;
  iVar2 = *(int *)(*(int *)((int)this + 0x34) + 4 + (param_1 >> 0x10) * 8);
  if (uVar6 < uVar5) {
    do {
      uVar4 = -1 << ((byte)uVar6 & 0x1f);
      uVar7 = uVar6 >> 5;
      uVar6 = (uVar6 & 0xffffffe0) + 0x20;
      uVar3 = 0xffffffffU >> (0x20 - ((byte)uVar5 & 0x1f) & 0x1f) & uVar4;
      if (uVar6 <= uVar5) {
        uVar3 = uVar4;
      }
      puVar1 = (uint *)(iVar2 + uVar7 * 4);
      *puVar1 = *puVar1 & ~uVar3;
    } while (uVar6 < uVar5);
  }
  return;
}

