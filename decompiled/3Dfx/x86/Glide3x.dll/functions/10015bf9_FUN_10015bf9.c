/*
 * FUN_10015bf9 at 10015bf9
 * int __thiscall FUN_10015bf9(void * this, int param_1, undefined4 * param_2)
 * Address ranges: 10015bf9-10015c63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10015bf9(void *this,int param_1,undefined4 *param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint local_8;
  
  iVar4 = 0;
  local_8 = *(uint *)((int)this + 0x328) & *(uint *)((int)this + 0x324);
  uVar2 = 0;
  if (local_8 != 0) {
    for (; (local_8 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
    }
  }
  if (local_8 != 0) {
    pbVar1 = (byte *)((int)&local_8 + ((int)uVar2 >> 3));
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar2 & 7));
    while( true ) {
      uVar2 = uVar2 & 0xff;
      puVar5 = (undefined4 *)(*(int *)((int)this + uVar2 * 0x10 + 0x244) + param_1);
      puVar6 = param_2;
      for (iVar3 = *(int *)((int)this + uVar2 * 0x10 + 0x24c); iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      iVar3 = *(int *)((int)this + uVar2 * 0x10 + 0x24c);
      iVar4 = iVar4 + iVar3;
      param_2 = param_2 + iVar3;
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
  return iVar4;
}

