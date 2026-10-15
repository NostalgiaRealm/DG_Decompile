/*
 * FUN_100288ac at 100288ac
 * undefined4 __thiscall FUN_100288ac(void * this, uint * param_1)
 * Address ranges: 100288ac-10028989
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100288ac(void *this,uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  longlong lVar10;
  uint local_10;
  
  lVar10 = FUN_10047402(param_1);
  uVar3 = (uint)((ulonglong)lVar10 >> 0x20);
  uVar5 = 0;
  local_10 = (uint)lVar10;
  uVar7 = 0;
  if (*(uint *)((int)this + 8) != 0) {
    iVar6 = *(int *)this;
    uVar4 = *(uint *)((int)this + 8);
    do {
      uVar7 = uVar4 + uVar5 >> 1;
      iVar2 = uVar7 * 0x40;
      uVar1 = *(uint *)(iVar6 + 4 + iVar2);
      if ((uVar1 < uVar3) ||
         ((uVar8 = uVar7, uVar1 <= uVar3 && (*(uint *)(iVar6 + iVar2) <= local_10)))) {
        uVar5 = *(uint *)(iVar6 + 4 + iVar2);
        if ((uVar3 < uVar5) || ((uVar3 <= uVar5 && (local_10 <= *(uint *)(iVar6 + iVar2))))) break;
        uVar5 = uVar7 + 1;
        uVar7 = uVar4;
        uVar8 = uVar5;
      }
      bVar9 = uVar7 != uVar5;
      uVar4 = uVar7;
      uVar7 = uVar8;
    } while (bVar9);
  }
  iVar6 = uVar7 * 0x40;
  if (((uVar7 == *(uint *)((int)this + 8)) ||
      (iVar2 = *(int *)this, *(uint *)(iVar6 + iVar2) != local_10)) ||
     (*(uint *)(iVar6 + 4 + iVar2) != uVar3)) {
    FUN_10028aeb(this,uVar7,local_10,uVar3,param_1);
  }
  else {
    uVar5 = FUN_1004749c(param_1,(uint *)(iVar2 + 8 + iVar6));
    if ((char)uVar5 != '\0') {
      FUN_1004138e(*(void **)((int)this + 0xc),*(int *)((int)this + 0x10),
                   *(int **)(iVar6 + 0x3c + *(int *)this));
      FUN_10028b85(this,uVar7,local_10,uVar3,param_1);
    }
  }
  return *(undefined4 *)(iVar6 + 0x3c + *(int *)this);
}

