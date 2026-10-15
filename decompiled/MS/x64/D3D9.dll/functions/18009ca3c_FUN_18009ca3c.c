/*
 * FUN_18009ca3c at 18009ca3c
 * byte __fastcall FUN_18009ca3c(longlong * param_1, longlong param_2, int param_3, uint param_4, longlong param_5, int param_6, int * param_7)
 * Address ranges: 18009ca3c-18009ccf5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_18009ca3c(longlong *param_1,longlong param_2,int param_3,uint param_4,longlong param_5,
                  int param_6,int *param_7)

{
  uint uVar1;
  uint uVar2;
  byte extraout_var;
  uint uVar3;
  byte extraout_var_00;
  byte extraout_var_01;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  ulonglong uVar9;
  bool bVar10;
  uint local_res10 [6];
  uint in_stack_ffffffffffffff58;
  longlong local_88;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  uint local_70;
  int local_68;
  int local_64;
  undefined4 local_60;
  int local_5c;
  int local_58;
  undefined4 local_54;
  
  bVar7 = 1;
  uVar2 = FUN_18009c9b0((longlong)param_1,*(longlong **)(param_2 + 0x14),param_3,param_4);
  if (uVar2 != 0x80004005) {
    uVar9 = (ulonglong)param_4;
    FUN_18009c074((longlong)param_1,&local_80,param_3,param_4);
    if ((int)uVar2 < 0) {
      local_88 = 0;
      local_res10[0] = 0;
      iVar4 = FUN_18009d9cc(param_1,param_3,param_4,uVar9,in_stack_ffffffffffffff58,&local_88,
                            local_res10);
      if (iVar4 == 0) {
        uVar2 = param_7[1];
        bVar10 = uVar2 == param_7[3];
        if (uVar2 <= (uint)param_7[3]) {
          iVar4 = *param_7;
          uVar8 = local_70;
          do {
            if (bVar10) {
              uVar8 = param_7[2];
            }
            FUN_1800fbec0((undefined8 *)
                          ((ulonglong)(uVar2 * param_6) + (ulonglong)(uint)(iVar4 * local_7c) +
                          param_5),(undefined8 *)
                                   ((ulonglong)(uVar2 * local_res10[0]) +
                                    (ulonglong)(uint)(iVar4 * local_7c) + local_88),
                          (ulonglong)((uVar8 - iVar4) * local_7c));
            iVar4 = 0;
            uVar2 = uVar2 + 1;
            bVar10 = uVar2 == param_7[3];
          } while (uVar2 <= (uint)param_7[3]);
        }
        FUN_18009dc78((longlong)param_1,param_3,param_4);
        bVar7 = 1;
      }
    }
    else {
      (**(code **)*param_1)();
      uVar5 = FUN_18009a77c(param_2,uVar2);
      if ((char)uVar5 != '\0') {
        FUN_1800946d0(param_1[0x26],*(ulonglong *)(param_2 + 0x14),(ulonglong)uVar2);
        iVar6 = local_74;
        iVar4 = *param_7;
        local_res10[0] = param_7[2];
        uVar8 = param_7[1];
        uVar1 = param_7[3];
        if (iVar4 != 0) {
          local_60 = 0;
          local_68 = local_78 * iVar4;
          local_54 = 1;
          local_64 = local_74 * uVar8;
          uVar3 = local_res10[0];
          if (uVar1 != uVar8) {
            uVar3 = local_70;
          }
          local_5c = uVar3 * local_78;
          local_58 = local_74 * (uVar8 + 1);
          (**(code **)(**(longlong **)(param_2 + 0x14) + 0x68))
                    (*(longlong **)(param_2 + 0x14),
                     (ulonglong)(uVar8 * param_6) + param_5 + (ulonglong)(uint)(iVar4 * local_7c),
                     param_6,0,uVar2,&local_68);
          bVar7 = extraout_var >> 7 ^ 1;
          uVar8 = uVar8 + 1;
        }
        if (uVar8 < uVar1) {
          local_68 = 0;
          local_64 = iVar6 * uVar8;
          local_60 = 0;
          local_54 = 1;
          local_5c = local_70 * local_78;
          uVar3 = uVar1;
          if (local_res10[0] == local_70) {
            uVar3 = uVar1 + 1;
          }
          local_58 = uVar3 * local_74;
          (**(code **)(**(longlong **)(param_2 + 0x14) + 0x68))
                    (*(longlong **)(param_2 + 0x14),(ulonglong)(uVar8 * param_6) + param_5,param_6,0
                     ,uVar2,&local_68);
          bVar7 = bVar7 & (extraout_var_00 >> 7 ^ 1);
          iVar6 = local_74;
          uVar8 = uVar1;
          if (local_res10[0] == local_70) {
            uVar8 = uVar1 + 1;
          }
        }
        if (uVar1 == uVar8) {
          local_5c = local_78 * local_res10[0];
          local_64 = iVar6 * uVar8;
          local_68 = 0;
          local_58 = (uVar1 + 1) * iVar6;
          local_60 = 0;
          local_54 = 1;
          (**(code **)(**(longlong **)(param_2 + 0x14) + 0x68))
                    (*(longlong **)(param_2 + 0x14),(ulonglong)(uVar8 * param_6) + param_5,param_6,0
                     ,uVar2,&local_68);
          bVar7 = bVar7 & (extraout_var_01 >> 7 ^ 1);
        }
      }
    }
  }
  return bVar7;
}

