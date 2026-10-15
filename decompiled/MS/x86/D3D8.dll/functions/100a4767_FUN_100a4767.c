/*
 * FUN_100a4767 at 100a4767
 * undefined __thiscall FUN_100a4767(void * this, int param_1)
 * Address ranges: 100a4767-100a4bdb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100a4767(void *this,int param_1)

{
  int *piVar1;
  LPVOID pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  LPVOID local_10;
  int local_c;
  
  iVar6 = param_1 * 0x16c0;
  local_c = param_1 * 0x18;
  iVar3 = (int)this + iVar6 + 0x6c0;
  piVar1 = (int *)(param_1 * 0x28 + 0x24 + (int)this);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_100ac5a0(iVar3 + 0x11c0);
    FUN_10098768((void *)(*(int *)(iVar3 + 0x1304) + 4),'\0');
    FUN_10098768((void *)(*(int *)(iVar3 + 0x130c) + 4),'\0');
    if (*(int *)((int)this + 0x518) != 0) {
      uVar7 = 0;
      do {
        (**(code **)(**(int **)(*(int *)((int)this + 0x514) + uVar7 * 4) + 0xc))(param_1);
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)((int)this + 0x518));
    }
    local_10 = (LPVOID)0x0;
    iVar4 = iVar3;
    if (*(int *)(iVar3 + 0x168c) != 0) {
      uVar7 = 0;
      do {
        FUN_1009bd91((void *)(iVar3 + 0x1684),
                     *(LPVOID *)(*(int *)(iVar6 + 0x1d44 + (int)this) + 0x3c + uVar7 * 0x40));
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(iVar6 + 0x1d4c + (int)this));
      iVar4 = (int)this + iVar6 + 0x6c0;
    }
    *(undefined4 *)(iVar3 + 0x168c) = 0;
    FUN_100a4260(this,param_1);
    FUN_1009db5b((void *)(iVar4 + 0x1310));
    FUN_1009db5b((void *)(iVar4 + 0x1370));
    FUN_1009db5b((void *)(iVar4 + 0x13d0));
    FUN_1009db5b((void *)(iVar4 + 0x1430));
    FUN_1009db5b((void *)(iVar4 + 0x1490));
    FUN_1009fcd8((LPCRITICAL_SECTION)(iVar4 + 0x14f0));
    FUN_100a7c78((int *)(iVar4 + 0x1528));
    FUN_100a7c78((int *)(iVar4 + 0x1580));
    FUN_1009ebe0(*(void **)((int)this + 0x172c0),*(int *)(iVar4 + 0x1304));
    FUN_1009ebe0(*(void **)((int)this + 0x172c0),*(int *)(iVar4 + 0x130c));
    FUN_1009ebb4(*(void **)((int)this + 0x172c0),*(int *)(iVar4 + 0x1300));
    FUN_1009ebb4(*(void **)((int)this + 0x172c0),*(int *)(iVar4 + 0x1308));
    FUN_100a2290(iVar4);
    FUN_1009b7b4(0x2b,iVar4 + 0x10f0);
    FUN_1009b7b4(2,iVar4 + 0x119c);
    FUN_1009b7b4(4,iVar4 + 0x10e0);
    local_10 = *(LPVOID *)(iVar4 + 0x10);
    FUN_1009c4e9((void *)(iVar4 + 0x1640),(int *)&local_10);
    FUN_1009c4b4((void *)(iVar4 + 0x165c),*(int *)(iVar4 + 0x80));
    if (*(int *)(iVar4 + 0x10) != 0) {
      FUN_1009ea70(*(void **)((int)this + 0x172c0),*(uint *)(iVar4 + 0x10),(undefined *)0x0,'\x01');
    }
    if (*(uint *)(iVar4 + 0x80) != 0) {
      FUN_1009ea70(*(void **)((int)this + 0x172c0),*(uint *)(iVar4 + 0x80),(undefined *)0x0,'\x01');
    }
    if (*(int *)(iVar4 + 0x15f8) != 0) {
      uVar7 = 0;
      do {
        pvVar2 = *(LPVOID *)(*(int *)(iVar6 + 0x1cb0 + (int)this) + 0x3c + uVar7 * 0x40);
        local_10 = pvVar2;
        FUN_1009c7fd(*(void **)(iVar6 + 0x1cbc + (int)this),(int *)&local_10);
        FUN_100ad48c(pvVar2);
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(iVar6 + 0x1cb8 + (int)this));
      iVar4 = iVar6 + 0x6c0 + (int)this;
    }
    *(undefined4 *)(iVar4 + 0x15f8) = 0;
    if (*(int *)(iVar4 + 0x1608) != 0) {
      uVar7 = 0;
      do {
        pvVar2 = *(LPVOID *)(*(int *)(iVar6 + 0x1cc0 + (int)this) + 0x150 + uVar7 * 0x158);
        local_10 = pvVar2;
        FUN_1009c6d5(*(void **)(iVar6 + 0x1ccc + (int)this),(int *)&local_10);
        FUN_100ad48c(pvVar2);
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(iVar6 + 0x1cc8 + (int)this));
      iVar4 = iVar6 + 0x6c0 + (int)this;
    }
    *(undefined4 *)(iVar4 + 0x1608) = 0;
    if (*(int *)(iVar4 + 0x1618) != 0) {
      uVar7 = 0;
      do {
        pvVar2 = *(LPVOID *)(*(int *)(iVar6 + 0x1cd0 + (int)this) + 0x150 + uVar7 * 0x158);
        local_10 = pvVar2;
        FUN_1009c6d5(*(void **)(iVar6 + 0x1cdc + (int)this),(int *)&local_10);
        FUN_100ad48c(pvVar2);
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(iVar6 + 0x1cd8 + (int)this));
      iVar4 = iVar6 + 0x6c0 + (int)this;
    }
    *(undefined4 *)(iVar4 + 0x1618) = 0;
    if (*(int *)(iVar4 + 0x1628) != 0) {
      uVar7 = 0;
      do {
        pvVar2 = *(LPVOID *)(*(int *)(iVar6 + 0x1ce0 + (int)this) + 0x34 + uVar7 * 0x38);
        local_10 = pvVar2;
        FUN_1009c769(*(void **)(iVar6 + 0x1cec + (int)this),(int *)&local_10);
        FUN_100ad48c(pvVar2);
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(iVar6 + 0x1ce8 + (int)this));
      iVar4 = iVar6 + 0x6c0 + (int)this;
    }
    *(undefined4 *)(iVar4 + 0x1628) = 0;
    local_10 = (LPVOID)0x0;
    iVar5 = iVar4;
    if (*(int *)(iVar4 + 0x1638) != 0) {
      uVar7 = 0;
      do {
        FUN_1009bbde((void *)(iVar4 + 0x1630),
                     *(int **)(*(int *)(iVar6 + 0x1cf0 + (int)this) + 0x10 + uVar7 * 0x18));
        uVar7 = uVar7 + 1;
        iVar5 = iVar3;
      } while (uVar7 < *(uint *)(iVar6 + 0x1cf8 + (int)this));
    }
    *(undefined4 *)(iVar4 + 0x1638) = 0;
    FUN_1009c40e((undefined4 *)(iVar5 + 0x1640));
    (**(code **)(**(int **)(iVar5 + 0x80) + 8))(*(int **)(iVar5 + 0x80));
    *(undefined4 *)(iVar5 + 0x80) = 0;
    (**(code **)(**(int **)(iVar5 + 0x10) + 8))(*(int **)(iVar5 + 0x10));
    *(undefined4 *)(iVar5 + 0x10) = 0;
    *(undefined4 *)(iVar5 + 0x15fc) = 0;
    *(undefined4 *)(iVar5 + 0x160c) = 0;
    *(undefined4 *)(iVar5 + 0x161c) = 0;
    *(undefined4 *)(iVar5 + 0x162c) = 0;
    *(undefined4 *)(iVar5 + 0x163c) = 0;
    FUN_100a4341(this,param_1);
    if (*(int *)(iVar3 + 0x520 + (int)this) != 0) {
      piVar1 = *(int **)(iVar3 + 0x524 + (int)this);
      (**(code **)(*piVar1 + 8))(piVar1);
      piVar1 = *(int **)(iVar3 + 0x520 + (int)this);
      *(undefined4 *)(iVar3 + 0x524 + (int)this) = 0;
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(iVar3 + 0x520 + (int)this) = 0;
    }
  }
  return;
}

