/*
 * FUN_1800e93d8 at 1800e93d8
 * undefined FUN_1800e93d8(void)
 * Address ranges: 1800e93d8-1800e948f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e93d8(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong local_50;
  longlong local_48;
  longlong lStack_40;
  
  while( true ) {
    local_50 = 0;
    lVar4 = *(longlong *)(param_1 + 0xb40);
    uVar5 = 0;
    lVar1 = (ulonglong)*(uint *)(param_1 + 0xb50) * 8;
    plVar3 = *(longlong **)(lVar4 + 0x10);
    lStack_40 = (ulonglong)(*(uint *)(param_1 + 0xb50) + 1) << 3;
    local_48 = lVar1;
    iVar2 = (**(code **)(*plVar3 + 0x40))(plVar3,0,&local_48,&local_50);
    if (-1 < iVar2) {
      uVar5 = FUN_180001550(lVar1 + local_50,0,0);
      local_48 = 0;
      lStack_40 = 0;
      plVar3 = *(longlong **)(lVar4 + 0x10);
      (**(code **)(*plVar3 + 0x48))(plVar3,0,&local_48);
    }
    if (param_2 <= uVar5) break;
    DataMemoryBarrier(2,2);
    Yield();
  }
  return;
}

