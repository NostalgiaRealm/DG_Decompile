/*
 * FUN_18009a460 at 18009a460
 * undefined FUN_18009a460(void)
 * Address ranges: 18009a460-18009a5cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18009a460(longlong param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (*(longlong *)(param_1 + 0x40) == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x1cf10) +
          (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x38) + 0x28) * 0x1ac0;
  lVar7 = *(longlong *)(lVar8 + 0x2230);
  uVar3 = FUN_180101e70(lVar8 + 0x1bc0);
  if ((uVar3 & 1) != 0) {
    FUN_1800e7690(lVar7,uVar1,2,*(undefined8 *)(*(longlong *)(lVar8 + 0x1e00) + 0x18),
                  *(undefined8 *)(*(longlong *)(lVar8 + 0x1e08) + 0xb78));
    goto LAB_18009a5a0;
  }
  FUN_180101630(lVar8 + 0x1bc0);
  if (*(char *)(lVar8 + 0x1dc4) == '\0') {
LAB_18009a564:
    plVar5 = *(longlong **)(lVar8 + 0x1da0);
    *plVar5 = lVar8 + 0x900;
    plVar5[1] = lVar7;
    *(undefined4 *)(plVar5 + 2) = uVar1;
    *(undefined4 *)((longlong)plVar5 + 0x14) = 2;
    FUN_180090a88();
  }
  else {
    puVar4 = (undefined8 *)FUN_180101500(lVar8 + 0x1bc0,0x18);
    pcVar2 = __imp_KERNEL32_dll_Sleep;
    if (puVar4 == (undefined8 *)0x0) {
      *(undefined4 *)(lVar8 + 0x1bc0) = 0;
      (*pcVar2)(100);
      FUN_180101630(lVar8 + 0x1bc0);
      goto LAB_18009a564;
    }
    FUN_1800015a0(lVar8 + 0x1dc0);
    puVar4[1] = 0x18;
    puVar4[2] = lVar8 + 0x900;
    puVar4[3] = lVar7;
    *(undefined4 *)(puVar4 + 4) = uVar1;
    *(undefined4 *)((longlong)puVar4 + 0x24) = 2;
    puVar6 = (undefined8 *)((longlong)puVar4 + 0x2fU & 0xfffffffffffffff8);
    *puVar6 = 0;
    *puVar4 = FUN_180090a88;
    *(undefined8 **)(lVar8 + (ulonglong)*(uint *)(lVar8 + 0x1dbc) * 0x28 + 0x1c50) = puVar6;
    pcVar2 = __imp_KERNEL32_dll_SetEvent;
    if (*(char *)(lVar8 + 0x1dc5) != '\0') {
      *(undefined4 *)(lVar8 + 0x1bc0) = 0;
      (*pcVar2)(*(undefined8 *)(lVar8 + 0x1c40));
      goto LAB_18009a5a0;
    }
  }
  *(undefined4 *)(lVar8 + 0x1bc0) = 0;
LAB_18009a5a0:
  FUN_1800fdbb0(lVar8 + 0x21b8,*(undefined8 *)(param_1 + 0x40));
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}

