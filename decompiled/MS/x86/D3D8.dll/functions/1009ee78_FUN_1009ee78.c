/*
 * FUN_1009ee78 at 1009ee78
 * int __thiscall FUN_1009ee78(void * this, uint param_1, undefined4 param_2, int * param_3, int param_4, int param_5, int param_6, int param_7, int * param_8, void * param_9)
 * Address ranges: 1009ee78-1009f142
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall
FUN_1009ee78(void *this,uint param_1,undefined4 param_2,int *param_3,int param_4,int param_5,
            int param_6,int param_7,int *param_8,void *param_9)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int *extraout_ECX;
  int *piVar7;
  int *extraout_ECX_00;
  uint uVar8;
  undefined4 extraout_ECX_01;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  int local_50;
  int local_4c;
  uint local_48;
  int *local_44;
  int local_40;
  int local_3c;
  int *local_38;
  int *local_34;
  uint local_30;
  LPCRITICAL_SECTION local_2c;
  undefined8 local_28;
  int local_1c;
  undefined4 *local_18;
  uint local_14;
  int *local_10;
  uint local_c;
  
  piVar6 = param_8;
  local_2c = (LPCRITICAL_SECTION)((int)this + 0x1c);
  EnterCriticalSection(local_2c);
  local_1c = 0;
  if (((*(char *)((int)this + 0x34) != '\0') ||
      (uVar3 = FUN_1009f56a(this,&param_1), (char)uVar3 != '\0')) &&
     (puVar4 = (undefined4 *)FUN_1009f51b(this,&param_1), puVar4 != (undefined4 *)0x0)) {
    local_18 = puVar4 + 1;
    *puVar4 = 0;
    param_1 = 0xffffffff;
    iVar5 = FUN_1009f5a5(local_18,&param_1);
    if (iVar5 == 0) {
      local_10 = (int *)0x0;
      piVar7 = extraout_ECX;
    }
    else {
      piVar7 = *(int **)(iVar5 + 0xc);
      local_10 = piVar7;
    }
    local_28 = 0;
    if (puVar4[3] == 0) {
      param_1 = 0;
      local_c = 0;
    }
    else {
      param_1 = 0;
      local_c = 0;
      local_14 = puVar4[3];
      do {
        local_14 = local_14 - 1;
        if (local_14 < (uint)puVar4[3]) {
          piVar7 = (int *)(local_14 * 0x28);
          piVar10 = (int *)((int)piVar7 + puVar4[2] + 0x10);
        }
        else {
          piVar10 = (int *)&DAT_00000008;
        }
        if (piVar10[2] != -1) {
          piVar7 = (int *)FUN_1009ec0c(piVar10,piVar7,param_4,param_5);
          local_28 = CONCAT44(piVar7,(undefined4)local_28);
          param_8 = param_3;
          if ((piVar6 != (int *)0x0) && (uVar3 = 0, piVar6[1] != 0)) {
            do {
              if (piVar10[2] == *(int *)(*piVar6 + 4 + uVar3 * 8)) {
                param_8 = *(int **)(*piVar6 + uVar3 * 8);
                uVar11 = 1 << (uVar3 & 0x1f);
                uVar9 = 0;
                if (0x1f < uVar3) {
                  uVar9 = uVar11;
                }
                uVar11 = uVar11 ^ uVar9;
                if (0x3f < uVar3) {
                  uVar9 = uVar11;
                }
                local_c = local_c | uVar11;
                param_1 = param_1 | uVar9;
                break;
              }
              uVar3 = uVar3 + 1;
            } while (uVar3 < (uint)piVar6[1]);
          }
          if ((piVar7 != local_10) || (param_8 != param_3)) {
            local_30 = piVar10[2];
            local_38 = piVar7;
            local_34 = param_8;
            FUN_1009f398(param_9,&local_38);
            if (param_8 != param_3) {
              *piVar10 = param_4;
              piVar10[1] = param_5;
              piVar10[4] = param_6;
              piVar10[3] = (int)param_8;
              piVar10[5] = param_7;
              piVar7 = param_8;
              goto LAB_1009eff1;
            }
          }
          FUN_1009f814(puVar4 + 1,local_14);
          piVar7 = extraout_ECX_00;
        }
LAB_1009eff1:
      } while (local_14 != 0);
    }
    if ((piVar6 != (int *)0x0) && (uVar11 = 0, uVar3 = param_1, piVar6[1] != 0)) {
      do {
        uVar9 = 1 << (uVar11 & 0x1f);
        uVar8 = 0;
        if (0x1f < uVar11) {
          uVar8 = uVar9;
        }
        uVar9 = uVar9 ^ uVar8;
        if (0x3f < uVar11) {
          uVar8 = uVar9;
        }
        if ((uVar9 & local_c) == 0 && (uVar8 & uVar3) == 0) {
          piVar7 = *(int **)(*piVar6 + uVar11 * 8);
          uVar3 = param_1;
          if (piVar7 != local_10) {
            local_50 = param_4;
            local_4c = param_5;
            puVar1 = (uint *)(*piVar6 + 4 + uVar11 * 8);
            local_48 = *puVar1;
            local_40 = param_6;
            local_3c = param_7;
            local_44 = piVar7;
            FUN_1009f5df(local_18,puVar1,&local_50);
            local_38 = local_10;
            local_30 = local_48;
            local_34 = piVar7;
            FUN_1009f398(param_9,&local_38);
            uVar3 = param_1;
          }
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < (uint)piVar6[1]);
    }
    puVar4 = local_18;
    param_1 = 0xffffffff;
    piVar6 = (int *)FUN_1009f5a5(local_18,&param_1);
    iVar2 = param_5;
    iVar5 = param_4;
    if (piVar6 == (int *)0x0) {
      local_50 = param_4;
      local_4c = param_5;
      local_44 = param_3;
      local_40 = param_6;
      local_3c = param_7;
      local_48 = 0xffffffff;
      param_3 = (int *)0xffffffff;
      FUN_1009f5df(puVar4,(uint *)&param_3,&local_50);
    }
    else {
      local_1c = FUN_1009ec0c(piVar6,extraout_ECX_01,param_4,param_5);
      piVar6[3] = (int)param_3;
      piVar6[4] = param_6;
      *piVar6 = iVar5;
      piVar6[1] = iVar2;
      piVar6[2] = -1;
      piVar6[5] = param_7;
    }
  }
  LeaveCriticalSection(local_2c);
  return local_1c;
}

