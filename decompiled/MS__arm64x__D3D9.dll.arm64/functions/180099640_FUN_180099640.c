/*
 * FUN_180099640 at 180099640
 * undefined FUN_180099640(void)
 * Address ranges: 180099640-1800998b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180099640(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  int *piVar11;
  longlong *plVar12;
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
  
  lVar8 = FUN_1800e62a0(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x130));
  if ((lVar8 == 0) || (lVar8 == *(longlong *)(param_1 + 0x118))) {
    lVar8 = *(longlong *)(param_1 + 0x110);
    local_90 = *(undefined8 *)(param_1 + 0x118);
    local_4c = *(undefined1 *)(lVar8 + 0x26);
    local_40 = *(undefined4 *)(lVar8 + 0xde);
    uStack_44 = *(undefined4 *)(lVar8 + 0xda);
    uStack_54 = *(undefined4 *)(&DAT_180232f18 + (longlong)*(int *)(lVar8 + 0xce) * 4);
    local_48 = 0;
    local_60 = *(undefined4 *)(&DAT_180232ef0 + (longlong)*(int *)(lVar8 + 0x1c) * 4);
    local_4b = *(int *)(lVar8 + 0x18) == 1;
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
    lVar8 = FUN_1800e54c0(*(undefined8 *)(param_1 + 0x50),&local_90);
    *(longlong *)(param_1 + 0x138) = lVar8;
    if (lVar8 != 0) {
      if (param_2 != (undefined8 *)0x0) {
        plVar10 = (longlong *)*param_2;
        plVar12 = (longlong *)0x0;
        if (plVar10 != (longlong *)0x0) {
          plVar12 = plVar10 + -0x20;
        }
        *(longlong **)(param_1 + 0x140) = plVar12;
        if ((*(char *)(param_2 + 3) == '\0') && (plVar12 != (longlong *)0x0)) {
          plVar12 = (longlong *)&DAT_00000100;
          if (plVar10 != (longlong *)0x0) {
            plVar12 = plVar10;
          }
          iVar7 = (**(code **)(*plVar12 + 0x48))();
          if ((((iVar7 == 1) &&
               (lVar8 = *(longlong *)(param_1 + 0x140), *(int *)(lVar8 + 0x34) == 1)) &&
              ((piVar11 = (int *)param_2[1], piVar11 == (int *)0x0 ||
               ((((*piVar11 == 0 && (piVar11[1] == 0)) && (*(int *)(lVar8 + 0x24) == piVar11[2])) &&
                (*(int *)(lVar8 + 0x28) == piVar11[3])))))) &&
             ((piVar11 = (int *)param_2[2], piVar11 == (int *)0x0 ||
              (((*piVar11 == 0 && (piVar11[1] == 0)) &&
               ((*(int *)(*(longlong *)(param_1 + 0x138) + 0x18) == piVar11[2] &&
                (*(int *)(*(longlong *)(param_1 + 0x138) + 0x1c) == piVar11[3]))))))))
          goto LAB_18009982c;
        }
        *(undefined8 *)(param_1 + 0x140) = 0;
        uVar9 = FUN_1800e5fa8(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x138),1);
        if ((uVar9 & 1) == 0) {
          FUN_1800e6028(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x130),0);
          goto LAB_180099810;
        }
      }
LAB_18009982c:
      lVar8 = *(longlong *)(param_1 + 0x138);
      plVar12 = *(longlong **)(lVar8 + 0xda0);
      if (plVar12 != (longlong *)0x0) {
        uVar4 = *(undefined4 *)(&DAT_180232ee0 + (longlong)*(int *)(lVar8 + 0x34) * 4);
        uVar1 = *(undefined4 *)(lVar8 + 0xdb0);
        uVar2 = *(undefined4 *)(lVar8 + 0xdb4);
        FUN_180090460(param_1 + 0x60,1,1);
        *(longlong **)(param_1 + 0x74) = plVar12;
        *(undefined4 *)(param_1 + 0x8c) = uVar1;
        *(undefined4 *)(param_1 + 0x90) = uVar2;
        *(undefined4 *)(param_1 + 0xa8) = uVar4;
        (**(code **)(*plVar12 + 8))(plVar12);
        *(undefined2 *)(param_1 + 0xac) = 0x101;
      }
      lVar8 = *(longlong *)(param_1 + 0x138);
      uVar3 = *(uint *)(lVar8 + 0x20);
      if (uVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x180099890);
        (*pcVar6)();
      }
      uVar5 = 0;
      if (uVar3 != 0) {
        uVar5 = *(uint *)(lVar8 + 0x18) / uVar3;
      }
      *(uint *)(param_1 + 0x24) = uVar5;
      uVar3 = *(uint *)(lVar8 + 0x24);
      if (uVar3 != 0) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = *(uint *)(lVar8 + 0x1c) / uVar3;
        }
        *(uint *)(param_1 + 0x28) = uVar5;
        return 1;
      }
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x1800998a8);
      (*pcVar6)();
    }
  }
LAB_180099810:
  *(undefined8 *)(param_1 + 0x130) = 0;
  return 0;
}

