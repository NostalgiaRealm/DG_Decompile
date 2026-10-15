/*
 * FUN_180045f40 at 180045f40
 * longlong * __cdecl FUN_180045f40(longlong param_1, longlong * param_2, int param_3, longlong param_4, undefined8 param_5)
 * Address ranges: 180045f40-180046243
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong *
FUN_180045f40(longlong param_1,longlong *param_2,int param_3,longlong param_4,undefined8 param_5)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  
  lVar12 = 0;
  lVar11 = 0;
  lVar10 = 0;
  if (*(int *)(param_1 + -0xc) != 0) goto LAB_18004621c;
  if (*(longlong *)(param_1 + 8) == 0) {
    if (*(longlong *)(param_1 + 0x40) == 0) {
LAB_18004606c:
      if ((*(int *)(param_1 + 0x20) != 0) ||
         (uVar6 = FUN_1800462e8(param_1 + -0x40), (uVar6 & 1) != 0)) {
        *(undefined8 *)
         (*(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x28) * 0x30 + 0x20) =
             *(undefined8 *)(param_1 + -0x28);
        *(undefined8 *)
         (*(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x28) * 0x30 + 0x28) =
             *(undefined8 *)(param_1 + -0x20);
        uVar6 = *(int *)(param_1 + -0x10) + 0xffU & 0xffffff00;
        if (uVar6 * 0x400 <
            *(int *)(*(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x28) * 0x30 +
                    0x18) + uVar6) {
          uVar6 = *(uint *)(param_1 + 0x28) + 1;
          uVar2 = *(uint *)(param_1 + 0x20);
          if (uVar2 == 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x1800460ec);
            (*pcVar4)();
          }
          uVar3 = 0;
          if (uVar2 != 0) {
            uVar3 = uVar6 / uVar2;
          }
          uVar6 = uVar6 - uVar3 * uVar2;
          lVar1 = *(longlong *)(param_1 + 0x18) + (ulonglong)uVar6 * 0x30;
          plVar9 = *(longlong **)(lVar1 + 0x20);
          if ((plVar9 == (longlong *)0x0) ||
             (uVar7 = (**(code **)(*plVar9 + 0x40))(), uVar7 < *(ulonglong *)(lVar1 + 0x28))) {
            uVar6 = FUN_1800462e8(param_1 + -0x40);
            if ((uVar6 & 1) == 0) goto LAB_1800461d4;
            *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
          }
          else {
            *(uint *)(param_1 + 0x28) = uVar6;
            *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar6 * 0x30 + 0x18) = 0;
          }
        }
        plVar9 = (longlong *)
                 (*(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x28) * 0x30);
        lVar10 = plVar9[2];
        *(longlong *)(param_1 + 0x40) = lVar10;
        lVar12 = *plVar9 + (ulonglong)*(uint *)(plVar9 + 3);
        *(longlong *)(param_1 + 0x30) = lVar12;
        lVar11 = plVar9[1] + (ulonglong)*(uint *)(plVar9 + 3);
        *(longlong *)(param_1 + 0x38) = lVar11;
        *(uint *)(plVar9 + 3) = (*(int *)(param_1 + -0x10) + 0xffU & 0xffffff00) + (int)plVar9[3];
      }
    }
    else if (param_3 == 1) {
      *(undefined8 *)
       (*(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x28) * 0x30 + 0x20) =
           *(undefined8 *)(param_1 + -0x28);
      *(undefined8 *)
       (*(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x28) * 0x30 + 0x28) =
           *(undefined8 *)(param_1 + -0x20);
      lVar12 = *(longlong *)(param_1 + 0x30);
      lVar11 = *(longlong *)(param_1 + 0x38);
      lVar10 = *(longlong *)(param_1 + 0x40);
    }
    else if (param_3 == 2) goto LAB_18004606c;
LAB_1800461d4:
    if (*(longlong *)(param_1 + 0x40) != 0) {
      *(longlong *)
       (*(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x28) * 0x30 + 0x20) =
           param_4;
      *(undefined8 *)
       (*(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x28) * 0x30 + 0x28) =
           param_5;
    }
  }
  else if (*(longlong *)(param_1 + 0x38) == 0) {
LAB_180045fc8:
    if (*(longlong *)(param_1 + 0x38) != 0) {
      FUN_180059b58(*(longlong *)(param_1 + 8),*(int *)(param_1 + -0x10),
                    *(undefined8 *)(param_1 + 0x40),*(ulonglong *)(param_1 + 0x48),
                    *(longlong **)(param_1 + -0x28),*(ulonglong *)(param_1 + -0x20));
    }
    bVar5 = FUN_180059488(*(longlong **)(param_1 + 8),*(uint *)(param_1 + -0x10),
                          (longlong *)(param_1 + 0x30));
    if (!bVar5) {
      puVar8 = *(undefined8 **)(param_1 + 0x10);
      bVar5 = false;
      if (puVar8 != (undefined8 *)0x0) {
        (**(code **)*puVar8)(puVar8,*(undefined4 *)(param_1 + -0x30));
        bVar5 = FUN_180059488(*(longlong **)(param_1 + 8),*(uint *)(param_1 + -0x10),
                              (longlong *)(param_1 + 0x30));
      }
    }
    *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
    if (bVar5 != false) {
LAB_180046038:
      lVar12 = *(longlong *)(param_1 + 0x40);
      lVar11 = *(longlong *)(param_1 + 0x30);
      lVar10 = *(longlong *)(param_1 + 0x38);
    }
  }
  else if (param_3 == 1) {
    lVar11 = *(longlong *)(param_1 + 0x30);
    lVar12 = *(longlong *)(param_1 + 0x40);
    lVar10 = *(longlong *)(param_1 + 0x38);
  }
  else if (param_3 == 2) {
    if (((*(longlong **)(param_1 + -0x28) != (longlong *)0x0) &&
        (uVar7 = (**(code **)(**(longlong **)(param_1 + -0x28) + 0x40))(),
        uVar7 < *(ulonglong *)(param_1 + -0x20))) || (*(longlong *)(param_1 + -0x28) == 0))
    goto LAB_180045fc8;
    goto LAB_180046038;
  }
  if (param_4 != 0) {
    *(longlong *)(param_1 + -0x28) = param_4;
    *(undefined8 *)(param_1 + -0x20) = param_5;
  }
  if (lVar10 != 0) {
    *(int *)(param_1 + -0xc) = *(int *)(param_1 + -0xc) + 1;
  }
LAB_18004621c:
  *param_2 = lVar12;
  param_2[1] = lVar11;
  param_2[2] = lVar10;
  return param_2;
}

