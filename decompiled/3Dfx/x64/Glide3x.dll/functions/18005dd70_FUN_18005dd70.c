/*
 * FUN_18005dd70 at 18005dd70
 * undefined8 __fastcall FUN_18005dd70(longlong param_1, uint param_2, undefined8 param_3, ulonglong param_4, uint param_5)
 * Address ranges: 18005dd70-18005e489
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18005dd70(longlong param_1,uint param_2,undefined8 param_3,ulonglong param_4,
                       uint param_5)

{
  longlong *plVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int local_res8 [2];
  int local_res10 [2];
  longlong *plVar14;
  undefined4 *local_1a8 [2];
  undefined4 *local_198 [2];
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  float local_148 [6];
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  float local_118 [6];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [136];
  
  uVar5 = (ulonglong)param_2;
  lVar6 = uVar5 * 0x18c0;
  uVar9 = param_4 & 0xffffffff;
  puVar3 = (undefined1 *)register0x00000020;
  if (*(char *)(lVar6 + 0x1f60 + param_1) == '\0') {
    puVar3 = (undefined1 *)FUN_18005d514(param_1,uVar5);
    *(undefined1 *)(lVar6 + 0x1f60 + param_1) = 1;
  }
  if (*(longlong *)(lVar6 + 0x1f08 + param_1) == 0) {
    uVar5 = (ulonglong)puVar3 & 0xffffffffffffff00;
  }
  else {
    local_148[4] = 0.0;
    local_148[5] = 1.0;
    local_148[0] = 0.0;
    local_148[1] = 0.0;
    local_148[2] = 160.0;
    local_148[3] = 200.0;
    FUN_18004f630(param_1,uVar5,local_148);
    FUN_18004f248(param_1,uVar5,(int *)&DAT_180062e50,param_4,-1);
    FUN_18004f2bc(param_1,(ulonglong)param_2,(int *)&DAT_180062fb8,0);
    FUN_18004f434(param_1,(ulonglong)param_2,(uint *)&DAT_180062f90);
    FUN_18004f908(param_1,(ulonglong)param_2,5,*(longlong *)(lVar6 + 0xe88 + param_1),
                  *(longlong *)(lVar6 + 0xe78 + param_1),*(longlong *)(lVar6 + 0xd28 + param_1));
    local_168 = 0;
    uStack_160 = 0;
    local_158 = 0;
    uStack_150 = 0;
    FUN_18004fa04(param_1,uVar5,4,(longlong)&local_168,0);
    FUN_180060f94(local_c0,0,0x78);
    uVar4 = 0x10;
    local_c8 = param_3;
    FUN_18004f74c(param_1,(ulonglong)param_2,0,0x10,(longlong)&local_c8);
    FUN_18004f6f8(param_1,(ulonglong)param_2,1,uVar4,(longlong *)(param_1 + 0xe90 + lVar6));
    local_168 = *(undefined8 *)(lVar6 + 0x1ef8 + param_1);
    puVar7 = &local_168;
    FUN_18004fa04(param_1,(ulonglong)param_2,4,(longlong)puVar7,0);
    local_res8[0] = 0x10;
    plVar8 = (longlong *)(param_1 + 0xe98 + lVar6);
    local_res10[0] = 0;
    plVar14 = plVar8;
    FUN_18004f7ec(param_1,(ulonglong)param_2,0,puVar7,plVar8,local_res8,local_res10);
    FUN_18004f89c(param_1,(ulonglong)param_2,0,0);
    plVar1 = *(longlong **)(lVar6 + 0x6b8 + param_1);
    iVar2 = (**(code **)(*plVar1 + 0x70))
                      (plVar1,*plVar8,0,4,(ulonglong)plVar14 & 0xffffffff00000000,local_1a8);
    if (-1 < iVar2) {
      fVar11 = (float)uVar9;
      fVar10 = (float)param_5;
      *local_1a8[0] = 0xbf800000;
      local_1a8[0][1] = 0x3f800000;
      local_1a8[0][2] = 0.5 / fVar11;
      fVar13 = (fVar11 + 0.5) / fVar11;
      local_1a8[0][3] = 0.5 / fVar10;
      fVar12 = (fVar10 + 0.5) / fVar10;
      local_1a8[0][4] = 0x3f800000;
      local_1a8[0][5] = 0x3f800000;
      local_1a8[0][6] = fVar13;
      local_1a8[0][7] = 0.5 / fVar10;
      local_1a8[0][8] = 0xbf800000;
      local_1a8[0][9] = 0xbf800000;
      local_1a8[0][10] = 0.5 / fVar11;
      local_1a8[0][0xb] = fVar12;
      local_1a8[0][0xc] = 0x3f800000;
      local_1a8[0][0xd] = 0xbf800000;
      local_1a8[0][0xe] = fVar13;
      local_1a8[0][0xf] = fVar12;
      plVar1 = *(longlong **)(lVar6 + 0x6b8 + param_1);
      (**(code **)(*plVar1 + 0x78))(plVar1,*plVar8,0);
    }
    plVar1 = *(longlong **)(lVar6 + 0x6b8 + param_1);
    (**(code **)(*plVar1 + 0x68))(plVar1,4,0);
    local_188 = *(undefined8 *)(lVar6 + 0x1f10 + param_1);
    local_170 = 0;
    local_180 = 0;
    uStack_178 = 0;
    FUN_18004fa04(param_1,(ulonglong)param_2,4,(longlong)&local_188,0);
    plVar1 = *(longlong **)(lVar6 + 0x6b8 + param_1);
    (**(code **)(*plVar1 + 0x68))(plVar1,4,0);
    local_168 = 0;
    FUN_18004fa04(param_1,(ulonglong)param_2,4,(longlong)&local_168,0);
    local_130 = *(undefined8 *)(lVar6 + 0x1f00 + param_1);
    plVar1 = *(longlong **)(lVar6 + 0x6b8 + param_1);
    local_128 = *(undefined8 *)(lVar6 + 0x1f28 + param_1);
    local_120 = *(undefined8 *)(lVar6 + 0x1f58 + param_1);
    (**(code **)(*plVar1 + 0x218))(plVar1,0,3,&local_130);
    plVar1 = *(longlong **)(lVar6 + 0x6b8 + param_1);
    (**(code **)(*plVar1 + 0x220))(plVar1,0,1,param_1 + 0x1f38 + lVar6,0);
    plVar1 = *(longlong **)(lVar6 + 0x6b8 + param_1);
    (**(code **)(*plVar1 + 0x228))(plVar1,*(undefined8 *)(lVar6 + 0xd00 + param_1),0,0);
    plVar1 = *(longlong **)(lVar6 + 0x6b8 + param_1);
    (**(code **)(*plVar1 + 0x148))(plVar1,0x28,0x19,1);
    plVar1 = *(longlong **)(lVar6 + 0x6b8 + param_1);
    (**(code **)(*plVar1 + 0x228))(plVar1,*(undefined8 *)(lVar6 + 0xd08 + param_1),0,0);
    plVar1 = *(longlong **)(lVar6 + 0x6b8 + param_1);
    (**(code **)(*plVar1 + 0x148))(plVar1,1,0x19,1);
    plVar1 = *(longlong **)(lVar6 + 0x6b8 + param_1);
    (**(code **)(*plVar1 + 0x228))(plVar1,*(undefined8 *)(lVar6 + 0xd10 + param_1),0,0);
    plVar1 = *(longlong **)(lVar6 + 0x6b8 + param_1);
    (**(code **)(*plVar1 + 0x148))(plVar1,0x28,0x19,1);
    plVar1 = *(longlong **)(lVar6 + 0x6b8 + param_1);
    (**(code **)(*plVar1 + 0x178))
              (plVar1,*(undefined8 *)(lVar6 + 8000 + param_1),
               *(undefined8 *)(lVar6 + 0x1f30 + param_1));
    plVar1 = *(longlong **)(lVar6 + 0x6b8 + param_1);
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = 0;
    (**(code **)(*plVar1 + 0x218))(plVar1,0,3,&local_100);
    local_118[4] = 0.0;
    local_118[5] = 1.0;
    local_118[0] = 0.0;
    local_118[1] = 0.0;
    local_118[2] = 320.0;
    local_118[3] = 200.0;
    FUN_18004f630(param_1,uVar5,local_118);
    FUN_18004f908(param_1,uVar5,5,*(longlong *)(lVar6 + 0xe88 + param_1),
                  *(longlong *)(lVar6 + 0xe78 + param_1),*(longlong *)(lVar6 + 0xe68 + param_1));
    local_e8 = *(undefined8 *)(lVar6 + 0x1f10 + param_1);
    local_d0 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    FUN_18004fa04(param_1,uVar5,4,(longlong)&local_e8,0);
    local_188 = *(undefined8 *)(lVar6 + 0x1f00 + param_1);
    uVar4 = 3;
    local_180 = *(undefined8 *)(lVar6 + 0x1f28 + param_1);
    uStack_178 = *(undefined8 *)(lVar6 + 0x1f48 + param_1);
    FUN_18004f74c(param_1,uVar5,0,3,(longlong)&local_188);
    local_res8[0] = 0x10;
    local_res10[0] = 0;
    plVar14 = plVar8;
    FUN_18004f7ec(param_1,uVar5,0,uVar4,plVar8,local_res8,local_res10);
    FUN_18004f89c(param_1,uVar5,0,0);
    plVar1 = *(longlong **)(lVar6 + 0x6b8 + param_1);
    iVar2 = (**(code **)(*plVar1 + 0x70))
                      (plVar1,*plVar8,0,4,(ulonglong)plVar14 & 0xffffffff00000000,local_198);
    if (-1 < iVar2) {
      *local_198[0] = 0xbf800000;
      local_198[0][1] = 0x3f800000;
      local_198[0][2] = 0xc2200000;
      local_198[0][3] = 0xc2280000;
      local_198[0][4] = 0x3f800000;
      local_198[0][5] = 0x3f800000;
      local_198[0][6] = 0x43480000;
      local_198[0][7] = 0xc2280000;
      local_198[0][8] = 0xbf800000;
      local_198[0][9] = 0xbf800000;
      local_198[0][10] = 0xc2200000;
      local_198[0][0xb] = 0x43720000;
      local_198[0][0xc] = 0x3f800000;
      local_198[0][0xd] = 0xbf800000;
      local_198[0][0xe] = 0x43480000;
      local_198[0][0xf] = 0x43720000;
      plVar1 = *(longlong **)(lVar6 + 0x6b8 + param_1);
      (**(code **)(*plVar1 + 0x78))(plVar1,*plVar8,0);
    }
    plVar1 = *(longlong **)(lVar6 + 0x6b8 + param_1);
    uVar4 = (**(code **)(*plVar1 + 0x68))(plVar1,4,0);
    uVar5 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
  }
  return uVar5;
}

