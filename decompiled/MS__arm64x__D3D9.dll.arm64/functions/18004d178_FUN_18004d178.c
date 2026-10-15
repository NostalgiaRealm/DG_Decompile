/*
 * FUN_18004d178 at 18004d178
 * undefined FUN_18004d178(void)
 * Address ranges: 18004d178-18004d277
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004d178(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = param_2[1];
  lVar6 = *param_2;
  lVar5 = *(longlong *)(param_1 + 0xf6e0);
  FUN_180101630(lVar5 + 0x12c0);
  if (*(char *)(lVar5 + 0x14c4) != '\0') {
    puVar2 = (undefined8 *)FUN_180101500(lVar5 + 0x12c0,0x18);
    pcVar1 = __imp_KERNEL32_dll_Sleep;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_1800015a0(lVar5 + 0x14c0);
      puVar2[1] = 0x18;
      puVar2[2] = param_1;
      puVar4 = (undefined8 *)((longlong)puVar2 + 0x2fU & 0xfffffffffffffff8);
      puVar2[4] = lVar7;
      puVar2[3] = lVar6;
      *puVar4 = 0;
      *puVar2 = FUN_18004d278;
      *(undefined8 **)(lVar5 + (ulonglong)*(uint *)(lVar5 + 0x14bc) * 0x28 + 0x1350) = puVar4;
      pcVar1 = __imp_KERNEL32_dll_SetEvent;
      if (*(char *)(lVar5 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar5 + 0x12c0) = 0;
        (*pcVar1)(*(undefined8 *)(lVar5 + 0x1340));
        return;
      }
      goto LAB_18004d260;
    }
    *(undefined4 *)(lVar5 + 0x12c0) = 0;
    (*pcVar1)(100);
    FUN_180101630(lVar5 + 0x12c0);
  }
  plVar3 = *(longlong **)(lVar5 + 0x14a0);
  *plVar3 = param_1;
  plVar3[2] = lVar7;
  plVar3[1] = lVar6;
  FUN_18004d278();
LAB_18004d260:
  *(undefined4 *)(lVar5 + 0x12c0) = 0;
  return;
}

