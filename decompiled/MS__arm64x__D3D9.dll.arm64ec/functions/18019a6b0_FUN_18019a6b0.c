/*
 * FUN_18019a6b0 at 18019a6b0
 * undefined FUN_18019a6b0(void)
 * Address ranges: 18019a6b0-18019aa2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_18019a6b0(longlong param_1,longlong param_2,undefined8 param_3,uint param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  uint uVar8;
  uint uVar9;
  float fVar10;
  undefined8 in_stack_fffffffffffffe60;
  undefined4 uVar11;
  undefined8 in_stack_fffffffffffffe68;
  undefined8 in_stack_fffffffffffffe70;
  undefined8 in_stack_fffffffffffffe78;
  undefined4 uVar12;
  undefined8 in_stack_fffffffffffffe80;
  uint uVar13;
  undefined8 in_stack_fffffffffffffe88;
  uint uVar14;
  uint in_stack_fffffffffffffea0;
  longlong local_f8;
  uint local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8 [6];
  undefined4 local_a0 [6];
  undefined1 auStack_88 [16];
  undefined4 local_78;
  
  puVar3 = __hybrid_os_arm64x_dispatch_icall;
  uVar9 = (uint)((ulonglong)in_stack_fffffffffffffe68 >> 0x20);
  uVar8 = (uint)((ulonglong)in_stack_fffffffffffffe70 >> 0x20);
  uVar13 = (uint)((ulonglong)in_stack_fffffffffffffe80 >> 0x20);
  uVar14 = (uint)((ulonglong)in_stack_fffffffffffffe88 >> 0x20);
  uVar11 = (undefined4)((ulonglong)in_stack_fffffffffffffe60 >> 0x20);
  uVar12 = (undefined4)((ulonglong)in_stack_fffffffffffffe78 >> 0x20);
  if ((1 < *(uint *)(param_1 + 0x38)) && (param_4 != 0)) {
    local_f0 = *(uint *)(param_1 + 0x20);
    local_f8 = *(longlong *)(param_1 + 0x50);
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_e8 = local_f8 + (ulonglong)local_f0 * 0x18c0 + 0x6b0;
    local_e0 = 0;
    uVar6 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(uVar6,auStack_88);
    uVar6 = (*(code *)puVar3)(0x180224000);
    (*extraout_x11_00)(uVar6,local_b8);
    uVar6 = (*(code *)puVar3)(0x180224000);
    (*extraout_x11_01)(uVar6,local_a0);
    (*(code *)puVar3)(0x180224000);
    uVar4 = (*extraout_x11_02)(param_1,0);
    (*(code *)puVar3)(0x180224000);
    uVar5 = (*extraout_x11_03)(param_1,0);
    uVar7 = FUN_180198608(&local_f8,uVar4,uVar5,1,1,1,local_78,local_b8[0],
                          CONCAT44(uVar11,local_a0[0]),(ulonglong)uVar9 << 0x20,
                          (ulonglong)uVar8 << 0x20,CONCAT44(uVar12,0x28),(ulonglong)uVar13 << 0x20,
                          (ulonglong)uVar14 << 0x20,0,0,in_stack_fffffffffffffea0 & 0xffffff00);
    if ((uVar7 & 1) == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x34) != 0) {
      uVar9 = 0;
      do {
        if (((1 << (ulonglong)(uVar9 & 0x1f) & param_4) != 0) && (1 < *(uint *)(param_1 + 0x38))) {
          uVar8 = 1;
          do {
            uVar13 = uVar4 >> (ulonglong)(uVar8 - 1 & 0x1f);
            if (uVar13 == 0) {
              uVar13 = 1;
            }
            uVar14 = uVar5 >> (ulonglong)(uVar8 - 1 & 0x1f);
            if (uVar14 == 0) {
              uVar14 = 1;
            }
            uVar6 = (*(code *)puVar3)();
            (*extraout_x11_04)(uVar6,local_e0,0,0,0,0);
            uVar1 = uVar5 >> (ulonglong)(uVar8 & 0x1f);
            uVar2 = uVar4 >> (ulonglong)(uVar8 & 0x1f);
            fVar10 = 1.0;
            if (*(char *)(param_1 + 0x4c) == '\0') {
              fVar10 = 0.5;
            }
            if (uVar1 == 0) {
              uVar1 = 1;
            }
            if (uVar2 == 0) {
              uVar2 = 1;
            }
            FUN_180197cd8(0x3efd70a4,0x3efd70a4,(float)uVar2 + 0.495,(float)uVar1 + 0.495,
                          fVar10 / (float)uVar4,fVar10 / (float)uVar5,
                          ((float)uVar13 + fVar10) / (float)uVar4,
                          ((float)uVar14 + fVar10) / (float)uVar5,*(undefined8 *)(param_1 + 0x110),
                          *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x2c),uVar8,
                          uVar9,0,0,*(undefined8 *)(param_2 + 0x18),
                          *(undefined8 *)
                           (*(longlong *)(param_2 + 0x30) +
                           (ulonglong)(uVar8 + uVar9 * param_5) * 0x28),0,local_e0,local_d0,0,0,0,
                          *(char *)(param_1 + 0x4c),0x80000016,0);
            uVar8 = uVar8 + 1;
          } while (uVar8 < *(uint *)(param_1 + 0x38));
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(uint *)(param_1 + 0x34));
    }
    FUN_180198b40(&local_f8,1,1);
  }
  return 1;
}

