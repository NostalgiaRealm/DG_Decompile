/*
 * FUN_10001ed6 at 10001ed6
 * undefined4 __thiscall FUN_10001ed6(void * this, uint param_1)
 * Address ranges: 10001ed6-10001f27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10001ed6(void *this,uint param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  uVar4 = 0;
  if (param_1 == 8) {
    uVar4 = 0x29;
  }
  else {
    iVar3 = 0;
    bVar2 = *(&PTR_DAT_100db444)[*(int *)((int)this + 8) * 100];
    while (bVar2 != 0xff) {
      pbVar1 = (&PTR_DAT_100db444)[*(int *)((int)this + 8) * 100] + iVar3;
      uVar5 = (uint)*pbVar1;
      if ((byte)(&DAT_100d4ab4)[uVar5] == param_1) {
        return *(undefined4 *)(&DAT_100d4ae0 + uVar5 * 4);
      }
      iVar3 = iVar3 + 1;
      bVar2 = pbVar1[1];
    }
  }
  return uVar4;
}

