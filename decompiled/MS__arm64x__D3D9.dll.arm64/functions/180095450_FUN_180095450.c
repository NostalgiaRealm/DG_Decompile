/*
 * FUN_180095450 at 180095450
 * undefined FUN_180095450(void)
 * Address ranges: 180095450-180095607
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_180095450(longlong param_1,int param_2,int param_3,undefined8 param_4,undefined4 param_5,
                  undefined8 param_6)

{
  code *pcVar1;
  undefined1 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  plVar7 = (longlong *)(param_1 + -0x100);
  if (*(char *)(param_1 + -0xb3) == '\x01') {
    FUN_180101df0(*(longlong *)(param_1 + -0xa8) + 0x12c0);
  }
  lVar4 = (**(code **)(*plVar7 + 0xc0))(plVar7,1);
  if (lVar4 == 0) {
    return '\0';
  }
  local_80[0] = 0;
  cVar3 = FUN_180093510(plVar7,lVar4,param_2,param_3,param_4,param_5,param_6,&local_60,local_80);
  uVar2 = local_80[0];
  if (cVar3 == '\0') {
    return '\0';
  }
  lVar4 = *(longlong *)(param_1 + -0xa8);
  param_2 = param_2 + *(int *)(param_1 + -0xc4) * param_3;
  uStack_68 = uStack_58;
  local_70 = local_60;
  FUN_180101630(lVar4 + 0x12c0);
  if (*(char *)(lVar4 + 0x14c4) != '\0') {
    puVar5 = (undefined8 *)FUN_180101500(lVar4 + 0x12c0,0x20);
    pcVar1 = __imp_KERNEL32_dll_Sleep;
    if (puVar5 != (undefined8 *)0x0) {
      FUN_1800015a0(lVar4 + 0x14c0);
      puVar5[1] = 0x20;
      puVar5[2] = plVar7;
      puVar6 = (undefined8 *)((longlong)puVar5 + 0x37U & 0xfffffffffffffff8);
      *(int *)(puVar5 + 3) = param_2;
      *(undefined8 *)((longlong)puVar5 + 0x24) = uStack_68;
      *(undefined8 *)((longlong)puVar5 + 0x1c) = local_70;
      *(undefined1 *)((longlong)puVar5 + 0x2c) = uVar2;
      *puVar6 = 0;
      *puVar5 = FUN_180095608;
      *(undefined8 **)(lVar4 + (ulonglong)*(uint *)(lVar4 + 0x14bc) * 0x28 + 0x1350) = puVar6;
      pcVar1 = __imp_KERNEL32_dll_SetEvent;
      if (*(char *)(lVar4 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar4 + 0x12c0) = 0;
        (*pcVar1)(*(undefined8 *)(lVar4 + 0x1340));
        return cVar3;
      }
      goto LAB_1800955e0;
    }
    *(undefined4 *)(lVar4 + 0x12c0) = 0;
    (*pcVar1)(100);
    FUN_180101630(lVar4 + 0x12c0);
  }
  puVar5 = *(undefined8 **)(lVar4 + 0x14a0);
  *puVar5 = plVar7;
  *(int *)(puVar5 + 1) = param_2;
  *(undefined8 *)((longlong)puVar5 + 0x14) = uStack_68;
  *(undefined8 *)((longlong)puVar5 + 0xc) = local_70;
  *(undefined1 *)((longlong)puVar5 + 0x1c) = uVar2;
  FUN_180095608();
LAB_1800955e0:
  *(undefined4 *)(lVar4 + 0x12c0) = 0;
  return cVar3;
}

