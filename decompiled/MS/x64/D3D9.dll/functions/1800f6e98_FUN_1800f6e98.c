/*
 * FUN_1800f6e98 at 1800f6e98
 * undefined8 __fastcall FUN_1800f6e98(longlong param_1, uint param_2, longlong * param_3, longlong * param_4, longlong * param_5, undefined8 param_6, ulonglong param_7, undefined8 param_8, uint param_9, uint param_10)
 * Address ranges: 1800f6e98-1800f7749
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_1800f6e98(longlong param_1,uint param_2,longlong *param_3,longlong *param_4,longlong *param_5,
             undefined8 param_6,ulonglong param_7,undefined8 param_8,uint param_9,uint param_10)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong *puVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_res8;
  undefined4 local_res10 [2];
  longlong *local_res18;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar13;
  longlong local_98;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_88;
  undefined8 local_80;
  longlong local_78 [5];
  undefined4 local_50;
  undefined4 local_4c;
  
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  lVar8 = (ulonglong)param_2 * 0x1ac0;
  puVar2 = (undefined1 *)register0x00000020;
  local_res18 = param_3;
  if (*(char *)(lVar8 + 0x23a0 + param_1) == '\0') {
    puVar2 = (undefined1 *)FUN_1800f6720(param_1,param_2);
    *(undefined1 *)(lVar8 + 0x23a0 + param_1) = 1;
  }
  if (*(longlong *)(lVar8 + 0x2378 + param_1) != 0) {
    local_78[3] = 0;
    local_78[4] = 0x4348000043200000;
    local_50 = 0;
    local_78[1] = 0;
    local_78[2] = 0xc8000000a0;
    local_4c = 0x3f800000;
    FUN_1800e3cf8(*(longlong *)(lVar8 + 0x1e08 + param_1),1,(longlong)(local_78 + 3));
    FUN_1800e3c4c(*(longlong *)(lVar8 + 0x1e08 + param_1),1,(longlong)(local_78 + 1));
    local_98 = (ulonglong)*(uint *)(param_4 + 3) + param_4[1];
    local_80 = param_8;
    local_res10[0] = 2;
    FUN_1800e1d04(*(longlong *)(lVar8 + 0x2230 + param_1),local_78,
                  *(uint *)(lVar8 + 0x2368 + param_1),0);
    local_res8._0_4_ = 1;
    local_res8._4_4_ = 1;
    plVar6 = *(longlong **)((ulonglong)param_2 * 0x20 + 0x6d0 + param_1);
    (**(code **)(*plVar6 + 0xb8))
              (plVar6,1,&local_98,local_res10,CONCAT44(uVar13,2),&local_80,&local_res8,0);
    uVar3 = FUN_180098258((longlong *)(param_1 + 0x2278 + lVar8),(int *)&DAT_1801004f0);
    *(undefined8 *)(lVar8 + 0x950 + param_1) = uVar3;
    uVar3 = FUN_18004c500((longlong *)(param_1 + 0x2260 + lVar8),(int *)&DAT_180100480);
    *(undefined8 *)(lVar8 + 0x968 + param_1) = uVar3;
    uVar3 = FUN_18004bf30((longlong *)(param_1 + 0x22a8 + lVar8),(uint *)&DAT_1801004b8);
    *(undefined8 *)(lVar8 + 0x960 + param_1) = uVar3;
    *(undefined8 *)(lVar8 + 0x970 + param_1) = *(undefined8 *)(lVar8 + 0x1bb0 + param_1);
    *(undefined8 *)(lVar8 + 0x920 + param_1) = *(undefined8 *)(lVar8 + 0x1ba0 + param_1);
    *(undefined4 *)(lVar8 + 0x980 + param_1) = 1;
    lVar5 = lVar8 + param_1;
    *(undefined8 *)(lVar8 + 0x928 + param_1) = *(undefined8 *)(lVar8 + 0x1a50 + param_1);
    *(undefined4 *)(lVar8 + 0x984 + param_1) = 0x1c;
    uVar1 = *(ulonglong *)(lVar5 + 0x918);
    *(undefined4 *)(lVar8 + 0x97c + param_1) = 3;
    FUN_1800e2cec(*(longlong *)(lVar8 + 0x1e08 + param_1),uVar1);
    FUN_1800e3400(*(longlong *)(lVar8 + 0x1e08 + param_1),*(longlong *)(lVar5 + 0x918));
    lVar4 = FUN_1800e7278(lVar8 + param_1 + 0x22d8,(byte *)(lVar5 + 0x918));
    FUN_1800e34ac(*(longlong *)(lVar8 + 0x1e08 + param_1),lVar4);
    FUN_1800e3368(*(longlong *)(lVar8 + 0x1e08 + param_1),1,param_4 + 2);
    FUN_1800e34f8(*(longlong *)(lVar8 + 0x1e08 + param_1),5);
    FUN_1800e3624(*(longlong *)(lVar8 + 0x1e08 + param_1),0,*param_3);
    FUN_1800e3664(*(longlong *)(lVar8 + 0x1e08 + param_1),1,
                  (ulonglong)*(uint *)(param_4 + 3) + *param_4);
    FUN_1800e1d04(*(longlong *)(lVar8 + 0x2238 + param_1),&local_88,
                  *(uint *)(lVar8 + 0x236c + param_1),0);
    FUN_1800e3a7c(*(longlong *)(lVar8 + 0x1e08 + param_1),1,&local_88,1,(longlong *)0x0);
    local_90 = 0x80;
    local_8c = 0x10;
    local_98 = *param_5 + 0x40;
    FUN_1800e384c(*(longlong *)(lVar8 + 0x1e08 + param_1),0,1,(longlong)&local_98);
    fVar10 = (float)param_9;
    fVar9 = (float)param_10;
    lVar4 = param_5[1];
    *(undefined4 *)(lVar4 + 0x40) = 0xbf800000;
    *(undefined4 *)(lVar4 + 0x44) = 0x3f800000;
    *(float *)(lVar4 + 0x48) = 0.5 / fVar10;
    *(float *)(lVar4 + 0x4c) = 0.5 / fVar9;
    *(undefined4 *)(lVar4 + 0x50) = 0x3f800000;
    *(undefined4 *)(lVar4 + 0x54) = 0x3f800000;
    fVar12 = (fVar10 + 0.5) / fVar10;
    fVar11 = (fVar9 + 0.5) / fVar9;
    *(float *)(lVar4 + 0x58) = fVar12;
    *(float *)(lVar4 + 0x5c) = 0.5 / fVar9;
    *(undefined4 *)(lVar4 + 0x60) = 0xbf800000;
    *(undefined4 *)(lVar4 + 100) = 0xbf800000;
    *(float *)(lVar4 + 0x68) = 0.5 / fVar10;
    *(float *)(lVar4 + 0x6c) = fVar11;
    *(undefined4 *)(lVar4 + 0x70) = 0x3f800000;
    *(undefined4 *)(lVar4 + 0x74) = 0xbf800000;
    *(float *)(lVar4 + 0x78) = fVar12;
    *(float *)(lVar4 + 0x7c) = fVar11;
    *(undefined4 *)(lVar4 + 0x80) = 0xbf800000;
    *(undefined4 *)(lVar4 + 0x84) = 0x3f800000;
    *(undefined4 *)(lVar4 + 0x88) = 0xc2200000;
    *(undefined4 *)(lVar4 + 0x8c) = 0xc2280000;
    *(undefined4 *)(lVar4 + 0x90) = 0x3f800000;
    *(undefined4 *)(lVar4 + 0x94) = 0x3f800000;
    *(undefined4 *)(lVar4 + 0x98) = 0x43480000;
    *(undefined4 *)(lVar4 + 0x9c) = 0xc2280000;
    *(undefined4 *)(lVar4 + 0xa0) = 0xbf800000;
    *(undefined4 *)(lVar4 + 0xa4) = 0xbf800000;
    *(undefined4 *)(lVar4 + 0xa8) = 0xc2200000;
    *(undefined4 *)(lVar4 + 0xac) = 0x43720000;
    *(undefined4 *)(lVar4 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar4 + 0xb4) = 0xbf800000;
    *(undefined4 *)(lVar4 + 0xb8) = 0x43480000;
    *(undefined4 *)(lVar4 + 0xbc) = 0x43720000;
    FUN_1800e2d18(*(longlong *)(lVar8 + 0x1e08 + param_1),*(ulonglong *)(lVar8 + 0x2370 + param_1),0
                  ,0,4);
    FUN_1800e2d18(*(longlong *)(lVar8 + 0x1e08 + param_1),*(ulonglong *)(lVar8 + 0x2378 + param_1),0
                  ,0,4);
    FUN_1800e2d18(*(longlong *)(lVar8 + 0x1e08 + param_1),param_7,0,0,0x80);
    FUN_1800e4040(*(longlong *)(lVar8 + 0x1e08 + param_1),4,1,0,0);
    FUN_1800e1d04(*(longlong *)(lVar8 + 0x2238 + param_1),&local_res8,
                  *(uint *)(lVar8 + 0x236c + param_1),1);
    FUN_1800e3a7c(*(longlong *)(lVar8 + 0x1e08 + param_1),1,&local_res8,1,(longlong *)0x0);
    FUN_1800e4040(*(longlong *)(lVar8 + 0x1e08 + param_1),4,1,0,0);
    puVar7 = (ulonglong *)(param_1 + 0x9b8 + lVar8);
    FUN_1800e2cec(*(longlong *)(lVar8 + 0x1e08 + param_1),*puVar7);
    FUN_1800e3458(*(longlong *)(lVar8 + 0x1e08 + param_1),*puVar7);
    plVar6 = (longlong *)(param_1 + 0x2308 + lVar8);
    *(undefined8 *)(lVar8 + 0x9c0 + param_1) = *(undefined8 *)(lVar8 + 0x1a28 + param_1);
    lVar4 = FUN_1800f5438(plVar6,(longlong *)puVar7);
    FUN_1800e34ac(*(longlong *)(lVar8 + 0x1e08 + param_1),lVar4);
    FUN_1800e3774(*(longlong *)(lVar8 + 0x1e08 + param_1),0,
                  (ulonglong)(uint)((int)param_4[3] * 2) + *param_4);
    lVar4 = (**(code **)(**(longlong **)(lVar8 + 0x2380 + param_1) + 0x58))();
    FUN_1800e37bc(*(longlong *)(lVar8 + 0x1e08 + param_1),1,lVar4);
    lVar4 = (**(code **)(**(longlong **)(lVar8 + 0x2398 + param_1) + 0x58))();
    FUN_1800e37bc(*(longlong *)(lVar8 + 0x1e08 + param_1),2,lVar4);
    lVar4 = (**(code **)(**(longlong **)(lVar8 + 0x2388 + param_1) + 0x58))();
    FUN_1800e3804(*(longlong *)(lVar8 + 0x1e08 + param_1),3,lVar4);
    FUN_1800e2d18(*(longlong *)(lVar8 + 0x1e08 + param_1),*(ulonglong *)(lVar8 + 0x2370 + param_1),0
                  ,0,0x40);
    FUN_1800e2d18(*(longlong *)(lVar8 + 0x1e08 + param_1),*(ulonglong *)(lVar8 + 0x2398 + param_1),0
                  ,1,0x40);
    FUN_1800e2d18(*(longlong *)(lVar8 + 0x1e08 + param_1),*(ulonglong *)(lVar8 + 0x2388 + param_1),0
                  ,1,0x40);
    FUN_1800e40f4(*(longlong *)(lVar8 + 0x1e08 + param_1),0x28,0x19,1);
    *(undefined8 *)(lVar8 + 0x9c0 + param_1) = *(undefined8 *)(lVar8 + 0x1a30 + param_1);
    lVar4 = FUN_1800f5438(plVar6,(longlong *)puVar7);
    FUN_1800e34ac(*(longlong *)(lVar8 + 0x1e08 + param_1),lVar4);
    FUN_1800e40f4(*(longlong *)(lVar8 + 0x1e08 + param_1),1,0x19,1);
    *(undefined8 *)(lVar8 + 0x9c0 + param_1) = *(undefined8 *)(lVar8 + 0x1a38 + param_1);
    lVar4 = FUN_1800f5438(plVar6,(longlong *)puVar7);
    FUN_1800e34ac(*(longlong *)(lVar8 + 0x1e08 + param_1),lVar4);
    lVar4 = *(longlong *)(lVar8 + 0x1e08 + param_1);
    FUN_1800e40f4(lVar4,0x28,0x19,1);
    FUN_1800eece8(lVar4,param_1 + 0x900 + lVar8,*(ulonglong *)(lVar8 + 0x2390 + param_1),
                  *(ulonglong *)(lVar8 + 0x2388 + param_1));
    local_78[3] = 0;
    local_78[4] = 0x4348000043a00000;
    local_50 = 0;
    local_4c = 0x3f800000;
    local_78[1] = 0;
    local_78[2] = 0xc800000140;
    FUN_1800e3cf8(*(longlong *)(lVar8 + 0x1e08 + param_1),1,(longlong)(local_78 + 3));
    FUN_1800e3c4c(*(longlong *)(lVar8 + 0x1e08 + param_1),1,(longlong)(local_78 + 1));
    *(undefined8 *)(lVar8 + 0x928 + param_1) = *(undefined8 *)(lVar8 + 0x1b90 + param_1);
    lVar5 = FUN_1800e7278(lVar8 + param_1 + 0x22d8,(byte *)(lVar5 + 0x918));
    FUN_1800e34ac(*(longlong *)(lVar8 + 0x1e08 + param_1),lVar5);
    FUN_1800e2d18(*(longlong *)(lVar8 + 0x1e08 + param_1),*(ulonglong *)(lVar8 + 0x2370 + param_1),0
                  ,0,0x80);
    FUN_1800e2d18(*(longlong *)(lVar8 + 0x1e08 + param_1),*(ulonglong *)(lVar8 + 0x2378 + param_1),0
                  ,0,4);
    FUN_1800e1d04(*(longlong *)(lVar8 + 0x2238 + param_1),&local_res8,
                  *(uint *)(lVar8 + 0x236c + param_1),1);
    FUN_1800e3a7c(*(longlong *)(lVar8 + 0x1e08 + param_1),1,&local_res8,1,(longlong *)0x0);
    FUN_1800e3624(*(longlong *)(lVar8 + 0x1e08 + param_1),0,*local_res18);
    FUN_1800e3664(*(longlong *)(lVar8 + 0x1e08 + param_1),1,
                  (ulonglong)*(uint *)(param_4 + 3) + *param_4);
    lVar5 = (**(code **)(**(longlong **)(lVar8 + 0x2380 + param_1) + 0x58))();
    FUN_1800e36ac(*(longlong *)(lVar8 + 0x1e08 + param_1),2,lVar5);
    lVar5 = (**(code **)(**(longlong **)(lVar8 + 0x2390 + param_1) + 0x58))();
    FUN_1800e36ac(*(longlong *)(lVar8 + 0x1e08 + param_1),3,lVar5);
    puVar2 = (undefined1 *)FUN_1800e4040(*(longlong *)(lVar8 + 0x1e08 + param_1),4,1,4,0);
  }
  return CONCAT71((int7)((ulonglong)puVar2 >> 8),1);
}

