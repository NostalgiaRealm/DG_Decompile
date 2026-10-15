/*
 * FUN_10047bef at 10047bef
 * undefined4 __thiscall FUN_10047bef(void * this, uint * param_1)
 * Address ranges: 10047bef-10047c85
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10047bef(void *this,uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_10047638(param_1);
  uVar5 = (uint)((ulonglong)uVar7 >> 0x20);
  uVar2 = (uint)uVar7;
  uVar3 = FUN_10047c86(this,uVar2,uVar5);
  iVar6 = uVar3 * 0x38;
  if (((uVar3 == *(uint *)((int)this + 8)) ||
      (iVar1 = *(int *)this, *(uint *)(iVar6 + iVar1) != uVar2)) ||
     (*(uint *)(iVar6 + 4 + iVar1) != uVar5)) {
    FUN_10047dc8(this,uVar3,uVar2,uVar5,param_1);
  }
  else {
    uVar4 = FUN_100475d7(param_1,(uint *)(iVar1 + 8 + iVar6));
    if ((char)uVar4 != '\0') {
      FUN_100476ab(this,*(int **)(iVar6 + 0x30 + iVar1));
      FUN_10047e5a(this,uVar3,uVar2,uVar5,param_1);
    }
  }
  return *(undefined4 *)(iVar6 + 0x30 + *(int *)this);
}

