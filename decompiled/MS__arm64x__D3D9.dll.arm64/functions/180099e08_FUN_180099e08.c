/*
 * FUN_180099e08 at 180099e08
 * undefined FUN_180099e08(void)
 * Address ranges: 180099e08-180099f67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180099e08(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined2 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  
  local_b0 = 0;
  local_a0 = *(undefined8 *)(param_1 + 0x30);
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_6c = 0;
  uStack_98 = 0;
  lVar6 = *(longlong *)(param_1 + -0xb0) +
          (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x38) + 0x10) * 0x1ac0;
  local_a8 = *(undefined4 *)(param_1 + -0xe0);
  local_68 = 0xffffffff00000000;
  local_60 = 0xffffffff;
  uVar2 = FUN_1800e54c0(*(longlong *)(param_1 + -0xb0),&local_b0);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar7 = *(undefined8 *)(param_1 + -0xb0);
  FUN_180101630(lVar6 + 0x1bc0);
  if (*(char *)(lVar6 + 0x1dc4) != '\0') {
    puVar3 = (undefined8 *)FUN_180101500(lVar6 + 0x1bc0,0x20);
    pcVar1 = __imp_KERNEL32_dll_Sleep;
    if (puVar3 != (undefined8 *)0x0) {
      FUN_1800015a0(lVar6 + 0x1dc0);
      puVar3[1] = 0x20;
      puVar3[2] = uVar7;
      puVar4 = (undefined8 *)((longlong)puVar3 + 0x37U & 0xfffffffffffffff8);
      puVar3[3] = uVar2;
      puVar3[4] = uVar5;
      *(undefined4 *)(puVar3 + 5) = param_2;
      *(undefined4 *)((longlong)puVar3 + 0x2c) = param_3;
      *puVar4 = 0;
      *puVar3 = FUN_180099f68;
      *(undefined8 **)(lVar6 + (ulonglong)*(uint *)(lVar6 + 0x1dbc) * 0x28 + 0x1c50) = puVar4;
      pcVar1 = __imp_KERNEL32_dll_SetEvent;
      if (*(char *)(lVar6 + 0x1dc5) != '\0') {
        *(undefined4 *)(lVar6 + 0x1bc0) = 0;
        (*pcVar1)(*(undefined8 *)(lVar6 + 0x1c40));
        return;
      }
      goto LAB_180099f48;
    }
    *(undefined4 *)(lVar6 + 0x1bc0) = 0;
    (*pcVar1)(100);
    FUN_180101630(lVar6 + 0x1bc0);
  }
  puVar3 = *(undefined8 **)(lVar6 + 0x1da0);
  *puVar3 = uVar7;
  puVar3[1] = uVar2;
  puVar3[2] = uVar5;
  *(undefined4 *)(puVar3 + 3) = param_2;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = param_3;
  FUN_180099f68();
LAB_180099f48:
  *(undefined4 *)(lVar6 + 0x1bc0) = 0;
  return;
}

