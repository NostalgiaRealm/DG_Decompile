/*
 * FUN_180221fe8 at 180221fe8
 * undefined FUN_180221fe8(void)
 * Address ranges: 180221fe8-18022225b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180221fe8(void)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined4 *unaff_x19;
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
    thunk_FUN_1802238ec(*(undefined8 *)(unaff_x19 + 0x20),0xffffffff);
    *(undefined1 *)((longlong)unaff_x19 + 0x205) = 0;
    if (*(char *)((longlong)unaff_x19 + 0x205) == '\0') {
      do {
        uVar2 = FUN_180222280();
        if ((uVar2 & 1) == 0) {
          if (*(char *)(unaff_x19 + 0x81) == '\0') {
            if (*(char *)((longlong)unaff_x19 + 0x206) == '\0') {
              goto LAB_1802221bc;
            }
            break;
          }
          thunk_FUN_18022375c(&stack0x00000018);
          if (in_stack_00000038 < in_stack_00000018 - in_stack_00000040) {
            in_stack_00000010 = 0;
            in_stack_00000028 = 0;
            uVar3 = thunk_FUN_1802239dc();
            iVar1 = thunk_FUN_1802239f0(uVar3,&stack0x00000010,&stack0x00000028);
            if (iVar1 != 0) {
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
                goto LAB_180222128;
              }
              *(undefined1 *)(unaff_x19 + 0x81) = 0;
              iVar1 = FUN_180104210();
              while (iVar1 != 0) {
                DataMemoryBarrier(2,2);
                Yield();
                iVar1 = FUN_180104210();
              }
              uVar2 = FUN_180222280();
              while ((uVar2 & 1) != 0) {
                uVar2 = FUN_180222280();
              }
              *unaff_x19 = 0;
            }
            in_stack_00000040 = in_stack_00000018;
          }
LAB_180222128:
          if (cStack0000000000000061 == '\0') {
            in_stack_00000050 = in_stack_00000018 + in_stack_00000048;
            cStack0000000000000061 = '\x01';
          }
          if (in_stack_00000050 <= in_stack_00000018) {
            if ((*(char *)(unaff_x19 + 0x81) != '\0') && (iVar1 = FUN_180104210(), iVar1 == 0)) {
              *(undefined1 *)((longlong)unaff_x19 + 0x205) = unaff_x19[0x80] == 0;
              *unaff_x19 = 0;
            }
            cStack0000000000000061 = '\0';
          }
          if (cStack0000000000000060 == '\0') {
            DataMemoryBarrier(2,2);
            Yield();
          }
          else {
            thunk_FUN_180223a7c();
          }
        }
      } while (*(char *)((longlong)unaff_x19 + 0x205) == '\0');
    }
LAB_180222244:
    if (*(char *)((longlong)unaff_x19 + 0x206) != '\0') {
      return;
    }
  } while( true );
LAB_1802221bc:
  thunk_FUN_1802237c0(1000);
  in_stack_00000020 = 0;
  in_stack_00000030 = 0;
  uVar3 = thunk_FUN_1802239dc();
  iVar1 = thunk_FUN_1802239f0(uVar3,&stack0x00000020,&stack0x00000030);
  if ((iVar1 == 0) || ((in_stack_00000020 - 1 & in_stack_00000020) == 0)) goto LAB_1802221f0;
  iVar1 = FUN_180104210();
  while (iVar1 != 0) {
    DataMemoryBarrier(2,2);
    Yield();
    iVar1 = FUN_180104210();
  }
  thunk_FUN_180223874(*(undefined8 *)(unaff_x19 + 0x20));
  *(undefined1 *)(unaff_x19 + 0x81) = 1;
  *(undefined1 *)((longlong)unaff_x19 + 0x205) = 0;
  *unaff_x19 = 0;
  goto LAB_180222244;
LAB_1802221f0:
  if (*(char *)((longlong)unaff_x19 + 0x206) != '\0') goto LAB_180222244;
  goto LAB_1802221bc;
}

