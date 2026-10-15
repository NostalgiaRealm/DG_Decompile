/*
 * FUN_180038140 at 180038140
 * undefined FUN_180038140(void)
 * Address ranges: 180038140-1800381d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180038140(uint param_1,ulonglong param_2)

{
  ulonglong uVar1;
  undefined8 *unaff_x19;
  ulonglong unaff_x20;
  longlong lVar2;
  longlong lVar3;
  
  do {
    lVar2 = unaff_x19[0xb];
    lVar3 = (ulonglong)param_1 * (param_2 & 0xffffffff);
    if (*(longlong *)(lVar3 + lVar2 + 0x20) != 0) {
      do {
        uVar1 = (**(code **)(**(longlong **)(lVar2 + lVar3 + 0x20) + 0x40))();
        if (*(ulonglong *)(lVar2 + lVar3 + 0x28) <= uVar1) break;
        DataMemoryBarrier(2,2);
        Yield();
        lVar2 = unaff_x19[0xb];
      } while (*(longlong *)(lVar3 + 0x20 + lVar2) != 0);
    }
    (**(code **)(**(longlong **)(lVar3 + unaff_x19[0xb] + 0x10) + 0x10))();
    param_1 = param_1 + 1;
    if (*(uint *)(unaff_x19 + 0xc) <= param_1) {
      *unaff_x19 = &PTR_FUN_18023bf10;
      unaff_x19[8] = &PTR_D3DPERF_GetStatus_18023bf20;
      thunk_FUN_180102fc0(unaff_x19[0xb]);
      unaff_x19[8] = &PTR_D3DPERF_GetStatus_18023bf20;
      *unaff_x19 = &PTR_FUN_18023bfe8;
      if ((unaff_x20 & 1) != 0) {
        FUN_180102fc0();
      }
      return;
    }
  } while( true );
}

