/*
 * FUN_1800da7b0 at 1800da7b0
 * undefined __fastcall FUN_1800da7b0(longlong param_1, longlong param_2, RECT * param_3)
 * Address ranges: 1800da7b0-1800dab0a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800da7b0(longlong param_1,longlong param_2,RECT *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  int *piVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  undefined8 *puVar11;
  longlong local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  longlong local_d0 [2];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_58;
  int local_54;
  
  plVar3 = *(longlong **)(param_2 + 0xdb8);
  if (plVar3 != (longlong *)0x0) {
    lVar5 = (ulonglong)*(uint *)(param_2 + 0x10) * 0x18c0;
    (**(code **)(*plVar3 + 0x50))(plVar3,&local_58);
    FUN_1800df024(plVar3,param_2,param_3,local_58,local_54,(float *)&local_98,(float *)&local_f8);
    local_d8 = 0;
    local_e8 = local_f8;
    uStack_e0 = uStack_f0;
    local_d4 = 0x3f800000;
    FUN_1800dc004(param_1,(ulonglong)*(uint *)(param_2 + 0x10),(float *)&local_e8);
    FUN_1800dbc90(param_1,(ulonglong)*(uint *)(param_2 + 0x10),(int *)&DAT_180100350,0);
    FUN_1800dbe08(param_1,(ulonglong)*(uint *)(param_2 + 0x10),(uint *)&DAT_180100328);
    FUN_1800dc3ec(param_1,(ulonglong)*(uint *)(param_2 + 0x10),5,
                  *(longlong *)(lVar5 + 0xe88 + param_1),*(longlong *)(lVar5 + 0xe78 + param_1),
                  *(longlong *)(lVar5 + 0xe58 + param_1),0);
    local_c0 = *(undefined8 *)(param_2 + 0xd80);
    uVar6 = 4;
    local_a8 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    FUN_1800dc4ec(param_1,(ulonglong)*(uint *)(param_2 + 0x10),4,(longlong)&local_c0,0);
    local_res20[0] = 0x10;
    puVar10 = (undefined8 *)(param_1 + 0xe98 + lVar5);
    local_res10[0] = 0;
    puVar11 = puVar10;
    FUN_1800dc288(param_1,(ulonglong)*(uint *)(param_2 + 0x10),uVar6,1,(longlong)puVar10,
                  (longlong)local_res20,(longlong)local_res10);
    FUN_1800dc380(param_1,(ulonglong)*(uint *)(param_2 + 0x10),0,0);
    uVar9 = *(uint *)(lVar5 + 0xea0 + param_1);
    plVar3 = *(longlong **)(lVar5 + 0x6b8 + param_1);
    if (0x400 < uVar9 + 4) {
      uVar9 = 0;
    }
    *(uint *)(lVar5 + 0xea0 + param_1) = uVar9 + 4;
    uVar8 = (ulonglong)((uVar9 != 0) + 4);
    uVar6 = 0;
    iVar2 = (**(code **)(*plVar3 + 0x70))
                      (plVar3,*puVar10,0,uVar8,(ulonglong)puVar11 & 0xffffffff00000000,local_d0);
    if (-1 < iVar2) {
      uVar6 = 0;
      uVar4 = (ulonglong)uVar9;
      puVar11 = (undefined8 *)(local_d0[0] + uVar4 * 0x10);
      *puVar11 = local_98;
      puVar11[1] = uStack_90;
      puVar11 = (undefined8 *)(local_d0[0] + 0x10 + uVar4 * 0x10);
      *puVar11 = local_88;
      puVar11[1] = uStack_80;
      puVar1 = (undefined4 *)(local_d0[0] + 0x20 + uVar4 * 0x10);
      *puVar1 = local_78;
      puVar1[1] = uStack_74;
      puVar1[2] = uStack_70;
      puVar1[3] = uStack_6c;
      puVar1 = (undefined4 *)(local_d0[0] + 0x30 + uVar4 * 0x10);
      *puVar1 = local_68;
      puVar1[1] = uStack_64;
      puVar1[2] = uStack_60;
      puVar1[3] = uStack_5c;
      plVar3 = *(longlong **)(lVar5 + 0x6b8 + param_1);
      (**(code **)(*plVar3 + 0x78))(plVar3,*puVar10);
    }
    FUN_1800dc0cc(param_1,(ulonglong)*(uint *)(param_2 + 0x10),uVar6,uVar8,(uint *)&DAT_1801002f0);
    if (*(longlong *)(param_2 + 0xdd0) == 0) {
      piVar7 = (int *)&DAT_1801065a0;
    }
    else {
      uStack_f0 = 0;
      local_f8 = *(longlong *)(param_2 + 0xdd0);
      FUN_1800dc1e8(param_1,(ulonglong)*(uint *)(param_2 + 0x10),0,2,(longlong)&local_f8);
      FUN_1800dbbbc(param_1,(ulonglong)*(uint *)(param_2 + 0x10),(int *)&DAT_180106490,(int *)0x0,-1
                    ,'\0');
      plVar3 = *(longlong **)(lVar5 + 0x6b8 + param_1);
      (**(code **)(*plVar3 + 0x68))(plVar3,4,uVar9);
      piVar7 = (int *)&DAT_180106380;
    }
    FUN_1800dbbbc(param_1,(ulonglong)*(uint *)(param_2 + 0x10),piVar7,(int *)0x0,-1,'\0');
    local_f8 = *(longlong *)(param_2 + 0xdc0);
    uStack_f0 = 0;
    FUN_1800dc1e8(param_1,(ulonglong)*(uint *)(param_2 + 0x10),0,2,(longlong)&local_f8);
    plVar3 = *(longlong **)(lVar5 + 0x6b8 + param_1);
    (**(code **)(*plVar3 + 0x68))(plVar3,4);
    local_f8 = 0;
    uStack_f0 = 0;
    FUN_1800dc1e8(param_1,(ulonglong)*(uint *)(param_2 + 0x10),0,2,(longlong)&local_f8);
  }
  return;
}

