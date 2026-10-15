/*
 * FUN_1002c0eb at 1002c0eb
 * undefined __thiscall FUN_1002c0eb(void * this, int param_1)
 * Address ranges: 1002c0eb-1002c162
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002c0eb(void *this,int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  
  iVar5 = param_1 * 0x180;
  bVar4 = 1;
  uVar3 = *(uint *)(iVar5 + 0x2cd4 + (int)this) & 7;
  if ((((uVar3 != 1) && (uVar3 != 3)) &&
      (uVar3 = *(uint *)(iVar5 + 0x2ce4 + (int)this) & 7, uVar3 != 1)) && (uVar3 != 3)) {
    bVar4 = 0;
  }
  uVar3 = *(uint *)(iVar5 + 0x2cd0 + (int)this);
  if (uVar3 < 0xb) {
    bVar1 = (&DAT_10053df0)[uVar3];
  }
  else {
    bVar1 = 0;
  }
  uVar3 = *(uint *)(iVar5 + 0x2ce0 + (int)this);
  if (uVar3 < 0xb) {
    bVar2 = (&DAT_10053df0)[uVar3];
  }
  else {
    bVar2 = 0;
  }
  *(byte *)(param_1 + 0x3159 + (int)this) = bVar2 | bVar4 | bVar1;
  return;
}

