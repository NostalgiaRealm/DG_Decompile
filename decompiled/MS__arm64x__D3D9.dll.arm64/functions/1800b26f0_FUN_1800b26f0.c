/*
 * FUN_1800b26f0 at 1800b26f0
 * undefined FUN_1800b26f0(void)
 * Address ranges: 1800b26f0-1800b294f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800b26f0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 *puVar2;
  int *piVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined4 uVar10;
  
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar5 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar5 = true;
    iVar7 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    if (iVar7 == 0) {
      FUN_180003398();
    }
  }
  plVar4 = (longlong *)0x0;
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_2 + -0x78);
  }
  if (plVar4 != (longlong *)0x0) {
    piVar3 = (int *)&DAT_00000058;
    if (param_2 != 0) {
      piVar3 = (int *)(param_2 + -0x20);
    }
    uVar10 = 0x8876086c;
    if (*piVar3 == 3) goto LAB_1800b2914;
  }
  if (*(char *)(param_1 + -0x642c) == '\0') {
    if (*(longlong **)(param_1 + -0x178) != plVar4) {
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 8))(plVar4);
        *(undefined1 *)(param_1 + -0x20) = 1;
      }
      if (*(longlong *)(param_1 + -0x178) != 0) {
        *(undefined1 *)(*(longlong *)(param_1 + -0x178) + 0x70) = 0;
        (**(code **)(**(longlong **)(param_1 + -0x178) + 0x10))();
      }
      *(longlong **)(param_1 + -0x178) = plVar4;
      if (plVar4 == (longlong *)0x0) {
LAB_1800b2858:
        uVar10 = 0;
      }
      else {
        plVar1 = (longlong *)&DAT_00000060;
        if (param_2 != 0) {
          plVar1 = (longlong *)(param_2 + -0x18);
        }
        if (*plVar1 == 0) goto LAB_1800b2858;
        uVar10 = 1;
      }
      *(undefined4 *)(param_1 + -0x58) = uVar10;
      if (plVar4 == (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + -0x6810) + 0x168))
                  (*(longlong **)(param_1 + -0x6810),0,0);
        uVar8 = *(uint *)(param_1 + -0x54) & 0xfffffffe;
      }
      else {
        bVar6 = param_2 != 0;
        puVar2 = &DAT_00000070;
        if (bVar6) {
          puVar2 = (undefined1 *)(param_2 + -8);
        }
        *puVar2 = 1;
        puVar2 = &DAT_00000071;
        if (bVar6) {
          puVar2 = (undefined1 *)(param_2 + -7);
        }
        *puVar2 = 1;
        piVar3 = (int *)&DAT_00000054;
        if (bVar6) {
          piVar3 = (int *)(param_2 + -0x24);
        }
        plVar4 = (longlong *)&DAT_00000060;
        if (param_2 != 0) {
          plVar4 = (longlong *)(param_2 + -0x18);
        }
        (**(code **)(**(longlong **)(param_1 + -0x6810) + 0x168))
                  (*(longlong **)(param_1 + -0x6810),*plVar4,*piVar3 == 0x66);
        plVar4 = (longlong *)&DAT_00000018;
        if (param_2 != 0) {
          plVar4 = (longlong *)(param_2 + -0x60);
        }
        uVar8 = *(uint *)(param_1 + -0x54) & 0xfffffffe;
        if (*plVar4 != 0) {
          uVar8 = *(uint *)(param_1 + -0x54) | 1;
        }
      }
      *(uint *)(param_1 + -0x54) = uVar8;
    }
  }
  else {
    lVar9 = *(longlong *)
             (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 8))(plVar4);
    }
    if (*(longlong **)(lVar9 + 0xab58) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar9 + 0xab58) + 0x10))();
    }
    *(longlong **)(lVar9 + 0xab58) = plVar4;
    *(undefined1 *)(lVar9 + 0xacfa) = 1;
  }
  uVar10 = 0;
LAB_1800b2914:
  if (bVar5) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return uVar10;
}

