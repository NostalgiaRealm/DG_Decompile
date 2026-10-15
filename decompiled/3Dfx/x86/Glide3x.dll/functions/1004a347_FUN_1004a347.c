/*
 * FUN_1004a347 at 1004a347
 * undefined4 __thiscall FUN_1004a347(void * this, uint * param_1)
 * Address ranges: 1004a347-1004a3dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1004a347(void *this,uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_10049d90(param_1);
  uVar5 = (uint)((ulonglong)uVar7 >> 0x20);
  uVar2 = (uint)uVar7;
  uVar3 = FUN_1004a3de(this,uVar2,uVar5);
  iVar6 = uVar3 * 0x38;
  if (((uVar3 == *(uint *)((int)this + 8)) ||
      (iVar1 = *(int *)this, *(uint *)(iVar6 + iVar1) != uVar2)) ||
     (*(uint *)(iVar6 + 4 + iVar1) != uVar5)) {
    FUN_1004a520(this,uVar3,uVar2,uVar5,param_1);
  }
  else {
    uVar4 = FUN_10049d2f(param_1,(uint *)(iVar1 + 8 + iVar6));
    if ((char)uVar4 != '\0') {
      FUN_10049e03(this,*(int **)(iVar6 + 0x30 + iVar1));
      FUN_1004a5b2(this,uVar3,uVar2,uVar5,param_1);
    }
  }
  return *(undefined4 *)(iVar6 + 0x30 + *(int *)this);
}

