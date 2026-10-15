/*
 * FUN_18012e8b8 at 18012e8b8
 * undefined FUN_18012e8b8(void)
 * Address ranges: 18012e8b8-18012e97f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18012e8b8(longlong param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  undefined *puVar2;
  char cVar3;
  ulonglong uVar4;
  int iVar5;
  code *extraout_x11;
  code *extraout_x11_00;
  
  *param_2 = 0;
  *param_3 = 0;
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  cVar3 = (*extraout_x11)();
  if (cVar3 != '\0') {
    (*(code *)puVar2)(0x180224000);
    uVar4 = (*extraout_x11_00)(param_1);
    if (*(int *)(param_1 + 0x14) == 1) {
      *param_2 = *(int *)(&DAT_18024e9b8 + (uVar4 & 0xffffffff) * 0x4b);
      iVar5 = *(int *)((longlong)&DAT_18024e9b8 + (uVar4 & 0xffffffff) * 600 + 4);
    }
    else {
      lVar1 = (uVar4 & 0xffffffff) * 600;
      iVar5 = *(int *)(&DAT_18024ea00 + lVar1);
      *param_2 = *(int *)(&DAT_18024e9ec + lVar1) * *(int *)(&DAT_18024e9fc + lVar1);
      iVar5 = *(int *)(&DAT_18024e9f0 + lVar1) * iVar5;
    }
    *param_3 = iVar5;
  }
  return;
}

