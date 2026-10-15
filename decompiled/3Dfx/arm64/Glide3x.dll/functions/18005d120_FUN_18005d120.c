/*
 * FUN_18005d120 at 18005d120
 * undefined8 __cdecl FUN_18005d120(longlong param_1, longlong param_2, uint param_3, ulonglong * param_4)
 * Address ranges: 18005d120-18005d26f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18005d120(longlong param_1,longlong param_2,uint param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  longlong extraout_x15;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  uint local_40 [2];
  ulonglong local_38;
  
  param_4[1] = 0;
  *param_4 = 0;
  param_4[3] = 0;
  param_4[2] = 0;
  param_4[4] = 0;
  if ((1 < param_3) ||
     (uVar1 = FUN_180056be8(*(longlong **)(param_1 + 8),param_2,param_3 + 1), (uVar1 & 1) == 0)) {
    return 0;
  }
  lVar5 = *(longlong *)(param_1 + 8) + (ulonglong)*(uint *)(param_2 + 0x10) * 0x1ac0;
  *param_4 = *(ulonglong *)(param_2 + (ulonglong)param_3 * 8 + 0xda0);
  puVar2 = (ulonglong *)
           FUN_18004df88(*(longlong *)(lVar5 + 0x2230),(longlong *)&local_38,
                         *(uint *)(param_2 + 0xdb0),param_3);
  param_4[2] = *puVar2;
  puVar2 = (ulonglong *)
           FUN_18004df88(*(longlong *)(lVar5 + 0x2238),(longlong *)&local_38,
                         *(uint *)(param_2 + 0xdb4),param_3);
  local_40[0] = 0;
  param_4[3] = *puVar2;
  local_38 = *param_4;
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x1b500);
  EnterCriticalSection((LPCRITICAL_SECTION)(plVar4 + 5));
  uVar3 = 0;
  lVar5 = FUN_18004a458(plVar4,&local_38);
  if (lVar5 != 0) {
    puVar2 = FUN_18004a630(lVar5 + 8,local_40);
    if (puVar2 == (ulonglong *)0x0) {
      local_40[0] = 0xffffffff;
      puVar2 = FUN_18004a630(extraout_x15 + 8,local_40);
      if (puVar2 == (ulonglong *)0x0) goto LAB_18005d228;
    }
    uVar3 = *(undefined4 *)((longlong)puVar2 + 0x14);
  }
LAB_18005d228:
  LeaveCriticalSection((LPCRITICAL_SECTION)(plVar4 + 5));
  *(undefined4 *)(param_4 + 1) = uVar3;
  *(undefined4 *)(param_4 + 4) =
       *(undefined4 *)(&DAT_180065f98 + (longlong)*(int *)(param_2 + 0x34) * 4);
  return 1;
}

