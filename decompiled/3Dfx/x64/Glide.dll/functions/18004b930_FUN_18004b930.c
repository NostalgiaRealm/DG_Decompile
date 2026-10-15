/*
 * FUN_18004b930 at 18004b930
 * undefined8 __fastcall FUN_18004b930(longlong * param_1, longlong param_2, uint * * param_3, uint * * param_4, longlong * param_5, undefined8 * param_6, int param_7, undefined8 * param_8)
 * Address ranges: 18004b930-18004bfc9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_18004b930(longlong *param_1,longlong param_2,uint **param_3,uint **param_4,longlong *param_5,
             undefined8 *param_6,int param_7,undefined8 *param_8)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  uint **ppuVar8;
  undefined8 uVar9;
  int local_res8 [8];
  undefined8 in_stack_fffffffffffffe28;
  undefined4 uVar13;
  ulonglong uVar10;
  longlong *plVar11;
  undefined8 **ppuVar12;
  undefined8 in_stack_fffffffffffffe30;
  undefined4 uVar15;
  ulonglong uVar14;
  uint local_1a8 [4];
  int local_198;
  int local_194;
  uint local_190;
  int local_18c;
  uint local_188;
  int local_184;
  int local_180;
  int local_17c;
  char local_178;
  char local_177;
  longlong local_170;
  longlong lStack_168;
  int local_160;
  undefined4 local_15c;
  undefined8 *local_158;
  undefined8 uStack_150;
  uint *local_148;
  longlong *local_140;
  longlong local_138;
  longlong *local_130;
  uint *local_128;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110 [3];
  float local_104;
  undefined4 local_100;
  undefined4 local_fc;
  uint local_f8;
  uint local_f4;
  int local_e8;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  uint local_a8;
  uint local_a4;
  uint local_78;
  uint local_74;
  
  plVar6 = param_5;
  uVar13 = (undefined4)((ulonglong)in_stack_fffffffffffffe28 >> 0x20);
  uVar15 = (undefined4)((ulonglong)in_stack_fffffffffffffe30 >> 0x20);
  uVar1 = *(uint *)(param_2 + 0x10);
  (**(code **)(*param_5 + 0x50))(param_5,&local_a8);
  (**(code **)(**(longlong **)(param_2 + 0xd78) + 0x50))(*(longlong **)(param_2 + 0xd78),&local_f8);
  iVar3 = param_7;
  uVar14 = CONCAT44(uVar15,local_a4);
  uVar10 = CONCAT44(uVar13,local_a8);
  ppuVar8 = param_3;
  puVar4 = FUN_18004e684((longlong)param_1,local_1a8,param_2,(int *)param_3,local_a8,local_a4,
                         local_f8,local_f4,param_7,local_e8);
  if (((local_1a8[0] == 0) && (local_178 == '\0')) && (local_177 == '\0')) {
    return (ulonglong)puVar4 & 0xffffffffffffff00;
  }
  if (param_4 != (uint **)0x0) {
    uVar14 = CONCAT44((int)(uVar14 >> 0x20),iVar3);
    (**(code **)(*(longlong *)param_1[(ulonglong)uVar1 * 0x318 + 0xd7] + 0x1c8))
              ((longlong *)param_1[(ulonglong)uVar1 * 0x318 + 0xd7],plVar6,0,param_4,
               uVar10 & 0xffffffff00000000,uVar14);
    ppuVar8 = param_4;
  }
  puVar4 = (uint *)param_6;
  if (*(int *)(param_2 + 0x2c) == 7) {
    ppuVar8 = (uint **)(ulonglong)local_a8;
    uVar5 = FUN_18005bc0c((longlong)param_1,*(uint *)(param_2 + 0x10),param_6,(ulonglong)ppuVar8,
                          local_a4);
    if ((char)uVar5 != '\0') {
      puVar4 = (uint *)param_1[(ulonglong)uVar1 * 0x318 + 0x3e3];
      plVar6 = (longlong *)param_1[(ulonglong)uVar1 * 0x318 + 0x3e1];
    }
  }
  if (local_178 != '\0') {
    local_158 = (undefined8 *)0x0;
    uStack_150 = 0;
    (**(code **)(*(longlong *)param_1[(ulonglong)uVar1 * 0x318 + 0xd7] + 400))
              ((longlong *)param_1[(ulonglong)uVar1 * 0x318 + 0xd7],*(undefined8 *)(param_2 + 0xd80)
               ,&local_158);
  }
  if (*(int *)(param_2 + 0x2c) != 7) {
    local_148 = local_1a8;
    ppuVar8 = &local_148;
    local_140 = param_1 + (ulonglong)uVar1 * 0x318 + 0xd6;
    local_120 = 0.0;
    local_138 = param_2;
    local_130 = plVar6;
    local_128 = puVar4;
    FUN_18004eab0(param_1,local_1a8,param_2,ppuVar8);
    puVar4 = local_128;
    plVar6 = local_130;
  }
  if (((local_1a8[0] == 0) && (local_177 == '\0')) &&
     ((ppuVar8 = (uint **)(ulonglong)local_188, local_190 - local_198 == local_180 - local_188 &&
      (local_18c - local_194 == local_17c - local_184)))) {
    lStack_168 = (ulonglong)local_190 << 0x20;
    local_160 = local_18c;
    local_15c = 1;
    (**(code **)(*(longlong *)param_1[(ulonglong)uVar1 * 0x318 + 0xd7] + 0x170))
              ((longlong *)param_1[(ulonglong)uVar1 * 0x318 + 0xd7],*(undefined8 *)(param_2 + 0xd78)
               ,0,ppuVar8,local_184,uVar14 & 0xffffffff00000000,plVar6,0,&local_170);
  }
  else {
    FUN_18004d0e4((longlong)param_1,(ulonglong)*(uint *)(param_2 + 0x10),(int *)&DAT_180061010,
                  ppuVar8,-1);
    uVar5 = 0;
    FUN_18004d158((longlong)param_1,(ulonglong)*(uint *)(param_2 + 0x10),(int *)&DAT_180061178,0);
    FUN_18004d2d0((longlong)param_1,(ulonglong)*(uint *)(param_2 + 0x10),(uint *)&DAT_180061150);
    plVar11 = param_1 + (ulonglong)uVar1 * 0x318 + 0x1d3;
    local_res8[0] = 0x10;
    param_5._0_4_ = 0;
    FUN_18004d688((longlong)param_1,(ulonglong)*(uint *)(param_2 + 0x10),0,uVar5,plVar11,local_res8,
                  (int *)&param_5);
    FUN_18004d738((longlong)param_1,(ulonglong)*(uint *)(param_2 + 0x10),0,0);
    uVar9 = 4;
    uVar5 = 0;
    iVar3 = (**(code **)(*(longlong *)param_1[(ulonglong)uVar1 * 0x318 + 0xd7] + 0x70))
                      ((longlong *)param_1[(ulonglong)uVar1 * 0x318 + 0xd7],
                       param_1[(ulonglong)uVar1 * 0x318 + 0x1d5],0,4,
                       (ulonglong)plVar11 & 0xffffffff00000000,&local_158);
    if (-1 < iVar3) {
      FUN_18004e978((longlong)param_1,param_2,uVar5,uVar9,local_f8,local_f4,*(uint *)param_3,
                    *(uint *)((longlong)param_3 + 4),*(uint *)(param_3 + 1),
                    (float *)(param_1 + (ulonglong)uVar1 * 0x318 + 0x1d6));
      FUN_18005f1b0(local_158,param_1 + (ulonglong)uVar1 * 0x318 + 0x1d6,0x1040);
      (**(code **)(*(longlong *)param_1[(ulonglong)uVar1 * 0x318 + 0xd7] + 0x78))
                ((longlong *)param_1[(ulonglong)uVar1 * 0x318 + 0xd7],
                 param_1[(ulonglong)uVar1 * 0x318 + 0x1d5],0);
    }
    FUN_18004d7a4((longlong)param_1,(ulonglong)*(uint *)(param_2 + 0x10),5,
                  param_1[(ulonglong)uVar1 * 0x318 + 0x1d0],
                  param_1[(ulonglong)uVar1 * 0x318 + 0x1ce],
                  param_1[(ulonglong)uVar1 * 0x318 +
                          (ulonglong)(byte)(&DAT_180061220)[local_1a8[0]] + 0x1a3]);
    (**(code **)(*(longlong *)param_1[(ulonglong)uVar1 * 0x318 + 0xd7] + 0x80))
              ((longlong *)param_1[(ulonglong)uVar1 * 0x318 + 0xd7],2,1,
               param_1 + (ulonglong)uVar1 * 0x318 + 0x1d5);
    (**(code **)(*(longlong *)param_1[(ulonglong)uVar1 * 0x318 + 0xd7] + 0x38))
              ((longlong *)param_1[(ulonglong)uVar1 * 0x318 + 0xd7],2,1,
               param_1 + (ulonglong)uVar1 * 0x318 + 0x1d5);
    local_110[0] = 0.0;
    local_110[1] = 0.0;
    local_100 = 0;
    local_110[2] = (float)local_f8;
    local_fc = 0x3f800000;
    local_104 = (float)local_f4;
    FUN_18004d4cc((longlong)param_1,(ulonglong)*(uint *)(param_2 + 0x10),local_110);
    local_c8 = *(undefined8 *)(param_2 + 0xd80);
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = 0;
    FUN_18004d8a0((longlong)param_1,(ulonglong)*(uint *)(param_2 + 0x10),4,(longlong)&local_c8,0);
    ppuVar12 = &local_158;
    uVar5 = 2;
    uStack_150 = 0;
    local_158 = (undefined8 *)puVar4;
    FUN_18004d5e8((longlong)param_1,(ulonglong)*(uint *)(param_2 + 0x10),0,2,(longlong)ppuVar12);
    if ((&DAT_180061260)[local_1a8[0]] == '\0') {
      local_78 = 0;
      local_74 = local_78;
    }
    else {
      ppuVar12 = (undefined8 **)(param_1 + (ulonglong)uVar1 * 0x318 + 0x1d2);
      FUN_18004d594((longlong)param_1,(ulonglong)*(uint *)(param_2 + 0x10),1,uVar5,
                    (longlong *)ppuVar12);
      (**(code **)(*plVar6 + 0x50))(plVar6,&local_78);
    }
    uVar7 = *(uint *)(param_1 + (ulonglong)uVar1 * 0x318 + 0x1d4);
    lVar2 = param_1[(ulonglong)uVar1 * 0x318 + 0x1d3];
    plVar6 = (longlong *)param_1[(ulonglong)uVar1 * 0x318 + 0xd7];
    if (0x400 < uVar7 + 4) {
      uVar7 = 0;
    }
    *(uint *)(param_1 + (ulonglong)uVar1 * 0x318 + 0x1d4) = uVar7 + 4;
    iVar3 = (**(code **)(*plVar6 + 0x70))
                      (plVar6,lVar2,0,(uVar7 != 0) + '\x04',(ulonglong)ppuVar12 & 0xffffffff00000000
                       ,&local_170);
    if (-1 < iVar3) {
      FUN_18004eccc(plVar6,param_2,(longlong)local_1a8,
                    (float *)((ulonglong)uVar7 * 0x10 + local_170),local_78,local_74);
      (**(code **)(*(longlong *)param_1[(ulonglong)uVar1 * 0x318 + 0xd7] + 0x78))
                ((longlong *)param_1[(ulonglong)uVar1 * 0x318 + 0xd7],
                 param_1[(ulonglong)uVar1 * 0x318 + 0x1d3],0);
    }
    (**(code **)(*(longlong *)param_1[(ulonglong)uVar1 * 0x318 + 0xd7] + 0x68))
              ((longlong *)param_1[(ulonglong)uVar1 * 0x318 + 0xd7],4);
  }
  local_170 = 0;
  lStack_168 = 0;
  uVar5 = FUN_18004d5e8((longlong)param_1,(ulonglong)*(uint *)(param_2 + 0x10),0,2,
                        (longlong)&local_170);
  if (param_8 != (undefined8 *)0x0) {
    local_120 = (float)((local_180 - local_188) * *(int *)(param_2 + 0x20)) /
                (float)(int)(local_190 - local_198);
    local_148 = *(uint **)(param_2 + 0xd78);
    local_140 = *(longlong **)(param_2 + 0xd80);
    local_11c = (float)(uint)((local_17c - local_184) * *(int *)(param_2 + 0x24)) /
                (float)(local_18c - local_194);
    local_128 = &local_188;
    local_118 = (float)(int)local_188 - (float)local_198 * local_120;
    local_114 = (float)local_184 - (float)local_194 * local_11c;
    uVar5 = (**(code **)*param_8)(param_8,&local_148);
  }
  return CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
}

