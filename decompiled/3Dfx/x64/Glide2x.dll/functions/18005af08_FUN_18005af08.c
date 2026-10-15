/*
 * FUN_18005af08 at 18005af08
 * undefined8 __fastcall FUN_18005af08(longlong param_1, ulonglong param_2)
 * Address ranges: 18005af08-18005b5f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18005af08(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong *local_res8;
  longlong *local_res18;
  undefined8 *local_res20;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined8 local_1d4;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b4;
  undefined8 local_1ac;
  undefined4 local_1a0;
  undefined8 local_19c;
  undefined8 local_194;
  undefined4 local_188;
  undefined8 local_184;
  undefined8 local_17c;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined8 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined8 local_40;
  
  lVar11 = (param_2 & 0xffffffff) * 0x18c0;
  local_168 = 8;
  local_170 = 0x400;
  local_15c = 0x400;
  local_b8 = 0x400;
  lVar1 = lVar11 + param_1;
  local_b4 = 0x400;
  plVar6 = *(longlong **)(lVar11 + 0x6b0 + param_1);
  local_16c = 1;
  local_160 = 0x40;
  local_c0 = &DAT_180061460;
  uVar8 = (**(code **)(*plVar6 + 0x18))(plVar6,&local_170,&local_c0,lVar1 + 0x1f20);
  if (-1 < (int)uVar8) {
    plVar6 = *(longlong **)(lVar11 + 0x6b0 + param_1);
    local_b0 = 0;
    local_ac = 1;
    puVar12 = (undefined8 *)(param_1 + 0x1f28 + lVar11);
    local_a4 = 1;
    local_a0 = 0;
    local_d8 = puVar12;
    iVar7 = (**(code **)(*plVar6 + 0x38))(plVar6,*(undefined8 *)(lVar1 + 0x1f20),&local_b0,puVar12);
    if (-1 < iVar7) {
      plVar6 = *(longlong **)(lVar11 + 0x6b0 + param_1);
      local_148 = 0x40;
      local_130 = 0x40;
      local_158 = 84000;
      puVar10 = (undefined8 *)(param_1 + 0x1f30 + lVar11);
      local_150 = 0x88;
      local_144 = 0x54;
      local_140 = 0x20000;
      local_138 = 0x88;
      local_12c = 4;
      local_e8 = puVar10;
      iVar7 = (**(code **)(*plVar6 + 0x18))(plVar6,&local_158,0,puVar10);
      if (-1 < iVar7) {
        plVar6 = *(longlong **)(lVar11 + 0x6b0 + param_1);
        iVar7 = (**(code **)(*plVar6 + 0x18))(plVar6,&local_140,0,&local_res8);
        if (-1 < iVar7) {
          plVar6 = *(longlong **)(lVar11 + 0x6b0 + param_1);
          local_1b4 = 1;
          local_19c = 1;
          local_1b8 = 0;
          puVar13 = (undefined8 *)(param_1 + 0x1f38 + lVar11);
          local_1ac = 1000;
          local_1a0 = 0;
          local_194 = 0x8000;
          local_c8 = puVar13;
          iVar7 = (**(code **)(*plVar6 + 0x40))(plVar6,*puVar10,&local_1b8,puVar13);
          if (-1 < iVar7) {
            plVar6 = *(longlong **)(lVar11 + 0x6b0 + param_1);
            iVar7 = (**(code **)(*plVar6 + 0x40))(plVar6,local_res8,&local_1a0,&local_res18);
            if (-1 < iVar7) {
              plVar6 = *(longlong **)(lVar11 + 0x6b0 + param_1);
              local_128 = 84000;
              lVar2 = lVar11 + param_1;
              local_120 = 8;
              local_118 = 0x40;
              local_114 = 0x54;
              local_110 = 0x20000;
              local_108 = 8;
              local_100 = 0x40;
              local_fc = 4;
              iVar7 = (**(code **)(*plVar6 + 0x18))(plVar6,&local_128,0,lVar2 + 8000);
              if (-1 < iVar7) {
                plVar6 = *(longlong **)(lVar11 + 0x6b0 + param_1);
                lVar3 = lVar11 + param_1;
                iVar7 = (**(code **)(*plVar6 + 0x18))(plVar6,&local_110,0,lVar3 + 0x1f50);
                if (-1 < iVar7) {
                  local_98 = 0;
                  local_80 = 0;
                  plVar6 = *(longlong **)(lVar11 + 0x6b0 + param_1);
                  local_d0 = (undefined8 *)(param_1 + 0x1f48 + lVar11);
                  local_94 = 1;
                  local_8c = 1000;
                  local_88 = 0;
                  local_7c = 1;
                  local_74 = 0x8000;
                  local_70 = 0;
                  iVar7 = (**(code **)(*plVar6 + 0x38))
                                    (plVar6,*(undefined8 *)(lVar2 + 8000),&local_98,local_d0);
                  if (-1 < iVar7) {
                    plVar6 = *(longlong **)(lVar11 + 0x6b0 + param_1);
                    local_e0 = (undefined8 *)(param_1 + 0x1f58 + lVar11);
                    iVar7 = (**(code **)(*plVar6 + 0x38))
                                      (plVar6,*(undefined8 *)(lVar3 + 0x1f50),&local_80,local_e0);
                    if (-1 < iVar7) {
                      local_1cc = 0;
                      local_1c0 = 0;
                      lVar4 = lVar11 + param_1;
                      plVar6 = *(longlong **)(lVar11 + 0x6b0 + param_1);
                      local_1e8 = 0xa0;
                      local_1e4 = 200;
                      local_1e0 = 1;
                      local_1dc = 1;
                      local_1d8 = 0x1b;
                      local_1d4 = 1;
                      local_1c8 = 0x28;
                      iVar7 = (**(code **)(*plVar6 + 0x28))(plVar6,&local_1e8,0,lVar4 + 0x1ef0);
                      if (-1 < iVar7) {
                        plVar6 = *(longlong **)(lVar11 + 0x6b0 + param_1);
                        lVar5 = lVar11 + param_1;
                        local_1e8 = 400;
                        local_1e4 = 0x11c;
                        iVar7 = (**(code **)(*plVar6 + 0x28))(plVar6,&local_1e8,0,lVar5 + 0x1f08);
                        if (-1 < iVar7) {
                          plVar6 = *(longlong **)(lVar11 + 0x6b0 + param_1);
                          local_f0 = (undefined8 *)(param_1 + 0x1f00 + lVar11);
                          local_68 = 0x1e;
                          local_64 = 4;
                          local_5c = 0xffffffff;
                          local_58 = 0;
                          iVar7 = (**(code **)(*plVar6 + 0x38))
                                            (plVar6,*(undefined8 *)(lVar4 + 0x1ef0),&local_68,
                                             local_f0);
                          if (-1 < iVar7) {
                            plVar6 = *(longlong **)(lVar11 + 0x6b0 + param_1);
                            local_f8 = (undefined8 *)(param_1 + 0x1f18 + lVar11);
                            local_50 = 0x1c;
                            local_4c = 4;
                            local_44 = 0xffffffff;
                            local_40 = 0;
                            iVar7 = (**(code **)(*plVar6 + 0x38))
                                              (plVar6,*(undefined8 *)(lVar5 + 0x1f08),&local_50,
                                               local_f8);
                            if (-1 < iVar7) {
                              plVar6 = *(longlong **)(lVar11 + 0x6b0 + param_1);
                              local_res20 = (undefined8 *)(param_1 + 0x1ef8 + lVar11);
                              local_188 = 0x1c;
                              local_184 = 4;
                              local_17c = 0;
                              iVar7 = (**(code **)(*plVar6 + 0x48))
                                                (plVar6,*(undefined8 *)(lVar4 + 0x1ef0),&local_188,
                                                 local_res20);
                              if (-1 < iVar7) {
                                plVar6 = *(longlong **)(lVar11 + 0x6b0 + param_1);
                                iVar7 = (**(code **)(*plVar6 + 0x48))
                                                  (plVar6,*(undefined8 *)(lVar5 + 0x1f08),&local_188
                                                   ,param_1 + 0x1f10 + lVar11);
                                puVar12 = local_res20;
                                if (-1 < iVar7) {
                                  plVar6 = *(longlong **)(lVar11 + 0x6b8 + param_1);
                                  (**(code **)(*plVar6 + 0x220))(plVar6,0,1,&local_res18,0);
                                  plVar6 = *(longlong **)(lVar11 + 0x6b8 + param_1);
                                  (**(code **)(*plVar6 + 0x218))
                                            (plVar6,1,1,param_1 + 0x1f28 + lVar11);
                                  plVar6 = *(longlong **)(lVar11 + 0x6b8 + param_1);
                                  (**(code **)(*plVar6 + 0x228))
                                            (plVar6,*(undefined8 *)(lVar11 + 0xcf8 + param_1),0,0);
                                  plVar6 = *(longlong **)(lVar11 + 0x6b8 + param_1);
                                  (**(code **)(*plVar6 + 0x148))(plVar6,0x80,0x100,1);
                                  plVar6 = *(longlong **)(lVar11 + 0x6b8 + param_1);
                                  (**(code **)(*plVar6 + 0x178))
                                            (plVar6,*(undefined8 *)(lVar3 + 0x1f50),local_res8);
                                  (**(code **)(*local_res18 + 0x10))();
                                  uVar9 = (**(code **)(*local_res8 + 0x10))();
                                  return CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
                                }
                                (**(code **)(*(longlong *)*local_res20 + 0x10))();
                                *puVar12 = 0;
                              }
                              puVar12 = local_f8;
                              (**(code **)(*(longlong *)*local_f8 + 0x10))();
                              *puVar12 = 0;
                            }
                            puVar12 = local_f0;
                            (**(code **)(*(longlong *)*local_f0 + 0x10))();
                            *puVar12 = 0;
                          }
                          (**(code **)(**(longlong **)(lVar5 + 0x1f08) + 0x10))();
                          *(undefined8 *)(lVar5 + 0x1f08) = 0;
                        }
                        (**(code **)(**(longlong **)(lVar4 + 0x1ef0) + 0x10))();
                        *(undefined8 *)(lVar4 + 0x1ef0) = 0;
                        puVar10 = local_e8;
                      }
                      puVar12 = local_e0;
                      (**(code **)(*(longlong *)*local_e0 + 0x10))();
                      *puVar12 = 0;
                      puVar12 = local_d8;
                    }
                    puVar13 = local_d0;
                    (**(code **)(*(longlong *)*local_d0 + 0x10))();
                    *puVar13 = 0;
                  }
                  (**(code **)(**(longlong **)(lVar3 + 0x1f50) + 0x10))();
                  *(undefined8 *)(lVar3 + 0x1f50) = 0;
                }
                (**(code **)(**(longlong **)(lVar2 + 8000) + 0x10))();
                *(undefined8 *)(lVar2 + 8000) = 0;
                puVar13 = local_c8;
              }
              (**(code **)(*local_res18 + 0x10))();
            }
            (**(code **)(*(longlong *)*puVar13 + 0x10))();
            *puVar13 = 0;
          }
          (**(code **)(*local_res8 + 0x10))();
        }
        (**(code **)(*(longlong *)*puVar10 + 0x10))();
        *puVar10 = 0;
      }
      (**(code **)(*(longlong *)*puVar12 + 0x10))();
      *puVar12 = 0;
    }
    uVar8 = (**(code **)(**(longlong **)(lVar1 + 0x1f20) + 0x10))();
    *(undefined8 *)(lVar1 + 0x1f20) = 0;
  }
  return uVar8 & 0xffffffffffffff00;
}

