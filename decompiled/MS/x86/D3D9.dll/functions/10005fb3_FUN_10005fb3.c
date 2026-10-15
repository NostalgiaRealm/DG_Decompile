/*
 * FUN_10005fb3 at 10005fb3
 * uint __thiscall FUN_10005fb3(void * this, int param_1)
 * Address ranges: 10005fb3-1000602d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10005fb3(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  
  iVar4 = param_1;
  iVar1 = *(int *)this;
  iVar2 = *(int *)(iVar1 + 0x1258 + param_1 * 4);
  iVar3 = *(int *)(iVar2 + 0x18);
  if (((iVar3 == 3) || (uVar5 = iVar3 - 5, uVar5 == 0)) &&
     (uVar5 = *(uint *)(iVar2 + 0x44), uVar5 != 0)) {
    if (((uVar5 == *(uint *)((int)this + 4)) || (uVar5 == *(uint *)((int)this + 8))) ||
       ((uVar5 == *(uint *)((int)this + 0xc) ||
        ((uVar5 == *(uint *)((int)this + 0x10) || (uVar5 == *(uint *)((int)this + 0x14))))))) {
      bVar6 = 1;
    }
    else {
      bVar6 = 0;
    }
    param_1 = (int)bVar6;
    if (*(byte *)(iVar1 + 0xc88 + iVar4) != bVar6) {
      (**(code **)(**(int **)(iVar1 + 0x14) + 0x6c))(iVar4,0,uVar5,0,0,0,param_1);
      uVar5 = *(uint *)this;
      *(byte *)(uVar5 + 0xc88 + iVar4) = bVar6;
    }
  }
  return uVar5 & 0xffffff00;
}

