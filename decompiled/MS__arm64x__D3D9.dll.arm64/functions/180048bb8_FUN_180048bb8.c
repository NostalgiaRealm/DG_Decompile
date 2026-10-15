/*
 * FUN_180048bb8 at 180048bb8
 * undefined FUN_180048bb8(void)
 * Address ranges: 180048bb8-180048ce7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180048bb8(longlong param_1,int param_2,int param_3,undefined8 param_4)

{
  uint uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar4 = *(longlong *)(param_1 + 0xf6e0);
  FUN_180101630(lVar4 + 0x12c0);
  if (*(char *)(lVar4 + 0x14c4) != '\0') {
    uVar1 = (param_3 - param_2) * 0x10;
    puVar3 = (undefined8 *)FUN_180101500(lVar4 + 0x12c0,(ulonglong)(uVar1 + 0x18));
    pcVar2 = __imp_KERNEL32_dll_Sleep;
    if (puVar3 != (undefined8 *)0x0) {
      FUN_1800015a0(lVar4 + 0x14c0);
      puVar3[1] = (ulonglong)(uVar1 + 0x18);
      puVar3[3] = param_1;
      *(int *)(puVar3 + 4) = param_2;
      *(int *)((longlong)puVar3 + 0x24) = param_3;
      uVar5 = (longlong)puVar3 + 0x2fU & 0xfffffffffffffff8;
      puVar3[2] = uVar5;
      thunk_FUN_180001218(uVar5,param_4,uVar1);
      *(undefined8 *)(uVar5 + uVar1) = 0;
      *puVar3 = FUN_180048ce8;
      *(undefined8 **)(lVar4 + (ulonglong)*(uint *)(lVar4 + 0x14bc) * 0x28 + 0x1350) =
           (undefined8 *)(uVar5 + uVar1);
      pcVar2 = __imp_KERNEL32_dll_SetEvent;
      if (*(char *)(lVar4 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar4 + 0x12c0) = 0;
        (*pcVar2)(*(undefined8 *)(lVar4 + 0x1340));
        return;
      }
      goto LAB_180048cc8;
    }
    *(undefined4 *)(lVar4 + 0x12c0) = 0;
    (*pcVar2)(100);
    FUN_180101630(lVar4 + 0x12c0);
  }
  puVar3 = *(undefined8 **)(lVar4 + 0x14a0);
  *puVar3 = param_4;
  puVar3[1] = param_1;
  *(int *)(puVar3 + 2) = param_2;
  *(int *)((longlong)puVar3 + 0x14) = param_3;
  FUN_180048ce8();
LAB_180048cc8:
  *(undefined4 *)(lVar4 + 0x12c0) = 0;
  return;
}

