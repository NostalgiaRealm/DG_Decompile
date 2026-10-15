/*
 * FUN_180101714 at 180101714
 * undefined FUN_180101714(void)
 * Address ranges: 180101714-180101ae3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180101714(void)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *unaff_x19;
  longlong *plVar4;
  ulonglong in_stack_00000010;
  longlong in_stack_00000018;
  ulonglong in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  longlong in_stack_00000038;
  longlong in_stack_00000040;
  longlong in_stack_00000048;
  longlong in_stack_00000050;
  char cStack0000000000000060;
  char cStack0000000000000061;
  
  do {
    (*__imp_KERNEL32_dll_WaitForSingleObject)(*(undefined8 *)(unaff_x19 + 0x20),0xffffffff);
    *(undefined1 *)((longlong)unaff_x19 + 0x205) = 0;
    cVar1 = *(char *)((longlong)unaff_x19 + 0x205);
    while (cVar1 == '\0') {
      plVar4 = *(longlong **)(unaff_x19 + (ulonglong)(uint)unaff_x19[0x7e] * 10 + 0x22);
      if (*plVar4 == 0) {
        if (unaff_x19[0x7e] == unaff_x19[0x7f]) {
          if (*(char *)(unaff_x19 + 0x81) == '\0') {
            if (*(char *)((longlong)unaff_x19 + 0x206) == '\0') goto LAB_180101a38;
            break;
          }
          (*__imp_KERNEL32_dll_QueryPerformanceCounter)(&stack0x00000018);
          if (in_stack_00000038 < in_stack_00000018 - in_stack_00000040) {
            in_stack_00000010 = 0;
            in_stack_00000028 = 0;
            uVar3 = (*__imp_KERNEL32_dll_GetCurrentProcess)();
            iVar2 = (*__imp_KERNEL32_dll_GetProcessAffinityMask)
                              (uVar3,&stack0x00000010,&stack0x00000028);
            if (iVar2 != 0) {
              if ((in_stack_00000010 - 1 & in_stack_00000010) != 0) {
                if ((in_stack_00000010 == *(ulonglong *)(unaff_x19 + 0x1c)) ||
                   (*(longlong *)(unaff_x19 + 0x1a) == 0)) {
                  cStack0000000000000060 = '\0';
                  in_stack_00000040 = in_stack_00000018;
                }
                else {
                  cStack0000000000000060 = '\x01';
                  in_stack_00000040 = in_stack_00000018;
                }
                goto LAB_18010199c;
              }
              *(undefined1 *)(unaff_x19 + 0x81) = 0;
              iVar2 = FUN_180001510();
              while (iVar2 != 0) {
                DataMemoryBarrier(2,2);
                Yield();
                iVar2 = FUN_180001510();
              }
              while( true ) {
                while( true ) {
                  plVar4 = *(longlong **)(unaff_x19 + (ulonglong)(uint)unaff_x19[0x7e] * 10 + 0x22);
                  if (*plVar4 == 0) break;
                  (*(code *)*plVar4)(plVar4 + 2);
                  *(longlong *)(unaff_x19 + (ulonglong)(uint)unaff_x19[0x7e] * 10 + 0x22) =
                       (longlong)plVar4 + plVar4[1] + 0x10;
                  iVar2 = FUN_180001590(unaff_x19 + 0x80);
                  if (iVar2 == 0) {
                    (**(code **)(unaff_x19 + 0x14))(unaff_x19 + 0x80);
                  }
                }
                if (unaff_x19[0x7e] == unaff_x19[0x7f]) break;
                (*__imp_KERNEL32_dll_SetEvent)
                          (*(undefined8 *)(unaff_x19 + (ulonglong)(uint)unaff_x19[0x7e] * 10 + 0x2a)
                          );
                unaff_x19[0x7e] = unaff_x19[0x7e] + 1 & 7;
                *(undefined8 *)(unaff_x19 + (ulonglong)(uint)unaff_x19[0x7e] * 10 + 0x22) =
                     *(undefined8 *)(unaff_x19 + (ulonglong)(uint)unaff_x19[0x7e] * 10 + 0x26);
              }
              *unaff_x19 = 0;
            }
            in_stack_00000040 = in_stack_00000018;
          }
LAB_18010199c:
          if (cStack0000000000000061 == '\0') {
            cStack0000000000000061 = '\x01';
            in_stack_00000050 = in_stack_00000018 + in_stack_00000048;
          }
          if (in_stack_00000050 <= in_stack_00000018) {
            if ((*(char *)(unaff_x19 + 0x81) != '\0') && (iVar2 = FUN_180001510(), iVar2 == 0)) {
              *(bool *)((longlong)unaff_x19 + 0x205) = unaff_x19[0x80] == 0;
              *unaff_x19 = 0;
            }
            cStack0000000000000061 = '\0';
          }
          if (cStack0000000000000060 == '\0') {
            DataMemoryBarrier(2,2);
            Yield();
          }
          else {
            (*__imp_KERNEL32_dll_SwitchToThread)();
          }
        }
        else {
          (*__imp_KERNEL32_dll_SetEvent)
                    (*(undefined8 *)(unaff_x19 + (ulonglong)(uint)unaff_x19[0x7e] * 10 + 0x2a));
          unaff_x19[0x7e] = unaff_x19[0x7e] + 1 & 7;
          *(undefined8 *)(unaff_x19 + (ulonglong)(uint)unaff_x19[0x7e] * 10 + 0x22) =
               *(undefined8 *)(unaff_x19 + (ulonglong)(uint)unaff_x19[0x7e] * 10 + 0x26);
        }
      }
      else {
        (*(code *)*plVar4)(plVar4 + 2);
        *(longlong *)(unaff_x19 + (ulonglong)(uint)unaff_x19[0x7e] * 10 + 0x22) =
             (longlong)plVar4 + plVar4[1] + 0x10;
        iVar2 = FUN_180001590(unaff_x19 + 0x80);
        if (iVar2 == 0) {
          (**(code **)(unaff_x19 + 0x14))(unaff_x19 + 0x80);
        }
      }
      cVar1 = *(char *)((longlong)unaff_x19 + 0x205);
    }
LAB_180101ad0:
    if (*(char *)((longlong)unaff_x19 + 0x206) != '\0') {
      return 0;
    }
  } while( true );
LAB_180101a38:
  (*__imp_KERNEL32_dll_Sleep)(1000);
  in_stack_00000020 = 0;
  in_stack_00000030 = 0;
  uVar3 = (*__imp_KERNEL32_dll_GetCurrentProcess)();
  iVar2 = (*__imp_KERNEL32_dll_GetProcessAffinityMask)(uVar3,&stack0x00000020,&stack0x00000030);
  if ((iVar2 == 0) || ((in_stack_00000020 - 1 & in_stack_00000020) == 0)) goto LAB_180101a78;
  iVar2 = FUN_180001510();
  while (iVar2 != 0) {
    DataMemoryBarrier(2,2);
    Yield();
    iVar2 = FUN_180001510();
  }
  (*__imp_KERNEL32_dll_SetEvent)(*(undefined8 *)(unaff_x19 + 0x20));
  *(undefined1 *)(unaff_x19 + 0x81) = 1;
  *(undefined1 *)((longlong)unaff_x19 + 0x205) = 0;
  *unaff_x19 = 0;
  goto LAB_180101ad0;
LAB_180101a78:
  if (*(char *)((longlong)unaff_x19 + 0x206) != '\0') goto LAB_180101ad0;
  goto LAB_180101a38;
}

