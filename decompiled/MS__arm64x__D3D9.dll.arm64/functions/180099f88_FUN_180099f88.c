/*
 * FUN_180099f88 at 180099f88
 * undefined FUN_180099f88(void)
 * Address ranges: 180099f88-18009a0db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180099f88(longlong param_1,undefined1 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined2 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  
  local_a0 = 0;
  local_90 = *(undefined8 *)(param_1 + 0x30);
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_5c = 0;
  uStack_88 = 0;
  lVar5 = *(longlong *)(param_1 + -0xb0) +
          (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x38) + 0x10) * 0x1ac0;
  local_98 = *(undefined4 *)(param_1 + -0xe0);
  local_58 = 0xffffffff00000000;
  local_50 = 0xffffffff;
  uVar2 = FUN_1800e54c0(*(longlong *)(param_1 + -0xb0),&local_a0);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + -0xb0);
  FUN_180101630(lVar5 + 0x1bc0);
  if (*(char *)(lVar5 + 0x1dc4) != '\0') {
    puVar3 = (undefined8 *)FUN_180101500(lVar5 + 0x1bc0,0x20);
    pcVar1 = __imp_KERNEL32_dll_Sleep;
    if (puVar3 != (undefined8 *)0x0) {
      FUN_1800015a0(lVar5 + 0x1dc0);
      puVar3[1] = 0x20;
      puVar3[2] = uVar6;
      puVar4 = (undefined8 *)((longlong)puVar3 + 0x33U & 0xfffffffffffffff8);
      puVar3[3] = uVar2;
      puVar3[4] = uVar7;
      *(undefined1 *)(puVar3 + 5) = param_2;
      *puVar4 = 0;
      *puVar3 = FUN_18009a0e0;
      *(undefined8 **)(lVar5 + (ulonglong)*(uint *)(lVar5 + 0x1dbc) * 0x28 + 0x1c50) = puVar4;
      pcVar1 = __imp_KERNEL32_dll_SetEvent;
      if (*(char *)(lVar5 + 0x1dc5) != '\0') {
        *(undefined4 *)(lVar5 + 0x1bc0) = 0;
        (*pcVar1)(*(undefined8 *)(lVar5 + 0x1c40));
        return;
      }
      goto LAB_18009a0c0;
    }
    *(undefined4 *)(lVar5 + 0x1bc0) = 0;
    (*pcVar1)(100);
    FUN_180101630(lVar5 + 0x1bc0);
  }
  puVar3 = *(undefined8 **)(lVar5 + 0x1da0);
  *puVar3 = uVar6;
  puVar3[1] = uVar2;
  puVar3[2] = uVar7;
  *(undefined1 *)(puVar3 + 3) = param_2;
  FUN_18009a0e0();
LAB_18009a0c0:
  *(undefined4 *)(lVar5 + 0x1bc0) = 0;
  return;
}

