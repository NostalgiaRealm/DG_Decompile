/*
 * FUN_10052ad5 at 10052ad5
 * int * __thiscall FUN_10052ad5(void * this, int * param_1, int * param_2, void * param_3, int * param_4, undefined4 * param_5, uint param_6, undefined4 param_7, undefined4 param_8, int param_9)
 * Address ranges: 10052ad5-10052cb2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall
FUN_10052ad5(void *this,int *param_1,int *param_2,void *param_3,int *param_4,undefined4 *param_5,
            uint param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined1 local_68 [64];
  uint local_28;
  undefined4 *local_24;
  uint local_20;
  uint local_1c;
  undefined4 *local_18;
  uint local_14;
  
  piVar7 = param_1;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar7 = 0;
    piVar7 = piVar7 + 1;
  }
  if (*(int *)((int)this + 0x8e0) != 0) {
    if (param_9 == 0) {
      iVar3 = (**(code **)(*param_2 + 0x28))(param_2,local_68);
      param_9 = *(int *)(iVar3 + 0x20);
    }
    iVar3 = FUN_10051c4d(param_9);
    iVar2 = FUN_10051cf6(extraout_EDX);
    local_20 = FUN_10051d78(extraout_EDX_00);
    local_14 = (uint)(param_4[4] - param_4[1]) / local_20;
    local_18 = (undefined4 *)(param_4[3] - *param_4);
    local_1c = FUN_10051d3b(param_9);
    if (iVar2 != 0) {
      iVar3 = iVar2;
    }
    local_1c = (uint)(iVar3 * extraout_EDX_01) / local_1c;
    puVar5 = (undefined4 *)(local_1c + 0xff & 0xffffff00);
    local_28 = (param_4[5] - param_4[2]) * (int)puVar5 * local_14;
    if ((param_9 == 0x2c) || (param_9 == 0x2d)) {
      param_9 = 0x2a;
      local_24 = puVar5;
      iVar3 = FUN_10051c4d(0x2a);
      puVar5 = (undefined4 *)(iVar3 * (int)local_18 + 0xffU & 0xffffff00);
      local_28 = (int)puVar5 * extraout_EDX_02;
    }
    local_24 = puVar5;
    bVar1 = FUN_10058e43(param_3,local_28,param_1);
    if (bVar1) {
      if (((undefined4 *)param_6 == puVar5) && (local_1c == param_6)) {
        local_18 = (undefined4 *)*param_1;
        uVar6 = param_4[2];
        if (uVar6 < (uint)param_4[5]) {
          local_14 = (int)puVar5 * local_14;
          do {
            FUN_1005ca00(local_18,param_5,((param_4[4] - param_4[1]) * local_1c) / local_20);
            local_18 = (undefined4 *)((int)local_18 + local_14);
            uVar6 = uVar6 + 1;
            puVar5 = local_24;
          } while (uVar6 < (uint)param_4[5]);
        }
      }
      else {
        puVar4 = (undefined4 *)*param_1;
        local_18 = (undefined4 *)param_4[2];
        local_24 = puVar4;
        if (local_18 < (uint)param_4[5]) {
          do {
            if (local_14 != 0) {
              local_20 = local_14;
              puVar8 = param_5;
              do {
                FUN_1005ca00(puVar4,puVar8,local_1c);
                puVar8 = (undefined4 *)((int)puVar8 + param_6);
                puVar4 = (undefined4 *)((int)local_24 + (int)puVar5);
                local_20 = local_20 - 1;
                local_24 = puVar4;
              } while (local_20 != 0);
            }
            local_18 = (undefined4 *)((int)local_18 + 1);
          } while (local_18 < (uint)param_4[5]);
        }
      }
      param_1[6] = local_28;
      param_1[8] = param_9;
      param_1[7] = (int)puVar5;
    }
  }
  return param_1;
}

