/*
 * FUN_1801a7168 at 1801a7168
 * undefined FUN_1801a7168(void)
 * Address ranges: 1801a7168-1801a7253
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1801a7168(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                      int param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulonglong uVar1;
  longlong lVar2;
  int *piVar3;
  code *extraout_x11;
  longlong local_50;
  int local_48;
  undefined8 local_44;
  undefined8 local_3c;
  
  lVar2 = FUN_18021a1e8(*(longlong *)((longlong)param_1 + 0xc) + 0x18b8,param_2,0);
  if (lVar2 != 0) goto LAB_1801a7214;
  piVar3 = (int *)0x0;
  if (param_5 != 0) {
    local_48 = param_5;
    if ((*(uint *)(param_4 + 0x30) & 1) == 0) {
      if ((*(uint *)(param_4 + 0x30) >> 1 & 1) == 0) goto LAB_1801a71e0;
      uVar1 = (ulonglong)local_44 >> 0x20;
      local_44 = CONCAT44((uint)uVar1 & 0xffffff00,0x3f800000);
    }
    else {
      local_3c = 0;
      local_44 = 0;
    }
    piVar3 = &local_48;
  }
LAB_1801a71e0:
  local_50 = 0;
  FUN_18020d338(*param_1 + 0x6d0,(int)param_1[1],param_2,0,param_4,0,piVar3,param_8,&local_50);
  lVar2 = local_50;
  if (local_50 == 0) {
    return 0;
  }
LAB_1801a7214:
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(lVar2);
  return lVar2;
}

