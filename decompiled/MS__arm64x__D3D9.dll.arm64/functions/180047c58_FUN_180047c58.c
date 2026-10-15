/*
 * FUN_180047c58 at 180047c58
 * undefined FUN_180047c58(void)
 * Address ranges: 180047c58-180047d73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180047c58(longlong param_1,undefined4 param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar8 = param_3[2];
  uVar9 = param_3[3];
  uVar6 = *param_3;
  uVar7 = param_3[1];
  lVar5 = *(longlong *)(param_1 + 0xf6e0);
  FUN_180101630(lVar5 + 0x12c0);
  if (*(char *)(lVar5 + 0x14c4) != '\0') {
    puVar2 = (undefined8 *)FUN_180101500(lVar5 + 0x12c0,0x20);
    pcVar1 = __imp_KERNEL32_dll_Sleep;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_1800015a0(lVar5 + 0x14c0);
      puVar2[1] = 0x20;
      puVar2[2] = param_1;
      puVar4 = (undefined8 *)((longlong)puVar2 + 0x33U & 0xfffffffffffffff8);
      *(undefined4 *)(puVar2 + 3) = param_2;
      *(undefined4 *)((longlong)puVar2 + 0x1c) = uVar6;
      *(undefined4 *)(puVar2 + 4) = uVar7;
      *(undefined4 *)((longlong)puVar2 + 0x24) = uVar8;
      *(undefined4 *)(puVar2 + 5) = uVar9;
      *puVar4 = 0;
      *puVar2 = FUN_180047d78;
      *(undefined8 **)(lVar5 + (ulonglong)*(uint *)(lVar5 + 0x14bc) * 0x28 + 0x1350) = puVar4;
      pcVar1 = __imp_KERNEL32_dll_SetEvent;
      if (*(char *)(lVar5 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar5 + 0x12c0) = 0;
        (*pcVar1)(*(undefined8 *)(lVar5 + 0x1340));
        return;
      }
      goto LAB_180047d54;
    }
    *(undefined4 *)(lVar5 + 0x12c0) = 0;
    (*pcVar1)(100);
    FUN_180101630(lVar5 + 0x12c0);
  }
  plVar3 = *(longlong **)(lVar5 + 0x14a0);
  *plVar3 = param_1;
  *(undefined4 *)(plVar3 + 1) = param_2;
  *(undefined4 *)((longlong)plVar3 + 0xc) = uVar6;
  *(undefined4 *)(plVar3 + 2) = uVar7;
  *(undefined4 *)((longlong)plVar3 + 0x14) = uVar8;
  *(undefined4 *)(plVar3 + 3) = uVar9;
  FUN_180047d78();
LAB_180047d54:
  *(undefined4 *)(lVar5 + 0x12c0) = 0;
  return;
}

