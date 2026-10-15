/*
 * FUN_1800fc2f8 at 1800fc2f8
 * undefined FUN_1800fc2f8(void)
 * Address ranges: 1800fc2f8-1800fc447
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800fc2f8(longlong param_1,longlong param_2,uint param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong extraout_x15;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_40 [2];
  undefined8 local_38;
  
  param_4[1] = 0;
  *param_4 = 0;
  param_4[3] = 0;
  param_4[2] = 0;
  param_4[4] = 0;
  if ((1 < param_3) ||
     (uVar1 = FUN_1800e5fa8(*(undefined8 *)(param_1 + 8),param_2,param_3 + 1), (uVar1 & 1) == 0)) {
    return 0;
  }
  lVar5 = *(longlong *)(param_1 + 8) + (ulonglong)*(uint *)(param_2 + 0x10) * 0x1ac0;
  *param_4 = *(undefined8 *)(param_2 + (ulonglong)param_3 * 8 + 0xda0);
  puVar2 = (undefined8 *)
           FUN_1800e7b48(*(undefined8 *)(lVar5 + 0x2230),&local_38,*(undefined4 *)(param_2 + 0xdb0),
                         param_3);
  param_4[2] = *puVar2;
  puVar2 = (undefined8 *)
           FUN_1800e7b48(*(undefined8 *)(lVar5 + 0x2238),&local_38,*(undefined4 *)(param_2 + 0xdb4),
                         param_3);
  local_40[0] = 0;
  param_4[3] = *puVar2;
  local_38 = *param_4;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1b500);
  (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar4 + 0x28);
  uVar3 = 0;
  lVar5 = FUN_1800f2540(lVar4,&local_38);
  if (lVar5 != 0) {
    lVar5 = FUN_1800f2718(lVar5 + 8,local_40);
    if (lVar5 == 0) {
      local_40[0] = 0xffffffff;
      lVar5 = FUN_1800f2718(extraout_x15 + 8,local_40);
      if (lVar5 == 0) goto LAB_1800fc400;
    }
    uVar3 = *(undefined4 *)(lVar5 + 0x14);
  }
LAB_1800fc400:
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar4 + 0x28);
  *(undefined4 *)(param_4 + 1) = uVar3;
  *(undefined4 *)(param_4 + 4) =
       *(undefined4 *)(&DAT_180232ee0 + (longlong)*(int *)(param_2 + 0x34) * 4);
  return 1;
}

