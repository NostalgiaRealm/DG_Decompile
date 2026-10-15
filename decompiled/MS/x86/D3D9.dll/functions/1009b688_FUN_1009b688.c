/*
 * FUN_1009b688 at 1009b688
 * uint __thiscall FUN_1009b688(void * this, uint param_1, uint * param_2, uint param_3, undefined4 * param_4)
 * Address ranges: 1009b688-1009b8f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1009b688(void *this,uint param_1,uint *param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  SIZE_T SVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 *puVar10;
  uint local_894;
  int local_890;
  undefined4 *local_88c;
  undefined2 local_888 [1026];
  undefined1 local_84 [36];
  undefined1 local_60 [36];
  uint local_3c;
  undefined4 *local_38;
  int *local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  undefined8 local_24;
  int *local_18;
  uint local_14;
  int *local_10;
  void *local_c;
  int *local_8;
  
  uVar7 = 0;
  local_c = this;
  local_24 = FUN_1009b4b0(param_2,param_3);
  local_18 = (int *)FUN_1009bf28(this,(uint *)&local_24);
  if (local_18 != (int *)0x0) {
    uVar8 = 0;
    local_14 = ((int *)*local_18)[1];
    if (local_14 != 0) {
      piVar5 = *(int **)*local_18;
      local_10 = (int *)(param_3 << 2);
      uVar7 = param_3;
      local_8 = piVar5;
      do {
        puVar9 = (uint *)(piVar5 + uVar8 * 0x21c);
        if ((puVar9[0x216] == uVar7) &&
           (iVar1 = FUN_100cfea1((byte *)param_2,(byte *)puVar9[0x217],(int)local_10),
           uVar7 = param_3, piVar5 = local_8, iVar1 == 0)) {
          *puVar9 = param_1;
          iVar1 = FUN_1009c214((void *)((int)local_c + 0x14),&param_1,puVar9);
          uVar7 = iVar1 + 8;
          local_8 = (int *)*local_18;
          uVar2 = local_8[1];
          local_14 = uVar7;
          if (uVar8 < uVar2) {
            uVar8 = uVar8 + 1;
            if (uVar8 < uVar2) {
              do {
                puVar4 = (undefined4 *)(uVar8 * 0x870 + *local_8);
                uVar8 = uVar8 + 1;
                puVar10 = puVar4 + -0x21c;
                for (iVar1 = 0x21c; iVar1 != 0; iVar1 = iVar1 + -1) {
                  *puVar10 = *puVar4;
                  puVar4 = puVar4 + 1;
                  puVar10 = puVar10 + 1;
                }
                uVar2 = local_8[1];
              } while (uVar8 < uVar2);
            }
            local_8[1] = uVar2 - 1;
          }
          goto LAB_1009b776;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < local_14);
      goto LAB_1009b780;
    }
  }
LAB_1009b776:
  if (uVar7 != 0) {
    return uVar7;
  }
LAB_1009b780:
  uVar7 = 0;
  SVar3 = (SIZE_T)((ulonglong)param_3 * 4);
  if ((int)((ulonglong)param_3 * 4 >> 0x20) != 0) {
    SVar3 = 0xffffffff;
  }
  local_18 = (int *)0x0;
  local_8 = (int *)FUN_100cfd89(SVar3);
  puVar4 = (undefined4 *)FUN_100cfd55(0x4a70);
  piVar5 = (int *)0x0;
  if ((local_8 != (undefined4 *)0x0) && (puVar4 != (undefined4 *)0x0)) {
    local_10 = FUN_1000ffb1(param_2,(int)param_4);
    piVar5 = local_8;
    if (local_10 == (int *)0x0) {
      iVar1 = 0;
      piVar6 = local_18;
    }
    else {
      FUN_100cff00(local_8,param_2,param_3 << 2);
      FUN_100cff00(puVar4,param_4,0x4a70);
      iVar1 = (**(code **)(**(int **)(*(int *)((int)local_c + 0x10) + 0x14) + 0x84))
                        (piVar5,puVar4,0);
      piVar6 = (int *)iVar1;
    }
    puVar10 = param_4;
    if (iVar1 != 0) {
      local_2c = (uint)local_24;
      local_28 = local_24._4_4_;
      local_888[0] = 0xffff;
      local_894 = param_1;
      local_3c = param_3;
      local_38 = piVar5;
      local_30 = 0;
      local_890 = (int)piVar6;
      local_88c = puVar4;
      local_34 = local_10;
      FUN_10006455((int)param_4 + 0x44f,(int)local_888,0x400);
      FUN_10006455((int)puVar10 + 0x48c5,(int)local_84,0x10);
      FUN_10006455((int)(puVar10 + 0x1276),(int)local_60,0x10);
      iVar1 = FUN_1009c214((void *)((int)local_c + 0x14),&param_1,&local_894);
      uVar7 = iVar1 + 8;
    }
    piVar5 = local_10;
    if (uVar7 != 0) {
      return uVar7;
    }
  }
  FUN_100cfd6c(piVar5);
  thunk_FUN_100cfd6c(local_8);
  FUN_100cfd6c(puVar4);
  return 0;
}

