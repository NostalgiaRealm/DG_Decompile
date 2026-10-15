/*
 * FUN_180089168 at 180089168
 * undefined FUN_180089168(void)
 * Address ranges: 180089168-1800893e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180089168(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int *piVar9;
  longlong *plVar10;
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
  
  lVar5 = FUN_1800e62a0(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x110));
  if ((lVar5 == 0) || (lVar5 == *(longlong *)(param_1 + 0xf8))) {
    lVar5 = *(longlong *)(param_1 + 0xf0);
    local_80 = *(undefined8 *)(param_1 + 0xf8);
    local_30 = *(undefined4 *)(lVar5 + 0xde);
    uStack_34 = *(undefined4 *)(lVar5 + 0xda);
    local_3c = *(undefined1 *)(lVar5 + 0x26);
    uStack_44 = *(undefined4 *)(&DAT_180232f18 + (longlong)*(int *)(lVar5 + 0xce) * 4);
    local_38 = 0;
    local_50 = *(undefined4 *)(&DAT_180232ef0 + (longlong)*(int *)(lVar5 + 0x1c) * 4);
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
    local_3b = *(int *)(lVar5 + 0x18) == 1;
    lVar5 = FUN_1800e54c0(*(undefined8 *)(param_1 + 0x50),&local_80);
    *(longlong *)(param_1 + 0x118) = lVar5;
    if (lVar5 != 0) {
      if (param_2 != (undefined8 *)0x0) {
        plVar8 = (longlong *)*param_2;
        plVar10 = (longlong *)0x0;
        if (plVar8 != (longlong *)0x0) {
          plVar10 = plVar8 + -0x1c;
        }
        *(longlong **)(param_1 + 0x120) = plVar10;
        if ((*(char *)(param_2 + 3) == '\0') && (plVar10 != (longlong *)0x0)) {
          plVar10 = (longlong *)&DAT_000000e0;
          if (plVar8 != (longlong *)0x0) {
            plVar10 = plVar8;
          }
          iVar4 = (**(code **)(*plVar10 + 0x48))();
          if ((((iVar4 == 1) &&
               (lVar5 = *(longlong *)(param_1 + 0x120), *(int *)(lVar5 + 0x34) == 1)) &&
              ((piVar9 = (int *)param_2[1], piVar9 == (int *)0x0 ||
               ((((*piVar9 == 0 && (piVar9[1] == 0)) && (*(int *)(lVar5 + 0x24) == piVar9[2])) &&
                (*(int *)(lVar5 + 0x28) == piVar9[3])))))) &&
             ((piVar9 = (int *)param_2[2], piVar9 == (int *)0x0 ||
              (((*piVar9 == 0 && (piVar9[1] == 0)) &&
               ((*(int *)(*(longlong *)(param_1 + 0x118) + 0x18) == piVar9[2] &&
                (*(int *)(*(longlong *)(param_1 + 0x118) + 0x1c) == piVar9[3]))))))))
          goto LAB_180089344;
        }
        *(undefined8 *)(param_1 + 0x120) = 0;
        uVar6 = FUN_1800e5fa8(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x118),1);
        if ((uVar6 & 1) == 0) {
          FUN_1800e6028(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x110),0);
          goto LAB_18008932c;
        }
      }
LAB_180089344:
      lVar5 = *(longlong *)(param_1 + 0x118);
      if ((*(longlong *)(lVar5 + 0xda8) != 0) &&
         (plVar10 = *(longlong **)(lVar5 + 0xd98), plVar10 != (longlong *)0x0)) {
        plVar8 = *(longlong **)(lVar5 + 0xd88);
        if (*(longlong *)(param_1 + 0x90) == 0) {
          puVar7 = (undefined8 *)thunk_FUN_180102f80(0x28);
          *(undefined8 **)(param_1 + 0x90) = puVar7;
          if (puVar7 != (undefined8 *)0x0) {
            puVar7[1] = 0;
            *puVar7 = 0;
            puVar7[3] = 0;
            puVar7[2] = 0;
            puVar7[4] = 0;
          }
        }
        *(longlong **)(param_1 + 0x78) = plVar8;
        **(undefined8 **)(param_1 + 0x90) = plVar10;
        (**(code **)(*plVar10 + 8))(plVar10);
        (**(code **)(*plVar8 + 8))(plVar8);
      }
      lVar5 = *(longlong *)(param_1 + 0x118);
      uVar1 = *(uint *)(lVar5 + 0x20);
      if (uVar1 != 0) {
        uVar2 = 0;
        if (uVar1 != 0) {
          uVar2 = *(uint *)(lVar5 + 0x18) / uVar1;
        }
        *(uint *)(param_1 + 0x24) = uVar2;
        uVar1 = *(uint *)(lVar5 + 0x24);
        if (uVar1 != 0) {
          uVar2 = 0;
          if (uVar1 != 0) {
            uVar2 = *(uint *)(lVar5 + 0x1c) / uVar1;
          }
          *(uint *)(param_1 + 0x28) = uVar2;
          return 1;
        }
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x1800893d8);
        (*pcVar3)();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x1800893c0);
      (*pcVar3)();
    }
  }
LAB_18008932c:
  *(undefined8 *)(param_1 + 0x110) = 0;
  return 0;
}

