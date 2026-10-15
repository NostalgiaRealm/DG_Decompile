/*
 * FUN_1800e6b68 at 1800e6b68
 * undefined FUN_1800e6b68(void)
 * Address ranges: 1800e6b68-1800e6c8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e6b68(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong local_40 [2];
  
  if ((param_2 != 0) && (0 < *(longlong *)(param_2 + 0xd58))) {
    (*__imp_KERNEL32_dll_QueryPerformanceCounter)(local_40);
    lVar6 = *(longlong *)(param_2 + 0xd60);
    if ((0 < lVar6) && (lVar4 = *(longlong *)(param_2 + 0xd58), local_40[0] - lVar6 < lVar4)) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x6a0);
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(0xf004,0x1800e6bec);
          (*pcVar2)();
        }
        uVar1 = 0;
        if (lVar5 != 0) {
          uVar1 = (((lVar6 + lVar4) - local_40[0]) * 10) / lVar5;
        }
        if ((0x10 < (uint)uVar1) && (*(code **)(param_1 + 0x300) != (code *)0x0)) {
          if (*(char *)(param_1 + 0x314) == '\0') {
            iVar3 = (**(code **)(param_1 + 0x300))(1);
            if (iVar3 == 0) {
              *(undefined1 *)(param_1 + 0x314) = 1;
            }
            else {
              *(undefined8 *)(param_1 + 0x300) = 0;
              *(undefined8 *)(param_1 + 0x308) = 0;
            }
          }
          iVar7 = (int)((uVar1 & 0xffffffff) / 10);
          iVar3 = iVar7 + -1;
          if (5 < (uint)uVar1 + (int)((uVar1 & 0xffffffff) / 10) * -10) {
            iVar3 = iVar7;
          }
          (*__imp_KERNEL32_dll_Sleep)(iVar3);
        }
        DataMemoryBarrier(2,2);
        Yield();
        (*__imp_KERNEL32_dll_QueryPerformanceCounter)(local_40);
        lVar4 = *(longlong *)(param_2 + 0xd58);
        lVar6 = *(longlong *)(param_2 + 0xd60);
      } while (local_40[0] - lVar6 < lVar4);
    }
    *(longlong *)(param_2 + 0xd60) = local_40[0];
  }
  return;
}

