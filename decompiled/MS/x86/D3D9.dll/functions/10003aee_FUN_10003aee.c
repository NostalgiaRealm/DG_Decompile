/*
 * FUN_10003aee at 10003aee
 * int __thiscall FUN_10003aee(void * this, uint param_1, int param_2)
 * Address ranges: 10003aee-10003b93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10003aee(void *this,uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  int extraout_ECX;
  int iVar7;
  
  if (param_1 < *(uint *)((int)this + 0x4c)) {
    iVar4 = FUN_1002a0b7();
    iVar7 = 0;
    iVar1 = *(int *)(*(int *)((int)this + 0x48) + extraout_ECX * 4);
    uVar2 = *(uint *)(DAT_100dea74 + 0x947);
    if ((uVar2 & 2) != 0) {
      iVar7 = FUN_10002297(param_2);
      if ((iVar7 == 0x10) && (cVar3 = FUN_1000347d(this,param_2), cVar3 != '\0')) {
        iVar7 = 1;
      }
      else {
        iVar7 = 0;
      }
    }
    if ((((uVar2 & 4) != 0) && (iVar5 = FUN_10002297(param_2), iVar5 == 0x20)) &&
       (cVar3 = FUN_1000347d(this,param_2), cVar3 != '\0')) {
      iVar7 = iVar7 + 1;
    }
    puVar6 = &DAT_100df4f8;
    if ((char)iVar4 == '\0') {
      puVar6 = &DAT_100df4ec;
    }
    iVar7 = *(int *)(puVar6 + iVar1 * 0x228) * iVar7;
  }
  else {
    iVar7 = 0;
  }
  return iVar7;
}

