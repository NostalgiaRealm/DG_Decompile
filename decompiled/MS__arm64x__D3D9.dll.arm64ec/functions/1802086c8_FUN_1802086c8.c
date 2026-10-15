/*
 * FUN_1802086c8 at 1802086c8
 * undefined FUN_1802086c8(void)
 * Address ranges: 1802086c8-18020889f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1802086c8(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  code *extraout_x11;
  undefined8 local_30 [2];
  
  *param_3 = 0;
  iVar2 = 0;
  iVar1 = FUN_180222c00(param_2,&DAT_180229438,0x10);
  if ((((iVar1 == 0) || (iVar1 = FUN_180222c00(param_2,&DAT_180229328,0x10), iVar1 == 0)) ||
      (iVar1 = FUN_180222c00(param_2,&DAT_180229338,0x10), iVar1 == 0)) ||
     ((iVar1 = FUN_180222c00(param_2,&DAT_1802293e8,0x10), iVar1 == 0 ||
      (iVar1 = FUN_180222c00(param_2,&DAT_1802293f8,0x10), iVar1 == 0)))) {
    *param_3 = param_1;
    FUN_1802088a8(param_1);
  }
  else {
    iVar1 = FUN_180222c00(param_2,&DAT_180229408,0x10);
    if (((((iVar1 == 0) && (*(int *)(param_1 + 0xb60) != 0)) ||
         ((iVar1 = FUN_180222c00(param_2,&DAT_180229418,0x10), iVar1 == 0 &&
          (1 < *(uint *)(param_1 + 0xb60))))) ||
        ((iVar1 = FUN_180222c00(param_2,&DAT_180229358,0x10), iVar1 == 0 &&
         (2 < *(uint *)(param_1 + 0xb60))))) ||
       ((((iVar1 = FUN_180222c00(param_2,&DAT_180229368,0x10), iVar1 == 0 &&
          (3 < *(uint *)(param_1 + 0xb60))) ||
         ((iVar1 = FUN_180222c00(param_2,&DAT_1802293b8,0x10), iVar1 == 0 &&
          (4 < *(uint *)(param_1 + 0xb60))))) ||
        ((iVar1 = FUN_180222c00(param_2,&DAT_1802293c8,0x10), iVar1 == 0 &&
         (5 < *(uint *)(param_1 + 0xb60))))))) {
      local_30[0] = 0;
      uVar3 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      iVar2 = (*extraout_x11)(uVar3,param_2,local_30);
      if (-1 < iVar2) {
        *param_3 = param_1;
      }
    }
    else {
      iVar2 = -0x7fffbffe;
    }
  }
  return iVar2;
}

