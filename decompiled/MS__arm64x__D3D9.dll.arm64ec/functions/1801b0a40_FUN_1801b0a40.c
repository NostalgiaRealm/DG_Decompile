/*
 * FUN_1801b0a40 at 1801b0a40
 * undefined FUN_1801b0a40(void)
 * Address ranges: 1801b0a40-1801b0cdf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801b0a40(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined *puVar6;
  code *pcVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  int *piVar11;
  code *extraout_x11;
  code *extraout_x11_00;
  longlong lVar12;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  
  lVar9 = FUN_1802036a0(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x130));
  if ((lVar9 == 0) || (lVar9 == *(longlong *)(param_1 + 0x118))) {
    lVar9 = *(longlong *)(param_1 + 0x110);
    local_90 = *(undefined8 *)(param_1 + 0x118);
    local_40 = *(undefined4 *)(lVar9 + 0xde);
    uStack_44 = *(undefined4 *)(lVar9 + 0xda);
    local_4c = *(undefined1 *)(lVar9 + 0x26);
    uStack_54 = *(undefined4 *)(&DAT_1802389e0 + (longlong)*(int *)(lVar9 + 0xce) * 4);
    local_48 = 0;
    local_60 = *(undefined4 *)(&DAT_1802389f8 + (longlong)*(int *)(lVar9 + 0x1c) * 4);
    local_4b = *(int *)(lVar9 + 0x18) == 1;
    local_88 = *(undefined4 *)(param_1 + 0x20);
    uStack_5c = 0;
    local_80 = *(undefined8 *)(param_1 + 0x130);
    local_78 = *(undefined4 *)(param_1 + 0x148);
    uStack_74 = *(undefined4 *)(param_1 + 0x14c);
    local_70 = *(undefined4 *)(param_1 + 0x128);
    uStack_6c = *(undefined4 *)(param_1 + 300);
    local_68 = *(undefined4 *)(param_1 + 0x150);
    uStack_64 = *(undefined4 *)(param_1 + 0x154);
    local_58 = *(undefined4 *)(param_1 + 0x158);
    local_50 = *(undefined4 *)(param_1 + 0x15c);
    lVar9 = FUN_180202770(*(undefined8 *)(param_1 + 0x50),&local_90);
    *(longlong *)(param_1 + 0x138) = lVar9;
    puVar6 = __hybrid_os_arm64x_dispatch_icall;
    if (lVar9 != 0) {
      if (param_2 != (longlong *)0x0) {
        lVar9 = 0;
        if (*param_2 != 0) {
          lVar9 = *param_2 + -0x100;
        }
        *(longlong *)(param_1 + 0x140) = lVar9;
        if (((char)param_2[3] == '\0') && (lVar9 != 0)) {
          (*(code *)puVar6)(0x180224000);
          iVar8 = (*extraout_x11)();
          if ((((iVar8 == 1) &&
               (lVar9 = *(longlong *)(param_1 + 0x140), *(int *)(lVar9 + 0x34) == 1)) &&
              ((piVar11 = (int *)param_2[1], piVar11 == (int *)0x0 ||
               ((((*piVar11 == 0 && (piVar11[1] == 0)) && (*(int *)(lVar9 + 0x24) == piVar11[2])) &&
                (*(int *)(lVar9 + 0x28) == piVar11[3])))))) &&
             ((piVar11 = (int *)param_2[2], piVar11 == (int *)0x0 ||
              (((*piVar11 == 0 && (piVar11[1] == 0)) &&
               ((*(int *)(*(longlong *)(param_1 + 0x138) + 0x18) == piVar11[2] &&
                (*(int *)(*(longlong *)(param_1 + 0x138) + 0x1c) == piVar11[3]))))))))
          goto LAB_1801b0c40;
        }
        *(undefined8 *)(param_1 + 0x140) = 0;
        uVar10 = FUN_180203380(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x138),1);
        if ((uVar10 & 1) == 0) {
          FUN_180203408(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x130),0);
          goto LAB_1801b0c24;
        }
      }
LAB_1801b0c40:
      lVar9 = *(longlong *)(param_1 + 0x138);
      lVar12 = *(longlong *)(lVar9 + 0xda0);
      if (lVar12 != 0) {
        uVar1 = *(undefined4 *)(lVar9 + 0xdb0);
        uVar2 = *(undefined4 *)(lVar9 + 0xdb4);
        uVar4 = *(undefined4 *)(&DAT_1802389d0 + (longlong)*(int *)(lVar9 + 0x34) * 4);
        FUN_1801a6db8(param_1 + 0x60,1,1);
        *(longlong *)(param_1 + 0x74) = lVar12;
        *(undefined4 *)(param_1 + 0x8c) = uVar1;
        *(undefined4 *)(param_1 + 0x90) = uVar2;
        *(undefined4 *)(param_1 + 0xa8) = uVar4;
        (*(code *)puVar6)(0x180224000);
        (*extraout_x11_00)(lVar12);
        *(undefined2 *)(param_1 + 0xac) = 0x101;
      }
      lVar9 = *(longlong *)(param_1 + 0x138);
      uVar3 = *(uint *)(lVar9 + 0x20);
      if (uVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(0xf004,0x1801b0cb8);
        (*pcVar7)();
      }
      uVar5 = 0;
      if (uVar3 != 0) {
        uVar5 = *(uint *)(lVar9 + 0x18) / uVar3;
      }
      *(uint *)(param_1 + 0x24) = uVar5;
      uVar3 = *(uint *)(lVar9 + 0x24);
      if (uVar3 != 0) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = *(uint *)(lVar9 + 0x1c) / uVar3;
        }
        *(uint *)(param_1 + 0x28) = uVar5;
        return 1;
      }
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(0xf004,0x1801b0cd0);
      (*pcVar7)();
    }
  }
LAB_1801b0c24:
  *(undefined8 *)(param_1 + 0x130) = 0;
  return 0;
}

