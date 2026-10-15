/*
 * FUN_1800da0fc at 1800da0fc
 * undefined8 __fastcall FUN_1800da0fc(longlong * param_1, longlong param_2, uint * param_3, longlong param_4, longlong * param_5, undefined8 * param_6, int param_7, undefined8 * param_8)
 * Address ranges: 1800da0fc-1800da7ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800da0fc(longlong *param_1,longlong param_2,uint *param_3,longlong param_4,
                       longlong *param_5,undefined8 *param_6,int param_7,undefined8 *param_8)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint *puVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  uint uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  int *piVar11;
  undefined4 local_res8 [2];
  undefined8 in_stack_fffffffffffffe38;
  undefined4 uVar14;
  longlong *plVar12;
  undefined8 **ppuVar13;
  undefined8 in_stack_fffffffffffffe40;
  undefined4 uVar16;
  ulonglong uVar15;
  uint local_198 [4];
  int local_188;
  int local_184;
  uint local_180;
  int local_17c;
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  char local_168;
  char local_167;
  longlong local_160;
  longlong lStack_158;
  int local_150;
  undefined4 local_14c;
  undefined8 *local_148;
  undefined8 uStack_140;
  uint *local_138;
  longlong *local_130;
  longlong local_128;
  longlong *local_120;
  int *local_118;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100 [3];
  float local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  uint local_e8;
  uint local_e4;
  int local_d8;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  uint local_98;
  uint local_94;
  uint local_68;
  uint local_64;
  
  plVar7 = param_5;
  uVar14 = (undefined4)((ulonglong)in_stack_fffffffffffffe38 >> 0x20);
  uVar16 = (undefined4)((ulonglong)in_stack_fffffffffffffe40 >> 0x20);
  uVar1 = *(uint *)(param_2 + 0x10);
  (**(code **)(*param_5 + 0x50))(param_5,&local_98);
  (**(code **)(**(longlong **)(param_2 + 0xd78) + 0x50))(*(longlong **)(param_2 + 0xd78),&local_e8);
  iVar3 = param_7;
  uVar15 = CONCAT44(uVar16,local_94);
  uVar5 = CONCAT44(uVar14,local_98);
  puVar4 = FUN_1800de740((longlong)param_1,local_198,param_2,(int *)param_3,local_98,local_94,
                         local_e8,local_e4,param_7,local_d8);
  if (((local_198[0] == 0) && (local_168 == '\0')) && (local_167 == '\0')) {
    uVar5 = (ulonglong)puVar4 & 0xffffffffffffff00;
  }
  else {
    if (param_4 != 0) {
      uVar15 = CONCAT44((int)(uVar15 >> 0x20),iVar3);
      (**(code **)(*(longlong *)param_1[(ulonglong)uVar1 * 0x318 + 0xd7] + 0x1c8))
                ((longlong *)param_1[(ulonglong)uVar1 * 0x318 + 0xd7],plVar7,0,param_4,
                 uVar5 & 0xffffffff00000000,uVar15);
    }
    piVar11 = (int *)param_6;
    if (*(int *)(param_2 + 0x2c) == 7) {
      uVar6 = FUN_1800f3be4((longlong)param_1,*(uint *)(param_2 + 0x10),param_6,local_98,local_94);
      if ((char)uVar6 != '\0') {
        piVar11 = (int *)param_1[(ulonglong)uVar1 * 0x318 + 0x3e3];
        plVar7 = (longlong *)param_1[(ulonglong)uVar1 * 0x318 + 0x3e1];
      }
    }
    if (local_168 != '\0') {
      local_148 = (undefined8 *)0x0;
      uStack_140 = 0;
      (**(code **)(*(longlong *)param_1[(ulonglong)uVar1 * 0x318 + 0xd7] + 400))
                ((longlong *)param_1[(ulonglong)uVar1 * 0x318 + 0xd7],
                 *(undefined8 *)(param_2 + 0xd80),&local_148);
    }
    if (*(int *)(param_2 + 0x2c) != 7) {
      local_138 = local_198;
      local_130 = param_1 + (ulonglong)uVar1 * 0x318 + 0xd6;
      local_110 = 0.0;
      local_128 = param_2;
      local_120 = plVar7;
      local_118 = piVar11;
      FUN_1800deb6c(param_1,local_198,param_2,&local_138);
      piVar11 = local_118;
      plVar7 = local_120;
    }
    if (((local_198[0] == 0) && (local_167 == '\0')) &&
       ((local_180 - local_188 == local_170 - local_178 &&
        (local_17c - local_184 == local_16c - local_174)))) {
      lStack_158 = (ulonglong)local_180 << 0x20;
      local_150 = local_17c;
      local_14c = 1;
      (**(code **)(*(longlong *)param_1[(ulonglong)uVar1 * 0x318 + 0xd7] + 0x170))
                ((longlong *)param_1[(ulonglong)uVar1 * 0x318 + 0xd7],
                 *(undefined8 *)(param_2 + 0xd78),0,local_178,local_174,uVar15 & 0xffffffff00000000,
                 plVar7,0,&local_160);
    }
    else {
      FUN_1800dbbbc((longlong)param_1,(ulonglong)*(uint *)(param_2 + 0x10),(int *)&DAT_1801001b0,
                    (int *)0x0,-1,'\0');
      FUN_1800dbc90((longlong)param_1,(ulonglong)*(uint *)(param_2 + 0x10),(int *)&DAT_180100350,0);
      puVar9 = &DAT_180100328;
      FUN_1800dbe08((longlong)param_1,(ulonglong)*(uint *)(param_2 + 0x10),(uint *)&DAT_180100328);
      plVar12 = param_1 + (ulonglong)uVar1 * 0x318 + 0x1d3;
      local_res8[0] = 0x10;
      param_5._0_4_ = 0;
      FUN_1800dc288((longlong)param_1,(ulonglong)*(uint *)(param_2 + 0x10),puVar9,1,
                    (longlong)plVar12,(longlong)local_res8,(longlong)&param_5);
      FUN_1800dc380((longlong)param_1,(ulonglong)*(uint *)(param_2 + 0x10),0,0);
      uVar10 = 4;
      uVar6 = 0;
      iVar3 = (**(code **)(*(longlong *)param_1[(ulonglong)uVar1 * 0x318 + 0xd7] + 0x70))
                        ((longlong *)param_1[(ulonglong)uVar1 * 0x318 + 0xd7],
                         param_1[(ulonglong)uVar1 * 0x318 + 0x1d5],0,4,
                         (ulonglong)plVar12 & 0xffffffff00000000,&local_148);
      if (-1 < iVar3) {
        FUN_1800dea34((longlong)param_1,param_2,uVar6,uVar10,local_e8,local_e4,*param_3,param_3[1],
                      param_3[2],(float *)(param_1 + (ulonglong)uVar1 * 0x318 + 0x1d6));
        FUN_1800fbec0(local_148,param_1 + (ulonglong)uVar1 * 0x318 + 0x1d6,0x1040);
        (**(code **)(*(longlong *)param_1[(ulonglong)uVar1 * 0x318 + 0xd7] + 0x78))
                  ((longlong *)param_1[(ulonglong)uVar1 * 0x318 + 0xd7],
                   param_1[(ulonglong)uVar1 * 0x318 + 0x1d5],0);
      }
      FUN_1800dc3ec((longlong)param_1,(ulonglong)*(uint *)(param_2 + 0x10),5,
                    param_1[(ulonglong)uVar1 * 0x318 + 0x1d0],
                    param_1[(ulonglong)uVar1 * 0x318 + 0x1ce],
                    param_1[(ulonglong)uVar1 * 0x318 +
                            (ulonglong)(byte)(&DAT_1801003e8)[local_198[0]] + 0x1a3],0);
      (**(code **)(*(longlong *)param_1[(ulonglong)uVar1 * 0x318 + 0xd7] + 0x80))
                ((longlong *)param_1[(ulonglong)uVar1 * 0x318 + 0xd7],2,1,
                 param_1 + (ulonglong)uVar1 * 0x318 + 0x1d5);
      (**(code **)(*(longlong *)param_1[(ulonglong)uVar1 * 0x318 + 0xd7] + 0x38))
                ((longlong *)param_1[(ulonglong)uVar1 * 0x318 + 0xd7],2,1,
                 param_1 + (ulonglong)uVar1 * 0x318 + 0x1d5);
      local_100[0] = 0.0;
      local_100[1] = 0.0;
      local_f0 = 0;
      local_100[2] = (float)local_e8;
      local_ec = 0x3f800000;
      local_f4 = (float)local_e4;
      FUN_1800dc004((longlong)param_1,(ulonglong)*(uint *)(param_2 + 0x10),local_100);
      local_b8 = *(undefined8 *)(param_2 + 0xd80);
      local_a0 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      FUN_1800dc4ec((longlong)param_1,(ulonglong)*(uint *)(param_2 + 0x10),4,(longlong)&local_b8,0);
      ppuVar13 = &local_148;
      uStack_140 = 0;
      local_148 = (undefined8 *)piVar11;
      FUN_1800dc1e8((longlong)param_1,(ulonglong)*(uint *)(param_2 + 0x10),0,2,(longlong)ppuVar13);
      if ((&DAT_180100428)[local_198[0]] == '\0') {
        local_68 = 0;
        local_64 = local_68;
      }
      else {
        ppuVar13 = (undefined8 **)(param_1 + (ulonglong)uVar1 * 0x318 + 0x1d2);
        FUN_1800dc148((longlong)param_1,(ulonglong)*(uint *)(param_2 + 0x10),1,1,(longlong)ppuVar13)
        ;
        (**(code **)(*plVar7 + 0x50))(plVar7,&local_68);
      }
      uVar8 = *(uint *)(param_1 + (ulonglong)uVar1 * 0x318 + 0x1d4);
      lVar2 = param_1[(ulonglong)uVar1 * 0x318 + 0x1d3];
      plVar7 = (longlong *)param_1[(ulonglong)uVar1 * 0x318 + 0xd7];
      if (0x400 < uVar8 + 4) {
        uVar8 = 0;
      }
      *(uint *)(param_1 + (ulonglong)uVar1 * 0x318 + 0x1d4) = uVar8 + 4;
      iVar3 = (**(code **)(*plVar7 + 0x70))
                        (plVar7,lVar2,0,(uVar8 != 0) + '\x04',
                         (ulonglong)ppuVar13 & 0xffffffff00000000,&local_160);
      if (-1 < iVar3) {
        FUN_1800ded88(plVar7,param_2,(longlong)local_198,
                      (float *)((ulonglong)uVar8 * 0x10 + local_160),local_68,local_64);
        (**(code **)(*(longlong *)param_1[(ulonglong)uVar1 * 0x318 + 0xd7] + 0x78))
                  ((longlong *)param_1[(ulonglong)uVar1 * 0x318 + 0xd7],
                   param_1[(ulonglong)uVar1 * 0x318 + 0x1d3],0);
      }
      (**(code **)(*(longlong *)param_1[(ulonglong)uVar1 * 0x318 + 0xd7] + 0x68))
                ((longlong *)param_1[(ulonglong)uVar1 * 0x318 + 0xd7],4);
    }
    local_160 = 0;
    lStack_158 = 0;
    uVar6 = FUN_1800dc1e8((longlong)param_1,(ulonglong)*(uint *)(param_2 + 0x10),0,2,
                          (longlong)&local_160);
    if (param_8 != (undefined8 *)0x0) {
      local_110 = (float)(uint)((local_170 - local_178) * *(int *)(param_2 + 0x20)) /
                  (float)(int)(local_180 - local_188);
      local_138 = *(uint **)(param_2 + 0xd78);
      local_130 = *(longlong **)(param_2 + 0xd80);
      local_10c = (float)(uint)((local_16c - local_174) * *(int *)(param_2 + 0x24)) /
                  (float)(local_17c - local_184);
      local_118 = &local_178;
      local_108 = (float)local_178 - (float)local_188 * local_110;
      local_104 = (float)local_174 - (float)local_184 * local_10c;
      uVar6 = (**(code **)*param_8)(param_8,&local_138);
    }
    uVar5 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
  }
  return uVar5;
}

