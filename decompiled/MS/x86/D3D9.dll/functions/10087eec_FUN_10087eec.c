/*
 * FUN_10087eec at 10087eec
 * uint __thiscall FUN_10087eec(void * this, int * param_1)
 * Address ranges: 10087eec-10087fb8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10087eec(void *this,int *param_1)

{
  ulonglong uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar3 = FUN_100b8d99(*(void **)((int)this + 0x40),*(int *)((int)this + 0xe0));
  if ((uVar3 == 0) || (uVar3 == *(uint *)((int)this + 0xcc))) {
    iVar4 = FUN_10087e1d((int)this);
    *(int *)((int)this + 0xe4) = iVar4;
    uVar3 = 0;
    if (iVar4 != 0) {
      bVar2 = FUN_10087d79(this,param_1);
      if (bVar2) {
        *(undefined4 *)((int)this + 0xe8) = 0;
        uVar5 = FUN_100b8c41(*(void **)((int)this + 0x40),*(int *)((int)this + 0xe4),1);
        if ((char)uVar5 == '\0') {
          uVar3 = FUN_100b8c84(*(void **)((int)this + 0x40),*(int *)((int)this + 0xe0),0);
          goto LAB_10087f59;
        }
      }
      iVar4 = *(int *)((int)this + 0xe4);
      if (*(int **)(iVar4 + 0xd7c) != (int *)0x0) {
        FUN_100816e0((void *)((int)this + 0x48),*(int **)(iVar4 + 0xd7c),
                     *(undefined4 *)(iVar4 + 0xd84),*(undefined4 *)(iVar4 + 0xd88),
                     *(undefined4 *)(&DAT_100d4018 + *(int *)(iVar4 + 0x2c) * 4));
      }
      iVar4 = *(int *)((int)this + 0xe4);
      *(uint *)((int)this + 0x14) = *(uint *)(iVar4 + 0x10) / *(uint *)(iVar4 + 0x18);
      uVar1 = (ulonglong)*(uint *)(iVar4 + 0x14) / (ulonglong)*(uint *)(iVar4 + 0x1c);
      *(int *)((int)this + 0x18) = (int)uVar1;
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
  }
LAB_10087f59:
  *(undefined4 *)((int)this + 0xe0) = 0;
  return uVar3 & 0xffffff00;
}

