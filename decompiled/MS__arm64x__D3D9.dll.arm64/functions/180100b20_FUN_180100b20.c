/*
 * FUN_180100b20 at 180100b20
 * undefined FUN_180100b20(void)
 * Address ranges: 180100b20-180100d47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180100b20(longlong param_1)

{
  code *pcVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  undefined8 uVar5;
  int local_d0 [2];
  undefined4 local_c8 [2];
  code *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  wchar_t *local_88;
  undefined1 auStack_80 [48];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  local_b0 = 0;
  uStack_a8 = 0;
  local_c8[0] = 3;
  local_c0 = FUN_180100608;
  uStack_b8 = 0;
  local_a0 = 0;
  local_98 = (*__imp_GDI32_dll_GetStockObject)(4);
  local_88 = u_DGVOODOOCOMM_18023c7e0;
  uStack_90 = 0;
  sVar3 = (*__imp_USER32_dll_RegisterClassW)(local_c8);
  if (sVar3 != 0) {
    uStack_48 = 0;
    local_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uVar5 = (*__imp_USER32_dll_CreateWindowExW)
                      (0,u_DGVOODOOCOMM_18023c7e0,&local_50,0,0x80000000,0x80000000,0x80000000,
                       0x80000000,0xfffffffffffffffd,0,0,0);
    pcVar1 = __imp_USER32_dll_PeekMessageW;
    *(undefined8 *)(param_1 + 0x380) = uVar5;
    (*pcVar1)(auStack_80,0,0,0,0);
    uVar5 = DAT_1802587b0;
    if (*(longlong *)(param_1 + 0x380) != 0) {
      *(undefined1 *)(param_1 + 0x7e8) = 1;
      (*__imp_KERNEL32_dll_SetEvent)(uVar5);
      iVar4 = (*__imp_USER32_dll_GetMessageW)(auStack_80,0,0,0);
      while (0 < iVar4) {
        (*__imp_USER32_dll_TranslateMessage)(auStack_80);
        (*__imp_USER32_dll_DispatchMessageW)(auStack_80);
        iVar4 = (*__imp_USER32_dll_GetMessageW)(auStack_80,0,0,0);
      }
      iVar4 = (*__imp_USER32_dll_IsWindow)(*(undefined8 *)(param_1 + 0x3b0));
      bVar2 = iVar4 == 1;
      if (iVar4 == 1) {
        local_d0[0] = 0;
        (*__imp_USER32_dll_GetWindowThreadProcessId)(*(undefined8 *)(param_1 + 0x3b0),local_d0);
        bVar2 = local_d0[0] == *(int *)(param_1 + 0x3b8);
      }
      if ((*(longlong *)(param_1 + 0x3b0) != 0) && (!bVar2)) {
        FUN_180100588(param_1,1);
      }
      (*__imp_USER32_dll_DestroyWindow)(*(undefined8 *)(param_1 + 0x380));
      *(undefined8 *)(param_1 + 0x380) = 0;
    }
    (*__imp_USER32_dll_UnregisterClassW)(sVar3,0);
  }
  uVar5 = DAT_1802587b0;
  pcVar1 = __imp_KERNEL32_dll_SetEvent;
  *(undefined1 *)(param_1 + 0x7e8) = 0;
  (*pcVar1)(uVar5);
  return 1;
}

