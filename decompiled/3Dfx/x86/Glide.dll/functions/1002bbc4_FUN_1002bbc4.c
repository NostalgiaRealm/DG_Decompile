/*
 * FUN_1002bbc4 at 1002bbc4
 * undefined4 * __thiscall FUN_1002bbc4(void * this, void * param_1, uint param_2)
 * Address ranges: 1002bbc4-1002bd67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1002bbc4(void *this,void *param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  char cVar4;
  uint *puVar5;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  uint *local_44;
  uint *local_40;
  uint local_3c;
  LPVOID local_38;
  int local_34;
  uint local_28 [9];
  undefined4 uVar6;
  
  if (*(char *)((int)this + 4) != '\0') {
    local_44 = this;
    FUN_1002db87(local_28,(int)param_1,param_2);
    local_3c = FUN_10028506((void *)((int)this + 0x14),local_28);
    if (local_3c < *(uint *)((int)this + 0x28)) {
      piVar3 = *(int **)(*(int *)((int)this + 0x24) + local_3c * 4);
      uVar8 = 0;
      uVar2 = piVar3[1];
      if (uVar2 != 0) {
        local_40 = (uint *)*piVar3;
        do {
          iVar7 = *(int *)((int)local_40 + uVar8 * 4);
          iVar9 = 0;
          while (*(uint *)(iVar7 + 4 + iVar9 * 4) == local_28[iVar9]) {
            iVar9 = iVar9 + 1;
            if (iVar9 == 8) {
              return *(undefined4 **)(iVar7 + 0x24);
            }
          }
          uVar8 = uVar8 + 1;
          this = local_44;
        } while (uVar8 < uVar2);
      }
      if (uVar8 != uVar2) {
        return (undefined4 *)0x0;
      }
    }
    else {
      puVar5 = (uint *)FUN_1004f99f(0xc);
      if (puVar5 == (uint *)0x0) {
        cVar4 = '\0';
      }
      else {
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        local_44 = puVar5;
        uVar6 = FUN_10028491((void *)((int)this + 0x24),&local_44);
        cVar4 = (char)uVar6;
      }
      if (cVar4 == '\0') {
        return (undefined4 *)0x0;
      }
    }
    puVar1 = *(undefined4 **)((int)this + 0xc);
    uVar2 = *(uint *)((int)this + 8);
    FUN_100281d2(&local_38,0x100);
    uVar6 = FUN_10035774(param_1,param_2,uVar2,(int *)puVar1[4],(int *)&local_38);
    if ((char)uVar6 != '\0') {
      piVar3 = (int *)*puVar1;
      local_44 = (uint *)0x0;
      iVar7 = (**(code **)(*piVar3 + 0x3c))(piVar3,local_38,local_34 - (int)local_38,0,&local_44);
      puVar5 = local_44;
      if (-1 < iVar7) {
        local_40 = local_44;
        thunk_FUN_1004f9b6(local_38);
        if (puVar5 == (uint *)0x0) {
          return (undefined4 *)0x0;
        }
        local_44 = (uint *)FUN_1004f99f(0x28);
        if (local_44 == (uint *)0x0) {
          local_44 = (uint *)0x0;
        }
        else {
          *local_44 = (uint)&PTR_FUN_10053d7c;
          local_44[9] = 0;
          puVar10 = local_28;
          puVar11 = local_44;
          for (iVar7 = 8; puVar11 = puVar11 + 1, puVar5 = local_40, iVar7 != 0; iVar7 = iVar7 + -1)
          {
            *puVar11 = *puVar10;
            puVar10 = puVar10 + 1;
          }
        }
        uVar6 = FUN_10028491(*(void **)(*(uint *)((int)this + 0x24) + local_3c * 4),&local_44);
        if ((char)uVar6 == '\0') {
          return (undefined4 *)0x0;
        }
        local_44[9] = (uint)puVar5;
        return puVar5;
      }
    }
    thunk_FUN_1004f9b6(local_38);
  }
  return (undefined4 *)0x0;
}

