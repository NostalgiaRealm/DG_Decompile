/*
 * FUN_180204018 at 180204018
 * undefined FUN_180204018(void)
 * Address ranges: 180204018-18020413b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180204018(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined *puVar2;
  code *pcVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  code *extraout_x11;
  longlong local_40 [2];
  
  if ((param_2 != 0) && (0 < *(longlong *)(param_2 + 0xd58))) {
    thunk_FUN_18022375c(local_40);
    puVar2 = __hybrid_os_arm64x_dispatch_icall;
    lVar7 = *(longlong *)(param_2 + 0xd60);
    if ((0 < lVar7) && (lVar5 = *(longlong *)(param_2 + 0xd58), local_40[0] - lVar7 < lVar5)) {
      do {
        lVar6 = *(longlong *)(param_1 + 0x6a0);
        if (lVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x180204098);
          (*pcVar3)();
        }
        uVar1 = 0;
        if (lVar6 != 0) {
          uVar1 = (((lVar7 + lVar5) - local_40[0]) * 10) / lVar6;
        }
        if ((0x10 < (uint)uVar1) && (*(longlong *)(param_1 + 0x300) != 0)) {
          if (*(char *)(param_1 + 0x314) == '\0') {
            (*(code *)puVar2)();
            iVar4 = (*extraout_x11)(1);
            if (iVar4 == 0) {
              *(undefined1 *)(param_1 + 0x314) = 1;
            }
            else {
              *(undefined8 *)(param_1 + 0x300) = 0;
              *(undefined8 *)(param_1 + 0x308) = 0;
            }
          }
          iVar8 = (int)((uVar1 & 0xffffffff) / 10);
          iVar4 = iVar8 + -1;
          if (5 < (uint)uVar1 + (int)((uVar1 & 0xffffffff) / 10) * -10) {
            iVar4 = iVar8;
          }
          thunk_FUN_1802237c0(iVar4);
        }
        DataMemoryBarrier(2,2);
        Yield();
        thunk_FUN_18022375c(local_40);
        lVar5 = *(longlong *)(param_2 + 0xd58);
        lVar7 = *(longlong *)(param_2 + 0xd60);
      } while (local_40[0] - lVar7 < lVar5);
    }
    *(longlong *)(param_2 + 0xd60) = local_40[0];
  }
  return;
}

