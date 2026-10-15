/*
 * FUN_10080370 at 10080370
 * int __thiscall FUN_10080370(void * this, byte * param_1, uint param_2, int * param_3)
 * Address ranges: 10080370-10080571
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10080370(void *this,byte *param_1,uint param_2,int *param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  SIZE_T SVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  int *piVar12;
  uint local_60;
  int local_5c;
  int *local_58;
  undefined2 local_54 [10];
  uint local_40;
  undefined4 *local_3c;
  uint local_38;
  undefined4 local_34;
  undefined8 local_30;
  int *local_28;
  uint *local_24;
  uint local_20;
  int local_1c;
  int local_18;
  void *local_14;
  undefined4 *local_10;
  uint local_c [2];
  
  uVar7 = 1;
  uVar6 = 0;
  local_c[0] = 1;
  if (*(int *)((int)this + 0x1c) != 0) {
    do {
      uVar3 = *(uint *)((uVar6 << 6 | 0x10) + *(int *)((int)this + 0x18));
      if (uVar3 == uVar7) {
        uVar7 = uVar7 + 1;
      }
      else {
        local_c[0] = uVar7;
        if (uVar7 < uVar3) break;
      }
      uVar6 = uVar6 + 1;
      local_c[0] = uVar7;
    } while (uVar6 < *(uint *)((int)this + 0x1c));
  }
  uVar6 = local_c[0];
  iVar8 = 0;
  local_18 = 0;
  local_14 = this;
  local_30 = FUN_1007fc62(param_1,param_2);
  local_28 = (int *)FUN_1008075b(this,(uint *)&local_30);
  if (local_28 != (int *)0x0) {
    uVar7 = 0;
    local_20 = ((int *)*local_28)[1];
    if (local_20 != 0) {
      iVar8 = *(int *)*local_28;
      local_10 = (undefined4 *)(param_2 << 2);
      local_1c = iVar8;
      do {
        local_24 = (uint *)(uVar7 * 0x30 + iVar8);
        if ((local_24[8] == param_2) &&
           (iVar2 = FUN_100ada5f(param_1,(byte *)local_24[9],(int)local_10), puVar1 = local_24,
           iVar8 = local_1c, iVar2 == 0)) {
          (**(code **)(*(int *)local_24[1] + 4))(uVar6);
          *puVar1 = uVar6;
          iVar8 = FUN_1008089c((void *)((int)local_14 + 0x14),local_c,puVar1);
          iVar8 = iVar8 + 8;
          piVar12 = (int *)*local_28;
          uVar3 = piVar12[1];
          uVar6 = local_c[0];
          local_18 = iVar8;
          if (uVar7 < uVar3) {
            uVar7 = uVar7 + 1;
            if (uVar7 < uVar3) {
              do {
                puVar9 = (undefined4 *)(uVar7 * 0x30 + *piVar12);
                uVar7 = uVar7 + 1;
                puVar11 = puVar9 + -0xc;
                for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
                  *puVar11 = *puVar9;
                  puVar9 = puVar9 + 1;
                  puVar11 = puVar11 + 1;
                }
                uVar3 = piVar12[1];
              } while (uVar7 < uVar3);
            }
            piVar12[1] = uVar3 - 1;
          }
          goto LAB_1008047c;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < local_20);
      goto LAB_10080484;
    }
  }
LAB_1008047c:
  if (iVar8 != 0) {
    return iVar8;
  }
LAB_10080484:
  SVar4 = (SIZE_T)((ulonglong)param_2 * 4);
  if ((int)((ulonglong)param_2 * 4 >> 0x20) != 0) {
    SVar4 = 0xffffffff;
  }
  local_10 = (undefined4 *)FUN_100ad4a9(SVar4);
  iVar8 = 0;
  piVar12 = (int *)0x0;
  if ((local_10 != (undefined4 *)0x0) &&
     (piVar5 = (int *)FUN_100ad475(0x128), piVar12 = piVar5, local_28 = piVar5, piVar5 != (int *)0x0
     )) {
    FUN_100adac0(local_10,(undefined4 *)param_1,param_2 << 2);
    puVar9 = local_10;
    piVar12 = local_28;
    piVar10 = param_3;
    for (iVar8 = 0x4a; iVar8 != 0; iVar8 = iVar8 + -1) {
      *piVar5 = *piVar10;
      piVar10 = piVar10 + 1;
      piVar5 = piVar5 + 1;
    }
    iVar2 = (**(code **)(**(int **)(*(int *)((int)local_14 + 0x10) + 0x14) + 0x88))
                      (local_10,local_28,uVar6);
    iVar8 = local_18;
    if (iVar2 != 0) {
      local_40 = param_2;
      local_38 = (uint)local_30;
      local_34 = local_30._4_4_;
      local_54[0] = 0xffff;
      local_58 = piVar12;
      local_3c = puVar9;
      local_60 = uVar6;
      local_5c = iVar2;
      FUN_10005b6a((int)param_3 + 0x41,(int)local_54,8);
      iVar8 = FUN_1008089c((void *)((int)local_14 + 0x14),local_c,&local_60);
      iVar8 = iVar8 + 8;
    }
  }
  if (iVar8 == 0) {
    thunk_FUN_100ad48c(local_10);
    FUN_100ad48c(piVar12);
  }
  return iVar8;
}

