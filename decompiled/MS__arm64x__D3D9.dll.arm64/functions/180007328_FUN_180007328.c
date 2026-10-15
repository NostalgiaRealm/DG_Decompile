/*
 * FUN_180007328 at 180007328
 * undefined FUN_180007328(void)
 * Address ranges: 180007328-180007933
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_180007328(longlong param_1,longlong *param_2,int param_3,int param_4,uint param_5,int param_6,
             int param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong extraout_x1;
  undefined4 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  undefined8 uVar14;
  uint in_stack_fffffffffffffe40;
  uint in_stack_fffffffffffffe48;
  uint local_18c;
  uint local_188;
  uint local_184;
  undefined4 local_180;
  longlong local_178;
  longlong *local_170;
  longlong local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_178 = param_1 + 0x4000;
  local_180 = 0;
  local_188 = param_5;
  local_170 = param_2;
  FUN_180004c70();
  plVar7 = local_170;
  iVar3 = *(int *)(param_1 + 0x69c);
  lVar13 = *(longlong *)(&DAT_000066c0 + param_1);
  lVar8 = *param_2;
  uVar11 = (ulonglong)*(uint *)(&DAT_180230410 + (longlong)param_4 * 4);
  iVar4 = *(int *)(lVar13 + 0x54);
  local_184 = (uint)(iVar3 != 0);
  uVar10 = -(ulonglong)(*(uint *)(&DAT_180230410 + (longlong)param_4 * 4) >> 0x1f) &
           0xfffffff800000000 | uVar11 << 3;
  bVar6 = iVar4 == 0x66;
  iVar5 = *(int *)(&DAT_1802303dc + uVar10) + *(int *)(&DAT_1802303d8 + uVar10) * param_8;
  uVar1 = *(uint *)(local_178 + 0x27cc) & *(uint *)(lVar8 + 0x10);
  uVar2 = *(uint *)(local_178 + 0x27d8) & uVar1;
  local_18c = uVar1;
  if (uVar2 == uVar1) {
    uVar12 = *(uint *)(local_178 + 0x27e4);
    uVar14 = *(undefined8 *)(lVar13 + 8);
    local_188 = *(uint *)(local_178 + 0x27dc) & uVar1;
    FUN_180006bc8(param_1,local_188,uVar12 & 1);
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x178))
              (*(longlong **)(param_1 + 0x28),uVar11,*param_2,param_2[2],uVar14,param_3,param_7,
               iVar5,bVar6,local_184 & 0xff);
    FUN_1800069f8(param_1,uVar1,1);
    uVar2 = local_188;
LAB_1800077fc:
    FUN_180006a98(param_1,uVar2,uVar12 & 1);
  }
  else if (uVar2 == 0) {
    local_168 = local_170[2];
    if (local_168 == 0) {
      if ((((*(int *)(lVar8 + 4) == 0) || (iVar3 == 0)) || (*(uint *)(param_1 + 0x360) < 9)) ||
         (*(char *)(param_1 + 0x681b) == '\0')) {
        if ((uVar1 == 1) && (*(int *)(lVar8 + 0xc) == *(int *)(local_178 + 0x2748))) {
          uVar1 = param_7 << 2;
          if (iVar4 != 0x66) {
            uVar1 = param_7 << 1;
          }
          (**(code **)(**(longlong **)(param_1 + 0x28) + 0x40))
                    (*(longlong **)(param_1 + 0x28),uVar11,lVar8,
                     *(longlong *)(*(longlong *)(param_1 + 0x66c8) + 8) +
                     (ulonglong)*(uint *)(local_178 + 0x2788),*(int *)(local_178 + 0x2748),param_6,
                     *(longlong *)(lVar13 + 8) + (ulonglong)uVar1,iVar5,param_3,bVar6,iVar3 != 0);
        }
        else {
          FUN_180006878(param_1,lVar8,uVar1,0,&local_160);
          uVar1 = param_7 << 2;
          if (iVar4 != 0x66) {
            uVar1 = param_7 << 1;
          }
          (**(code **)(**(longlong **)(param_1 + 0x28) + 0x50))
                    (*(longlong **)(param_1 + 0x28),uVar11,local_170[1],&local_160,param_6,
                     *(longlong *)(lVar13 + 8) + (ulonglong)uVar1,iVar5,param_3,bVar6,
                     local_184 & 0xff);
        }
      }
      else {
        iVar3 = *(int *)(param_1 + 0x698);
        local_18c = FUN_180009af8(param_1);
        lVar8 = FUN_180007940(param_1 + 0x348,&local_18c);
        uVar10 = FUN_180012408(param_1,local_188 + param_6,*(undefined4 *)(lVar8 + 0xc));
        if ((uVar10 & 1) != 0) {
          uStack_158 = 0;
          local_160 = 0;
          uStack_148 = 0;
          uStack_150 = 0;
          uStack_138 = 0;
          local_140 = 0;
          uStack_128 = 0;
          uStack_130 = 0;
          uStack_118 = 0;
          local_120 = 0;
          uStack_108 = 0;
          uStack_110 = 0;
          uStack_f8 = 0;
          local_100 = 0;
          uStack_e8 = 0;
          uStack_f0 = 0;
          uStack_d8 = 0;
          local_e0 = 0;
          uStack_c8 = 0;
          uStack_d0 = 0;
          uStack_b8 = 0;
          local_c0 = 0;
          uStack_a8 = 0;
          uStack_b0 = 0;
          uStack_98 = 0;
          local_a0 = 0;
          uStack_88 = 0;
          uStack_90 = 0;
          uStack_78 = 0;
          local_80 = 0;
          uStack_68 = 0;
          uStack_70 = 0;
          uStack_58 = 0;
          local_60 = 0;
          FUN_180006920(param_1,*plVar7,&local_160);
          uVar9 = 7;
          if (iVar3 == 0) {
            uVar9 = 5;
          }
          FUN_180012790(param_1,&local_160,*(undefined8 *)(param_1 + 0xde8),lVar8,uVar9,local_188,
                        param_6,param_3 + local_188,in_stack_fffffffffffffe40 & 0xffffff00,
                        in_stack_fffffffffffffe48 & 0xffffff00);
          uVar1 = param_7 << 2;
          if (iVar4 != 0x66) {
            uVar1 = param_7 << 1;
          }
          (**(code **)(**(longlong **)(param_1 + 0x28) + 0x40))
                    (*(longlong **)(param_1 + 0x28),uVar11,lVar8,*(undefined8 *)(param_1 + 0xde8),
                     *(undefined4 *)(lVar8 + 0xc),param_6,
                     *(longlong *)(*(longlong *)(&DAT_000066c0 + param_1) + 8) + (ulonglong)uVar1,
                     iVar5,0,bVar6,0);
        }
      }
    }
    else {
      FUN_180006878(param_1,lVar8,uVar1,0,&local_160);
      if ((uVar1 == 1) && (*(int *)(extraout_x1 + 0xc) == *(int *)(local_178 + 0x2748))) {
        uVar1 = param_7 << 2;
        if (iVar4 != 0x66) {
          uVar1 = param_7 << 1;
        }
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x148))
                  (*(longlong **)(param_1 + 0x28),uVar11,extraout_x1,local_168,
                   *(longlong *)(*(longlong *)(param_1 + 0x66c8) + 8) +
                   (ulonglong)*(uint *)(local_178 + 0x2788),*(int *)(local_178 + 0x2748),param_6,
                   *(longlong *)(lVar13 + 8) + (ulonglong)uVar1,iVar5,param_3,bVar6);
      }
      else {
        uVar1 = param_7 << 2;
        if (iVar4 != 0x66) {
          uVar1 = param_7 << 1;
        }
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x158))
                  (*(longlong **)(param_1 + 0x28),uVar11,local_170[1],local_168,&local_160,param_6,
                   *(longlong *)(lVar13 + 8) + (ulonglong)uVar1,iVar5,param_3,bVar6);
      }
    }
  }
  else {
    uVar10 = FUN_180006ce0(param_1,uVar1 & (*(uint *)(local_178 + 0x27d8) ^ 0xffffffff),
                           param_3 + local_188,param_6);
    if ((uVar10 & 1) != 0) {
      uVar12 = *(uint *)(local_178 + 0x27e4);
      uVar2 = *(uint *)(local_178 + 0x27dc) & uVar1;
      FUN_180006bc8(param_1,uVar2,uVar12 & 1);
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x178))
                (*(longlong **)(param_1 + 0x28),uVar11,*local_170,local_170[2],
                 *(undefined8 *)(*(longlong *)(&DAT_000066c0 + param_1) + 8),param_3,param_7,iVar5,
                 *(int *)(*(longlong *)(&DAT_000066c0 + param_1) + 0x54) == 0x66,local_184 & 0xff);
      FUN_1800069f8(param_1,uVar1,1);
      goto LAB_1800077fc;
    }
    local_180 = 0x88760827;
  }
  if ((*(char *)(param_1 + 0xe21) == '\0') &&
     (*(char *)(*(longlong *)(param_1 + 0x18) + 0x7f2) == '\0')) {
    if (*(char *)(param_1 + 0x2cd) == '\0') goto LAB_1800078a4;
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x28))();
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x28))
            (*(longlong **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x2c4),
             *(undefined4 *)(param_1 + 0x2c8));
  if ((bVar6) &&
     ((**(code **)(**(longlong **)(param_1 + 0x30) + 0x28))
                (*(longlong **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x2c4),
                 *(undefined4 *)(param_1 + 0x2c8)),
     *(char *)(*(longlong *)(param_1 + 0x18) + 0x7f3) != '\0')) {
    (*__imp_KERNEL32_dll_DebugBreak)();
  }
LAB_1800078a4:
  if (*(char *)(param_1 + 0x2ce) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))();
    if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x50) + 0x18))();
    }
    *(undefined1 *)(param_1 + 0x2ce) = 1;
  }
  if (*(char *)(param_1 + 0x2cf) != '\0') {
    if (*(int *)(param_1 + 0x4e0) != 0) {
      plVar7 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 8) + 0x70);
      (**(code **)(*plVar7 + 0x40))
                (plVar7,*(undefined4 *)(param_1 + 0x2c4),*(undefined4 *)(param_1 + 0x2c8),1);
    }
    *(undefined1 *)(param_1 + 0x2cf) = 0;
  }
  return local_180;
}

