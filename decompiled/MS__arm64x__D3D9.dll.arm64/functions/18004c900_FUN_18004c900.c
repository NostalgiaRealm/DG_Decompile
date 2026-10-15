/*
 * FUN_18004c900 at 18004c900
 * undefined FUN_18004c900(void)
 * Address ranges: 18004c900-18004ca43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004c900(longlong param_1,int param_2,int param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  lVar5 = *(longlong *)(param_1 + 0xf6e0);
  FUN_180101630(lVar5 + 0x12c0);
  if (*(char *)(lVar5 + 0x14c4) != '\0') {
    iVar2 = (param_3 - param_2) * 4;
    uVar1 = iVar2 + 7;
    uVar7 = (ulonglong)((uVar1 & 0xfffffff8) + 0x18);
    puVar4 = (undefined8 *)FUN_180101500(lVar5 + 0x12c0,uVar7);
    pcVar3 = __imp_KERNEL32_dll_Sleep;
    if (puVar4 != (undefined8 *)0x0) {
      FUN_1800015a0(lVar5 + 0x14c0);
      puVar4[1] = uVar7;
      puVar4[3] = param_1;
      *(int *)(puVar4 + 4) = param_2;
      *(int *)((longlong)puVar4 + 0x24) = param_3;
      uVar6 = (longlong)puVar4 + 0x2fU & 0xfffffffffffffff8;
      puVar4[2] = uVar6;
      thunk_FUN_180001218(uVar6,param_4,iVar2);
      uVar7 = (ulonglong)uVar1 & 0xfffffff8;
      *(undefined8 *)(uVar7 + uVar6) = 0;
      *puVar4 = FUN_18004ca48;
      *(ulonglong *)(lVar5 + (ulonglong)*(uint *)(lVar5 + 0x14bc) * 0x28 + 0x1350) = uVar7 + uVar6;
      pcVar3 = __imp_KERNEL32_dll_SetEvent;
      if (*(char *)(lVar5 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar5 + 0x12c0) = 0;
        (*pcVar3)(*(undefined8 *)(lVar5 + 0x1340));
        return;
      }
      goto LAB_18004ca24;
    }
    *(undefined4 *)(lVar5 + 0x12c0) = 0;
    (*pcVar3)(100);
    FUN_180101630(lVar5 + 0x12c0);
  }
  puVar4 = *(undefined8 **)(lVar5 + 0x14a0);
  *puVar4 = param_4;
  puVar4[1] = param_1;
  *(int *)(puVar4 + 2) = param_2;
  *(int *)((longlong)puVar4 + 0x14) = param_3;
  FUN_18004ca48();
LAB_18004ca24:
  *(undefined4 *)(lVar5 + 0x12c0) = 0;
  return;
}

