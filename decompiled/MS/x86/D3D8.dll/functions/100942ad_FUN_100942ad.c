/*
 * FUN_100942ad at 100942ad
 * undefined4 __thiscall FUN_100942ad(void * this, uint * param_1)
 * Address ranges: 100942ad-10094343
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100942ad(void *this,uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_10093eaa(param_1);
  uVar5 = (uint)((ulonglong)uVar7 >> 0x20);
  uVar2 = (uint)uVar7;
  uVar3 = FUN_10094344(this,uVar2,uVar5);
  iVar6 = uVar3 * 0x38;
  if (((uVar3 == *(uint *)((int)this + 8)) ||
      (iVar1 = *(int *)this, *(uint *)(iVar6 + iVar1) != uVar2)) ||
     (*(uint *)(iVar6 + 4 + iVar1) != uVar5)) {
    FUN_10094486(this,uVar3,uVar2,uVar5,param_1);
  }
  else {
    uVar4 = FUN_10093e49(param_1,(uint *)(iVar1 + 8 + iVar6));
    if ((char)uVar4 != '\0') {
      FUN_10093f1d(this,*(int **)(iVar6 + 0x30 + iVar1));
      FUN_10094518(this,uVar3,uVar2,uVar5,param_1);
    }
  }
  return *(undefined4 *)(iVar6 + 0x30 + *(int *)this);
}

