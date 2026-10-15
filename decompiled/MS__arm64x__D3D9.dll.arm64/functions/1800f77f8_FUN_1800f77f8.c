/*
 * FUN_1800f77f8 at 1800f77f8
 * undefined FUN_1800f77f8(void)
 * Address ranges: 1800f77f8-1800f7bd7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800f77f8(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  float local_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  int local_120;
  int iStack_11c;
  int local_118;
  int iStack_114;
  float local_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined1 auStack_f8 [8];
  undefined8 local_f0;
  undefined8 uStack_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined1 auStack_d0 [8];
  uint local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined1 auStack_a8 [16];
  undefined8 local_98;
  undefined4 local_90;
  undefined1 auStack_70 [32];
  undefined4 local_50;
  
  plVar2 = *(longlong **)(param_2 + 0xdb8);
  if (plVar2 != (longlong *)0x0) {
    lVar7 = param_1 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x1ac0;
    (**(code **)(*plVar2 + 0x50))(plVar2,auStack_a8);
    *(int *)(*(longlong *)(lVar7 + 0x1e08) + 0x684) =
         *(int *)(*(longlong *)(lVar7 + 0x1e08) + 0x684) + 1;
    *(undefined8 *)(lVar7 + 0x9d0) = *(undefined8 *)(*(longlong *)(lVar7 + 0x1e08) + 0xb78);
    uVar3 = FUN_1800f2c40(*(undefined8 *)(lVar7 + 0x2250),2,
                          *(undefined8 *)(*(longlong *)(lVar7 + 0x1e00) + 0x18),
                          *(undefined8 *)(*(longlong *)(lVar7 + 0x1e08) + 0xb78),&local_e0);
    if ((uVar3 & 1) != 0) {
      uVar4 = FUN_1800eef60(*(longlong *)(lVar7 + 0x908) + 0x40,&local_c0,2,
                            *(undefined8 *)(*(longlong *)(lVar7 + 0x1e00) + 0x18),
                            *(undefined8 *)(lVar7 + 0x9d0));
      if (local_b8 != 0) {
        *(longlong *)(*(longlong *)(lVar7 + 0x1e08) + 0xb88) = param_1;
        FUN_1800e4c18(uVar4,param_2,param_3,local_98,local_90,local_b8,&local_130);
        plVar2 = *(longlong **)(param_2 + (ulonglong)*(uint *)(param_2 + 0xd78) * 8 + 0xd88);
        (**(code **)(*plVar2 + 0x50))(plVar2,auStack_70);
        FUN_1800e7b48(*(undefined8 *)(lVar7 + 0x2238),auStack_f8,*(undefined4 *)(param_2 + 0xd98),
                      *(undefined4 *)(param_2 + 0xd78));
        plVar9 = *(longlong **)(param_1 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x20 + 0x6d0);
        lVar8 = *plVar9;
        puVar5 = (undefined8 *)
                 FUN_1800e7b48(*(undefined8 *)(lVar7 + 0x2230),&local_f0,
                               *(undefined4 *)(param_2 + 0xdc8),0);
        (**(code **)(lVar8 + 0xc0))(plVar9,2,local_d8,*puVar5,0);
        *(undefined4 *)(lVar7 + 0x980) = 1;
        *(undefined4 *)(lVar7 + 0x984) = local_50;
        uVar4 = FUN_180042050(lVar7 + 0x2260,&DAT_180232f30);
        *(undefined8 *)(lVar7 + 0x968) = uVar4;
        uVar4 = FUN_180041d70(lVar7 + 0x22a8,&DAT_180232f68);
        *(undefined8 *)(lVar7 + 0x960) = uVar4;
        *(undefined8 *)(lVar7 + 0x920) = *(undefined8 *)(lVar7 + 0x1ba0);
        *(undefined8 *)(lVar7 + 0x928) = *(undefined8 *)(lVar7 + 0x1b80);
        *(undefined8 *)(lVar7 + 0x970) = *(undefined8 *)(lVar7 + 0x1bb0);
        FUN_1800e8910(*(undefined8 *)(lVar7 + 0x1e08),*(undefined8 *)(lVar7 + 0x918));
        FUN_1800e9780(*(undefined8 *)(lVar7 + 0x1e08),*(undefined8 *)(lVar7 + 0x918));
        FUN_1800e96c8(*(undefined8 *)(lVar7 + 0x1e08),1,auStack_d0);
        FUN_1800e98b8(*(undefined8 *)(lVar7 + 0x1e08),5);
        local_f0 = local_c0;
        uStack_e8 = 0x1000000200;
        FUN_1800e9d68(*(undefined8 *)(lVar7 + 0x1e08),0,1,&local_f0);
        FUN_1800e9fc8(*(undefined8 *)(lVar7 + 0x1e08),1,auStack_f8,0,0);
        local_100 = 0;
        local_fc = 0x3f800000;
        local_120 = (int)local_130;
        local_110 = local_130;
        fStack_10c = fStack_12c;
        iStack_11c = (int)fStack_12c;
        local_108 = local_128;
        fStack_104 = fStack_124;
        local_118 = (int)(local_128 + local_130);
        iStack_114 = (int)(fStack_124 + fStack_12c);
        FUN_1800ea2b0(*(undefined8 *)(lVar7 + 0x1e08),1,&local_110);
        FUN_1800ea1e0(*(undefined8 *)(lVar7 + 0x1e08),1,&local_120);
        FUN_1800e8bb8(*(undefined8 *)(lVar7 + 0x1e08),plVar2,0,0,4);
        if (*(longlong *)(param_2 + 0xdc0) == 0) {
          puVar6 = &DAT_18023c1a0;
        }
        else {
          FUN_1800e9ac0(*(undefined8 *)(lVar7 + 0x1e08),1,local_e0 + (ulonglong)local_c8);
          uVar4 = FUN_18008e550(lVar7 + 0x2278,&DAT_18023c050);
          *(undefined8 *)(lVar7 + 0x950) = uVar4;
          uVar4 = FUN_1800ede18(lVar7 + 0x22d8,lVar7 + 0x918);
          FUN_1800e8910(*(undefined8 *)(lVar7 + 0x1e08),uVar4);
          FUN_1800e9868(*(undefined8 *)(lVar7 + 0x1e08),uVar4);
          FUN_1800e8bb8(*(undefined8 *)(lVar7 + 0x1e08),*(undefined8 *)(param_2 + 0xdc0),0,0,0x80);
          FUN_1800ea670(*(undefined8 *)(lVar7 + 0x1e08),4,1,0,0);
          puVar6 = &DAT_18023c2f0;
        }
        uVar4 = FUN_18008e550(lVar7 + 0x2278,puVar6);
        *(undefined8 *)(lVar7 + 0x950) = uVar4;
        uVar4 = FUN_1800ede18(lVar7 + 0x22d8,lVar7 + 0x918);
        FUN_1800e9868(*(undefined8 *)(lVar7 + 0x1e08),uVar4);
        FUN_1800e8910(*(undefined8 *)(lVar7 + 0x1e08),uVar4);
        FUN_1800e9ac0(*(undefined8 *)(lVar7 + 0x1e08),1,local_e0);
        FUN_1800e8bb8(*(undefined8 *)(lVar7 + 0x1e08),*(undefined8 *)(param_2 + 0xdb8),0,0,0x80);
        FUN_1800ea670(*(undefined8 *)(lVar7 + 0x1e08),4,1,0,0);
        if (*(int *)(*(longlong *)(lVar7 + 0x908) + 0x34) != 0) {
          *(undefined4 *)(*(longlong *)(lVar7 + 0x908) + 0x34) = 0;
        }
        lVar7 = *(longlong *)(lVar7 + 0x1e08);
        iVar1 = *(int *)(lVar7 + 0x684) + -1;
        *(int *)(lVar7 + 0x684) = iVar1;
        if ((iVar1 == 0) && (*(int *)(lVar7 + 0x680) <= *(int *)(lVar7 + 0x678))) {
          FUN_1800e8548(lVar7 + 8,0);
        }
      }
    }
  }
  return;
}

