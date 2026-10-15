/*
 * FUN_1004ad83 at 1004ad83
 * undefined4 __thiscall FUN_1004ad83(void * this, uint * param_1)
 * Address ranges: 1004ad83-1004ae96
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1004ad83(void *this,uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  LPVOID pvVar5;
  LPVOID pvVar6;
  LPVOID pvVar7;
  LPVOID pvVar8;
  int iVar9;
  undefined8 uVar10;
  LPVOID local_c [2];
  
  uVar10 = FUN_10037471((int *)param_1);
  uVar4 = (uint)((ulonglong)uVar10 >> 0x20);
  uVar1 = (uint)uVar10;
  local_c[0] = *(LPVOID *)((int)this + 8);
  pvVar8 = (LPVOID)0x0;
  pvVar5 = (LPVOID)0x0;
  if (local_c[0] != (LPVOID)0x0) {
    iVar9 = *(int *)this;
    pvVar6 = local_c[0];
    do {
      pvVar5 = (LPVOID)((uint)((int)pvVar6 + (int)pvVar8) >> 1);
      iVar2 = (int)pvVar5 * 0x158;
      uVar3 = *(uint *)(iVar9 + 4 + iVar2);
      if ((uVar3 < uVar4) ||
         ((pvVar7 = pvVar5, uVar3 <= uVar4 && (*(uint *)(iVar9 + iVar2) <= uVar1)))) {
        uVar3 = *(uint *)(iVar9 + 4 + iVar2);
        if ((uVar4 < uVar3) || ((uVar4 <= uVar3 && (uVar1 <= *(uint *)(iVar9 + iVar2))))) break;
        pvVar5 = (LPVOID)((int)pvVar5 + 1);
        pvVar7 = pvVar6;
        pvVar8 = pvVar5;
      }
      pvVar6 = pvVar7;
    } while (pvVar7 != pvVar8);
  }
  iVar9 = (int)pvVar5 * 0x158;
  if (((pvVar5 == *(LPVOID *)((int)this + 8)) ||
      (iVar2 = *(int *)this, *(uint *)(iVar9 + iVar2) != uVar1)) ||
     (*(uint *)(iVar9 + 4 + iVar2) != uVar4)) {
    FUN_1004afb6(this,(uint)pvVar5,uVar1,uVar4,param_1);
  }
  else {
    uVar3 = FUN_10037702(param_1,(uint *)(iVar2 + 8 + iVar9));
    if ((char)uVar3 != '\0') {
      pvVar8 = *(LPVOID *)(iVar9 + 0x150 + *(int *)this);
      local_c[0] = pvVar8;
      FUN_10038228(*(void **)((int)this + 0xc),(int *)local_c);
      FUN_1004f626(pvVar8);
      FUN_100176c2(this,(int)pvVar5,uVar1,uVar4,param_1);
    }
  }
  return *(undefined4 *)(iVar9 + 0x150 + *(int *)this);
}

