/*
 * FUN_1800ae400 at 1800ae400
 * undefined FUN_1800ae400(void)
 * Address ranges: 1800ae400-1800ae633
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800ae400(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  uint *puVar3;
  int *piVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined4 uVar10;
  longlong *plVar11;
  
  uVar10 = 0x8876086c;
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar6 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar6 = true;
    iVar7 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    if (iVar7 == 0) {
      FUN_180003398();
    }
  }
  if (param_2 < *(uint *)(*(longlong *)(param_1 + 0x60) + 0xf0)) {
    plVar2 = (longlong *)0x0;
    if (param_3 != 0) {
      plVar2 = (longlong *)(param_3 + -0x80);
    }
    uVar10 = 0x8876086c;
    if ((param_2 != 0) || (plVar2 != (longlong *)0x0)) {
      if (plVar2 != (longlong *)0x0) {
        plVar8 = (longlong *)&DAT_00000028;
        if (param_3 != 0) {
          plVar8 = (longlong *)(param_3 + -0x58);
        }
        puVar3 = (uint *)&DAT_00000050;
        if (param_3 != 0) {
          puVar3 = (uint *)(param_3 + -0x30);
        }
        if ((*puVar3 & 1) == 0) goto LAB_1800ae5f4;
        piVar4 = (int *)&DAT_00000054;
        if (param_3 != 0) {
          piVar4 = (int *)(param_3 + -0x2c);
        }
        if (((*piVar4 != 0) && ((*piVar4 != 2 || (*(int *)(param_1 + -0x59d0) != 3)))) ||
           (*plVar8 != param_1 + -0x6838)) goto LAB_1800ae5f4;
        (**(code **)(*plVar2 + 0x30))(plVar2);
        plVar8 = (longlong *)&DAT_00000030;
        if (param_3 != 0) {
          plVar8 = (longlong *)(param_3 + -0x50);
        }
        if ((longlong *)*plVar8 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar8 + 8))();
        }
      }
      lVar1 = param_1 + (ulonglong)param_2 * 8;
      plVar8 = *(longlong **)(lVar1 + -0x6808);
      if (plVar8 != (longlong *)0x0) {
        plVar11 = (longlong *)plVar8[6];
        (**(code **)(*plVar8 + 0x38))();
        if (plVar11 != (longlong *)0x0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
      if (param_2 == 0) {
        plVar8 = (longlong *)&DAT_00000008;
        if (param_3 != 0) {
          plVar8 = (longlong *)(param_3 + -0x78);
        }
        lVar9 = *plVar8;
        *(undefined8 *)(param_1 + -0x67e0) = 0;
        *(undefined4 *)(param_1 + -0x67d8) = *(undefined4 *)(lVar9 + 0x8c);
        uVar10 = *(undefined4 *)(lVar9 + 0x90);
        *(undefined1 *)(param_1 + 0x5cd3) = 1;
        *(undefined4 *)(param_1 + -0x67d4) = uVar10;
        *(undefined4 *)(param_1 + -0x67d0) = 0;
        *(undefined4 *)(param_1 + -0x67cc) = 0x3f800000;
        uVar10 = *(undefined4 *)(*plVar8 + 0x8c);
        uVar5 = *(undefined4 *)(*plVar8 + 0x90);
        *(undefined8 *)(param_1 + 0x730) = 0;
        *(undefined4 *)(param_1 + 0x738) = uVar10;
        *(undefined4 *)(param_1 + 0x73c) = uVar5;
        *(undefined1 *)(param_1 + 0x5cd4) = 1;
      }
      *(longlong **)(lVar1 + -0x6808) = plVar2;
      uVar10 = 0;
      *(undefined1 *)(param_1 + 0x5cd1) = 1;
    }
  }
LAB_1800ae5f4:
  if (bVar6) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return uVar10;
}

