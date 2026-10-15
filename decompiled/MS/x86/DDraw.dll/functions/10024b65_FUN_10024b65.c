/*
 * FUN_10024b65 at 10024b65
 * undefined4 __thiscall FUN_10024b65(void * this, undefined4 param_1)
 * Address ranges: 10024b65-10024bc5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10024b65(void *this,undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_84 [32];
  
  uVar2 = FUN_10002ffb(*(int *)((int)this + 0x11c),param_1);
  if ((char)uVar2 == '\0') {
    uVar2 = uVar2 & 0xffffff00;
  }
  else {
    iVar1 = *(int *)((int)this + 0x11c);
    puVar3 = (undefined4 *)FUN_10024ae1(this,local_84,(int *)(&DAT_1006c42c + iVar1 * 0x228));
    uVar2 = CONCAT31((int3)((uint)puVar3 >> 8),1);
    puVar5 = (undefined4 *)(&DAT_100698d0 + iVar1 * 0xa4);
    for (iVar4 = 0x1f; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  return uVar2;
}

