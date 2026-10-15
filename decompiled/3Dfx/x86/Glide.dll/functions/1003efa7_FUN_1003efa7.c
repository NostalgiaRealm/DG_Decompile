/*
 * FUN_1003efa7 at 1003efa7
 * int * __thiscall FUN_1003efa7(void * this, int * param_1, int * param_2, void * param_3, int * param_4, undefined4 * param_5, uint param_6, int param_7, undefined4 param_8, int param_9)
 * Address ranges: 1003efa7-1003f1a1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall
FUN_1003efa7(void *this,int *param_1,int *param_2,void *param_3,int *param_4,undefined4 *param_5,
            uint param_6,int param_7,undefined4 param_8,int param_9)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined1 local_68 [60];
  uint local_2c;
  uint local_28;
  undefined4 *local_24;
  uint local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  uint local_14;
  
  piVar6 = param_1;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar6 = 0;
    piVar6 = piVar6 + 1;
  }
  if (*(int *)((int)this + 0x8e0) != 0) {
    if (param_9 == 0) {
      iVar3 = (**(code **)(*param_2 + 0x28))(param_2,local_68);
      param_9 = *(int *)(iVar3 + 0x20);
    }
    iVar3 = FUN_1003bb48(param_9);
    iVar2 = FUN_1003bbf1(extraout_EDX);
    local_24 = (undefined4 *)FUN_1003bc73(extraout_EDX_00);
    local_14 = (uint)(param_4[4] - param_4[1]) / (uint)local_24;
    local_1c = (undefined4 *)(param_4[3] - *param_4);
    local_20 = FUN_1003bc36(param_9);
    if (iVar2 != 0) {
      iVar3 = iVar2;
    }
    local_20 = (uint)(iVar3 * extraout_EDX_01) / local_20;
    uVar4 = local_20 + 0xff & 0xffffff00;
    local_2c = (param_4[5] - param_4[2]) * uVar4 * local_14;
    if ((param_9 == 0x2c) || (param_9 == 0x2d)) {
      param_9 = 0x2a;
      local_28 = uVar4;
      iVar3 = FUN_1003bb48(0x2a);
      uVar4 = iVar3 * (int)local_1c + 0xffU & 0xffffff00;
      local_2c = uVar4 * extraout_EDX_02;
    }
    local_28 = uVar4;
    bVar1 = FUN_1004a281(param_3,local_2c,param_1);
    if (bVar1) {
      if ((param_6 == uVar4) && (local_20 == param_6)) {
        local_1c = (undefined4 *)*param_1;
        local_18 = param_5;
        uVar5 = param_4[2];
        if (uVar5 < (uint)param_4[5]) {
          local_14 = uVar4 * local_14;
          do {
            FUN_100500b0(local_1c,local_18,((param_4[4] - param_4[1]) * local_20) / (uint)local_24);
            local_18 = (undefined4 *)((int)local_18 + param_7);
            local_1c = (undefined4 *)((int)local_1c + local_14);
            uVar5 = uVar5 + 1;
            uVar4 = local_28;
          } while (uVar5 < (uint)param_4[5]);
        }
      }
      else {
        local_1c = (undefined4 *)*param_1;
        local_18 = (undefined4 *)param_4[2];
        local_24 = param_5;
        if (local_18 < (uint)param_4[5]) {
          do {
            if (local_14 != 0) {
              local_28 = local_14;
              puVar7 = local_24;
              do {
                FUN_100500b0(local_1c,puVar7,local_20);
                puVar7 = (undefined4 *)((int)puVar7 + param_6);
                local_1c = (undefined4 *)((int)local_1c + uVar4);
                local_28 = local_28 - 1;
              } while (local_28 != 0);
            }
            local_24 = (undefined4 *)((int)local_24 + param_7);
            local_18 = (undefined4 *)((int)local_18 + 1);
          } while (local_18 < (uint)param_4[5]);
        }
      }
      param_1[6] = local_2c;
      param_1[8] = param_9;
      param_1[7] = uVar4;
    }
  }
  return param_1;
}

