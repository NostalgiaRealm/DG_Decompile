/*
 * FUN_180024134 at 180024134
 * undefined __fastcall FUN_180024134(longlong * param_1, uint param_2, undefined8 param_3, undefined8 * param_4)
 * Address ranges: 180024134-180024203
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180024134(longlong *param_1,uint param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  LPVOID pvVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 local_res8 [4];
  LPVOID local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  
  uVar5 = *param_4;
  uVar6 = param_4[1];
  lVar9 = (ulonglong)param_2 * 0x20;
  uVar8 = 0;
  *(undefined8 *)(lVar9 + *param_1) = param_3;
  iVar2 = *(int *)((longlong)param_4 + 0xc);
  iVar3 = *(int *)(param_4 + 1);
  puVar1 = (undefined8 *)(lVar9 + 8 + *param_1);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  pvVar7 = (LPVOID)thunk_FUN_180060a9c((ulonglong)(uint)(iVar2 * iVar3));
  if (pvVar7 != (LPVOID)0x0) {
    local_68 = *(undefined4 *)param_4;
    local_60 = 1;
    local_5c = 1;
    local_54 = 1;
    local_4c = 1;
    local_64 = *(undefined4 *)((longlong)param_4 + 4);
    local_58 = 0x3c;
    local_48 = 8;
    local_40 = 0;
    local_70 = 0x100;
    plVar4 = *(longlong **)((ulonglong)*(uint *)(param_1 + 3) * 0x18c0 + 0x6b0 + param_1[2]);
    local_res8[0] = 0;
    local_78 = pvVar7;
    (**(code **)(*plVar4 + 0x28))(plVar4,&local_68,&local_78,local_res8);
    uVar8 = local_res8[0];
    FUN_180060ac0(pvVar7);
  }
  *(undefined8 *)(lVar9 + 0x18 + *param_1) = uVar8;
  return;
}

