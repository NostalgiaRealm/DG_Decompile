/*
 * FUN_1001f066 at 1001f066
 * undefined4 * __thiscall FUN_1001f066(void * this, void * param_1, uint param_2)
 * Address ranges: 1001f066-1001f20f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1001f066(void *this,void *param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  undefined4 *local_74;
  undefined4 *local_70;
  uint local_6c;
  LPVOID local_68;
  int local_64;
  uint local_58 [21];
  undefined4 uVar5;
  
  if (*(char *)((int)this + 4) != '\0') {
    local_74 = this;
    FUN_10023920((int *)local_58,(int)param_1,param_2);
    local_6c = FUN_1001dc09((void *)((int)this + 0x14),local_58);
    if (local_6c < *(uint *)((int)this + 0x28)) {
      piVar2 = *(int **)(*(int *)((int)this + 0x24) + local_6c * 4);
      uVar7 = 0;
      uVar1 = piVar2[1];
      if (uVar1 != 0) {
        local_70 = (undefined4 *)*piVar2;
        do {
          iVar6 = *(int *)((int)local_70 + uVar7 * 4);
          iVar8 = 0;
          while (*(uint *)(iVar6 + 8 + iVar8 * 4) == local_58[iVar8]) {
            iVar8 = iVar8 + 1;
            if (iVar8 == 0x14) {
              return *(undefined4 **)(iVar6 + 0x58);
            }
          }
          uVar7 = uVar7 + 1;
          this = local_74;
        } while (uVar7 < uVar1);
      }
      if (uVar7 != uVar1) {
        return (undefined4 *)0x0;
      }
    }
    else {
      puVar4 = (undefined4 *)FUN_1005566f(0xc);
      if (puVar4 == (undefined4 *)0x0) {
        cVar3 = '\0';
      }
      else {
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        local_74 = puVar4;
        uVar5 = FUN_1001db94((void *)((int)this + 0x24),&local_74);
        cVar3 = (char)uVar5;
      }
      if (cVar3 == '\0') {
        return (undefined4 *)0x0;
      }
    }
    puVar4 = *(undefined4 **)((int)this + 0xc);
    iVar6 = *(int *)((int)this + 8);
    FUN_1001d8cf(&local_68,0x100);
    uVar5 = FUN_1002cebf(param_1,param_2,iVar6,(int *)puVar4[4],(int *)&local_68);
    if ((char)uVar5 != '\0') {
      piVar2 = (int *)*puVar4;
      local_74 = (undefined4 *)0x0;
      iVar6 = (**(code **)(*piVar2 + 0x3c))(piVar2,local_68,local_64 - (int)local_68,0,&local_74);
      puVar4 = local_74;
      if (-1 < iVar6) {
        local_70 = local_74;
        thunk_FUN_10055686(local_68);
        if (puVar4 == (undefined4 *)0x0) {
          return (undefined4 *)0x0;
        }
        local_74 = (undefined4 *)FUN_1005566f(0x60);
        if (local_74 == (undefined4 *)0x0) {
          local_74 = (undefined4 *)0x0;
        }
        else {
          *local_74 = &PTR_FUN_1005923c;
          puVar9 = local_58;
          puVar10 = local_74 + 2;
          for (iVar6 = 0x14; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
          }
          *local_74 = &PTR_FUN_10059240;
          local_74[0x16] = 0;
          puVar4 = local_70;
        }
        uVar5 = FUN_1001db94(*(void **)(*(int *)((int)this + 0x24) + local_6c * 4),&local_74);
        if ((char)uVar5 == '\0') {
          return (undefined4 *)0x0;
        }
        local_74[0x16] = puVar4;
        return puVar4;
      }
    }
    thunk_FUN_10055686(local_68);
  }
  return (undefined4 *)0x0;
}

