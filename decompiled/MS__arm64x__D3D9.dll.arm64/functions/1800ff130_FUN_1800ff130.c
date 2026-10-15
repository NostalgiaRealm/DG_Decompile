/*
 * FUN_1800ff130 at 1800ff130
 * undefined FUN_1800ff130(void)
 * Address ranges: 1800ff130-1800ff7bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_1800ff130(longlong param_1,ulonglong param_2,undefined8 *param_3,longlong *param_4,
             longlong *param_5,undefined8 param_6,undefined8 param_7,longlong param_8,uint param_9,
             uint param_10)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 local_c0 [2];
  undefined8 local_b8;
  longlong local_b0;
  undefined1 auStack_a8 [8];
  undefined8 local_a0;
  undefined8 uStack_98;
  longlong local_90 [3];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  
  lVar4 = param_1 + (param_2 & 0xffffffff) * 0x1ac0;
  if (*(char *)(lVar4 + 0x23a0) == '\0') {
    FUN_1800fec30();
    *(undefined1 *)(lVar4 + 0x23a0) = 1;
  }
  if (*(longlong *)(lVar4 + 0x2378) != 0) {
    local_90[2] = 0;
    local_70 = 0;
    local_a0 = 0;
    uStack_98 = 0xc8000000a0;
    local_78 = 0x43200000;
    uStack_74 = 0x43480000;
    local_6c = 0x3f800000;
    FUN_1800ea2b0(*(undefined8 *)(lVar4 + 0x1e08),1,local_90 + 2);
    FUN_1800ea1e0(*(undefined8 *)(lVar4 + 0x1e08),1,&local_a0);
    local_b0 = param_4[1] + (ulonglong)*(uint *)(param_4 + 3);
    local_c0[0] = 2;
    local_90[0] = param_8;
    FUN_1800e7b48(*(undefined8 *)(lVar4 + 0x2230),local_90 + 1,*(undefined4 *)(lVar4 + 0x2368),0);
    local_b8 = 0x100000001;
    plVar1 = *(longlong **)(param_1 + (param_2 & 0xffffffff) * 0x20 + 0x6d0);
    (**(code **)(*plVar1 + 0xb8))(plVar1,1,&local_b0,local_c0,2,local_90,&local_b8,0);
    uVar2 = FUN_18008e550(lVar4 + 0x2278,&DAT_180232fa0);
    *(undefined8 *)(lVar4 + 0x950) = uVar2;
    uVar2 = FUN_180042050(lVar4 + 0x2260,&DAT_180232f30);
    *(undefined8 *)(lVar4 + 0x968) = uVar2;
    uVar2 = FUN_180041d70(lVar4 + 0x22a8,&DAT_180232f68);
    *(undefined8 *)(lVar4 + 0x960) = uVar2;
    *(undefined8 *)(lVar4 + 0x97c) = 0x100000003;
    *(undefined8 *)(lVar4 + 0x970) = *(undefined8 *)(lVar4 + 0x1bb0);
    *(undefined8 *)(lVar4 + 0x920) = *(undefined8 *)(lVar4 + 0x1ba0);
    *(undefined8 *)(lVar4 + 0x928) = *(undefined8 *)(lVar4 + 0x1a50);
    *(undefined4 *)(lVar4 + 0x984) = 0x1c;
    FUN_1800e8910(*(undefined8 *)(lVar4 + 0x1e08),*(undefined8 *)(lVar4 + 0x918));
    FUN_1800e9780(*(undefined8 *)(lVar4 + 0x1e08),*(undefined8 *)(lVar4 + 0x918));
    uVar2 = FUN_1800ede18(lVar4 + 0x22d8,lVar4 + 0x918);
    FUN_1800e9868(*(undefined8 *)(lVar4 + 0x1e08),uVar2);
    FUN_1800e96c8(*(undefined8 *)(lVar4 + 0x1e08),1,param_4 + 2);
    FUN_1800e98b8(*(undefined8 *)(lVar4 + 0x1e08),5);
    FUN_1800e9a60(*(undefined8 *)(lVar4 + 0x1e08),0,*param_3);
    FUN_1800e9ac0(*(undefined8 *)(lVar4 + 0x1e08),1,*param_4 + (ulonglong)*(uint *)(param_4 + 3));
    FUN_1800e7b48(*(undefined8 *)(lVar4 + 0x2238),auStack_a8,*(undefined4 *)(lVar4 + 0x236c),0);
    FUN_1800e9fc8(*(undefined8 *)(lVar4 + 0x1e08),1,auStack_a8,1,0);
    local_90[0] = *param_5 + 0x40;
    local_90[1] = 0x1000000080;
    FUN_1800e9d68(*(undefined8 *)(lVar4 + 0x1e08),0,1,local_90);
    fVar7 = (float)param_9;
    fVar9 = (float)param_10;
    lVar3 = param_5[1];
    fVar8 = (fVar7 + 0.5) / fVar7;
    fVar6 = (fVar9 + 0.5) / fVar9;
    *(undefined4 *)(lVar3 + 0x40) = 0xbf800000;
    *(undefined4 *)(lVar3 + 0x44) = 0x3f800000;
    *(float *)(lVar3 + 0x48) = 0.5 / fVar7;
    *(float *)(lVar3 + 0x4c) = 0.5 / fVar9;
    *(undefined4 *)(lVar3 + 0x50) = 0x3f800000;
    *(undefined4 *)(lVar3 + 0x54) = 0x3f800000;
    *(float *)(lVar3 + 0x58) = fVar8;
    *(float *)(lVar3 + 0x5c) = 0.5 / fVar9;
    *(undefined4 *)(lVar3 + 0x60) = 0xbf800000;
    *(undefined4 *)(lVar3 + 100) = 0xbf800000;
    *(float *)(lVar3 + 0x68) = 0.5 / fVar7;
    *(float *)(lVar3 + 0x6c) = fVar6;
    *(undefined4 *)(lVar3 + 0x70) = 0x3f800000;
    *(undefined4 *)(lVar3 + 0x74) = 0xbf800000;
    *(float *)(lVar3 + 0x78) = fVar8;
    *(float *)(lVar3 + 0x7c) = fVar6;
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
    FUN_1800e8bb8(*(undefined8 *)(lVar4 + 0x1e08),*(undefined8 *)(lVar4 + 0x2370),0,0,4);
    FUN_1800e8bb8(*(undefined8 *)(lVar4 + 0x1e08),*(undefined8 *)(lVar4 + 0x2378),0,0,4);
    FUN_1800e8bb8(*(undefined8 *)(lVar4 + 0x1e08),param_7,0,0,0x80);
    FUN_1800ea670(*(undefined8 *)(lVar4 + 0x1e08),4,1,0,0);
    FUN_1800e7b48(*(undefined8 *)(lVar4 + 0x2238),&local_b0,*(undefined4 *)(lVar4 + 0x236c),1);
    FUN_1800e9fc8(*(undefined8 *)(lVar4 + 0x1e08),1,&local_b0,1,0);
    FUN_1800ea670(*(undefined8 *)(lVar4 + 0x1e08),4,1,0,0);
    FUN_1800e8910(*(undefined8 *)(lVar4 + 0x1e08),*(undefined8 *)(lVar4 + 0x9b8));
    FUN_1800e97f8(*(undefined8 *)(lVar4 + 0x1e08),*(undefined8 *)(lVar4 + 0x9b8));
    *(undefined8 *)(lVar4 + 0x9c0) = *(undefined8 *)(lVar4 + 0x1a28);
    uVar2 = FUN_1800fd698(lVar4 + 0x2308,lVar4 + 0x9b8);
    FUN_1800e9868(*(undefined8 *)(lVar4 + 0x1e08),uVar2);
    FUN_1800e9c48(*(undefined8 *)(lVar4 + 0x1e08),0,
                  *param_4 + (ulonglong)(uint)((int)param_4[3] << 1));
    uVar2 = (**(code **)(**(longlong **)(lVar4 + 0x2380) + 0x58))();
    FUN_1800e9ca8(*(undefined8 *)(lVar4 + 0x1e08),1,uVar2);
    uVar2 = (**(code **)(**(longlong **)(lVar4 + 0x2398) + 0x58))();
    FUN_1800e9ca8(*(undefined8 *)(lVar4 + 0x1e08),2,uVar2);
    uVar2 = (**(code **)(**(longlong **)(lVar4 + 0x2388) + 0x58))();
    FUN_1800e9d08(*(undefined8 *)(lVar4 + 0x1e08),3,uVar2);
    FUN_1800e8bb8(*(undefined8 *)(lVar4 + 0x1e08),*(undefined8 *)(lVar4 + 0x2370),0,0,0x40);
    FUN_1800e8bb8(*(undefined8 *)(lVar4 + 0x1e08),*(undefined8 *)(lVar4 + 0x2398),0,1,0x40);
    FUN_1800e8bb8(*(undefined8 *)(lVar4 + 0x1e08),*(undefined8 *)(lVar4 + 0x2388),0,1,0x40);
    FUN_1800ea758(*(undefined8 *)(lVar4 + 0x1e08),0x28,0x19,1);
    *(undefined8 *)(lVar4 + 0x9c0) = *(undefined8 *)(lVar4 + 0x1a30);
    uVar2 = FUN_1800fd698(lVar4 + 0x2308,lVar4 + 0x9b8);
    FUN_1800e9868(*(undefined8 *)(lVar4 + 0x1e08),uVar2);
    FUN_1800ea758(*(undefined8 *)(lVar4 + 0x1e08),1,0x19,1);
    *(undefined8 *)(lVar4 + 0x9c0) = *(undefined8 *)(lVar4 + 0x1a38);
    uVar2 = FUN_1800fd698(lVar4 + 0x2308,lVar4 + 0x9b8);
    FUN_1800e9868(*(undefined8 *)(lVar4 + 0x1e08),uVar2);
    FUN_1800ea758(*(undefined8 *)(lVar4 + 0x1e08),0x28,0x19,1);
    uVar5 = *(undefined8 *)(lVar4 + 0x2388);
    uVar2 = *(undefined8 *)(lVar4 + 0x2390);
    FUN_1800e8bb8(*(undefined8 *)(lVar4 + 0x1e08),uVar5,0,1,0x800);
    FUN_1800e8bb8(*(undefined8 *)(lVar4 + 0x1e08),uVar2,0,1,0x400);
    FUN_1800ea420(*(undefined8 *)(lVar4 + 0x1e08),uVar2,uVar5);
    local_6c = 0x3f800000;
    local_90[2] = 0;
    local_78 = 0x43a00000;
    uStack_74 = 0x43480000;
    local_70 = 0;
    local_90[0] = 0;
    local_90[1] = 0xc800000140;
    FUN_1800ea2b0(*(undefined8 *)(lVar4 + 0x1e08),1,local_90 + 2);
    FUN_1800ea1e0(*(undefined8 *)(lVar4 + 0x1e08),1,local_90);
    *(undefined8 *)(lVar4 + 0x928) = *(undefined8 *)(lVar4 + 0x1b90);
    uVar2 = FUN_1800ede18(lVar4 + 0x22d8,lVar4 + 0x918);
    FUN_1800e9868(*(undefined8 *)(lVar4 + 0x1e08),uVar2);
    FUN_1800e8bb8(*(undefined8 *)(lVar4 + 0x1e08),*(undefined8 *)(lVar4 + 0x2370),0,0,0x80);
    FUN_1800e8bb8(*(undefined8 *)(lVar4 + 0x1e08),*(undefined8 *)(lVar4 + 0x2378),0,0,4);
    FUN_1800e7b48(*(undefined8 *)(lVar4 + 0x2238),auStack_a8,*(undefined4 *)(lVar4 + 0x236c),1);
    FUN_1800e9fc8(*(undefined8 *)(lVar4 + 0x1e08),1,auStack_a8,1,0);
    FUN_1800e9a60(*(undefined8 *)(lVar4 + 0x1e08),0,*param_3);
    FUN_1800e9ac0(*(undefined8 *)(lVar4 + 0x1e08),1,*param_4 + (ulonglong)*(uint *)(param_4 + 3));
    uVar2 = (**(code **)(**(longlong **)(lVar4 + 0x2380) + 0x58))();
    FUN_1800e9b28(*(undefined8 *)(lVar4 + 0x1e08),2,uVar2);
    uVar2 = (**(code **)(**(longlong **)(lVar4 + 0x2390) + 0x58))();
    FUN_1800e9b28(*(undefined8 *)(lVar4 + 0x1e08),3,uVar2);
    FUN_1800ea670(*(undefined8 *)(lVar4 + 0x1e08),4,1,4,0);
  }
  return 1;
}

