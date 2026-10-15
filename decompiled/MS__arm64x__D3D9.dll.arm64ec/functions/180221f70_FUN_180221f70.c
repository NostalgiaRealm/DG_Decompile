/*
 * FUN_180221f70 at 180221f70
 * undefined FUN_180221f70(void)
 * Address ranges: 180221f70-180221fe7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180221f70(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uStack_a0;
  longlong lStack_98;
  ulonglong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  char local_50;
  char cStack_4f;
  
  uVar1 = thunk_FUN_180223978();
  param_1[0x7d] = uVar1;
  thunk_FUN_180223900(&local_78);
  local_78 = (local_78 * 10000) / 10000;
  thunk_FUN_18022375c(&lStack_70);
  thunk_FUN_180223900(&local_68);
  local_50 = '\0';
  cStack_4f = '\0';
  local_68 = (local_68 * 5) / 10000;
  lStack_60 = 0;
  if (*(char *)((longlong)param_1 + 0x206) == '\0') {
    do {
      thunk_FUN_1802238ec(*(undefined8 *)(param_1 + 0x20),0xffffffff);
      *(undefined1 *)((longlong)param_1 + 0x205) = 0;
      if (*(char *)((longlong)param_1 + 0x205) == '\0') {
        do {
          uVar3 = FUN_180222280(param_1);
          if ((uVar3 & 1) == 0) {
            if (*(char *)(param_1 + 0x81) == '\0') {
              if (*(char *)((longlong)param_1 + 0x206) == '\0') {
                goto LAB_1802221bc;
              }
              break;
            }
            thunk_FUN_18022375c(&lStack_98);
            if (local_78 < lStack_98 - lStack_70) {
              uStack_a0 = 0;
              uStack_88 = 0;
              uVar4 = thunk_FUN_1802239dc();
              iVar2 = thunk_FUN_1802239f0(uVar4,&uStack_a0,&uStack_88);
              if (iVar2 != 0) {
                if ((uStack_a0 - 1 & uStack_a0) != 0) {
                  if ((uStack_a0 == *(ulonglong *)(param_1 + 0x1c)) ||
                     (*(longlong *)(param_1 + 0x1a) == 0)) {
                    local_50 = '\0';
                    lStack_70 = lStack_98;
                  }
                  else {
                    local_50 = '\x01';
                    lStack_70 = lStack_98;
                  }
                  goto LAB_180222128;
                }
                *(undefined1 *)(param_1 + 0x81) = 0;
                iVar2 = FUN_180104210(param_1,1,0);
                while (iVar2 != 0) {
                  DataMemoryBarrier(2,2);
                  Yield();
                  iVar2 = FUN_180104210(param_1,1,0);
                }
                uVar3 = FUN_180222280(param_1);
                while ((uVar3 & 1) != 0) {
                  uVar3 = FUN_180222280(param_1);
                }
                *param_1 = 0;
              }
              lStack_70 = lStack_98;
            }
LAB_180222128:
            if (cStack_4f == '\0') {
              lStack_60 = lStack_98 + local_68;
              cStack_4f = '\x01';
            }
            if (lStack_60 <= lStack_98) {
              if ((*(char *)(param_1 + 0x81) != '\0') &&
                 (iVar2 = FUN_180104210(param_1,1,0), iVar2 == 0)) {
                *(undefined1 *)((longlong)param_1 + 0x205) = param_1[0x80] == 0;
                *param_1 = 0;
              }
              cStack_4f = '\0';
            }
            if (local_50 == '\0') {
              DataMemoryBarrier(2,2);
              Yield();
            }
            else {
              thunk_FUN_180223a7c();
            }
          }
        } while (*(char *)((longlong)param_1 + 0x205) == '\0');
      }
LAB_180222244:
    } while (*(char *)((longlong)param_1 + 0x206) == '\0');
  }
  return;
LAB_1802221bc:
  thunk_FUN_1802237c0(1000);
  uStack_90 = 0;
  uStack_80 = 0;
  uVar4 = thunk_FUN_1802239dc();
  iVar2 = thunk_FUN_1802239f0(uVar4,&uStack_90,&uStack_80);
  if ((iVar2 == 0) || ((uStack_90 - 1 & uStack_90) == 0)) goto LAB_1802221f0;
  iVar2 = FUN_180104210(param_1,1,0);
  while (iVar2 != 0) {
    DataMemoryBarrier(2,2);
    Yield();
    iVar2 = FUN_180104210(param_1,1,0);
  }
  thunk_FUN_180223874(*(undefined8 *)(param_1 + 0x20));
  *(undefined1 *)(param_1 + 0x81) = 1;
  *(undefined1 *)((longlong)param_1 + 0x205) = 0;
  *param_1 = 0;
  goto LAB_180222244;
LAB_1802221f0:
  if (*(char *)((longlong)param_1 + 0x206) != '\0') goto LAB_180222244;
  goto LAB_1802221bc;
}

