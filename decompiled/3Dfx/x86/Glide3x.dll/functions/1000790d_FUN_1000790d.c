/*
 * FUN_1000790d at 1000790d
 * undefined4 * __thiscall FUN_1000790d(void * this, undefined4 * param_1, int param_2)
 * Address ranges: 1000790d-1000797e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1000790d(void *this,undefined4 *param_1,int param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint local_8;
  
  if (param_2 == 0) {
    param_2 = *(int *)((int)this + 0x1d0);
  }
  local_8 = *(uint *)((int)this + 0xe8) & *(uint *)((int)this + 0xe4);
  uVar2 = 0;
  if (local_8 != 0) {
    for (; (local_8 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
    }
  }
  if (local_8 != 0) {
    pbVar1 = (byte *)((int)&local_8 + ((int)uVar2 >> 3));
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar2 & 7));
    while( true ) {
      iVar3 = (uVar2 & 0xff) * 0x10;
      puVar5 = param_1;
      puVar6 = (undefined4 *)(param_2 + *(int *)((int)this + iVar3 + 8) * 4);
      for (iVar4 = *(int *)((int)this + iVar3 + 0xc); iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      param_1 = param_1 + *(int *)((int)this + iVar3 + 0xc);
      uVar2 = 0;
      if (local_8 != 0) {
        for (; (local_8 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
        }
      }
      if (local_8 == 0) break;
      pbVar1 = (byte *)((int)&local_8 + ((int)uVar2 >> 3));
      *pbVar1 = *pbVar1 & ~('\x01' << (uVar2 & 7));
    }
  }
  return param_1;
}

