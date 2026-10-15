/*
 * FUN_180048968 at 180048968
 * undefined FUN_180048968(void)
 * Address ranges: 180048968-180048ba3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180048968(longlong param_1,int param_2,int param_3,longlong param_4)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  lVar6 = *(longlong *)(param_1 + 0xf6e0);
  iVar1 = param_3;
  if (0x200 < (uint)(param_3 - param_2)) {
    iVar1 = param_2 + 0x200;
  }
  FUN_180101630(lVar6 + 0x12c0);
  if (*(char *)(lVar6 + 0x14c4) == '\0') {
LAB_180048a80:
    plVar5 = *(longlong **)(lVar6 + 0x14a0);
    *plVar5 = param_4;
    plVar5[1] = param_1;
    *(int *)(plVar5 + 2) = param_2;
    *(int *)((longlong)plVar5 + 0x14) = iVar1;
    FUN_180048ba8();
LAB_180048a90:
    *(undefined4 *)(lVar6 + 0x12c0) = 0;
  }
  else {
    uVar2 = (iVar1 - param_2) * 0x10;
    puVar4 = (undefined8 *)FUN_180101500(lVar6 + 0x12c0);
    pcVar3 = __imp_KERNEL32_dll_Sleep;
    if (puVar4 == (undefined8 *)0x0) {
      *(undefined4 *)(lVar6 + 0x12c0) = 0;
      (*pcVar3)(100);
      FUN_180101630(lVar6 + 0x12c0);
      goto LAB_180048a80;
    }
    FUN_1800015a0(lVar6 + 0x14c0);
    puVar4[1] = (ulonglong)(uVar2 + 0x18);
    puVar4[3] = param_1;
    *(int *)(puVar4 + 4) = param_2;
    *(int *)((longlong)puVar4 + 0x24) = iVar1;
    uVar7 = (longlong)puVar4 + 0x2fU & 0xfffffffffffffff8;
    puVar4[2] = uVar7;
    thunk_FUN_180001218(uVar7,param_4,uVar2);
    *(undefined8 *)(uVar7 + uVar2) = 0;
    *puVar4 = FUN_180048ba8;
    *(undefined8 **)(lVar6 + (ulonglong)*(uint *)(lVar6 + 0x14bc) * 0x28 + 0x1350) =
         (undefined8 *)(uVar7 + uVar2);
    pcVar3 = __imp_KERNEL32_dll_SetEvent;
    if (*(char *)(lVar6 + 0x14c5) == '\0') goto LAB_180048a90;
    *(undefined4 *)(lVar6 + 0x12c0) = 0;
    (*pcVar3)(*(undefined8 *)(lVar6 + 0x1340));
  }
  if (iVar1 == param_3) {
    return;
  }
  lVar6 = *(longlong *)(param_1 + 0xf6e0);
  FUN_180101630(lVar6 + 0x12c0);
  param_4 = param_4 + (ulonglong)(uint)(iVar1 << 2) * 4;
  if (*(char *)(lVar6 + 0x14c4) != '\0') {
    uVar2 = (param_3 - iVar1) * 0x10;
    puVar4 = (undefined8 *)FUN_180101500(lVar6 + 0x12c0,(ulonglong)(uVar2 + 0x18));
    pcVar3 = __imp_KERNEL32_dll_Sleep;
    if (puVar4 != (undefined8 *)0x0) {
      FUN_1800015a0(lVar6 + 0x14c0);
      puVar4[1] = (ulonglong)(uVar2 + 0x18);
      uVar7 = (longlong)puVar4 + 0x2fU & 0xfffffffffffffff8;
      puVar4[3] = param_1;
      *(int *)(puVar4 + 4) = iVar1;
      *(int *)((longlong)puVar4 + 0x24) = param_3;
      puVar4[2] = uVar7;
      thunk_FUN_180001218(uVar7,param_4,uVar2);
      *(undefined8 *)(uVar7 + uVar2) = 0;
      *puVar4 = FUN_180048ba8;
      *(undefined8 **)(lVar6 + (ulonglong)*(uint *)(lVar6 + 0x14bc) * 0x28 + 0x1350) =
           (undefined8 *)(uVar7 + uVar2);
      pcVar3 = __imp_KERNEL32_dll_SetEvent;
      if (*(char *)(lVar6 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar6 + 0x12c0) = 0;
        (*pcVar3)(*(undefined8 *)(lVar6 + 0x1340));
        return;
      }
      goto LAB_180048b84;
    }
    *(undefined4 *)(lVar6 + 0x12c0) = 0;
    (*pcVar3)(100);
    FUN_180101630(lVar6 + 0x12c0);
  }
  plVar5 = *(longlong **)(lVar6 + 0x14a0);
  *plVar5 = param_4;
  plVar5[1] = param_1;
  *(int *)(plVar5 + 2) = iVar1;
  *(int *)((longlong)plVar5 + 0x14) = param_3;
  FUN_180048ba8();
LAB_180048b84:
  *(undefined4 *)(lVar6 + 0x12c0) = 0;
  return;
}

