/*
 * FUN_18005ce18 at 18005ce18
 * undefined8 __cdecl FUN_18005ce18(longlong param_1, ulonglong param_2, longlong * param_3, longlong * param_4, longlong * param_5, undefined8 param_6, ulonglong param_7, undefined8 param_8, uint param_9, uint param_10)
 * Address ranges: 18005ce18-18005d4bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_18005ce18(longlong param_1,ulonglong param_2,longlong *param_3,longlong *param_4,
             longlong *param_5,undefined8 param_6,ulonglong param_7,undefined8 param_8,uint param_9,
             uint param_10)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 local_c0 [2];
  undefined8 local_b8;
  longlong local_b0;
  longlong alStack_a8 [4];
  undefined8 uStack_88;
  longlong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  
  lVar5 = param_1 + (param_2 & 0xffffffff) * 0x1ac0;
  if (*(char *)(lVar5 + 0x23a0) == '\0') {
    FUN_18005c900(param_1,param_2);
    *(undefined1 *)(lVar5 + 0x23a0) = 1;
  }
  if (*(longlong *)(lVar5 + 0x2378) != 0) {
    local_80 = 0;
    local_70 = 0;
    alStack_a8[1] = 0;
    alStack_a8[2] = 0xc8000000a0;
    local_78 = 0x43200000;
    uStack_74 = 0x43480000;
    local_6c = 0x3f800000;
    FUN_18004cec0(*(longlong *)(lVar5 + 0x1e08),1,(longlong)(alStack_a8 + 5));
    FUN_18004cdf0(*(longlong *)(lVar5 + 0x1e08),1,(longlong)(alStack_a8 + 1));
    local_b0 = param_4[1] + (ulonglong)*(uint *)(param_4 + 3);
    local_c0[0] = 2;
    alStack_a8[3] = param_8;
    FUN_18004b248(*(longlong *)(lVar5 + 0x2230),alStack_a8 + 4,*(uint *)(lVar5 + 0x2368),0);
    local_b8 = 0x100000001;
    plVar1 = *(longlong **)(param_1 + (param_2 & 0xffffffff) * 0x20 + 0x6d0);
    (**(code **)(*plVar1 + 0xb8))(plVar1,1,&local_b0,local_c0,2,alStack_a8 + 3,&local_b8,0);
    uVar2 = FUN_18001c3d8((longlong *)(lVar5 + 0x2278),(int *)&DAT_1800632c0);
    *(undefined8 *)(lVar5 + 0x950) = uVar2;
    uVar2 = FUN_18001c660((longlong *)(lVar5 + 0x2260),(int *)&DAT_180063250);
    *(undefined8 *)(lVar5 + 0x968) = uVar2;
    uVar2 = FUN_18001c1a0((longlong *)(lVar5 + 0x22a8),(uint *)&DAT_180063288);
    *(undefined8 *)(lVar5 + 0x960) = uVar2;
    *(undefined8 *)(lVar5 + 0x97c) = 0x100000003;
    *(undefined8 *)(lVar5 + 0x970) = *(undefined8 *)(lVar5 + 0x1bb0);
    *(undefined8 *)(lVar5 + 0x920) = *(undefined8 *)(lVar5 + 0x1ba0);
    *(undefined8 *)(lVar5 + 0x928) = *(undefined8 *)(lVar5 + 0x1a50);
    *(undefined4 *)(lVar5 + 0x984) = 0x1c;
    uVar4 = *(ulonglong *)(lVar5 + 0x1e08);
    FUN_180046ef8(*(longlong *)(uVar4 + 0xb18),*(ulonglong *)(lVar5 + 0x918),
                  *(ulonglong *)(uVar4 + 0xb10),uVar4,*(ulonglong *)(uVar4 + 0xb78));
    FUN_18004c390(*(longlong *)(lVar5 + 0x1e08),*(longlong *)(lVar5 + 0x918));
    lVar3 = FUN_1800450c0(lVar5 + 0x22d8,(byte *)(lVar5 + 0x918));
    FUN_18004c478(*(longlong *)(lVar5 + 0x1e08),lVar3);
    FUN_18004c2d8(*(longlong *)(lVar5 + 0x1e08),1,param_4 + 2);
    FUN_18004c4c8(*(longlong *)(lVar5 + 0x1e08),5);
    FUN_18004c670(*(longlong *)(lVar5 + 0x1e08),0,*param_3);
    FUN_18004c6d0(*(longlong *)(lVar5 + 0x1e08),1,*param_4 + (ulonglong)*(uint *)(param_4 + 3));
    FUN_18004b248(*(longlong *)(lVar5 + 0x2238),alStack_a8,*(uint *)(lVar5 + 0x236c),0);
    FUN_18004cbd8(*(longlong *)(lVar5 + 0x1e08),1,alStack_a8,1,(longlong *)0x0);
    alStack_a8[3] = *param_5 + 0x40;
    uStack_88 = 0x1000000080;
    FUN_18004c978(*(longlong *)(lVar5 + 0x1e08),0,1,(longlong)(alStack_a8 + 3));
    fVar8 = (float)param_9;
    fVar10 = (float)param_10;
    lVar3 = param_5[1];
    fVar9 = (fVar8 + 0.5) / fVar8;
    fVar7 = (fVar10 + 0.5) / fVar10;
    *(undefined4 *)(lVar3 + 0x40) = 0xbf800000;
    *(undefined4 *)(lVar3 + 0x44) = 0x3f800000;
    *(float *)(lVar3 + 0x48) = 0.5 / fVar8;
    *(float *)(lVar3 + 0x4c) = 0.5 / fVar10;
    *(undefined4 *)(lVar3 + 0x50) = 0x3f800000;
    *(undefined4 *)(lVar3 + 0x54) = 0x3f800000;
    *(float *)(lVar3 + 0x58) = fVar9;
    *(float *)(lVar3 + 0x5c) = 0.5 / fVar10;
    *(undefined4 *)(lVar3 + 0x60) = 0xbf800000;
    *(undefined4 *)(lVar3 + 100) = 0xbf800000;
    *(float *)(lVar3 + 0x68) = 0.5 / fVar8;
    *(float *)(lVar3 + 0x6c) = fVar7;
    *(undefined4 *)(lVar3 + 0x70) = 0x3f800000;
    *(undefined4 *)(lVar3 + 0x74) = 0xbf800000;
    *(float *)(lVar3 + 0x78) = fVar9;
    *(float *)(lVar3 + 0x7c) = fVar7;
    *(undefined4 *)(lVar3 + 0x80) = 0xbf800000;
    *(undefined4 *)(lVar3 + 0x84) = 0x3f800000;
    *(undefined4 *)(lVar3 + 0x88) = 0xc2200000;
    *(undefined4 *)(lVar3 + 0x8c) = 0xc2280000;
    *(undefined4 *)(lVar3 + 0x90) = 0x3f800000;
    *(undefined4 *)(lVar3 + 0x94) = 0x3f800000;
    *(undefined4 *)(lVar3 + 0x98) = 0x43480000;
    *(undefined4 *)(lVar3 + 0x9c) = 0xc2280000;
    *(undefined4 *)(lVar3 + 0xa0) = 0xbf800000;
    *(undefined4 *)(lVar3 + 0xa4) = 0xbf800000;
    *(undefined4 *)(lVar3 + 0xa8) = 0xc2200000;
    *(undefined4 *)(lVar3 + 0xac) = 0x43720000;
    *(undefined4 *)(lVar3 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar3 + 0xb4) = 0xbf800000;
    *(undefined4 *)(lVar3 + 0xb8) = 0x43480000;
    *(undefined4 *)(lVar3 + 0xbc) = 0x43720000;
    FUN_18004bee8(*(ulonglong *)(lVar5 + 0x1e08),*(ulonglong *)(lVar5 + 0x2370),0,0,4);
    FUN_18004bee8(*(ulonglong *)(lVar5 + 0x1e08),*(ulonglong *)(lVar5 + 0x2378),0,0,4);
    FUN_18004bee8(*(ulonglong *)(lVar5 + 0x1e08),param_7,0,0,0x80);
    FUN_18004d280(*(longlong *)(lVar5 + 0x1e08),4,1,0,0);
    FUN_18004b248(*(longlong *)(lVar5 + 0x2238),&local_b0,*(uint *)(lVar5 + 0x236c),1);
    FUN_18004cbd8(*(longlong *)(lVar5 + 0x1e08),1,&local_b0,1,(longlong *)0x0);
    FUN_18004d280(*(longlong *)(lVar5 + 0x1e08),4,1,0,0);
    uVar4 = *(ulonglong *)(lVar5 + 0x1e08);
    FUN_180046ef8(*(longlong *)(uVar4 + 0xb18),*(ulonglong *)(lVar5 + 0x9b8),
                  *(ulonglong *)(uVar4 + 0xb10),uVar4,*(ulonglong *)(uVar4 + 0xb78));
    FUN_18004c408(*(longlong *)(lVar5 + 0x1e08),*(longlong *)(lVar5 + 0x9b8));
    *(undefined8 *)(lVar5 + 0x9c0) = *(undefined8 *)(lVar5 + 0x1a28);
    lVar3 = FUN_18005bcc0((longlong *)(lVar5 + 0x2308),(byte *)(lVar5 + 0x9b8));
    FUN_18004c478(*(longlong *)(lVar5 + 0x1e08),lVar3);
    FUN_18004c858(*(longlong *)(lVar5 + 0x1e08),0,*param_4 + (ulonglong)(uint)((int)param_4[3] << 1)
                 );
    lVar3 = (**(code **)(**(longlong **)(lVar5 + 0x2380) + 0x58))();
    FUN_18004c8b8(*(longlong *)(lVar5 + 0x1e08),1,lVar3);
    lVar3 = (**(code **)(**(longlong **)(lVar5 + 0x2398) + 0x58))();
    FUN_18004c8b8(*(longlong *)(lVar5 + 0x1e08),2,lVar3);
    lVar3 = (**(code **)(**(longlong **)(lVar5 + 0x2388) + 0x58))();
    FUN_18004c918(*(longlong *)(lVar5 + 0x1e08),3,lVar3);
    FUN_18004bee8(*(ulonglong *)(lVar5 + 0x1e08),*(ulonglong *)(lVar5 + 0x2370),0,0,0x40);
    FUN_18004bee8(*(ulonglong *)(lVar5 + 0x1e08),*(ulonglong *)(lVar5 + 0x2398),0,1,0x40);
    FUN_18004bee8(*(ulonglong *)(lVar5 + 0x1e08),*(ulonglong *)(lVar5 + 0x2388),0,1,0x40);
    FUN_18004d368(*(longlong *)(lVar5 + 0x1e08),0x28,0x19,1);
    *(undefined8 *)(lVar5 + 0x9c0) = *(undefined8 *)(lVar5 + 0x1a30);
    lVar3 = FUN_18005bcc0((longlong *)(lVar5 + 0x2308),(byte *)(lVar5 + 0x9b8));
    FUN_18004c478(*(longlong *)(lVar5 + 0x1e08),lVar3);
    FUN_18004d368(*(longlong *)(lVar5 + 0x1e08),1,0x19,1);
    *(undefined8 *)(lVar5 + 0x9c0) = *(undefined8 *)(lVar5 + 0x1a38);
    lVar3 = FUN_18005bcc0((longlong *)(lVar5 + 0x2308),(byte *)(lVar5 + 0x9b8));
    FUN_18004c478(*(longlong *)(lVar5 + 0x1e08),lVar3);
    FUN_18004d368(*(longlong *)(lVar5 + 0x1e08),0x28,0x19,1);
    uVar6 = *(ulonglong *)(lVar5 + 0x2388);
    uVar4 = *(ulonglong *)(lVar5 + 0x2390);
    FUN_18004bee8(*(ulonglong *)(lVar5 + 0x1e08),uVar6,0,1,0x800);
    FUN_18004bee8(*(ulonglong *)(lVar5 + 0x1e08),uVar4,0,1,0x400);
    FUN_18004d030(*(longlong *)(lVar5 + 0x1e08),uVar4,uVar6);
    local_6c = 0x3f800000;
    local_80 = 0;
    local_70 = 0;
    local_78 = 0x43a00000;
    uStack_74 = 0x43480000;
    alStack_a8[3] = 0;
    uStack_88 = 0xc800000140;
    FUN_18004cec0(*(longlong *)(lVar5 + 0x1e08),1,(longlong)(alStack_a8 + 5));
    FUN_18004cdf0(*(longlong *)(lVar5 + 0x1e08),1,(longlong)(alStack_a8 + 3));
    *(undefined8 *)(lVar5 + 0x928) = *(undefined8 *)(lVar5 + 0x1b90);
    lVar3 = FUN_1800450c0(lVar5 + 0x22d8,(byte *)(lVar5 + 0x918));
    FUN_18004c478(*(longlong *)(lVar5 + 0x1e08),lVar3);
    FUN_18004bee8(*(ulonglong *)(lVar5 + 0x1e08),*(ulonglong *)(lVar5 + 0x2370),0,0,0x80);
    FUN_18004bee8(*(ulonglong *)(lVar5 + 0x1e08),*(ulonglong *)(lVar5 + 0x2378),0,0,4);
    FUN_18004b248(*(longlong *)(lVar5 + 0x2238),alStack_a8,*(uint *)(lVar5 + 0x236c),1);
    FUN_18004cbd8(*(longlong *)(lVar5 + 0x1e08),1,alStack_a8,1,(longlong *)0x0);
    FUN_18004c670(*(longlong *)(lVar5 + 0x1e08),0,*param_3);
    FUN_18004c6d0(*(longlong *)(lVar5 + 0x1e08),1,*param_4 + (ulonglong)*(uint *)(param_4 + 3));
    lVar3 = (**(code **)(**(longlong **)(lVar5 + 0x2380) + 0x58))();
    FUN_18004c738(*(longlong *)(lVar5 + 0x1e08),2,lVar3);
    lVar3 = (**(code **)(**(longlong **)(lVar5 + 0x2390) + 0x58))();
    FUN_18004c738(*(longlong *)(lVar5 + 0x1e08),3,lVar3);
    FUN_18004d280(*(longlong *)(lVar5 + 0x1e08),4,1,4,0);
  }
  return 1;
}

