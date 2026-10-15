/*
 * FUN_1001fdd5 at 1001fdd5
 * undefined __thiscall FUN_1001fdd5(void * this, int param_1)
 * Address ranges: 1001fdd5-1001fe51
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001fdd5(void *this,int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  
  iVar5 = param_1 * 0x1a0;
  bVar4 = 1;
  uVar3 = *(uint *)(iVar5 + 0x2d74 + (int)this) & 7;
  if ((((uVar3 != 1) && (uVar3 != 3)) &&
      (uVar3 = *(uint *)(iVar5 + 0x2d84 + (int)this) & 7, uVar3 != 1)) && (uVar3 != 3)) {
    bVar4 = 0;
  }
  uVar3 = *(uint *)(iVar5 + 0x2d70 + (int)this);
  if (uVar3 < 0xb) {
    bVar1 = (&DAT_10055f04)[uVar3];
  }
  else {
    bVar1 = 0;
  }
  uVar3 = *(uint *)((param_1 + 0x1c) * 0x1a0 + (int)this);
  if (uVar3 < 0xb) {
    bVar2 = (&DAT_10055f04)[uVar3];
  }
  else {
    bVar2 = 0;
  }
  *(byte *)(param_1 + 0x32d9 + (int)this) = bVar2 | bVar4 | bVar1;
  return;
}

