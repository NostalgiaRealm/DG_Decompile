/*
 * FUN_180221bc0 at 180221bc0
 * undefined FUN_180221bc0(void)
 * Address ranges: 180221bc0-180221bc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_180221bc0(undefined4 *param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if (*(char *)((longlong)param_1 + 0x207) != '\0') goto LAB_180221e44;
  param_1[0x7c] = param_2 << 10;
  param_1[0x7d] = 0;
  *(undefined1 *)((longlong)param_1 + 0x205) = 1;
  *(undefined1 *)((longlong)param_1 + 0x206) = 0;
  param_1[0x84] = 0;
  *(undefined8 *)(param_1 + 0x82) = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 0x81) = 1;
  uVar2 = thunk_FUN_18022398c(s_lbKernelBase_dll_1802290fe + 2);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  uVar2 = thunk_FUN_18022398c(s_Kernel32_dll_180229110);
  *(undefined8 *)(param_1 + 0x12) = uVar2;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    uVar2 = thunk_FUN_180223928(*(longlong *)(param_1 + 0x10),s_WakeByAddressAll_180229120);
    *(undefined8 *)(param_1 + 0x14) = uVar2;
    lVar3 = thunk_FUN_180223928(*(undefined8 *)(param_1 + 0x10),s_WaitOnAddress_180229138);
    *(longlong *)(param_1 + 0x16) = lVar3;
    if ((*(longlong *)(param_1 + 0x14) != 0) && (lVar3 != 0)) {
      uVar6 = 0;
      do {
        lVar3 = FUN_1802229a8(param_1[0x7c] + 0x10);
        *(longlong *)(param_1 + uVar6 * 10 + 0x28) = lVar3;
        if (lVar3 == 0) {
LAB_180221ce4:
          *(undefined8 *)(param_1 + uVar6 * 10 + 0x24) = 0;
          *(undefined8 *)(param_1 + uVar6 * 10 + 0x22) = 0;
          *(undefined8 *)(param_1 + uVar6 * 10 + 0x28) = 0;
          *(undefined8 *)(param_1 + uVar6 * 10 + 0x26) = 0;
          *(undefined8 *)(param_1 + uVar6 * 10 + 0x2a) = 0;
          break;
        }
        puVar4 = (undefined8 *)(lVar3 + 0xfU & 0xfffffffffffffff0);
        *(undefined8 **)(param_1 + uVar6 * 10 + 0x26) = puVar4;
        puVar4[1] = 0;
        *puVar4 = 0;
        puVar4[2] = 0;
        *(undefined8 *)(param_1 + uVar6 * 10 + 0x22) = *(undefined8 *)(param_1 + uVar6 * 10 + 0x26);
        *(undefined8 *)(param_1 + uVar6 * 10 + 0x24) = *(undefined8 *)(param_1 + uVar6 * 10 + 0x26);
        lVar3 = thunk_FUN_180223888(0,1,1,0);
        *(longlong *)(param_1 + uVar6 * 10 + 0x2a) = lVar3;
        if (lVar3 == 0) {
          FUN_1802229d8(*(undefined8 *)(param_1 + uVar6 * 10 + 0x26));
          goto LAB_180221ce4;
        }
        uVar1 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar1;
      } while (uVar1 < 8);
      uVar5 = (uint)uVar6;
      uVar1 = uVar5;
      if (uVar5 != 8) goto joined_r0x000180221dac;
      lVar3 = FUN_1802229a8(param_1[0x7c] + 0x10);
      *(longlong *)(param_1 + 0x78) = lVar3;
      if (lVar3 == 0) {
LAB_180221db8:
        do {
          uVar1 = (int)uVar6 - 1;
          uVar6 = (ulonglong)uVar1;
          thunk_FUN_180223824(*(undefined8 *)(param_1 + uVar6 * 10 + 0x2a));
          FUN_1802229d8(*(undefined8 *)(param_1 + uVar6 * 10 + 0x28));
          puVar4 = (undefined8 *)(param_1 + uVar6 * 10 + 0x22);
          puVar4[1] = 0;
          *puVar4 = 0;
          puVar4[3] = 0;
          puVar4[2] = 0;
          puVar4[4] = 0;
          uVar5 = 0;
joined_r0x000180221dac:
        } while (uVar1 != 0);
        thunk_FUN_1802236bc(*(undefined8 *)(param_1 + 0x10));
        *(undefined8 *)(param_1 + 0x14) = 0;
        *(undefined8 *)(param_1 + 0x16) = 0;
        thunk_FUN_1802236bc(*(undefined8 *)(param_1 + 0x12));
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined8 *)(param_1 + 0x12) = 0;
      }
      else {
        puVar4 = (undefined8 *)(lVar3 + 0xfU & 0xfffffffffffffff0);
        *(undefined8 **)(param_1 + 0x76) = puVar4;
        puVar4[1] = 0;
        *puVar4 = 0;
        puVar4[2] = 0;
        lVar3 = thunk_FUN_1802239c8(0,0,0,0);
        *(longlong *)(param_1 + 0x20) = lVar3;
        if (lVar3 == 0) {
LAB_180221d90:
          FUN_1802229d8(*(undefined8 *)(param_1 + 0x78));
          *(undefined8 *)(param_1 + 0x74) = 0;
          *(undefined8 *)(param_1 + 0x72) = 0;
          *(undefined8 *)(param_1 + 0x78) = 0;
          *(undefined8 *)(param_1 + 0x76) = 0;
          *(undefined8 *)(param_1 + 0x7a) = 0;
          goto LAB_180221db8;
        }
        lVar3 = thunk_FUN_1802239b4(0);
        uVar1 = param_3 << 10;
        if ((ulonglong)uVar1 <= *(ulonglong *)(lVar3 + *(int *)(lVar3 + 0x3c) + 0x60)) {
          uVar1 = 0;
        }
        lVar3 = thunk_FUN_18022389c(0,uVar1,FUN_1802223b0,param_1,0,0);
        *(longlong *)(param_1 + 0x1e) = lVar3;
        if (lVar3 == 0) {
          thunk_FUN_180223824(*(undefined8 *)(param_1 + 0x20));
          goto LAB_180221d90;
        }
      }
      *(bool *)((longlong)param_1 + 0x207) = uVar5 == 8;
    }
  }
  if (*(longlong *)(param_1 + 0x12) != 0) {
    uVar2 = thunk_FUN_180223928(*(longlong *)(param_1 + 0x12),s_GetSystemCpuSetInformation_180229148
                               );
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    FUN_1802219f0(param_1);
  }
LAB_180221e44:
  return *(undefined1 *)((longlong)param_1 + 0x207);
}

