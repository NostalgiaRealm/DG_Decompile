/*
 * FUN_180090940 at 180090940
 * undefined FUN_180090940(void)
 * Address ranges: 180090940-180090a83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180090940(longlong param_1,longlong param_2,int param_3,undefined4 param_4)

{
  code *pcVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  if (param_3 == -1) {
    return;
  }
  cVar2 = FUN_180101e70(*(longlong *)(param_1 + 0xc) + 0x12c0);
  lVar6 = *(longlong *)(param_1 + 0xc);
  if (cVar2 != '\0') {
    FUN_1800e7690(param_2,param_3,param_4,*(undefined8 *)(*(longlong *)(lVar6 + 0x1500) + 0x18),
                  *(undefined8 *)(*(longlong *)(lVar6 + 0x1508) + 0xb78));
    return;
  }
  FUN_180101630(lVar6 + 0x12c0);
  if (*(char *)(lVar6 + 0x14c4) != '\0') {
    puVar3 = (undefined8 *)FUN_180101500(lVar6 + 0x12c0,0x18);
    pcVar1 = __imp_KERNEL32_dll_Sleep;
    if (puVar3 != (undefined8 *)0x0) {
      FUN_1800015a0(lVar6 + 0x14c0);
      puVar3[1] = 0x18;
      puVar3[2] = lVar6;
      puVar5 = (undefined8 *)((longlong)puVar3 + 0x2fU & 0xfffffffffffffff8);
      puVar3[3] = param_2;
      *(int *)(puVar3 + 4) = param_3;
      *(undefined4 *)((longlong)puVar3 + 0x24) = param_4;
      *puVar5 = 0;
      *puVar3 = FUN_180090a88;
      *(undefined8 **)(lVar6 + (ulonglong)*(uint *)(lVar6 + 0x14bc) * 0x28 + 0x1350) = puVar5;
      pcVar1 = __imp_KERNEL32_dll_SetEvent;
      if (*(char *)(lVar6 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar6 + 0x12c0) = 0;
        (*pcVar1)(*(undefined8 *)(lVar6 + 0x1340));
        return;
      }
      goto LAB_180090a44;
    }
    *(undefined4 *)(lVar6 + 0x12c0) = 0;
    (*pcVar1)(100);
    FUN_180101630(lVar6 + 0x12c0);
  }
  plVar4 = *(longlong **)(lVar6 + 0x14a0);
  *plVar4 = lVar6;
  plVar4[1] = param_2;
  *(int *)(plVar4 + 2) = param_3;
  *(undefined4 *)((longlong)plVar4 + 0x14) = param_4;
  FUN_180090a88();
LAB_180090a44:
  *(undefined4 *)(lVar6 + 0x12c0) = 0;
  return;
}

