/*
 * FUN_1801464e4 at 1801464e4
 * undefined FUN_1801464e4(void)
 * Address ranges: 1801464e4-1801465a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801464e4(code *param_1,ulonglong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *extraout_x11;
  code *extraout_x11_00;
  uint unaff_w19;
  longlong lVar4;
  undefined8 *unaff_x20;
  uint uStack0000000000000010;
  
  param_2 = param_2 & 0xffffffff;
  uStack0000000000000010 = unaff_w19;
  do {
    lVar4 = unaff_x20[0xb];
    lVar3 = param_2 * 0x30;
    if (*(longlong *)(lVar3 + lVar4 + 0x20) != 0) {
      do {
        (*param_1)();
        uVar2 = (*extraout_x11)();
        if (*(ulonglong *)(lVar4 + lVar3 + 0x28) <= uVar2) break;
        DataMemoryBarrier(2,2);
        Yield();
        lVar4 = unaff_x20[0xb];
      } while (*(longlong *)(lVar3 + 0x20 + lVar4) != 0);
    }
    (*param_1)(0x180224000);
    (*extraout_x11_00)();
    uVar1 = (int)param_2 + 1;
    param_2 = (ulonglong)uVar1;
    if (*(uint *)(unaff_x20 + 0xc) <= uVar1) {
      *unaff_x20 = &PTR_FUN_1802390d0;
      unaff_x20[8] = &PTR_D3DPERF_GetStatus_native_180239038;
      FUN_1802229d8(unaff_x20[0xb]);
      unaff_x20[8] = &PTR_D3DPERF_GetStatus_native_180239038;
      *unaff_x20 = &PTR_FUN_180239068;
      if ((uStack0000000000000010 & 1) != 0) {
        FUN_1802229d8();
      }
      return;
    }
  } while( true );
}

