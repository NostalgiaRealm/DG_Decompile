/*
 * FUN_1800ef188 at 1800ef188
 * undefined8 __fastcall FUN_1800ef188(longlong * param_1, longlong param_2, ulonglong * param_3, int param_4, uint * param_5, undefined8 * param_6)
 * Address ranges: 1800ef188-1800efb0d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1800ef188(longlong *param_1,longlong param_2,ulonglong *param_3,int param_4,uint *param_5,
             undefined8 *param_6)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  int iVar5;
  byte bVar6;
  char cVar7;
  uint *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined7 extraout_var;
  ulonglong *puVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float local_res8 [2];
  ulonglong *local_res10;
  undefined8 in_stack_fffffffffffffe00;
  undefined4 uVar18;
  uint local_1d8 [2];
  undefined4 local_1d0;
  undefined4 local_1cc;
  int local_1c8;
  int local_1c4;
  uint local_1c0;
  int local_1bc;
  int local_1b8;
  int local_1b4;
  int local_1b0;
  int local_1ac;
  char local_1a8;
  char local_1a7;
  undefined8 local_1a0;
  undefined8 uStack_198;
  int local_190;
  undefined4 local_18c;
  uint *local_188;
  ulonglong *local_180;
  undefined8 local_178;
  undefined8 local_170;
  longlong local_168;
  int *local_160;
  undefined8 local_158;
  float local_150;
  undefined8 local_14c;
  longlong local_138;
  float local_130;
  float local_12c;
  undefined4 local_128;
  undefined4 local_124;
  longlong local_120;
  float *local_118;
  ulonglong local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined1 local_d8 [16];
  uint local_c8;
  uint local_c0;
  int local_b8;
  uint *local_a0;
  undefined8 *puStack_98;
  ulonglong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  uint local_60;
  uint local_58;
  
  uVar18 = (undefined4)((ulonglong)in_stack_fffffffffffffe00 >> 0x20);
  uVar2 = *(uint *)(param_2 + 0x10);
  puVar3 = *(uint **)(param_2 + 0xd88 + (ulonglong)*(uint *)(param_2 + 0xd78) * 8);
  FUN_1800e1d04(param_1[(ulonglong)uVar2 * 0x358 + 0x447],(longlong *)&local_res10,
                *(uint *)(param_2 + 0xd98),*(uint *)(param_2 + 0xd78));
  (**(code **)(*(longlong *)param_3[1] + 0x50))((longlong *)param_3[1],local_70);
  (**(code **)(*(longlong *)puVar3 + 0x50))(puVar3,local_d8);
  plVar13 = param_1;
  puVar8 = FUN_1800de740((longlong)param_1,local_1d8,param_2,(int *)param_5,local_60,local_58,
                         local_c8,local_c0,param_4,local_b8);
  if (((local_1d8[0] == 0) && (local_1a8 == '\0')) && (local_1a7 == '\0')) {
    return (ulonglong)puVar8 & 0xffffffffffffff00;
  }
  plVar9 = (longlong *)param_1[(ulonglong)uVar2 * 0x358 + 0x3c1];
  *(int *)((longlong)plVar9 + 0x684) = *(int *)((longlong)plVar9 + 0x684) + 1;
  if (*param_3 != 0) {
    plVar9 = (longlong *)
             FUN_1800eec60(plVar13,(longlong)(param_1 + (ulonglong)uVar2 * 0x358 + 0x120),param_3[1]
                           ,*param_3,param_4);
  }
  if (local_1a8 != '\0') {
    lVar12 = param_1[(ulonglong)uVar2 * 0x358 + 0x3c1];
    FUN_1800e2d18(lVar12,(ulonglong)puVar3,0,0,4);
    local_1a0 = 0;
    uStack_198 = 0;
    uVar10 = FUN_1800de97c(lVar12,(longlong)local_1d8,local_c8,local_c0,&local_188);
    plVar9 = (longlong *)
             FUN_1800e3f5c(param_1[(ulonglong)uVar2 * 0x358 + 0x3c1],local_res10,&local_1a0,
                           (int)uVar10,&local_188);
  }
  if (param_3[2] == 0) goto LAB_1800ef9df;
  bVar6 = 0;
  if (((local_1d8[0] != 0) || (local_1a7 != '\0')) ||
     ((local_1c0 - local_1c8 != local_1b0 - local_1b8 ||
      (local_1bc - local_1c4 != local_1ac - local_1b4)))) {
    if (((uint)((local_1b0 - local_1b8) * 2) <= (local_1c0 - local_1c8) / *(uint *)(param_2 + 0x20))
       || ((uint)((local_1ac - local_1b4) * 2) <=
           (uint)(local_1bc - local_1c4) / *(uint *)(param_2 + 0x24))) {
      bVar6 = 1;
    }
    fVar16 = 1.4013e-45;
    if (*(int *)(param_2 + 0x2c) == 7) {
      fVar16 = 4.2039e-45;
    }
    iVar5 = 0;
    if (*(int *)(param_2 + 0x2c) == 7) {
      iVar5 = 2;
    }
    local_res8[0] = fVar16;
    cVar7 = FUN_1800eb61c(param_1[(ulonglong)uVar2 * 0x358 + 0x44a],iVar5 + (-(uint)bVar6 & 5) + 1,
                          *(undefined8 *)(param_1[(ulonglong)uVar2 * 0x358 + 0x3c0] + 0x18),
                          *(undefined8 *)(param_1[(ulonglong)uVar2 * 0x358 + 0x3c1] + 0xb78),
                          (longlong *)&local_108);
    plVar9 = (longlong *)CONCAT71(extraout_var,cVar7);
    if (cVar7 == '\0') goto LAB_1800ef9df;
    uVar15 = 2;
    lVar12 = *(longlong *)(param_1[(ulonglong)uVar2 * 0x358 + 0x3c0] + 0x18);
    puVar11 = (ulonglong *)
              FUN_1800e80fc(param_1[(ulonglong)uVar2 * 0x358 + 0x122] + 0x40,&local_138,2,lVar12,
                            param_1[(ulonglong)uVar2 * 0x358 + 0x13a]);
    local_a0 = (uint *)*puVar11;
    puStack_98 = (undefined8 *)puVar11[1];
    local_90 = puVar11[2];
    if (puStack_98 != (undefined8 *)0x0) {
      FUN_1800dea34((longlong)param_1,param_2,uVar15,lVar12,local_c8,local_c0,*param_5,param_5[1],
                    param_5[2],(float *)(param_1 + (ulonglong)uVar2 * 0x358 + 0x13c));
      FUN_1800fbec0(puStack_98,param_1 + (ulonglong)uVar2 * 0x358 + 0x13c,0x1040);
      fVar16 = local_res8[0];
      if (*(int *)(param_1[(ulonglong)uVar2 * 0x358 + 0x122] + 0x34) != 0) {
        *(undefined4 *)(param_1[(ulonglong)uVar2 * 0x358 + 0x122] + 0x34) = 0;
      }
    }
    lVar12 = param_1[(ulonglong)uVar2 * 0x358 + 0x13a];
    plVar9 = FUN_1800e80fc(param_1[(ulonglong)uVar2 * 0x358 + 0x121] + 0x40,&local_120,2,
                           *(longlong *)(param_1[(ulonglong)uVar2 * 0x358 + 0x3c0] + 0x18),lVar12);
    uVar14 = (uint)((ulonglong)lVar12 >> 0x20);
    if (local_118 == (float *)0x0) goto LAB_1800ef9df;
    *(longlong **)(param_1[(ulonglong)uVar2 * 0x358 + 0x3c1] + 0xb88) = param_1;
    if (*(int *)(param_2 + 0x2c) == 7) {
      plVar13 = &local_120;
      uVar15 = FUN_1800f6e98((longlong)param_1,*(uint *)(param_2 + 0x10),(longlong *)&local_a0,
                             (longlong *)&local_108,plVar13,CONCAT44(uVar18,1),param_3[1],param_3[3]
                             ,local_60,local_58);
      uVar14 = (uint)((ulonglong)plVar13 >> 0x20);
      if ((char)uVar15 != '\0') {
        param_3[1] = param_1[(ulonglong)uVar2 * 0x358 + 0x46f];
        puVar11 = (ulonglong *)
                  FUN_1800e1d04(param_1[(ulonglong)uVar2 * 0x358 + 0x446],(longlong *)local_res8,
                                (int)param_1[(ulonglong)uVar2 * 0x358 + 0x46d] + 1,0);
        param_3[3] = *puVar11;
      }
    }
    *(undefined4 *)(param_1 + (ulonglong)uVar2 * 0x358 + 0x130) = 1;
    *(int *)((longlong)param_1 + (ulonglong)uVar2 * 0x1ac0 + 0x984) = local_b8;
    lVar12 = FUN_180098258(param_1 + (ulonglong)uVar2 * 0x358 + 0x44f,(int *)&DAT_1801004f0);
    param_1[(ulonglong)uVar2 * 0x358 + 0x12a] = lVar12;
    lVar12 = FUN_18004c500(param_1 + (ulonglong)uVar2 * 0x358 + 0x44c,(int *)&DAT_180100480);
    param_1[(ulonglong)uVar2 * 0x358 + 0x12d] = lVar12;
    lVar12 = FUN_18004bf30(param_1 + (ulonglong)uVar2 * 0x358 + 0x455,(uint *)&DAT_1801004b8);
    param_1[(ulonglong)uVar2 * 0x358 + 300] = lVar12;
    if (*(int *)(param_1[(ulonglong)uVar2 * 0x358 + 0x121] + 0x34) != 0) {
      *(undefined4 *)(param_1[(ulonglong)uVar2 * 0x358 + 0x121] + 0x34) = 0;
    }
    puVar11 = (ulonglong *)(param_1 + (ulonglong)uVar2 * 0x358 + 0x123);
    FUN_1800e2cec(param_1[(ulonglong)uVar2 * 0x358 + 0x3c1],*puVar11);
    FUN_1800e3400(param_1[(ulonglong)uVar2 * 0x358 + 0x3c1],*puVar11);
    FUN_1800e3368(param_1[(ulonglong)uVar2 * 0x358 + 0x3c1],1,&local_f8);
    FUN_1800e34f8(param_1[(ulonglong)uVar2 * 0x358 + 0x3c1],5);
    local_1a0 = local_120;
    uStack_198 = 0x1000000200;
    FUN_1800e384c(param_1[(ulonglong)uVar2 * 0x358 + 0x3c1],0,1,(longlong)&local_1a0);
    FUN_1800e3624(param_1[(ulonglong)uVar2 * 0x358 + 0x3c1],0,(longlong)local_a0);
    if (*(int *)(param_2 + 0x2c) != 7) {
      local_188 = local_1d8;
      local_180 = &local_108;
      local_178 = &local_120;
      local_170 = param_1 + (ulonglong)uVar2 * 0x358 + 0x120;
      local_14c = 0;
      local_160 = (int *)param_3[1];
      local_158 = param_3[3];
      local_168 = param_2;
      local_150 = fVar16;
      FUN_1800deb6c(param_1,local_1d8,param_2,&local_188);
      param_3[1] = (ulonglong)local_160;
      param_3[3] = local_158;
    }
    if ((((local_1d8[0] != 0) || (local_1a7 != '\0')) ||
        (local_1c0 - local_1c8 != local_1b0 - local_1b8)) ||
       (local_1bc - local_1c4 != local_1ac - local_1b4)) {
      lVar12 = param_1[(ulonglong)uVar2 * 0x358 +
                       (ulonglong)(byte)(&DAT_1801003e8)[local_1d8[0]] + 0x348];
      param_1[(ulonglong)uVar2 * 0x358 + 0x124] = param_1[(ulonglong)uVar2 * 0x358 + 0x373];
      lVar4 = param_1[(ulonglong)uVar2 * 0x358 + 0x375];
      param_1[(ulonglong)uVar2 * 0x358 + 0x125] = lVar12;
      param_1[(ulonglong)uVar2 * 0x358 + 0x12e] = lVar4;
      uVar10 = FUN_1800e7278((longlong)(param_1 + (ulonglong)uVar2 * 0x358 + 0x45b),(byte *)puVar11)
      ;
      FUN_1800e2cec(param_1[(ulonglong)uVar2 * 0x358 + 0x3c1],uVar10);
      FUN_1800e34ac(param_1[(ulonglong)uVar2 * 0x358 + 0x3c1],uVar10);
      FUN_1800e2d18(param_1[(ulonglong)uVar2 * 0x358 + 0x3c1],(ulonglong)puVar3,0,0,4);
      FUN_1800e2d18(param_1[(ulonglong)uVar2 * 0x358 + 0x3c1],param_3[1],0,0,0x80);
      uVar10 = 0;
      (**(code **)(*(longlong *)param_1[(ulonglong)*(uint *)(param_2 + 0x10) * 4 + 0xda] + 0xc0))
                ((longlong *)param_1[(ulonglong)*(uint *)(param_2 + 0x10) * 4 + 0xda],1,
                 CONCAT44(uStack_fc,local_100),param_3[3],(ulonglong)uVar14 << 0x20);
      FUN_1800e3664(param_1[(ulonglong)uVar2 * 0x358 + 0x3c1],1,local_108);
      FUN_1800e3a7c(param_1[(ulonglong)uVar2 * 0x358 + 0x3c1],1,(longlong *)&local_res10,0,
                    (longlong *)0x0);
      uStack_198 = CONCAT44(local_c0,local_c8);
      local_138 = 0;
      local_130 = (float)local_c8;
      local_128 = 0;
      local_124 = 0x3f800000;
      local_1a0 = 0;
      local_12c = (float)local_c0;
      FUN_1800e3cf8(param_1[(ulonglong)uVar2 * 0x358 + 0x3c1],1,(longlong)&local_138);
      FUN_1800e3c4c(param_1[(ulonglong)uVar2 * 0x358 + 0x3c1],1,(longlong)&local_1a0);
      uVar14 = 0;
      if ((&DAT_180100428)[local_1d8[0]] != '\0') {
        (**(code **)(*(longlong *)param_3[1] + 0x50))((longlong *)param_3[1],&local_188);
        uVar10 = (ulonglong)local_170 & 0xffffffff;
        uVar14 = (uint)local_178;
      }
      FUN_1800ded88(uVar10,param_2,(longlong)local_1d8,local_118,uVar14,(uint)uVar10);
      plVar9 = (longlong *)FUN_1800e4040(param_1[(ulonglong)uVar2 * 0x358 + 0x3c1],4,1,0,0);
      goto LAB_1800ef9df;
    }
  }
  FUN_1800e2d18(param_1[(ulonglong)uVar2 * 0x358 + 0x3c1],(ulonglong)puVar3,0,0,0x400);
  FUN_1800e2d18(param_1[(ulonglong)uVar2 * 0x358 + 0x3c1],param_3[1],0,0,0x800);
  local_78 = 0;
  local_108 = param_3[1];
  local_e0 = 0;
  local_1a0 = CONCAT44(local_1c4,local_1c8);
  local_190 = local_1bc;
  puStack_98 = (undefined8 *)((ulonglong)puStack_98 & 0xffffffff00000000);
  local_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  uStack_198 = (ulonglong)local_1c0 << 0x20;
  local_18c = 1;
  local_a0 = puVar3;
  plVar9 = (longlong *)
           FUN_1800e3ee8(param_1[(ulonglong)uVar2 * 0x358 + 0x3c1],&local_a0,local_1b8,local_1b4,0,
                         &local_108,&local_1a0);
LAB_1800ef9df:
  if (param_6 != (undefined8 *)0x0) {
    fVar16 = (float)(uint)((local_1b0 - local_1b8) * *(int *)(param_2 + 0x20)) /
             (float)(int)(local_1c0 - local_1c8);
    local_180 = local_res10;
    local_178 = (longlong *)CONCAT44(local_1d0,local_b8);
    fVar17 = (float)(uint)((local_1ac - local_1b4) * *(int *)(param_2 + 0x24)) /
             (float)(local_1bc - local_1c4);
    local_170 = (longlong *)CONCAT44(local_c8,local_1cc);
    local_168 = CONCAT44(local_168._4_4_,local_c0);
    local_160 = &local_1b8;
    local_158 = CONCAT44(fVar17,fVar16);
    local_150 = (float)local_1b8 - (float)local_1c8 * fVar16;
    local_14c = CONCAT44(local_14c._4_4_,(float)local_1b4 - (float)local_1c4 * fVar17);
    local_188 = puVar3;
    plVar9 = (longlong *)(**(code **)*param_6)(param_6,&local_188);
  }
  lVar12 = param_1[(ulonglong)uVar2 * 0x358 + 0x3c1];
  piVar1 = (int *)(lVar12 + 0x684);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (*(int *)(lVar12 + 0x680) <= *(int *)(lVar12 + 0x678))) {
    plVar9 = (longlong *)FUN_1800e2ae8(lVar12 + 8,'\0');
  }
  return CONCAT71((int7)((ulonglong)plVar9 >> 8),1);
}

