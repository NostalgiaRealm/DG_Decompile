/*
 * FUN_10027ecf at 10027ecf
 * int * __thiscall FUN_10027ecf(void * this, void * param_1, uint * param_2)
 * Address ranges: 10027ecf-10028050
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_10027ecf(void *this,void *param_1,uint *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  int *piVar11;
  uint local_44 [8];
  undefined4 *local_24;
  int local_20;
  undefined4 *local_14;
  undefined4 *local_10;
  int *local_c;
  undefined4 uVar4;
  
  piVar5 = (int *)0x0;
  if (*(char *)((int)this + 4) != '\0') {
    local_10 = this;
    FUN_1002d7fd(local_44,(int)param_1,(uint)param_2);
    uVar3 = FUN_1002817c((void *)((int)this + 0x14),local_44);
    if (uVar3 < *(uint *)((int)this + 0x28)) {
      local_14 = (undefined4 *)(uVar3 * 4);
      uVar6 = 0;
      piVar5 = *(int **)((int)local_14 + *(int *)((int)this + 0x24));
      uVar3 = piVar5[1];
      if (uVar3 != 0) {
        local_c = (int *)*piVar5;
        piVar5 = local_c;
        do {
          iVar7 = *(int *)((int)piVar5 + uVar6 * 4);
          iVar8 = 0;
          while (*(uint *)(iVar7 + 4 + iVar8 * 4) == local_44[iVar8]) {
            iVar8 = iVar8 + 1;
            if (iVar8 == 8) {
              return *(int **)(iVar7 + 0x24);
            }
          }
          uVar6 = uVar6 + 1;
          piVar5 = local_c;
          this = local_10;
        } while (uVar6 < uVar3);
      }
      local_10 = local_14;
      if (uVar6 != uVar3) {
        return (int *)0x0;
      }
    }
    else {
      local_10 = (undefined4 *)FUN_1004f60f(0xc);
      if (local_10 == (undefined4 *)0x0) {
        cVar2 = '\0';
      }
      else {
        *local_10 = 0;
        local_10[1] = 0;
        local_10[2] = 0;
        uVar4 = FUN_10028107((void *)((int)this + 0x24),&local_10);
        cVar2 = (char)uVar4;
      }
      local_10 = (undefined4 *)(uVar3 << 2);
      if (cVar2 == '\0') {
        return (int *)0x0;
      }
    }
    puVar1 = *(undefined4 **)((int)this + 0xc);
    iVar7 = *(int *)((int)this + 8);
    FUN_10027e48(&local_24,0x100);
    local_c = (int *)0x0;
    uVar4 = FUN_100353ea(param_1,(uint)param_2,iVar7,(int *)*puVar1,(int *)&local_24);
    if ((char)uVar4 != '\0') {
      local_c = FUN_10046fda(local_20 - (int)local_24,local_24);
    }
    piVar11 = local_c;
    thunk_FUN_1004f626(local_24);
    piVar5 = (int *)0x0;
    if (piVar11 != (int *)0x0) {
      param_2 = (uint *)FUN_1004f60f(0x28);
      if (param_2 == (uint *)0x0) {
        param_2 = (uint *)0x0;
      }
      else {
        *param_2 = (uint)&PTR_FUN_10053d7c;
        param_2[9] = 0;
        puVar9 = local_44;
        puVar10 = param_2;
        for (iVar7 = 8; puVar10 = puVar10 + 1, piVar11 = local_c, iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
        }
      }
      uVar4 = FUN_10028107(*(void **)(*(int *)((int)this + 0x24) + (int)local_10),&param_2);
      piVar5 = (int *)0x0;
      if ((char)uVar4 != '\0') {
        param_2[9] = (uint)piVar11;
        piVar5 = piVar11;
      }
    }
  }
  return piVar5;
}

