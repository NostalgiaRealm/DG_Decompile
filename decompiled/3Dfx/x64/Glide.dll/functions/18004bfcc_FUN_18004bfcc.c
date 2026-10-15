/*
 * FUN_18004bfcc at 18004bfcc
 * undefined __fastcall FUN_18004bfcc(longlong param_1, longlong param_2, RECT * param_3)
 * Address ranges: 18004bfcc-18004c364
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004bfcc(longlong param_1,longlong param_2,RECT *param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  uint local_res10 [4];
  int local_res20 [2];
  longlong *plVar14;
  longlong local_108;
  undefined8 uStack_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  longlong local_e0 [2];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int local_68;
  int local_64;
  
  plVar5 = *(longlong **)(param_2 + 0xdb8);
  if (plVar5 != (longlong *)0x0) {
    lVar13 = (ulonglong)*(uint *)(param_2 + 0x10) * 0x18c0;
    (**(code **)(*plVar5 + 0x50))(plVar5,&local_68);
    FUN_18004ef68(plVar5,param_2,param_3,local_68,local_64,(float *)&local_a8,(float *)&local_108);
    local_e8 = 0;
    local_f8 = local_108;
    uStack_f0 = uStack_100;
    local_e4 = 0x3f800000;
    FUN_18004d4cc(param_1,(ulonglong)*(uint *)(param_2 + 0x10),(float *)&local_f8);
    FUN_18004d158(param_1,(ulonglong)*(uint *)(param_2 + 0x10),(int *)&DAT_180061178,0);
    FUN_18004d2d0(param_1,(ulonglong)*(uint *)(param_2 + 0x10),(uint *)&DAT_180061150);
    FUN_18004d7a4(param_1,(ulonglong)*(uint *)(param_2 + 0x10),5,
                  *(longlong *)(lVar13 + 0xe88 + param_1),*(longlong *)(lVar13 + 0xe78 + param_1),
                  *(longlong *)(lVar13 + 0xe58 + param_1));
    local_d0 = *(undefined8 *)(param_2 + 0xd80);
    puVar9 = &local_d0;
    local_b8 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    FUN_18004d8a0(param_1,(ulonglong)*(uint *)(param_2 + 0x10),4,(longlong)puVar9,0);
    local_res20[0] = 0x10;
    plVar12 = (longlong *)(param_1 + 0xe98 + lVar13);
    local_res10[0] = 0;
    plVar14 = plVar12;
    FUN_18004d688(param_1,(ulonglong)*(uint *)(param_2 + 0x10),0,puVar9,plVar12,local_res20,
                  (int *)local_res10);
    FUN_18004d738(param_1,(ulonglong)*(uint *)(param_2 + 0x10),0,0);
    uVar7 = *(uint *)(lVar13 + 0xea0 + param_1);
    plVar5 = *(longlong **)(lVar13 + 0x6b8 + param_1);
    if (0x400 < uVar7 + 4) {
      uVar7 = 0;
    }
    *(uint *)(lVar13 + 0xea0 + param_1) = uVar7 + 4;
    uVar10 = (ulonglong)((uVar7 != 0) + 4);
    local_res10[0] = uVar7;
    iVar3 = (**(code **)(*plVar5 + 0x70))
                      (plVar5,*plVar12,0,uVar10,(ulonglong)plVar14 & 0xffffffff00000000,local_e0);
    if (-1 < iVar3) {
      uVar6 = (ulonglong)uVar7;
      puVar9 = (undefined8 *)(local_e0[0] + uVar6 * 0x10);
      *puVar9 = local_a8;
      puVar9[1] = uStack_a0;
      puVar9 = (undefined8 *)(local_e0[0] + 0x10 + uVar6 * 0x10);
      *puVar9 = local_98;
      puVar9[1] = uStack_90;
      puVar2 = (undefined4 *)(local_e0[0] + 0x20 + uVar6 * 0x10);
      *puVar2 = local_88;
      puVar2[1] = uStack_84;
      puVar2[2] = uStack_80;
      puVar2[3] = uStack_7c;
      puVar2 = (undefined4 *)(local_e0[0] + 0x30 + uVar6 * 0x10);
      *puVar2 = local_78;
      puVar2[1] = uStack_74;
      puVar2[2] = uStack_70;
      puVar2[3] = uStack_6c;
      plVar5 = *(longlong **)(lVar13 + 0x6b8 + param_1);
      (**(code **)(*plVar5 + 0x78))(plVar5,*plVar12);
    }
    lVar8 = (ulonglong)*(uint *)(param_2 + 0x10) * 0x18c0;
    lVar4 = FUN_180054038((longlong *)(lVar8 + param_1 + 0xcd8),(uint *)&DAT_180061118);
    lVar1 = lVar8 + param_1;
    if (*(longlong *)(lVar1 + 0x790) != lVar4) {
      FUN_1800541ec((longlong *)(lVar8 + param_1 + 0xcd8),*(longlong **)(lVar1 + 0x790));
      *(longlong *)(lVar1 + 0x790) = lVar4;
      uVar10 = lVar1 + 0x790;
      (**(code **)(**(longlong **)(lVar8 + 0x6b8 + param_1) + 0x50))();
    }
    local_108 = *(longlong *)(param_2 + 0xdd0);
    if (local_108 == 0) {
      FUN_18004d0e4(param_1,(ulonglong)*(uint *)(param_2 + 0x10),(int *)&DAT_180064840,uVar10,-1);
    }
    else {
      uVar11 = 2;
      uStack_100 = 0;
      FUN_18004d5e8(param_1,(ulonglong)*(uint *)(param_2 + 0x10),0,2,(longlong)&local_108);
      FUN_18004d0e4(param_1,(ulonglong)*(uint *)(param_2 + 0x10),(int *)&DAT_180064730,uVar11,-1);
      plVar5 = *(longlong **)(lVar13 + 0x6b8 + param_1);
      (**(code **)(*plVar5 + 0x68))(plVar5,4,local_res10[0]);
      FUN_18004d0e4(param_1,(ulonglong)*(uint *)(param_2 + 0x10),(int *)&DAT_180064620,uVar11,-1);
    }
    local_108 = *(longlong *)(param_2 + 0xdc0);
    uStack_100 = 0;
    FUN_18004d5e8(param_1,(ulonglong)*(uint *)(param_2 + 0x10),0,2,(longlong)&local_108);
    plVar5 = *(longlong **)(lVar13 + 0x6b8 + param_1);
    (**(code **)(*plVar5 + 0x68))(plVar5,4);
    local_108 = 0;
    uStack_100 = 0;
    FUN_18004d5e8(param_1,(ulonglong)*(uint *)(param_2 + 0x10),0,2,(longlong)&local_108);
  }
  return;
}

