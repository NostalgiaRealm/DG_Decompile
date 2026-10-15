/*
 * FUN_18019f338 at 18019f338
 * undefined FUN_18019f338(void)
 * Address ranges: 18019f338-18019f5e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18019f338(longlong param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  code *pcVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  int *piVar9;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  
  lVar6 = FUN_1802036a0(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x110));
  if ((lVar6 == 0) || (lVar6 == *(longlong *)(param_1 + 0xf8))) {
    lVar6 = *(longlong *)(param_1 + 0xf0);
    local_80 = *(undefined8 *)(param_1 + 0xf8);
    local_30 = *(undefined4 *)(lVar6 + 0xde);
    uStack_34 = *(undefined4 *)(lVar6 + 0xda);
    local_3c = *(undefined1 *)(lVar6 + 0x26);
    uStack_44 = *(undefined4 *)(&DAT_1802389e0 + (longlong)*(int *)(lVar6 + 0xce) * 4);
    local_38 = 0;
    local_50 = *(undefined4 *)(&DAT_1802389f8 + (longlong)*(int *)(lVar6 + 0x1c) * 4);
    local_3b = *(int *)(lVar6 + 0x18) == 1;
    local_78 = *(undefined4 *)(param_1 + 0x20);
    local_68 = *(undefined4 *)(param_1 + 0x24);
    uStack_4c = 0;
    local_70 = *(undefined8 *)(param_1 + 0x110);
    uStack_64 = *(undefined4 *)(param_1 + 0x28);
    local_60 = *(undefined4 *)(param_1 + 0x108);
    uStack_5c = *(undefined4 *)(param_1 + 0x10c);
    local_58 = *(undefined4 *)(param_1 + 0x128);
    uStack_54 = *(undefined4 *)(param_1 + 300);
    local_48 = *(undefined4 *)(param_1 + 0x130);
    local_40 = *(undefined4 *)(param_1 + 0x134);
    lVar6 = FUN_180202770(*(undefined8 *)(param_1 + 0x50),&local_80);
    *(longlong *)(param_1 + 0x118) = lVar6;
    puVar3 = __hybrid_os_arm64x_dispatch_icall;
    if (lVar6 != 0) {
      if (param_2 != (longlong *)0x0) {
        lVar6 = 0;
        if (*param_2 != 0) {
          lVar6 = *param_2 + -0xe0;
        }
        *(longlong *)(param_1 + 0x120) = lVar6;
        if (((char)param_2[3] == '\0') && (lVar6 != 0)) {
          (*(code *)puVar3)(0x180224000);
          iVar5 = (*extraout_x11)();
          if ((((iVar5 == 1) &&
               (lVar6 = *(longlong *)(param_1 + 0x120), *(int *)(lVar6 + 0x34) == 1)) &&
              ((piVar9 = (int *)param_2[1], piVar9 == (int *)0x0 ||
               ((((*piVar9 == 0 && (piVar9[1] == 0)) && (*(int *)(lVar6 + 0x24) == piVar9[2])) &&
                (*(int *)(lVar6 + 0x28) == piVar9[3])))))) &&
             ((piVar9 = (int *)param_2[2], piVar9 == (int *)0x0 ||
              (((*piVar9 == 0 && (piVar9[1] == 0)) &&
               ((*(int *)(*(longlong *)(param_1 + 0x118) + 0x18) == piVar9[2] &&
                (*(int *)(*(longlong *)(param_1 + 0x118) + 0x1c) == piVar9[3]))))))))
          goto LAB_18019f52c;
        }
        *(undefined8 *)(param_1 + 0x120) = 0;
        uVar7 = FUN_180203380(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x118),1);
        if ((uVar7 & 1) == 0) {
          FUN_180203408(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x110),0);
          goto LAB_18019f514;
        }
      }
LAB_18019f52c:
      lVar6 = *(longlong *)(param_1 + 0x118);
      if ((*(longlong *)(lVar6 + 0xda8) != 0) &&
         (lVar11 = *(longlong *)(lVar6 + 0xd98), lVar11 != 0)) {
        uVar10 = *(undefined8 *)(lVar6 + 0xd88);
        if (*(longlong *)(param_1 + 0x90) == 0) {
          puVar8 = (undefined8 *)FUN_1802229a8(0x28);
          *(undefined8 **)(param_1 + 0x90) = puVar8;
          if (puVar8 != (undefined8 *)0x0) {
            puVar8[1] = 0;
            *puVar8 = 0;
            puVar8[3] = 0;
            puVar8[2] = 0;
            puVar8[4] = 0;
          }
        }
        *(undefined8 *)(param_1 + 0x78) = uVar10;
        **(longlong **)(param_1 + 0x90) = lVar11;
        (*(code *)puVar3)(0x180224000);
        (*extraout_x11_00)(lVar11);
        (*(code *)puVar3)(0x180224000);
        (*extraout_x11_01)(uVar10);
      }
      lVar6 = *(longlong *)(param_1 + 0x118);
      uVar1 = *(uint *)(lVar6 + 0x20);
      if (uVar1 != 0) {
        uVar2 = 0;
        if (uVar1 != 0) {
          uVar2 = *(uint *)(lVar6 + 0x18) / uVar1;
        }
        *(uint *)(param_1 + 0x24) = uVar2;
        uVar1 = *(uint *)(lVar6 + 0x24);
        if (uVar1 != 0) {
          uVar2 = 0;
          if (uVar1 != 0) {
            uVar2 = *(uint *)(lVar6 + 0x1c) / uVar1;
          }
          *(uint *)(param_1 + 0x28) = uVar2;
          return 1;
        }
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x18019f5d8);
        (*pcVar4)();
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x18019f5c0);
      (*pcVar4)();
    }
  }
LAB_18019f514:
  *(undefined8 *)(param_1 + 0x110) = 0;
  return 0;
}

