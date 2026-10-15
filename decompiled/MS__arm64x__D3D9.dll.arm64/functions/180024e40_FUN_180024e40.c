/*
 * FUN_180024e40 at 180024e40
 * undefined FUN_180024e40(void)
 * Address ranges: 180024e40-18002556b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180024e40(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  short sVar5;
  bool bVar6;
  undefined8 uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 auVar16 [16];
  longlong *local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  undefined8 *local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined *local_118;
  undefined8 uStack_110;
  undefined *local_108;
  undefined8 uStack_100;
  undefined *local_f8;
  undefined8 uStack_f0;
  undefined *local_e8;
  undefined8 uStack_e0;
  undefined *local_d8;
  undefined8 uStack_d0;
  undefined *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  
  lVar11 = FUN_1800e1240(DAT_18024e2d0);
  *(longlong *)(param_1 + 0x250) = lVar11;
  if (lVar11 == 0) {
    return 0;
  }
  local_58 = 0;
  local_1b0 = (longlong *)0x0;
  local_70 = 0x10000001c;
  uStack_68 = 0;
  uStack_78 = 0x100000001;
  local_80 = 0x100000001;
  local_60 = 8;
  puVar3 = (undefined8 *)(lVar11 + (ulonglong)*(uint *)(param_1 + 600) * 0x18c0 + 0x6b0);
  *(undefined8 **)(param_1 + 0x260) = puVar3;
  local_118 = &DAT_180249e44;
  uStack_110 = 0x400000004;
  local_108 = &DAT_180249e44;
  uStack_100 = 0x400000004;
  local_f8 = &DAT_180249e44;
  uStack_f0 = 0x400000004;
  local_e8 = &DAT_180249e44;
  uStack_e0 = 0x400000004;
  local_d8 = &DAT_180249e44;
  uStack_d0 = 0x400000004;
  local_c8 = &DAT_180249e44;
  uStack_c0 = 0x400000004;
  plVar12 = (longlong *)*puVar3;
  iVar8 = (**(code **)(*plVar12 + 0x28))(plVar12,&local_80,&local_118,&local_1b0);
  if (iVar8 < 0) goto LAB_180025538;
  local_180 = 0;
  local_190 = 0x40000001c;
  uStack_188 = 0xffffffff00000000;
  iVar8 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x260) + 0x38))
                    ((longlong *)**(undefined8 **)(param_1 + 0x260),local_1b0,&local_190,
                     param_1 + 0x238);
  if (-1 < iVar8) {
    local_1a0 = (longlong *)0x0;
    local_138 = 0x10000001c;
    uStack_130 = 0;
    local_148 = 0x100000001;
    uStack_140 = 0x600000001;
    local_120 = 4;
    local_128 = 8;
    iVar8 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x260) + 0x28))
                      ((longlong *)**(undefined8 **)(param_1 + 0x260),&local_148,&local_118,
                       &local_1a0);
    if (-1 < iVar8) {
      local_168 = 0;
      local_178 = 0x90000001c;
      uStack_170 = 0xffffffff00000000;
      iVar8 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x260) + 0x38))
                        ((longlong *)**(undefined8 **)(param_1 + 0x260),local_1a0,&local_178,
                         param_1 + 0x240);
      if (-1 < iVar8) {
        local_a0 = 0x1c;
        uStack_98 = 8;
        local_90 = 0;
        uStack_a8 = 0x100000001;
        local_b0 = 0x100000001;
        local_1a8 = (longlong *)0x0;
        iVar8 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x260) + 0x30))
                          ((longlong *)**(undefined8 **)(param_1 + 0x260),&local_b0,&local_118,
                           &local_1a8);
        if (-1 < iVar8) {
          local_150 = 0;
          local_160 = 0x80000001c;
          uStack_158 = 0xffffffff00000000;
          iVar8 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x260) + 0x38))
                            ((longlong *)**(undefined8 **)(param_1 + 0x260),local_1a8,&local_160,
                             param_1 + 0x248);
          if (-1 < iVar8) {
            (**(code **)(*local_1b0 + 0x10))();
            (**(code **)(*local_1a0 + 0x10))();
            (**(code **)(*local_1a8 + 0x10))();
            uVar7 = DAT_18024e2d0;
            puVar3 = (undefined8 *)(param_1 + 0xd8);
            bVar6 = true;
            uVar15 = 0;
            lVar11 = *(longlong *)(param_1 + 0x250) + (ulonglong)*(uint *)(param_1 + 600) * 0x18c0;
            iVar8 = *(int *)(lVar11 + 0x6cc);
            *(undefined8 *)(param_1 + 0xe0) = 0;
            *puVar3 = 0;
            *(undefined8 *)(param_1 + 0xf0) = 0;
            *(undefined8 *)(param_1 + 0xe8) = 0;
            *(undefined8 *)(param_1 + 0x100) = 0;
            *(undefined8 *)(param_1 + 0xf8) = 0;
            *(undefined8 *)(param_1 + 0x110) = 0;
            *(undefined8 *)(param_1 + 0x108) = 0;
            *(undefined8 *)(param_1 + 0x120) = 0;
            *(undefined8 *)(param_1 + 0x118) = 0;
            *(undefined8 *)(param_1 + 0x130) = 0;
            *(undefined8 *)(param_1 + 0x128) = 0;
            *(undefined8 *)(param_1 + 0x140) = 0;
            *(undefined8 *)(param_1 + 0x138) = 0;
            *(undefined8 *)(param_1 + 0x150) = 0;
            *(undefined8 *)(param_1 + 0x148) = 0;
            *(undefined8 *)(param_1 + 0x160) = 0;
            *(undefined8 *)(param_1 + 0x158) = 0;
            local_198 = puVar3;
            puVar4 = &DAT_180249cb8;
            if (iVar8 != 0xa000) {
              puVar4 = &DAT_180249c90;
            }
            do {
              if (!bVar6) goto LAB_180025130;
              if (puVar4[uVar15] != 0) {
                uVar9 = FUN_180102160(uVar7,puVar4[uVar15],u_RT_CUSTOM_18023b3e8);
                lVar13 = FUN_1801021b0(uVar7,puVar4[uVar15],u_RT_CUSTOM_18023b3e8);
                if ((lVar13 == 0) ||
                   (plVar12 = *(longlong **)(lVar11 + 0x6b0),
                   iVar10 = (**(code **)(*plVar12 + 0x78))(plVar12,lVar13,uVar9,0,puVar3 + uVar15),
                   iVar10 < 0)) {
                  thunk_FUN_180102fc0(lVar13);
                  bVar6 = false;
                }
                else {
                  thunk_FUN_180102fc0(lVar13);
                }
              }
              uVar1 = (int)uVar15 + 1;
              uVar15 = (ulonglong)uVar1;
            } while (uVar1 < 0x12);
            if (bVar6) {
LAB_180025160:
              uVar7 = DAT_18024e2d0;
              bVar6 = true;
              uVar15 = 0;
              uVar1 = *(uint *)(param_1 + 600);
              puVar4 = &DAT_180249c80;
              if (iVar8 < 0xb000) {
                puVar4 = &DAT_180249c70;
              }
              lVar11 = *(longlong *)(param_1 + 0x250);
              puVar3 = (undefined8 *)(param_1 + 0x1f0);
              *(undefined8 *)(param_1 + 0x1f8) = 0;
              *puVar3 = 0;
              *(undefined8 *)(param_1 + 0x208) = 0;
              *(undefined8 *)(param_1 + 0x200) = 0;
              *(undefined8 *)(param_1 + 0x218) = 0;
              *(undefined8 *)(param_1 + 0x210) = 0;
              do {
                if (!bVar6) goto LAB_180025234;
                if (puVar4[uVar15] != 0) {
                  uVar9 = FUN_180102160(uVar7,puVar4[uVar15],u_RT_CUSTOM_18023b3e8);
                  lVar13 = FUN_1801021b0(uVar7,puVar4[uVar15],u_RT_CUSTOM_18023b3e8);
                  if ((lVar13 == 0) ||
                     (plVar12 = *(longlong **)(lVar11 + (ulonglong)uVar1 * 0x18c0 + 0x6b0),
                     iVar10 = (**(code **)(*plVar12 + 0x68))(plVar12,lVar13,uVar9,0,puVar3 + uVar15)
                     , iVar10 < 0)) {
                    thunk_FUN_180102fc0(lVar13);
                    bVar6 = false;
                  }
                  else {
                    thunk_FUN_180102fc0(lVar13);
                  }
                }
                uVar2 = (int)uVar15 + 1;
                uVar15 = (ulonglong)uVar2;
              } while (uVar2 < 6);
              if (bVar6) {
LAB_180025260:
                uVar7 = DAT_18024e2d0;
                bVar6 = true;
                uVar15 = 0;
                puVar4 = &DAT_180249c48;
                if (iVar8 < 0xb000) {
                  puVar4 = &DAT_180249c20;
                }
                plVar12 = (longlong *)(param_1 + 0x168);
                uVar1 = *(uint *)(param_1 + 600);
                lVar11 = *(longlong *)(param_1 + 0x250);
                *(undefined8 *)(param_1 + 0x170) = 0;
                *plVar12 = 0;
                *(undefined8 *)(param_1 + 0x180) = 0;
                *(undefined8 *)(param_1 + 0x178) = 0;
                *(undefined8 *)(param_1 + 400) = 0;
                *(undefined8 *)(param_1 + 0x188) = 0;
                *(undefined8 *)(param_1 + 0x1a0) = 0;
                *(undefined8 *)(param_1 + 0x198) = 0;
                *(undefined8 *)(param_1 + 0x1b0) = 0;
                *(undefined8 *)(param_1 + 0x1a8) = 0;
                *(undefined8 *)(param_1 + 0x1c0) = 0;
                *(undefined8 *)(param_1 + 0x1b8) = 0;
                *(undefined8 *)(param_1 + 0x1d0) = 0;
                *(undefined8 *)(param_1 + 0x1c8) = 0;
                *(undefined8 *)(param_1 + 0x1e0) = 0;
                *(undefined8 *)(param_1 + 0x1d8) = 0;
                *(undefined8 *)(param_1 + 0x1e8) = 0;
                do {
                  if (!bVar6) goto LAB_18002534c;
                  if (puVar4[uVar15] != 0) {
                    uVar9 = FUN_180102160(uVar7,puVar4[uVar15],u_RT_CUSTOM_18023b3e8);
                    lVar13 = FUN_1801021b0(uVar7,puVar4[uVar15],u_RT_CUSTOM_18023b3e8);
                    if ((lVar13 == 0) ||
                       (plVar14 = *(longlong **)(lVar11 + (ulonglong)uVar1 * 0x18c0 + 0x6b0),
                       iVar8 = (**(code **)(*plVar14 + 0x60))
                                         (plVar14,lVar13,uVar9,0,plVar12 + uVar15), iVar8 < 0)) {
                      thunk_FUN_180102fc0(lVar13);
                      bVar6 = false;
                    }
                    else {
                      thunk_FUN_180102fc0(lVar13);
                    }
                  }
                  uVar2 = (int)uVar15 + 1;
                  uVar15 = (ulonglong)uVar2;
                } while (uVar2 < 0x11);
                if (bVar6) {
LAB_180025378:
                  auVar16 = FUN_1800e14a8(*(undefined8 *)(param_1 + 0x250),
                                          *(undefined4 *)(param_1 + 600),DAT_18024e2d0,1,
                                          &DAT_180249bc8,&PTR_PTR_180249bd0,param_1 + 0x230,
                                          param_1 + 0x228);
                  if ((auVar16._0_8_ & 1) != 0) {
                    lVar11 = 0;
                    bVar6 = true;
                    local_1b0 = plVar12;
                    do {
                      uVar7 = DAT_18024e2d0;
                      sVar5 = puVar4[lVar11];
                      if (sVar5 == 0) {
                        *(undefined8 *)(param_1 + 8 + lVar11 * 8) = 0;
                        *(undefined4 *)(param_1 + 0x90 + lVar11 * 4) = 0;
                      }
                      else {
                        uVar9 = FUN_180102160(DAT_18024e2d0,sVar5,u_RT_CUSTOM_18023b3e8);
                        auVar16 = FUN_1801021b0(uVar7,sVar5,u_RT_CUSTOM_18023b3e8);
                        lVar13 = auVar16._0_8_;
                        if (lVar13 != 0) {
                          *(longlong *)(param_1 + 8 + lVar11 * 8) = lVar13;
                          *(undefined4 *)(param_1 + 0x90 + lVar11 * 4) = uVar9;
                        }
                        bVar6 = (bool)(lVar13 != 0 & bVar6);
                      }
                      plVar12 = local_1b0;
                      lVar11 = lVar11 + 1;
                    } while (lVar11 != 0x11);
                    if (bVar6) {
                      return 1;
                    }
                    FUN_1800e15f0(auVar16._0_8_,auVar16._8_8_,1,param_1 + 0x230,param_1 + 0x228);
                  }
                  lVar11 = 0;
                  do {
                    if ((longlong *)plVar12[lVar11] != (longlong *)0x0) {
                      (**(code **)(*(longlong *)plVar12[lVar11] + 0x10))();
                      plVar12[lVar11] = 0;
                    }
                    lVar11 = lVar11 + 1;
                  } while (lVar11 != 0x11);
                }
                else {
LAB_18002534c:
                  lVar11 = 0;
                  do {
                    if ((longlong *)plVar12[lVar11] != (longlong *)0x0) {
                      (**(code **)(*(longlong *)plVar12[lVar11] + 0x10))();
                      plVar12[lVar11] = 0;
                    }
                    lVar11 = lVar11 + 1;
                  } while (lVar11 != 0x11);
                  if (bVar6) goto LAB_180025378;
                }
                lVar11 = 0;
                do {
                  if ((longlong *)puVar3[lVar11] != (longlong *)0x0) {
                    (**(code **)(*(longlong *)puVar3[lVar11] + 0x10))();
                    puVar3[lVar11] = 0;
                  }
                  lVar11 = lVar11 + 1;
                } while (lVar11 != 6);
              }
              else {
LAB_180025234:
                lVar11 = 0;
                do {
                  if ((longlong *)puVar3[lVar11] != (longlong *)0x0) {
                    (**(code **)(*(longlong *)puVar3[lVar11] + 0x10))();
                    puVar3[lVar11] = 0;
                  }
                  lVar11 = lVar11 + 1;
                } while (lVar11 != 6);
                if (bVar6) goto LAB_180025260;
              }
              puVar3 = local_198;
              lVar11 = 0;
              do {
                plVar12 = (longlong *)puVar3[lVar11];
                if (plVar12 != (longlong *)0x0) {
                  (**(code **)(*plVar12 + 0x10))();
                  puVar3[lVar11] = 0;
                }
                lVar11 = lVar11 + 1;
              } while (lVar11 != 0x12);
            }
            else {
LAB_180025130:
              puVar3 = local_198;
              lVar11 = 0;
              do {
                plVar12 = (longlong *)puVar3[lVar11];
                if (plVar12 != (longlong *)0x0) {
                  (**(code **)(*plVar12 + 0x10))();
                  puVar3[lVar11] = 0;
                }
                lVar11 = lVar11 + 1;
              } while (lVar11 != 0x12);
              if (bVar6) goto LAB_180025160;
            }
            FUN_1800e1808(*(undefined8 *)(param_1 + 0x250),*(undefined4 *)(param_1 + 600),
                          *(undefined8 *)(param_1 + 0x238));
            goto LAB_180025538;
          }
          (**(code **)(*local_1a8 + 0x10))();
        }
        (**(code **)(**(longlong **)(param_1 + 0x240) + 0x10))();
      }
      (**(code **)(*local_1a0 + 0x10))();
    }
    (**(code **)(**(longlong **)(param_1 + 0x238) + 0x10))();
  }
  (**(code **)(*local_1b0 + 0x10))();
LAB_180025538:
  FUN_1800e12c8(*(undefined8 *)(param_1 + 0x250));
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  return 0;
}

