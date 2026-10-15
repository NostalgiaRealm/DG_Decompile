/*
 * FUN_10024a49 at 10024a49
 * undefined4 __thiscall FUN_10024a49(void * this, uint param_1, uint * param_2)
 * Address ranges: 10024a49-10024ab2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10024a49(void *this,uint param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x11c) * 0x228;
  uVar2 = *(uint *)(&DAT_1006c4a8 + iVar1);
  if ((*(int *)(&DAT_1006c4ac + iVar1) == 0) && (uVar2 < param_1)) {
    *param_2 = uVar2;
    param_2[1] = 0;
    uVar2 = (uint)param_2 & 0xffffff00;
  }
  else {
    *(uint *)(&DAT_1006c4a8 + iVar1) = uVar2 - param_1;
    *(uint *)(&DAT_1006c4ac + iVar1) = *(int *)(&DAT_1006c4ac + iVar1) - (uint)(uVar2 < param_1);
    iVar1 = *(int *)((int)this + 0x11c) * 0x228;
    uVar2 = *(uint *)(&DAT_1006c4ac + iVar1);
    *param_2 = *(uint *)(&DAT_1006c4a8 + iVar1);
    param_2[1] = uVar2;
    uVar2 = CONCAT31((int3)((uint)param_2 >> 8),1);
  }
  return uVar2;
}

