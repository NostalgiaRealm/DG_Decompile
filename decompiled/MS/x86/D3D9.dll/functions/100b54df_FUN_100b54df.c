/*
 * FUN_100b54df at 100b54df
 * undefined4 __thiscall FUN_100b54df(void * this, uint * param_1)
 * Address ranges: 100b54df-100b55d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100b54df(void *this,uint *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  undefined8 uVar12;
  int local_1c;
  
  uVar12 = FUN_100b623d((int *)param_1);
  uVar6 = (uint)((ulonglong)uVar12 >> 0x20);
  uVar4 = (uint)uVar12;
  uVar8 = 0;
  uVar9 = 0;
  if (*(uint *)((int)this + 8) != 0) {
    local_1c = *(int *)this;
    uVar7 = *(uint *)((int)this + 8);
    do {
      uVar9 = uVar7 + uVar8 >> 1;
      iVar5 = uVar9 * 0x118;
      uVar1 = *(uint *)(local_1c + 4 + iVar5);
      if ((uVar1 < uVar6) ||
         ((uVar10 = uVar9, uVar1 <= uVar6 && (*(uint *)(local_1c + iVar5) <= uVar4)))) {
        uVar8 = *(uint *)(local_1c + 4 + iVar5);
        if ((uVar6 < uVar8) || ((uVar6 <= uVar8 && (uVar4 <= *(uint *)(local_1c + iVar5))))) break;
        uVar8 = uVar9 + 1;
        uVar9 = uVar7;
        uVar10 = uVar8;
      }
      bVar11 = uVar9 != uVar8;
      uVar7 = uVar9;
      uVar9 = uVar10;
    } while (bVar11);
  }
  iVar5 = uVar9 * 0x118;
  if (((uVar9 == *(uint *)((int)this + 8)) ||
      (iVar2 = *(int *)this, *(uint *)(iVar5 + iVar2) != uVar4)) ||
     (*(uint *)(iVar5 + 4 + iVar2) != uVar6)) {
    FUN_100b572c(this,uVar9,uVar4,uVar6,param_1);
  }
  else {
    uVar8 = FUN_100b6431(param_1,(uint *)(iVar2 + 8 + iVar5));
    if ((char)uVar8 != '\0') {
      piVar3 = *(int **)(iVar5 + 0x110 + *(int *)this);
      (**(code **)(*piVar3 + 8))(piVar3);
      FUN_100b57c9(this,uVar9,uVar6,local_1c,param_1);
    }
  }
  return *(undefined4 *)(iVar5 + 0x110 + *(int *)this);
}

