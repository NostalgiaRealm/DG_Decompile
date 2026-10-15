/*
 * FUN_18020d0d0 at 18020d0d0
 * undefined FUN_18020d0d0(void)
 * Address ranges: 18020d0d0-18020d15f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_18020d0d0(longlong param_1,longlong *param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  code *extraout_x11;
  undefined1 auStack_30 [16];
  
  iVar1 = *(int *)(param_1 + 0x1c);
  *param_2 = 0;
  if (iVar1 != 0) {
    uVar2 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    plVar3 = (longlong *)(*extraout_x11)(uVar2,auStack_30);
    *param_2 = *plVar3 + (ulonglong)(((param_3 & 0xffff) + param_4) * *(int *)(param_1 + 0x20));
  }
  return param_2;
}

