/*
 * FUN_18008d790 at 18008d790
 * undefined FUN_18008d790(void)
 * Address ranges: 18008d790-18008d8e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_18008d790(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             longlong param_5,undefined4 param_6,undefined4 param_7,longlong param_8,
             undefined4 param_9)

{
  code *pcVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_5 + 0x1cf18);
  FUN_180101630(lVar5 + 0x12c0);
  if (*(char *)(lVar5 + 0x14c4) != '\0') {
    puVar2 = (undefined8 *)FUN_180101500(lVar5 + 0x12c0,0x30);
    pcVar1 = __imp_KERNEL32_dll_Sleep;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_1800015a0(lVar5 + 0x14c0);
      puVar2[1] = 0x30;
      puVar2[2] = param_5;
      *(undefined4 *)(puVar2 + 3) = param_6;
      *(undefined4 *)((longlong)puVar2 + 0x1c) = param_7;
      puVar4 = (undefined8 *)((longlong)puVar2 + 0x43U & 0xfffffffffffffff8);
      puVar2[4] = param_8;
      *(undefined4 *)(puVar2 + 5) = param_9;
      *(undefined4 *)((longlong)puVar2 + 0x2c) = param_1;
      *(undefined4 *)(puVar2 + 6) = param_2;
      *(undefined4 *)((longlong)puVar2 + 0x34) = param_3;
      *(undefined4 *)(puVar2 + 7) = param_4;
      *puVar4 = 0;
      *puVar2 = FUN_18008d8e8;
      *(undefined8 **)(lVar5 + (ulonglong)*(uint *)(lVar5 + 0x14bc) * 0x28 + 0x1350) = puVar4;
      pcVar1 = __imp_KERNEL32_dll_SetEvent;
      if (*(char *)(lVar5 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar5 + 0x12c0) = 0;
        (*pcVar1)(*(undefined8 *)(lVar5 + 0x1340));
        return 1;
      }
      goto LAB_18008d8b8;
    }
    *(undefined4 *)(lVar5 + 0x12c0) = 0;
    (*pcVar1)(100);
    FUN_180101630(lVar5 + 0x12c0);
  }
  plVar3 = *(longlong **)(lVar5 + 0x14a0);
  *plVar3 = param_5;
  *(undefined4 *)(plVar3 + 1) = param_6;
  *(undefined4 *)((longlong)plVar3 + 0xc) = param_7;
  plVar3[2] = param_8;
  *(undefined4 *)(plVar3 + 3) = param_9;
  *(undefined4 *)((longlong)plVar3 + 0x1c) = param_1;
  *(undefined4 *)(plVar3 + 4) = param_2;
  *(undefined4 *)((longlong)plVar3 + 0x24) = param_3;
  *(undefined4 *)(plVar3 + 5) = param_4;
  FUN_18008d8e8();
LAB_18008d8b8:
  *(undefined4 *)(lVar5 + 0x12c0) = 0;
  return 1;
}

