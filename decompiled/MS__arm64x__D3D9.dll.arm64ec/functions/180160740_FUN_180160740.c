/*
 * FUN_180160740 at 180160740
 * undefined FUN_180160740(void)
 * Address ranges: 180160740-180160843
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180160740(undefined8 param_1,longlong *param_2)

{
  undefined *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  code *extraout_x11;
  code *extraout_x11_00;
  longlong lVar6;
  longlong local_50;
  longlong local_48;
  longlong lStack_40;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  lVar3 = *param_2;
  iVar2 = *(int *)(lVar3 + 0x10);
  if (iVar2 - 9U < 2) {
    uVar4 = 0;
    local_50 = 0;
    lVar6 = param_2[4];
    lVar3 = (ulonglong)*(uint *)(param_2 + 5) * 8;
    lStack_40 = (ulonglong)(*(uint *)(param_2 + 5) + 1) << 3;
    local_48 = lVar3;
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    iVar2 = (*extraout_x11)(lVar6,0,&local_48,&local_50);
    if (-1 < iVar2) {
      uVar4 = *(ulonglong *)(lVar3 + local_50);
      local_48 = 0;
      lStack_40 = 0;
      (*(code *)puVar1)(0x180224000);
      (*extraout_x11_00)(lVar6,0,&local_48);
    }
    cVar5 = *(char *)((longlong)param_2 + 0x3c);
    lVar3 = *param_2;
  }
  else if (iVar2 == 8) {
    cVar5 = '\x01';
    uVar4 = 1;
  }
  else {
    if (iVar2 != 0xb) {
      return;
    }
    cVar5 = *(char *)((longlong)param_2 + 0x3c);
    uVar4 = (ulonglong)(cVar5 == '\0');
  }
  FUN_18015ddc8(lVar3,uVar4,param_2[1],cVar5);
  return;
}

