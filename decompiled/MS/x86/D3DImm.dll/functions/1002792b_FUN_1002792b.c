/*
 * FUN_1002792b at 1002792b
 * undefined __thiscall FUN_1002792b(void * this, int param_1, uint * param_2, int param_3, int * param_4, int param_5, uint param_6, undefined1 param_7)
 * Address ranges: 1002792b-10027c42
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1002792b(void *this,int param_1,uint *param_2,int param_3,int *param_4,int param_5,uint param_6,
            undefined1 param_7)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  char cVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  int local_c;
  char local_5;
  
  local_5 = '\0';
  uVar10 = 0;
  iVar3 = *(int *)((int)this + 0x1d54);
  FUN_1005c1d0((int *)(iVar3 + 0x11c0));
  cVar7 = local_5;
  if (*(char *)(iVar3 + 0x12ec) != '\0') {
    if (*param_2 != *(uint *)((int)this + 0x2140)) {
      *(uint *)((int)this + 0x2140) = *param_2;
      iVar3 = FUN_1002498e((void *)((int)this + 0x1dd0),param_2);
      *(int *)((int)this + 0x2144) = iVar3;
    }
    param_2 = *(uint **)((int)this + 0x2144);
    if (param_2 != (uint *)0x0) {
      uVar10 = param_6 * 2 + 4;
    }
    cVar7 = '\x01';
  }
  uVar1 = *(undefined4 *)(*(int *)(param_3 + 0x28) + *(int *)(param_3 + 0x38) * 8);
  if ((cVar7 == '\0') || (0x3eff < uVar10)) {
    local_1c = (int *)0x0;
    local_18 = 0;
    local_14 = 0;
    if ((cVar7 != '\0') &&
       (bVar2 = FUN_10056854((void *)(*(int *)((int)this + 0x1d54) + 0x14f0),uVar10,(int *)&local_1c
                            ), piVar9 = local_1c, bVar2)) {
      FUN_10022fd0(param_4,local_1c,param_6,0,'\0');
      param_4 = piVar9;
    }
    iVar3 = *(int *)((int)this + 0x1d54);
    piVar9 = (int *)(iVar3 + 0x11c0);
    if (*(char *)(iVar3 + 0x12ec) != '\0') {
      puVar4 = (undefined4 *)FUN_1005c0f0(piVar9,0x2c);
      if (puVar4 != (undefined4 *)0x0) {
        LOCK();
        *(int *)(iVar3 + 0x12e8) = *(int *)(iVar3 + 0x12e8) + 1;
        UNLOCK();
        puVar4[1] = 0x2c;
        puVar6 = (undefined4 *)((int)puVar4 + 0x37U & 0xfffffffc);
        puVar4[2] = this;
        puVar4[3] = param_1;
        puVar4[4] = param_2;
        puVar4[5] = uVar1;
        puVar4[6] = param_4;
        puVar4[7] = param_5;
        puVar4[8] = param_6;
        *(undefined1 *)(puVar4 + 9) = param_7;
        puVar4[10] = local_1c;
        puVar4[0xb] = local_18;
        puVar4[0xc] = local_14;
        *puVar6 = 0;
        *puVar4 = FUN_10027d0c;
        piVar9[*(int *)(iVar3 + 0x12e4) * 5 + 0x1a] = (int)puVar6;
        goto LAB_10027bcd;
      }
      FUN_1001b0b6(piVar9);
    }
    puVar4 = *(undefined4 **)(iVar3 + 0x12d0);
    *puVar4 = this;
    puVar4[1] = param_1;
    puVar4[2] = param_2;
    puVar4[3] = uVar1;
    puVar4[4] = param_4;
    puVar4[5] = param_5;
    puVar4[6] = param_6;
    *(undefined1 *)(puVar4 + 7) = param_7;
    puVar4[8] = local_1c;
    puVar4[9] = local_18;
    puVar4[10] = local_14;
    FUN_10027d0c(puVar4);
  }
  else {
    iVar3 = *(int *)((int)this + 0x1d54);
    piVar9 = (int *)(iVar3 + 0x11c0);
    if (*(char *)(iVar3 + 0x12ec) != '\0') {
      local_c = 0x1c;
      if (uVar10 != 0) {
        local_c = (uVar10 + 3 & 0xfffffffc) + 0x20;
      }
      local_10 = (undefined4 *)FUN_1005c0f0(piVar9,local_c);
      if (local_10 != (undefined4 *)0x0) {
        LOCK();
        *(int *)(iVar3 + 0x12e8) = *(int *)(iVar3 + 0x12e8) + 1;
        UNLOCK();
        local_10[1] = local_c;
        uVar5 = (uint)(uVar10 != 0);
        local_10[uVar5 + 2] = this;
        local_10[uVar5 + 3] = param_1;
        local_10[uVar5 + 4] = param_2;
        local_10[uVar5 + 5] = uVar1;
        local_10[uVar5 + 6] = param_5;
        local_10[uVar5 + 7] = param_6;
        piVar8 = (int *)((int)local_10 + (uVar5 + 2) * 4 + 0x1f & 0xfffffffc);
        *(undefined1 *)(local_10 + uVar5 + 8) = param_7;
        if (uVar10 != 0) {
          local_10[2] = piVar8;
          FUN_10022fd0(param_4,piVar8,param_6,0,'\0');
          piVar8 = (int *)((int)piVar8 + (uVar10 + 3 & 0xfffffffc));
        }
        *piVar8 = 0;
        *local_10 = FUN_10027c43;
        piVar9[*(int *)(iVar3 + 0x12e4) * 5 + 0x1a] = (int)piVar8;
LAB_10027bcd:
        if (*(char *)((int)piVar9 + 0x12d) != '\0') {
          *piVar9 = 0;
          SetEvent((HANDLE)piVar9[0x18]);
          return;
        }
        goto LAB_10027c36;
      }
      FUN_1001b0b6(piVar9);
    }
    local_10 = *(undefined4 **)(iVar3 + 0x12d0);
    uVar5 = (uint)(uVar10 != 0);
    local_10[uVar5] = this;
    local_10[uVar5 + 1] = param_1;
    local_10[uVar5 + 2] = param_2;
    local_10[uVar5 + 3] = uVar1;
    local_10[uVar5 + 4] = param_5;
    local_10[uVar5 + 5] = param_6;
    *(undefined1 *)(local_10 + uVar5 + 6) = param_7;
    if (uVar10 != 0) {
      *local_10 = local_10 + uVar5 + 7;
      FUN_10022fd0(param_4,local_10 + uVar5 + 7,param_6,0,'\0');
    }
    FUN_10027c43(local_10);
  }
LAB_10027c36:
  *piVar9 = 0;
  return;
}

