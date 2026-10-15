/*
 * FUN_18021b5f0 at 18021b5f0
 * undefined FUN_18021b5f0(void)
 * Address ranges: 18021b5f0-18021b72f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18021b5f0(longlong param_1,longlong param_2,uint param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 local_40 [2];
  undefined8 local_38;
  
  param_4[1] = 0;
  *param_4 = 0;
  param_4[3] = 0;
  param_4[2] = 0;
  param_4[4] = 0;
  if ((1 < param_3) ||
     (uVar1 = FUN_180203380(*(undefined8 *)(param_1 + 8),param_2,param_3 + 1), (uVar1 & 1) == 0)) {
    return 0;
  }
  lVar5 = *(longlong *)(param_1 + 8) + (ulonglong)*(uint *)(param_2 + 0x10) * 0x1ac0;
  *param_4 = *(undefined8 *)(param_2 + (ulonglong)param_3 * 8 + 0xda0);
  puVar2 = (undefined8 *)
           FUN_18020d168(*(undefined8 *)(lVar5 + 0x2230),&local_38,*(undefined4 *)(param_2 + 0xdb0),
                         param_3);
  param_4[2] = *puVar2;
  puVar2 = (undefined8 *)
           FUN_18020d168(*(undefined8 *)(lVar5 + 0x2238),&local_38,*(undefined4 *)(param_2 + 0xdb4),
                         param_3);
  local_40[0] = 0;
  param_4[3] = *puVar2;
  local_38 = *param_4;
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1b500);
  thunk_FUN_1802236f8(lVar6 + 0x28);
  uVar4 = 0;
  lVar5 = FUN_18020ec30(lVar6,&local_38);
  if (lVar5 != 0) {
    lVar3 = FUN_18020ee08(lVar5 + 8,local_40);
    if (lVar3 == 0) {
      local_40[0] = 0xffffffff;
      lVar3 = FUN_18020ee08(lVar5 + 8,local_40);
      if (lVar3 == 0) goto LAB_18021b6f0;
    }
    uVar4 = *(undefined4 *)(lVar3 + 0x14);
  }
LAB_18021b6f0:
  thunk_FUN_18022370c(lVar6 + 0x28);
  *(undefined4 *)(param_4 + 1) = uVar4;
  *(undefined4 *)(param_4 + 4) =
       *(undefined4 *)(&DAT_1802389d0 + (longlong)*(int *)(param_2 + 0x34) * 4);
  return 1;
}

