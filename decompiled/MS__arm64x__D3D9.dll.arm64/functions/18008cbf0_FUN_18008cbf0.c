/*
 * FUN_18008cbf0 at 18008cbf0
 * undefined FUN_18008cbf0(void)
 * Address ranges: 18008cbf0-18008cd5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_18008cbf0(longlong param_1,undefined4 param_2,undefined4 param_3,longlong param_4,
             longlong param_5,longlong *param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9)

{
  code *pcVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar8 = param_6[1];
  lVar7 = *param_6;
  lVar6 = param_6[2];
  lVar5 = *(longlong *)(param_1 + 0x1cf18);
  FUN_180101630(lVar5 + 0x12c0);
  if (*(char *)(lVar5 + 0x14c4) != '\0') {
    puVar2 = (undefined8 *)FUN_180101500(lVar5 + 0x12c0,0x48);
    pcVar1 = __imp_KERNEL32_dll_Sleep;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_1800015a0(lVar5 + 0x14c0);
      puVar2[1] = 0x48;
      puVar2[2] = param_1;
      *(undefined4 *)(puVar2 + 3) = param_2;
      *(undefined4 *)((longlong)puVar2 + 0x1c) = param_3;
      puVar2[4] = param_4;
      puVar2[5] = param_5;
      puVar2[7] = lVar8;
      puVar2[6] = lVar7;
      puVar2[8] = lVar6;
      *(undefined4 *)(puVar2 + 9) = param_7;
      *(undefined4 *)((longlong)puVar2 + 0x4c) = param_8;
      *(undefined4 *)(puVar2 + 10) = param_9;
      puVar4 = (undefined8 *)((longlong)puVar2 + 0x5bU & 0xfffffffffffffff8);
      *puVar4 = 0;
      *puVar2 = FUN_18008cd60;
      *(undefined8 **)(lVar5 + (ulonglong)*(uint *)(lVar5 + 0x14bc) * 0x28 + 0x1350) = puVar4;
      pcVar1 = __imp_KERNEL32_dll_SetEvent;
      if (*(char *)(lVar5 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar5 + 0x12c0) = 0;
        (*pcVar1)(*(undefined8 *)(lVar5 + 0x1340));
        return 1;
      }
      goto LAB_18008cd3c;
    }
    *(undefined4 *)(lVar5 + 0x12c0) = 0;
    (*pcVar1)(100);
    FUN_180101630(lVar5 + 0x12c0);
  }
  plVar3 = *(longlong **)(lVar5 + 0x14a0);
  *plVar3 = param_1;
  *(undefined4 *)(plVar3 + 1) = param_2;
  *(undefined4 *)((longlong)plVar3 + 0xc) = param_3;
  plVar3[2] = param_4;
  plVar3[3] = param_5;
  plVar3[5] = lVar8;
  plVar3[4] = lVar7;
  plVar3[6] = lVar6;
  *(undefined4 *)(plVar3 + 7) = param_7;
  *(undefined4 *)((longlong)plVar3 + 0x3c) = param_8;
  *(undefined4 *)(plVar3 + 8) = param_9;
  FUN_18008cd60();
LAB_18008cd3c:
  *(undefined4 *)(lVar5 + 0x12c0) = 0;
  return 1;
}

