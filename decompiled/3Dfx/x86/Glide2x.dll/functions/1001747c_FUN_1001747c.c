/*
 * FUN_1001747c at 1001747c
 * undefined4 __thiscall FUN_1001747c(void * this, int * param_1)
 * Address ranges: 1001747c-10017536
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1001747c(void *this,int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  
  uVar10 = FUN_1003724d(param_1);
  uVar5 = (uint)((ulonglong)uVar10 >> 0x20);
  uVar2 = (uint)uVar10;
  uVar8 = 0;
  uVar4 = 0;
  if (*(uint *)((int)this + 8) != 0) {
    iVar9 = *(int *)this;
    uVar6 = *(uint *)((int)this + 8);
    do {
      uVar4 = uVar6 + uVar8 >> 1;
      iVar3 = uVar4 * 0x40;
      uVar1 = *(uint *)(iVar9 + 4 + iVar3);
      if ((uVar1 < uVar5) ||
         ((uVar7 = uVar4, uVar1 <= uVar5 && (*(uint *)(iVar9 + iVar3) <= uVar2)))) {
        uVar8 = *(uint *)(iVar9 + 4 + iVar3);
        if ((uVar5 < uVar8) || ((uVar5 <= uVar8 && (uVar2 <= *(uint *)(iVar9 + iVar3))))) break;
        uVar4 = uVar4 + 1;
        uVar7 = uVar6;
        uVar8 = uVar4;
      }
      uVar6 = uVar7;
    } while (uVar7 != uVar8);
  }
  iVar9 = uVar4 * 0x40;
  if (((uVar4 == *(uint *)((int)this + 8)) || (*(uint *)(iVar9 + *(int *)this) != uVar2)) ||
     (*(uint *)(iVar9 + 4 + *(int *)this) != uVar5)) {
    FUN_1001771f(this,uVar4,uVar2,uVar5,param_1);
  }
  return *(undefined4 *)(iVar9 + 0x3c + *(int *)this);
}

