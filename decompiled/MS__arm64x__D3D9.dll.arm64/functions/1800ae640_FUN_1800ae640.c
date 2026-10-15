/*
 * FUN_1800ae640 at 1800ae640
 * undefined FUN_1800ae640(void)
 * Address ranges: 1800ae640-1800ae7bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800ae640(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint *puVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  longlong *plVar6;
  undefined4 uVar7;
  longlong *plVar8;
  
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar4 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar4 = true;
    iVar5 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    if (iVar5 == 0) {
      FUN_180003398();
    }
  }
  plVar1 = (longlong *)0x0;
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_2 + -0x80);
  }
  if (plVar1 != (longlong *)0x0) {
    plVar6 = (longlong *)&DAT_00000028;
    if (param_2 != 0) {
      plVar6 = (longlong *)(param_2 + -0x58);
    }
    puVar2 = (uint *)&DAT_00000050;
    if (param_2 != 0) {
      puVar2 = (uint *)(param_2 + -0x30);
    }
    uVar7 = 0x8876086c;
    if ((*puVar2 >> 1 & 1) == 0) goto LAB_1800ae784;
    piVar3 = (int *)&DAT_00000054;
    if (param_2 != 0) {
      piVar3 = (int *)(param_2 + -0x2c);
    }
    if ((*piVar3 != 0) || (*plVar6 != param_1 + -0x6838)) goto LAB_1800ae784;
    (**(code **)(*plVar1 + 0x30))(plVar1);
    plVar6 = (longlong *)&DAT_00000030;
    if (param_2 != 0) {
      plVar6 = (longlong *)(param_2 + -0x50);
    }
    if ((longlong *)*plVar6 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar6 + 8))();
    }
  }
  plVar6 = *(longlong **)(param_1 + -0x67e8);
  if (plVar6 != (longlong *)0x0) {
    plVar8 = (longlong *)plVar6[6];
    (**(code **)(*plVar6 + 0x38))();
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  *(longlong **)(param_1 + -0x67e8) = plVar1;
  *(undefined1 *)(param_1 + 0x5cd1) = 1;
  uVar7 = 0;
LAB_1800ae784:
  if (bVar4) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return uVar7;
}

