/*
 * FUN_180084968 at 180084968
 * undefined FUN_180084968(void)
 * Address ranges: 180084968-180084c7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_180084968(longlong *param_1,longlong param_2,longlong param_3,uint param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  undefined8 in_stack_fffffffffffffe60;
  undefined4 uVar12;
  undefined8 in_stack_fffffffffffffe68;
  undefined8 in_stack_fffffffffffffe70;
  undefined8 in_stack_fffffffffffffe78;
  undefined4 uVar13;
  undefined8 in_stack_fffffffffffffe80;
  uint uVar14;
  undefined8 in_stack_fffffffffffffe88;
  uint uVar15;
  uint in_stack_fffffffffffffea0;
  undefined8 local_128;
  undefined4 local_120;
  uint uStack_11c;
  uint local_118;
  undefined4 uStack_114;
  longlong local_110;
  uint local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0 [6];
  undefined4 local_b8 [6];
  undefined1 auStack_a0 [16];
  undefined4 local_90;
  
  uVar10 = (uint)((ulonglong)in_stack_fffffffffffffe68 >> 0x20);
  uVar9 = (uint)((ulonglong)in_stack_fffffffffffffe70 >> 0x20);
  uVar14 = (uint)((ulonglong)in_stack_fffffffffffffe80 >> 0x20);
  uVar15 = (uint)((ulonglong)in_stack_fffffffffffffe88 >> 0x20);
  uVar12 = (undefined4)((ulonglong)in_stack_fffffffffffffe60 >> 0x20);
  uVar13 = (undefined4)((ulonglong)in_stack_fffffffffffffe78 >> 0x20);
  if ((1 < *(uint *)(param_1 + 7)) && (param_4 != 0)) {
    local_108 = *(uint *)(param_1 + 4);
    local_110 = param_1[10];
    local_f0 = 0;
    local_e8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_100 = local_110 + (ulonglong)local_108 * 0x18c0 + 0x6b0;
    local_f8 = 0;
    (**(code **)(**(longlong **)(param_2 + 0x18) + 0x50))(*(longlong **)(param_2 + 0x18),auStack_a0)
    ;
    if (param_3 == 0) {
      plVar6 = *(longlong **)(param_2 + 0x28);
    }
    else {
      plVar6 = *(longlong **)(param_3 + 0x28);
    }
    (**(code **)(*plVar6 + 0x40))(plVar6,local_d0);
    (**(code **)(*(longlong *)**(undefined8 **)(param_2 + 0x30) + 0x40))
              ((longlong *)**(undefined8 **)(param_2 + 0x30),local_b8);
    uVar4 = (**(code **)(*param_1 + 0x40))(param_1,0);
    uVar5 = (**(code **)(*param_1 + 0x48))(param_1,0);
    uVar7 = FUN_180082d80(&local_110,uVar4,uVar5,1,1,1,local_90,local_d0[0],
                          CONCAT44(uVar12,local_b8[0]),(ulonglong)uVar10 << 0x20,
                          (ulonglong)uVar9 << 0x20,CONCAT44(uVar13,0x28),(ulonglong)uVar14 << 0x20,
                          (ulonglong)uVar15 << 0x20,0,0,in_stack_fffffffffffffea0 & 0xffffff00);
    if ((uVar7 & 1) == 0) {
      return 0;
    }
    uVar10 = 0;
    if (*(int *)((longlong)param_1 + 0x34) != 0) {
      do {
        if (((1 << (ulonglong)(uVar10 & 0x1f) & param_4) != 0) && (1 < *(uint *)(param_1 + 7))) {
          uVar9 = 1;
          do {
            lVar8 = param_1[0x26];
            local_128 = 0;
            uVar14 = uVar4 >> (ulonglong)(uVar9 - 1 & 0x1f);
            if (uVar14 == 0) {
              uVar14 = 1;
            }
            uVar15 = uVar5 >> (ulonglong)(uVar9 - 1 & 0x1f);
            local_120 = 0;
            if (uVar15 == 0) {
              uVar15 = 1;
            }
            uStack_114 = 1;
            if (lVar8 == 0) {
              lVar8 = param_1[0xf];
            }
            uVar3 = uVar9 + uVar10 * param_5;
            uStack_11c = uVar14;
            local_118 = uVar15;
            (**(code **)(**(longlong **)(param_1[0xb] + 8) + 0x170))
                      (*(longlong **)(param_1[0xb] + 8),local_f8,0,0,0,0,lVar8,uVar3 - 1,&local_128)
            ;
            uVar1 = uVar5 >> (ulonglong)(uVar9 & 0x1f);
            uVar2 = uVar4 >> (ulonglong)(uVar9 & 0x1f);
            fVar11 = 1.0;
            if (*(char *)((longlong)param_1 + 0x4c) == '\0') {
              fVar11 = 0.5;
            }
            if (uVar1 == 0) {
              uVar1 = 1;
            }
            if (uVar2 == 0) {
              uVar2 = 1;
            }
            FUN_1800825d8(0x3efd70a4,0x3efd70a4,(float)uVar2 + 0.495,(float)uVar1 + 0.495,
                          fVar11 / (float)uVar4,fVar11 / (float)uVar5,
                          ((float)uVar14 + fVar11) / (float)uVar4,
                          ((float)uVar15 + fVar11) / (float)uVar5,param_1[0x22],
                          *(undefined4 *)((longlong)param_1 + 0x2c),
                          *(undefined4 *)((longlong)param_1 + 0x2c),uVar9,uVar10,0,0,
                          *(undefined8 *)(param_2 + 0x18),
                          *(undefined8 *)(*(longlong *)(param_2 + 0x30) + (ulonglong)uVar3 * 0x28),0
                          ,local_f8,local_e8,0,0,0,*(char *)((longlong)param_1 + 0x4c),0x80000016,0)
            ;
            uVar9 = uVar9 + 1;
          } while (uVar9 < *(uint *)(param_1 + 7));
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(uint *)((longlong)param_1 + 0x34));
    }
    FUN_180083208(&local_110,1,1);
  }
  return 1;
}

