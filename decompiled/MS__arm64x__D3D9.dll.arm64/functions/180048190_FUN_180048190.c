/*
 * FUN_180048190 at 180048190
 * undefined FUN_180048190(void)
 * Address ranges: 180048190-1800482e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180048190(longlong param_1,uint param_2,undefined4 param_3,longlong param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined1 param_8)

{
  code *pcVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (0xf < param_2) {
    return;
  }
  lVar5 = *(longlong *)(param_1 + 0xf6e0);
  FUN_180101630(lVar5 + 0x12c0);
  if (*(char *)(lVar5 + 0x14c4) != '\0') {
    puVar2 = (undefined8 *)FUN_180101500(lVar5 + 0x12c0,0x28);
    pcVar1 = __imp_KERNEL32_dll_Sleep;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_1800015a0(lVar5 + 0x14c0);
      puVar2[1] = 0x28;
      puVar2[2] = param_1;
      *(uint *)(puVar2 + 3) = param_2;
      *(undefined4 *)((longlong)puVar2 + 0x1c) = param_3;
      puVar4 = (undefined8 *)((longlong)puVar2 + 0x3fU & 0xfffffffffffffff8);
      puVar2[4] = param_4;
      *(undefined4 *)(puVar2 + 5) = param_5;
      *(undefined4 *)((longlong)puVar2 + 0x2c) = param_6;
      *(undefined1 *)(puVar2 + 6) = param_7;
      *(undefined1 *)((longlong)puVar2 + 0x34) = param_8;
      *puVar4 = 0;
      *puVar2 = FUN_1800482e8;
      *(undefined8 **)(lVar5 + (ulonglong)*(uint *)(lVar5 + 0x14bc) * 0x28 + 0x1350) = puVar4;
      pcVar1 = __imp_KERNEL32_dll_SetEvent;
      if (*(char *)(lVar5 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar5 + 0x12c0) = 0;
        (*pcVar1)(*(undefined8 *)(lVar5 + 0x1340));
        return;
      }
      goto LAB_1800482c4;
    }
    *(undefined4 *)(lVar5 + 0x12c0) = 0;
    (*pcVar1)(100);
    FUN_180101630(lVar5 + 0x12c0);
  }
  plVar3 = *(longlong **)(lVar5 + 0x14a0);
  *plVar3 = param_1;
  *(uint *)(plVar3 + 1) = param_2;
  *(undefined4 *)((longlong)plVar3 + 0xc) = param_3;
  plVar3[2] = param_4;
  *(undefined4 *)(plVar3 + 3) = param_5;
  *(undefined4 *)((longlong)plVar3 + 0x1c) = param_6;
  *(undefined1 *)(plVar3 + 4) = param_7;
  *(undefined1 *)((longlong)plVar3 + 0x24) = param_8;
  FUN_1800482e8();
LAB_1800482c4:
  *(undefined4 *)(lVar5 + 0x12c0) = 0;
  return;
}

