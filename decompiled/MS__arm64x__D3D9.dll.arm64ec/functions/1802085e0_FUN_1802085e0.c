/*
 * FUN_1802085e0 at 1802085e0
 * undefined FUN_1802085e0(void)
 * Address ranges: 1802085e0-1802086bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1802085e0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  code *extraout_x11;
  code *extraout_x11_00;
  ulonglong uVar5;
  longlong local_60;
  longlong local_58;
  longlong lStack_50;
  
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  while( true ) {
    local_60 = 0;
    uVar5 = 0;
    lVar1 = (ulonglong)*(uint *)(param_1 + 0xb50) * 8;
    lStack_50 = (ulonglong)(*(uint *)(param_1 + 0xb50) + 1) << 3;
    local_58 = lVar1;
    uVar4 = (*(code *)puVar2)();
    iVar3 = (*extraout_x11)(uVar4,0,&local_58,&local_60);
    if (-1 < iVar3) {
      uVar5 = FUN_180104270(lVar1 + local_60,0,0);
      local_58 = 0;
      lStack_50 = 0;
      uVar4 = (*(code *)puVar2)(0x180224000);
      (*extraout_x11_00)(uVar4,0,&local_58);
    }
    if (param_2 <= uVar5) break;
    DataMemoryBarrier(2,2);
    Yield();
  }
  return;
}

