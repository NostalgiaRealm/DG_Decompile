/*
 * FUN_18004d408 at 18004d408
 * undefined FUN_18004d408(void)
 * Address ranges: 18004d408-18004d767
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_18004d408(longlong param_1,ulonglong param_2,int param_3,undefined8 *param_4,int param_5,
             uint param_6)

{
  ulonglong *puVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  longlong lStack_58;
  
  if (((param_6 & 1) != 0) && (iVar6 = FUN_180001510(param_2 + 0x50,3,2), iVar6 == 2)) {
    lVar16 = *(longlong *)(param_1 + 0xf6e0);
    FUN_180101630(lVar16 + 0x12c0);
    if (*(char *)(lVar16 + 0x14c4) == '\0') {
LAB_18004d504:
      plVar13 = *(longlong **)(lVar16 + 0x14a0);
      *plVar13 = param_1;
      plVar13[1] = param_2;
      FUN_18004d770();
    }
    else {
      puVar8 = (undefined8 *)FUN_180101500(lVar16 + 0x12c0,0x10);
      pcVar4 = __imp_KERNEL32_dll_Sleep;
      if (puVar8 == (undefined8 *)0x0) {
        *(undefined4 *)(lVar16 + 0x12c0) = 0;
        (*pcVar4)(100);
        FUN_180101630(lVar16 + 0x12c0);
        goto LAB_18004d504;
      }
      FUN_1800015a0(lVar16 + 0x14c0);
      puVar8[1] = 0x10;
      puVar8[2] = param_1;
      puVar12 = (undefined8 *)((longlong)puVar8 + 0x27U & 0xfffffffffffffff8);
      puVar8[3] = param_2;
      *puVar12 = 0;
      *puVar8 = FUN_18004d770;
      *(undefined8 **)(lVar16 + (ulonglong)*(uint *)(lVar16 + 0x14bc) * 0x28 + 0x1350) = puVar12;
      pcVar4 = __imp_KERNEL32_dll_SetEvent;
      if (*(char *)(lVar16 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar16 + 0x12c0) = 0;
        (*pcVar4)(*(undefined8 *)(lVar16 + 0x1340));
        goto LAB_18004d514;
      }
    }
    *(undefined4 *)(lVar16 + 0x12c0) = 0;
  }
LAB_18004d514:
  if (*(int *)(param_2 + 0x50) == 3) {
    plVar13 = *(longlong **)(param_2 + 0x38);
    if (plVar13 == (longlong *)0x0) {
      bVar5 = false;
    }
    else {
      iVar6 = 0;
      if ((*(uint *)(*plVar13 + (ulonglong)*(uint *)(plVar13 + 1) * 0x20 + 0x14) & 1) != 0) {
        local_70 = 0;
        plVar17 = *(longlong **)(param_2 + 0x40);
        lVar16 = ((ulonglong)(uint)(*(int *)(param_2 + 0x48) + (int)plVar13[5] * 2) & 0x3fffffff) *
                 4;
        lStack_58 = lVar16 + 4;
        local_60 = lVar16;
        iVar7 = (**(code **)(*plVar17 + 0x40))(plVar17,0,&local_60,&local_70);
        if (-1 < iVar7) {
          iVar6 = *(int *)(lVar16 + local_70);
          local_60 = 0;
          lStack_58 = 0;
          (**(code **)(*plVar17 + 0x48))(plVar17,0,&local_60);
        }
      }
      bVar5 = iVar6 == 1;
    }
    if (bVar5) {
      local_68 = param_2;
      uVar9 = (*__imp_KERNEL32_dll_EnterCriticalSection)(param_1 + 0xf888);
      if ((*(int *)(param_2 + 0x50) != 0) && (uVar2 = *(uint *)(param_1 + 0xf880), uVar2 != 0)) {
        uVar11 = 0;
        uVar10 = uVar2;
        do {
          uVar3 = uVar10 + uVar11 >> 1;
          uVar14 = (ulonglong)uVar3;
          uVar15 = *(ulonglong *)(*(longlong *)(param_1 + 0xf878) + uVar14 * 0x18);
          if (uVar15 <= param_2) {
            if (param_2 <= uVar15) break;
            uVar11 = uVar3 + 1;
            uVar14 = (ulonglong)(uVar3 + 1);
            uVar3 = uVar10;
          }
          uVar10 = uVar3;
        } while (uVar10 != uVar11);
        if ((((uint)uVar14 != uVar2) &&
            (puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0xf878) + uVar14 * 0x18),
            *puVar1 == param_2)) && (puVar1 = puVar1 + 2, puVar1 != (ulonglong *)0x0)) {
          FUN_180050a68(uVar9,*(longlong *)(param_1 + 0xf848) + (ulonglong)(uint)*puVar1 * 0x40);
          *(undefined1 *)(*(longlong *)(param_1 + 0xf848) + (ulonglong)(uint)*puVar1 * 0x40 + 0x3d)
               = 1;
          FUN_1800516b8(param_1 + 0xf870,&local_68);
        }
      }
      (*__imp_KERNEL32_dll_LeaveCriticalSection)(param_1 + 0xf888);
    }
  }
  if ((param_3 == 8) || (param_3 == 9)) {
    if (param_5 - 1U < 3) {
      return 0x80004005;
    }
    if (*(int *)(param_2 + 0x50) != 0) {
LAB_18004d744:
      *(undefined1 *)(param_2 + 0x58) = 1;
      return 1;
    }
LAB_18004d704:
    if (param_5 != 0) {
      *(undefined4 *)param_4 = *(undefined4 *)(param_2 + 0x28);
    }
  }
  else {
    if (param_3 == 10) {
      if (param_5 - 1U < 7) {
        return 0x80004005;
      }
      if (*(int *)(param_2 + 0x50) != 0) goto LAB_18004d744;
    }
    else {
      if (param_3 == 0xb) {
        if (param_5 - 1U < 3) {
          return 0x80004005;
        }
        if (*(int *)(param_2 + 0x50) != 0) {
          return 1;
        }
        goto LAB_18004d704;
      }
      if (param_3 != 0xc) {
        return 0x80004005;
      }
      if (param_5 - 1U < 7) {
        return 0x80004005;
      }
      if (*(int *)(param_2 + 0x50) != 0) {
        return 1;
      }
    }
    if (param_5 != 0) {
      *param_4 = *(undefined8 *)(param_2 + 0x28);
    }
  }
  return 0;
}

