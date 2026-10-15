/*
 * FUN_10053d6c at 10053d6c
 * int __thiscall FUN_10053d6c(void * this, uint * param_1)
 * Address ranges: 10053d6c-10053eb5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10053d6c(void *this,uint *param_1)

{
  uint uVar1;
  SIZE_T SVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  undefined8 local_88;
  uint local_80 [28];
  int local_10;
  
  local_88 = FUN_10053a59(param_1);
  uVar5 = (uint)((ulonglong)local_88 >> 0x20);
  uVar4 = (uint)local_88;
  piVar6 = (int *)((int)this + 0xc);
  uVar1 = FUN_100546ab(piVar6,uVar4,uVar5);
  iVar7 = uVar1 * 0x18;
  if (((uVar1 == *(uint *)((int)this + 0x14)) || (*(uint *)(iVar7 + *piVar6) != uVar4)) ||
     (*(uint *)(iVar7 + 4 + *piVar6) != uVar5)) {
    FUN_100545c3(piVar6,uVar1,uVar4,uVar5,(undefined4 *)&local_88);
  }
  piVar6 = (int *)(*piVar6 + 0x10 + iVar7);
  if (piVar6 == (int *)0x0) {
    return 0;
  }
  piVar6 = (int *)*piVar6;
  uVar4 = 0;
  if (piVar6[1] != 0) {
    do {
      iVar8 = uVar4 * 0x74 + *piVar6;
      iVar7 = 0;
      while (*(uint *)(iVar8 + iVar7 * 4) == param_1[iVar7]) {
        iVar7 = iVar7 + 1;
        if (iVar7 == 0x1c) {
          iVar7 = *(int *)(iVar8 + 0x70);
          if (iVar7 != 0) {
            return iVar7;
          }
          goto LAB_10053e1a;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)piVar6[1]);
  }
LAB_10053e1a:
  iVar7 = FUN_10053b21(this,param_1);
  if (iVar7 == 0) {
    return 0;
  }
  puVar9 = local_80;
  for (iVar8 = 0x1c; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar9 = *param_1;
    param_1 = param_1 + 1;
    puVar9 = puVar9 + 1;
  }
  iVar8 = piVar6[2];
  local_10 = iVar7;
  if (piVar6[1] == iVar8) {
    if (iVar8 == 0) {
      uVar4 = 0x10;
    }
    else {
      uVar4 = iVar8 * 2;
    }
    SVar2 = (SIZE_T)((ulonglong)uVar4 * 0x74);
    if ((int)((ulonglong)uVar4 * 0x74 >> 0x20) != 0) {
      SVar2 = 0xffffffff;
    }
    puVar3 = (undefined4 *)FUN_1005c789(SVar2);
    if (puVar3 == (undefined4 *)0x0) goto LAB_10053ea2;
    FUN_1005ca00(puVar3,(undefined4 *)*piVar6,piVar6[2] * 0x74);
    thunk_FUN_1005c76c((LPVOID)*piVar6);
    *piVar6 = (int)puVar3;
    piVar6[2] = uVar4;
  }
  puVar9 = local_80;
  puVar10 = (uint *)(piVar6[1] * 0x74 + *piVar6);
  for (iVar8 = 0x1d; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  piVar6[1] = piVar6[1] + 1;
LAB_10053ea2:
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
  return iVar7;
}

