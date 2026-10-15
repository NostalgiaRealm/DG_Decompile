/*
 * FUN_1007fd58 at 1007fd58
 * int __thiscall FUN_1007fd58(void * this, byte * param_1, uint param_2, byte * param_3, uint param_4, uint * param_5, undefined4 param_6, undefined4 param_7, undefined4 * param_8, undefined4 param_9)
 * Address ranges: 1007fd58-10080162
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall
FUN_1007fd58(void *this,byte *param_1,uint param_2,byte *param_3,uint param_4,uint *param_5,
            undefined4 param_6,undefined4 param_7,undefined4 *param_8,undefined4 param_9)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  SIZE_T SVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint *puVar11;
  uint *puVar12;
  longlong lVar13;
  undefined4 local_b28;
  uint local_b24 [44];
  uint local_a74 [44];
  int local_9c4;
  undefined4 *local_9c0;
  undefined2 local_9bc [862];
  uint local_300 [44];
  uint local_250 [38];
  uint local_1b8;
  uint local_1b4;
  undefined4 *local_1b0;
  undefined4 *local_1ac;
  int *local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  uint local_198 [44];
  uint local_e8 [4];
  undefined4 local_d8;
  undefined4 local_34;
  undefined8 local_30;
  void *local_28;
  int local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  uint local_14;
  undefined4 *local_10;
  int *local_c;
  
  uVar7 = 0;
  uVar9 = 3;
  local_14 = 3;
  if (*(int *)((int)this + 0x1c) != 0) {
    do {
      uVar1 = *(uint *)((uVar7 * 0x9a0 | 0x14) + *(int *)((int)this + 0x18));
      if (uVar1 == uVar9) {
        uVar9 = uVar9 + 2;
        local_14 = uVar9;
      }
      else if (uVar9 < uVar1) break;
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)((int)this + 0x1c));
  }
  local_24 = 0;
  local_30._0_4_ = 0;
  local_30._4_4_ = (int *)0x0;
  local_28 = this;
  if (param_3 == (byte *)0x0) {
    local_20 = 0;
    local_34 = 0;
  }
  else {
    lVar13 = FUN_1007fc62(param_1,param_2);
    local_20 = (undefined4)((ulonglong)lVar13 >> 0x20);
    local_30 = FUN_1007fc62(param_3,param_4);
    local_30 = local_30 + CONCAT44(local_20,(int)lVar13);
    local_34 = (undefined4)local_30;
    local_20 = (undefined4)((ulonglong)local_30 >> 0x20);
    piVar3 = (int *)FUN_1008075b(this,(uint *)&local_30);
    local_30._4_4_ = piVar3;
    if (piVar3 != (int *)0x0) {
      uVar7 = 0;
      local_18 = (undefined4 *)((int *)*piVar3)[1];
      if (local_18 != (undefined4 *)0x0) {
        local_c = *(int **)*piVar3;
        local_10 = (undefined4 *)(param_2 << 2);
        local_1c = (undefined4 *)(param_4 << 2);
LAB_1007fe20:
        puVar10 = (undefined4 *)((int)local_c + uVar7 * 0x990);
        if ((((puVar10[0x25c] != param_2) || (puVar10[0x25d] != param_4)) ||
            (iVar4 = FUN_100ada5f(param_1,(byte *)puVar10[0x25e],(int)local_10), iVar4 != 0)) ||
           (iVar4 = FUN_100ada5f(param_3,(byte *)puVar10[0x25f],(int)local_1c), iVar4 != 0))
        goto LAB_1007fe6e;
        *puVar10 = param_9;
        local_10 = (undefined4 *)((int)local_28 + 0x14);
        puVar10[1] = uVar9;
        puVar10[0x2d] = uVar9 | 0x80000000;
        FUN_100809ea(local_10,&local_14,puVar10);
        piVar3 = (int *)*local_30._4_4_;
        uVar9 = piVar3[1];
        if (uVar7 < uVar9) {
          while (uVar7 = uVar7 + 1, uVar7 < uVar9) {
            puVar10 = (undefined4 *)(uVar7 * 0x990 + *piVar3);
            puVar6 = puVar10 + -0x264;
            for (iVar4 = 0x264; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar6 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar6 = puVar6 + 1;
            }
            uVar9 = piVar3[1];
          }
          piVar3[1] = uVar9 - 1;
        }
        local_24 = FUN_100809ad(local_10,&local_14);
        uVar9 = local_14;
        if (local_24 != 0) {
          return local_24;
        }
      }
    }
  }
LAB_1007ff00:
  SVar5 = (SIZE_T)((ulonglong)param_2 * 4);
  if ((int)((ulonglong)param_2 * 4 >> 0x20) != 0) {
    SVar5 = 0xffffffff;
  }
  local_10 = (undefined4 *)FUN_100ad4a9(SVar5);
  local_18 = (undefined4 *)0x0;
  local_1c = (undefined4 *)0x0;
  local_c = (int *)0x0;
  if (local_10 == (undefined4 *)0x0) {
    return local_24;
  }
  puVar11 = local_e8;
  for (iVar4 = 0x2c; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar11 = *param_5;
    param_5 = param_5 + 1;
    puVar11 = puVar11 + 1;
  }
  FUN_1005d5aa((int *)local_e8,(int *)local_198);
  iVar4 = 0;
  if (param_3 != (byte *)0x0) {
    SVar5 = (SIZE_T)((ulonglong)param_4 * 4);
    if ((int)((ulonglong)param_4 * 4 >> 0x20) != 0) {
      SVar5 = 0xffffffff;
    }
    puVar10 = (undefined4 *)FUN_100ad4a9(SVar5);
    local_1c = puVar10;
    puVar6 = (undefined4 *)FUN_100ad475(0x4858);
    piVar3 = local_c;
    local_18 = puVar6;
    if ((puVar10 == (undefined4 *)0x0) || (puVar6 == (undefined4 *)0x0)) goto LAB_10080134;
    local_c = FUN_1000cd44((uint)param_3,(int)param_8);
    if (local_c == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      if (param_4 != 0) {
        FUN_100adac0(puVar10,(undefined4 *)param_3,param_4 << 2);
      }
      FUN_100adac0(puVar6,param_8,0x4858);
      iVar4 = *(int *)((int)local_28 + 0x10);
      puVar11 = local_e8;
      puVar12 = local_300;
      for (iVar8 = 0x2c; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
      }
      puVar11 = local_198;
      puVar12 = local_250;
      for (iVar8 = 0x2c; puVar6 = local_18, puVar10 = local_1c, iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
      }
      local_1a0 = 0;
      iVar4 = (**(code **)(**(int **)(iVar4 + 0x14) + 0x84))(local_1c,local_18,local_300);
    }
    piVar3 = local_c;
    if (iVar4 == 0) goto LAB_10080134;
  }
  local_d8 = param_7;
  local_e8[3] = param_6;
  local_b28 = param_9;
  local_e8[0] = uVar9;
  puVar11 = local_e8;
  puVar12 = local_b24;
  for (iVar8 = 0x2c; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  local_198[0] = uVar9 | 0x80000000;
  puVar11 = local_198;
  puVar12 = local_a74;
  for (iVar8 = 0x2c; puVar6 = local_18, iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  local_9bc[0] = 0xffff;
  local_9c0 = local_18;
  local_1a4 = 0;
  local_9c4 = iVar4;
  FUN_10005b6a((int)param_8 + 0x44f,(int)local_9bc,0x400);
  puVar2 = local_10;
  FUN_100adac0(local_10,(undefined4 *)param_1,param_2 << 2);
  piVar3 = local_c;
  puVar10 = local_1c;
  local_1b4 = param_4;
  local_1a0 = local_34;
  local_1b8 = param_2;
  local_1b0 = puVar2;
  local_1ac = local_1c;
  local_1a8 = local_c;
  local_19c = local_20;
  local_24 = FUN_100809ea((void *)((int)local_28 + 0x14),&local_14,&local_b28);
  local_24 = local_24 + 8;
  if (local_24 != 0) {
    return local_24;
  }
LAB_10080134:
  FUN_100ad48c(piVar3);
  FUN_100ad48c(puVar6);
  thunk_FUN_100ad48c(local_10);
  thunk_FUN_100ad48c(puVar10);
  return local_24;
LAB_1007fe6e:
  uVar7 = uVar7 + 1;
  if (local_18 <= uVar7) goto LAB_1007ff00;
  goto LAB_1007fe20;
}

