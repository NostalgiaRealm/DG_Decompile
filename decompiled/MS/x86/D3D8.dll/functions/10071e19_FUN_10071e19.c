/*
 * FUN_10071e19 at 10071e19
 * uint __thiscall FUN_10071e19(void * this, int * param_1)
 * Address ranges: 10071e19-10071ee5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10071e19(void *this,int *param_1)

{
  ulonglong uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar3 = FUN_10096746(*(void **)((int)this + 0x40),*(int *)((int)this + 0xe0));
  if ((uVar3 == 0) || (uVar3 == *(uint *)((int)this + 0xcc))) {
    iVar4 = FUN_10071d4a((int)this);
    *(int *)((int)this + 0xe4) = iVar4;
    uVar3 = 0;
    if (iVar4 != 0) {
      bVar2 = FUN_10071ca6(this,param_1);
      if (bVar2) {
        *(undefined4 *)((int)this + 0xe8) = 0;
        uVar5 = FUN_100965ee(*(void **)((int)this + 0x40),*(int *)((int)this + 0xe4),1);
        if ((char)uVar5 == '\0') {
          uVar3 = FUN_10096631(*(void **)((int)this + 0x40),*(int *)((int)this + 0xe0),0);
          goto LAB_10071e86;
        }
      }
      iVar4 = *(int *)((int)this + 0xe4);
      if (*(int **)(iVar4 + 0xd7c) != (int *)0x0) {
        FUN_1006b7ed((void *)((int)this + 0x48),*(int **)(iVar4 + 0xd7c),
                     *(undefined4 *)(iVar4 + 0xd84),*(undefined4 *)(iVar4 + 0xd88),
                     *(undefined4 *)(&DAT_100b0c64 + *(int *)(iVar4 + 0x2c) * 4));
      }
      iVar4 = *(int *)((int)this + 0xe4);
      *(uint *)((int)this + 0x14) = *(uint *)(iVar4 + 0x10) / *(uint *)(iVar4 + 0x18);
      uVar1 = (ulonglong)*(uint *)(iVar4 + 0x14) / (ulonglong)*(uint *)(iVar4 + 0x1c);
      *(int *)((int)this + 0x18) = (int)uVar1;
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
  }
LAB_10071e86:
  *(undefined4 *)((int)this + 0xe0) = 0;
  return uVar3 & 0xffffff00;
}

