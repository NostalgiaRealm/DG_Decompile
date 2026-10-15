/*
 * FUN_180101b08 at 180101b08
 * undefined FUN_180101b08(void)
 * Address ranges: 180101b08-180101de7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_180101b08(undefined4 *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  
  *(undefined8 *)(param_1 + 0x7c) = 0x4000;
  *(undefined1 *)((longlong)param_1 + 0x205) = 1;
  *(undefined1 *)((longlong)param_1 + 0x206) = 0;
  param_1[0x84] = 0;
  *(undefined8 *)(param_1 + 0x82) = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 0x81) = 1;
  uVar3 = (*__imp_KERNEL32_dll_LoadLibraryA)(s_KernelBase_dll_18023c828);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  uVar3 = (*__imp_KERNEL32_dll_LoadLibraryA)(s_Kernel32_dll_18023c838);
  *(undefined8 *)(param_1 + 0x12) = uVar3;
  if (*(longlong *)(param_1 + 0x10) == 0) goto LAB_180101da0;
  uVar3 = (*__imp_KERNEL32_dll_GetProcAddress)
                    (*(longlong *)(param_1 + 0x10),s_WakeByAddressAll_18023c800);
  pcVar2 = __imp_KERNEL32_dll_GetProcAddress;
  *(undefined8 *)(param_1 + 0x14) = uVar3;
  lVar4 = (*pcVar2)(*(undefined8 *)(param_1 + 0x10),s_WaitOnAddress_18023c818);
  *(longlong *)(param_1 + 0x16) = lVar4;
  if ((*(longlong *)(param_1 + 0x14) == 0) || (lVar4 == 0)) goto LAB_180101da0;
  uVar7 = 0;
  do {
    lVar4 = thunk_FUN_180102f80(param_1[0x7c] + 0x10);
    *(longlong *)(param_1 + uVar7 * 10 + 0x28) = lVar4;
    if (lVar4 == 0) {
LAB_180101c3c:
      *(undefined8 *)(param_1 + uVar7 * 10 + 0x24) = 0;
      *(undefined8 *)(param_1 + uVar7 * 10 + 0x22) = 0;
      *(undefined8 *)(param_1 + uVar7 * 10 + 0x28) = 0;
      *(undefined8 *)(param_1 + uVar7 * 10 + 0x26) = 0;
      *(undefined8 *)(param_1 + uVar7 * 10 + 0x2a) = 0;
      break;
    }
    puVar5 = (undefined8 *)(lVar4 + 0xfU & 0xfffffffffffffff0);
    *(undefined8 **)(param_1 + uVar7 * 10 + 0x26) = puVar5;
    puVar5[1] = 0;
    *puVar5 = 0;
    puVar5[2] = 0;
    *(undefined8 *)(param_1 + uVar7 * 10 + 0x22) = *(undefined8 *)(param_1 + uVar7 * 10 + 0x26);
    *(undefined8 *)(param_1 + uVar7 * 10 + 0x24) = *(undefined8 *)(param_1 + uVar7 * 10 + 0x26);
    lVar4 = (*__imp_KERNEL32_dll_CreateEventA)(0,1,1,0);
    *(longlong *)(param_1 + uVar7 * 10 + 0x2a) = lVar4;
    if (lVar4 == 0) {
      thunk_FUN_180102fc0(*(undefined8 *)(param_1 + uVar7 * 10 + 0x26));
      goto LAB_180101c3c;
    }
    uVar1 = (int)uVar7 + 1;
    uVar7 = (ulonglong)uVar1;
  } while (uVar1 < 8);
  uVar6 = (uint)uVar7;
  uVar1 = uVar6;
  if (uVar6 != 8) goto joined_r0x000180101d24;
  lVar4 = thunk_FUN_180102f80(param_1[0x7c] + 0x10);
  *(longlong *)(param_1 + 0x78) = lVar4;
  if (lVar4 == 0) {
LAB_180101d34:
    do {
      uVar1 = (int)uVar7 - 1;
      uVar7 = (ulonglong)uVar1;
      (*__imp_KERNEL32_dll_CloseHandle)(*(undefined8 *)(param_1 + uVar7 * 10 + 0x2a));
      thunk_FUN_180102fc0(*(undefined8 *)(param_1 + uVar7 * 10 + 0x28));
      puVar5 = (undefined8 *)(param_1 + uVar7 * 10 + 0x22);
      puVar5[1] = 0;
      *puVar5 = 0;
      puVar5[3] = 0;
      puVar5[2] = 0;
      puVar5[4] = 0;
      uVar6 = 0;
joined_r0x000180101d24:
    } while (uVar1 != 0);
    (*__imp_KERNEL32_dll_FreeLibrary)(*(undefined8 *)(param_1 + 0x10));
    pcVar2 = __imp_KERNEL32_dll_FreeLibrary;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0x16) = 0;
    (*pcVar2)(*(undefined8 *)(param_1 + 0x12));
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x12) = 0;
  }
  else {
    puVar5 = (undefined8 *)(lVar4 + 0xfU & 0xfffffffffffffff0);
    *(undefined8 **)(param_1 + 0x76) = puVar5;
    puVar5[1] = 0;
    *puVar5 = 0;
    puVar5[2] = 0;
    lVar4 = (*__imp_KERNEL32_dll_CreateEventW)(0,0,0,0);
    *(longlong *)(param_1 + 0x20) = lVar4;
    if (lVar4 == 0) {
LAB_180101d08:
      thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x78));
      *(undefined8 *)(param_1 + 0x74) = 0;
      *(undefined8 *)(param_1 + 0x72) = 0;
      *(undefined8 *)(param_1 + 0x78) = 0;
      *(undefined8 *)(param_1 + 0x76) = 0;
      *(undefined8 *)(param_1 + 0x7a) = 0;
      goto LAB_180101d34;
    }
    lVar4 = (*__imp_KERNEL32_dll_GetModuleHandleW)(0);
    uVar3 = 0x40000;
    if (0x3ffff < *(ulonglong *)(lVar4 + *(int *)(lVar4 + 0x3c) + 0x60)) {
      uVar3 = 0;
    }
    lVar4 = (*__imp_KERNEL32_dll_CreateThread)(0,uVar3,FUN_180101680,param_1,0,0);
    *(longlong *)(param_1 + 0x1e) = lVar4;
    if (lVar4 == 0) {
      (*__imp_KERNEL32_dll_CloseHandle)(*(undefined8 *)(param_1 + 0x20));
      goto LAB_180101d08;
    }
  }
  *(bool *)((longlong)param_1 + 0x207) = uVar6 == 8;
LAB_180101da0:
  if (*(longlong *)(param_1 + 0x12) != 0) {
    uVar3 = (*__imp_KERNEL32_dll_GetProcAddress)
                      (*(longlong *)(param_1 + 0x12),s_GetSystemCpuSetInformation_18023c848);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    FUN_180101340(param_1);
  }
  return *(undefined1 *)((longlong)param_1 + 0x207);
}

