/*
 * FUN_18000be00 at 18000be00
 * undefined FUN_18000be00(void)
 * Address ranges: 18000be00-18000c0d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18000be00(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong extraout_x12;
  ulonglong extraout_x13;
  longlong lVar8;
  longlong extraout_x14;
  longlong extraout_x15;
  uint uVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong extraout_d17;
  ulonglong uVar17;
  uint uVar18;
  int extraout_var;
  undefined8 local_90;
  int local_88;
  uint uStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_54;
  
  uVar11 = 0;
  uVar17 = param_1[0xc];
  lVar8 = param_1[6];
  if ((lVar8 != 0) && (*(short *)(lVar8 + 0x3c) != 0)) {
    uVar17 = *(ulonglong *)(**(longlong **)(lVar8 + 0x40) + 0x60);
  }
  uVar5 = FUN_180006038(param_1[5],&local_90);
  if (local_90._4_4_ == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x18000be74);
    (*pcVar4)();
  }
  uVar14 = 0;
  if (local_90._4_4_ != 0) {
    uVar14 = ((uint)uVar17 * (int)local_90) / local_90._4_4_;
  }
  uVar18 = (uint)(uVar17 >> 0x20);
  *(uint *)((longlong)param_1 + 0x74) = uVar14;
  if (uStack_84 != 0) {
    uVar14 = 0;
    if (uStack_84 != 0) {
      uVar14 = (uVar18 * local_88) / uStack_84;
    }
    *(uint *)(param_1 + 0xf) = uVar14;
    FUN_180002fb0(uVar5,*(undefined4 *)(extraout_x15 + 0xea8),*(undefined4 *)(extraout_x15 + 0xe68),
                  extraout_d17 & 0xffffffff,extraout_d17 >> 0x20);
    uVar13 = 1;
    uVar14 = 6;
    if (extraout_var != 5) {
      uVar14 = 1;
    }
    if (extraout_x14 != 0) {
      uVar13 = (uint)*(ushort *)(extraout_x14 + 0x3c);
    }
    plVar10 = *(longlong **)(param_1[1] + 0x68);
    func_0x000180117fe8(param_1);
    plVar6 = (longlong *)
             (**(code **)(*plVar10 + 0x50))
                       (plVar10,extraout_x13 & 0xffffffff,extraout_x12 & 0xffffffff,
                        uVar17 & 0xffffffff,uVar18);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)*param_1)(param_1);
      *(undefined1 *)(param_1[1] + 0xee) = 0;
      (**(code **)(*plVar6 + 0x88))(plVar6);
      lVar8 = param_1[1];
      plVar12 = *(longlong **)(lVar8 + 0x70);
      *(uint *)(lVar8 + 0x100) = *(uint *)(lVar8 + 0x100) | 1;
      local_54 = 1;
      uVar15 = 0;
      local_60 = 0;
      local_58 = 0;
      uStack_78 = 0;
      local_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      local_90 = param_1;
      do {
        uVar9 = 0;
        if (uVar13 != 0) {
          do {
            uVar1 = uVar18 >> (ulonglong)(uVar9 & 0x1f);
            if (uVar1 == 0) {
              uVar1 = 1;
            }
            uVar2 = (uint)uVar17 >> (ulonglong)(uVar9 & 0x1f);
            if (uVar2 == 0) {
              uVar2 = 1;
            }
            (*__imp_USER32_dll_SetRect)(&uStack_70,0,0,uVar2,uVar1);
            (**(code **)(*plVar10 + 0x108))
                      (plVar10,uVar9,uVar15,uVar9,uVar15,plVar6,plVar12,&local_80);
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar13);
        }
        puVar3 = local_90;
        uVar15 = uVar15 + 1;
      } while (uVar15 < uVar14);
      lVar8 = local_90[6];
      if (lVar8 == 0) {
        *(longlong **)(local_90[1] + 0x70) = plVar6;
      }
      else {
        *(longlong **)(lVar8 + 0x58) = plVar6;
        uVar14 = 0;
        if (*(int *)(lVar8 + 0x80) != 0) {
          do {
            uVar18 = 0;
            if (*(short *)(lVar8 + 0x3c) != 0) {
              do {
                lVar16 = *(longlong *)
                          (*(longlong *)(lVar8 + 0x40) + (ulonglong)(uVar18 + uVar14 * 0x10) * 8);
                lVar7 = *(longlong *)(lVar16 + 8);
                (**(code **)(**(longlong **)(lVar7 + 0x70) + 0x30))
                          (*(longlong **)(lVar7 + 0x70),*(undefined4 *)(lVar7 + 0x94),
                           *(undefined4 *)(lVar7 + 0x98),1);
                uVar18 = uVar18 + 1;
                *(longlong **)(*(longlong *)(lVar16 + 8) + 0x70) = plVar6;
              } while (uVar18 < *(ushort *)(lVar8 + 0x3c));
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 < *(uint *)(lVar8 + 0x80));
        }
      }
      FUN_180005df8(puVar3[5],puVar3);
      (**(code **)(*plVar12 + 0x20))(plVar12);
      uVar11 = 1;
    }
    return uVar11;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x18000be90);
  (*pcVar4)();
}

