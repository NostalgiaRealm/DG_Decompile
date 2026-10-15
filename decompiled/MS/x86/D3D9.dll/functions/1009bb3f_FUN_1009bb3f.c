/*
 * FUN_1009bb3f at 1009bb3f
 * uint __thiscall FUN_1009bb3f(void * this, uint param_1, byte * param_2, uint param_3, undefined4 * param_4)
 * Address ranges: 1009bb3f-1009bd60
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1009bb3f(void *this,uint param_1,byte *param_2,uint param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  SIZE_T SVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint *puVar11;
  uint local_24c;
  int local_248;
  undefined4 *local_244;
  undefined1 local_240 [452];
  undefined1 local_7c [36];
  undefined1 local_58 [36];
  uint local_34;
  undefined4 *local_30;
  uint local_2c;
  undefined4 local_28;
  int *local_24;
  int local_20;
  undefined8 local_1c;
  uint local_10;
  void *local_c;
  int *local_8;
  
  uVar7 = param_3;
  uVar8 = 0;
  local_c = this;
  local_1c = FUN_1009b4b0(param_2,param_3);
  local_24 = (int *)FUN_1009bf28(this,(uint *)&local_1c);
  if (local_24 != (int *)0x0) {
    uVar9 = 0;
    local_10 = ((int *)*local_24)[1];
    if (local_10 != 0) {
      iVar5 = *(int *)*local_24;
      local_8 = (int *)(uVar7 << 2);
      local_20 = iVar5;
      do {
        puVar11 = (uint *)(uVar9 * 0x228 + iVar5);
        if ((puVar11[0x86] == uVar7) &&
           (iVar2 = FUN_100cfea1(param_2,(byte *)puVar11[0x87],(int)local_8), uVar8 = param_1,
           uVar7 = param_3, iVar5 = local_20, iVar2 == 0)) {
          (**(code **)(*(int *)puVar11[1] + 4))(param_1);
          *puVar11 = uVar8;
          iVar5 = FUN_1009c0b8((void *)((int)local_c + 0x14),&param_1,puVar11);
          uVar8 = iVar5 + 8;
          local_8 = (int *)*local_24;
          uVar6 = local_8[1];
          uVar7 = param_3;
          local_10 = uVar8;
          if (uVar9 < uVar6) {
            uVar9 = uVar9 + 1;
            if (uVar9 < uVar6) {
              do {
                puVar4 = (undefined4 *)(uVar9 * 0x228 + *local_8);
                uVar9 = uVar9 + 1;
                puVar10 = puVar4 + -0x8a;
                for (iVar5 = 0x8a; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar10 = *puVar4;
                  puVar4 = puVar4 + 1;
                  puVar10 = puVar10 + 1;
                }
                uVar6 = local_8[1];
              } while (uVar9 < uVar6);
            }
            local_8[1] = uVar6 - 1;
          }
          goto LAB_1009bd58;
        }
        uVar9 = uVar9 + 1;
        uVar6 = param_3;
      } while (uVar9 < local_10);
      goto LAB_1009bbd7;
    }
  }
LAB_1009bd58:
  uVar6 = uVar7;
  if (uVar8 != 0) {
    return uVar8;
  }
LAB_1009bbd7:
  uVar8 = 0;
  SVar3 = (SIZE_T)((ulonglong)uVar6 * 4);
  if ((int)((ulonglong)uVar6 * 4 >> 0x20) != 0) {
    SVar3 = 0xffffffff;
  }
  puVar4 = (undefined4 *)FUN_100cfd89(SVar3);
  puVar10 = (undefined4 *)0x0;
  if ((puVar4 != (undefined4 *)0x0) &&
     (puVar10 = (undefined4 *)FUN_100cfd55(0x1270), puVar10 != (undefined4 *)0x0)) {
    FUN_100cff00(puVar4,(undefined4 *)param_2,param_3 << 2);
    FUN_100cff00(puVar10,param_4,0x1270);
    iVar5 = (**(code **)(**(int **)(*(int *)((int)local_c + 0x10) + 0x14) + 0x88))
                      (puVar4,puVar10,param_1);
    puVar1 = param_4;
    if (iVar5 != 0) {
      local_34 = param_3;
      local_2c = (uint)local_1c;
      local_28 = local_1c._4_4_;
      local_24c = param_1;
      local_248 = iVar5;
      local_244 = puVar10;
      local_30 = puVar4;
      FUN_10006455((int)param_4 + 0x331,(int)local_240,0xe0);
      FUN_10006455((int)(puVar1 + 100),(int)local_7c,0x10);
      FUN_10006455((int)(puVar1 + 0xa8),(int)local_58,0x10);
      iVar5 = FUN_1009c0b8((void *)((int)local_c + 0x14),&param_1,&local_24c);
      uVar8 = iVar5 + 8;
    }
  }
  if (uVar8 == 0) {
    thunk_FUN_100cfd6c(puVar4);
    FUN_100cfd6c(puVar10);
  }
  return uVar8;
}

