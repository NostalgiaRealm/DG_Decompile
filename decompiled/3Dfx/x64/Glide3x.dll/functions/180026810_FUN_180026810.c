/*
 * FUN_180026810 at 180026810
 * undefined __fastcall FUN_180026810(longlong param_1, ulonglong param_2, undefined8 param_3, uint * * param_4)
 * Address ranges: 180026810-180026ea0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180026810(longlong param_1,ulonglong param_2,undefined8 param_3,uint **param_4)

{
  uint **ppuVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  uint **ppuVar10;
  uint **ppuVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *local_res8;
  uint local_res10;
  undefined4 local_res18;
  ulonglong in_stack_fffffffffffffe88;
  undefined8 **ppuVar14;
  undefined8 local_158;
  uint local_150;
  uint local_14c;
  float local_148 [3];
  float local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  RECT local_124;
  undefined4 local_114;
  longlong local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined2 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined **local_60;
  longlong local_58;
  longlong local_50;
  float *local_48 [2];
  
  local_res18 = (undefined4)param_3;
  lVar12 = (param_2 & 0xffffffff) * 0x180;
  FUN_1800243dc(*(longlong *)(param_1 + 0x140) + 0x4260,param_2,param_3,param_4);
  ppuVar1 = *(uint ***)(lVar12 + 0x218 + param_1);
  ppuVar11 = *(uint ***)(lVar12 + 0x230 + param_1);
  puVar7 = *(undefined8 **)(lVar12 + 0x240 + param_1);
  lVar2 = *(longlong *)(param_1 + 0x10);
  ppuVar10 = (uint **)0x0;
  if (ppuVar1 != ppuVar11) {
    ppuVar10 = ppuVar1;
  }
  local_res8 = puVar7;
  local_res10 = FUN_180013430(param_1);
  if ((local_res10 != 0) &&
     (FUN_1800526a0(*(longlong **)(*(longlong *)(param_1 + 0x140) + 0x3330),lVar2,1),
     *(longlong *)(lVar2 + 0xd88) != 0)) {
    if (ppuVar10 != (uint **)0x0) {
      plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 8);
      (**(code **)(*plVar3 + 0x1c8))
                (plVar3,ppuVar11,0,ppuVar10,in_stack_fffffffffffffe88 & 0xffffffff00000000,
                 *(undefined4 *)(lVar12 + 0x14c + param_1));
      param_4 = ppuVar10;
    }
    FUN_18000e9a8(*(longlong *)(param_1 + 0x140));
    DAT_18006d744 = 0xf;
    FUN_18004f248(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3330),
                  (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x3338),
                  (int *)&DAT_18006d720,param_4,-1);
    lVar4 = *(longlong *)(param_1 + 0x140);
    FUN_18004f2bc(*(longlong *)(lVar4 + 0x3330),(ulonglong)*(uint *)(lVar4 + 0x3338),
                  (int *)&DAT_18006d6e8,*(int *)(lVar4 + 0x2b2c));
    _DAT_18006d6a4 = 0;
    FUN_18004f434(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3330),
                  (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x3338),
                  (uint *)&DAT_18006d688);
    lVar4 = *(longlong *)(param_1 + 0x140);
    local_148[0] = 0.0;
    local_148[1] = 0.0;
    local_148[2] = (float)*(uint *)(lVar4 + 0xb0);
    local_138 = 0;
    local_134 = 0x3f800000;
    local_13c = (float)*(uint *)(lVar4 + 0xb4);
    FUN_18004f630(*(longlong *)(lVar4 + 0x3330),(ulonglong)*(uint *)(lVar4 + 0x3338),local_148);
    (**(code **)(*ppuVar11 + 0x14))(ppuVar11,&local_98);
    lVar4 = *(longlong *)(param_1 + 0x140);
    local_158 = 0;
    uVar8 = *(undefined8 *)(lVar2 + 0xd98);
    local_150 = *(uint *)(lVar4 + 0xb0);
    local_14c = *(uint *)(lVar4 + 0xb4);
    local_res8 = puVar7;
    FUN_18004f908(*(longlong *)(lVar4 + 0x3330),(ulonglong)*(uint *)(lVar4 + 0x3338),5,
                  *(longlong *)(param_1 + 0xca8),*(longlong *)(param_1 + 0xc90),
                  *(longlong *)(param_1 + 0xc70 + (ulonglong)(local_res10 != 2) * 8));
    ppuVar10 = (uint **)0x0;
    local_a0 = 0;
    local_a8 = uVar8;
    FUN_18004fa04(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3330),
                  (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x3338),2,
                  (longlong)&local_a8,0);
    ppuVar14 = &local_res8;
    FUN_18004f74c(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3330),
                  (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x3338),0,1,
                  (longlong)ppuVar14);
    plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 8);
    iVar6 = (**(code **)(*plVar3 + 0x70))
                      (plVar3,*(undefined8 *)(param_1 + 0xcb0),0,4,
                       (ulonglong)ppuVar14 & 0xffffffff00000000,local_48);
    if (-1 < iVar6) {
      FUN_1800134e4(param_1,&local_158,local_48[0]);
      plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 8);
      (**(code **)(*plVar3 + 0x78))(plVar3,*(undefined8 *)(param_1 + 0xcb0));
    }
    plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 8);
    (**(code **)(*plVar3 + 0x68))(plVar3,4);
    local_res8 = (undefined8 *)0x0;
    FUN_18004f74c(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3330),
                  (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x3338),0,1,
                  (longlong)&local_res8);
    local_res8 = *(undefined8 **)(lVar2 + 0xda8);
    ppuVar11 = *(uint ***)(lVar2 + 0xd88);
  }
  lVar2 = *(longlong *)(param_1 + 0x140);
  local_60 = &PTR_FUN_1800648e8;
  local_50 = param_1 + 0x148 + lVar12;
  local_f8 = *(undefined8 *)(lVar2 + 0xa0);
  local_bc = *(undefined4 *)(*(longlong *)(lVar2 + 8) + 0xda);
  local_b8 = *(undefined4 *)(*(longlong *)(lVar2 + 8) + 0xde);
  local_100 = *(undefined4 *)(lVar2 + 0x3338);
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_108 = param_1;
  local_58 = param_1;
  puVar7 = FUN_180051fd4(*(LARGE_INTEGER *)(lVar2 + 0x3330),&local_108);
  lVar2 = *(longlong *)(param_1 + 0x140);
  if (((*(byte *)(*(longlong *)(lVar2 + 8) + 0xc2) & 4) == 0) &&
     (*(char *)(param_1 + 0x12e) == '\0')) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  local_130 = *(undefined4 *)(*(longlong *)(lVar2 + 8) + 0xc);
  local_12c = *(undefined4 *)(*(longlong *)(lVar2 + 8) + 0x10);
  local_128 = *(undefined4 *)(*(longlong *)(lVar2 + 8) + 0x14);
  if (bVar5) {
    puVar13 = (undefined8 *)(lVar2 + 0xcc);
    puVar9 = (undefined8 *)(lVar2 + 0xd4);
  }
  else {
    puVar13 = &DAT_1800648d8;
    puVar9 = &DAT_1800648e0;
  }
  local_124._0_8_ = *puVar13;
  local_124._8_8_ = *puVar9;
  local_114 = *(undefined4 *)
               (&DAT_180064890 + (longlong)*(int *)(*(longlong *)(lVar2 + 8) + 0xca) * 4);
  plVar3 = *(longlong **)(lVar2 + 0x3330);
  puVar13 = (undefined8 *)(-(ulonglong)(*(char *)(lVar2 + 0x2c82) != '\0') & (ulonglong)&local_60);
  if ((ppuVar11 != (uint **)0x0) || (ppuVar10 != (uint **)0x0)) {
    local_res10 = *(uint *)(puVar7 + 2);
    iVar6 = *(int *)(lVar12 + 0x14c + param_1);
    uVar8 = FUN_18004da94(plVar3,(longlong)puVar7,(uint **)&local_130,ppuVar10,(longlong *)ppuVar11,
                          local_res8,iVar6,puVar13);
    if ((char)uVar8 == '\0') {
      lVar2 = *(longlong *)plVar3[(ulonglong)local_res10 * 0x318 + 0xd7];
      if (ppuVar10 == (uint **)0x0) {
        (**(code **)(lVar2 + 0x178))();
      }
      else {
        (**(code **)(lVar2 + 0x1c8))
                  ((longlong *)plVar3[(ulonglong)local_res10 * 0x318 + 0xd7],puVar7[0x1af],0,
                   ppuVar10,(ulonglong)ppuVar11 & 0xffffffff00000000,iVar6);
      }
      if (puVar13 != (undefined8 *)0x0) {
        local_150 = *(uint *)(puVar7 + 3) / *(uint *)(puVar7 + 4);
        local_98 = puVar7[0x1af];
        local_14c = *(uint *)((longlong)puVar7 + 0x1c) / *(uint *)((longlong)puVar7 + 0x24);
        local_90 = puVar7[0x1b0];
        local_78 = &local_158;
        local_158 = 0;
        local_70 = 0x3f8000003f800000;
        uStack_68 = 0;
        local_88 = local_150;
        local_84 = local_14c;
        local_80 = local_150;
        local_7c = local_14c;
        (**(code **)*puVar13)(puVar13,&local_98);
      }
    }
  }
  if (*(char *)((longlong)puVar7 + 0xd6a) != '\0') {
    FUN_18004e130((longlong)plVar3,(longlong)puVar7,&local_124);
  }
  (**(code **)(*(longlong *)puVar7[1] + 0x40))();
  FUN_180052ff4(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3330),(longlong)puVar7);
  FUN_1800526f8(*(longlong **)(*(longlong *)(param_1 + 0x140) + 0x3330),
                *(longlong *)(*(longlong *)(param_1 + 0x140) + 0xa0),0);
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2c79) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2c78) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2c7a) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2c7b) = 1;
  return;
}

