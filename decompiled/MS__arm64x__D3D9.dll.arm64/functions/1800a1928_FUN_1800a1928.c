/*
 * FUN_1800a1928 at 1800a1928
 * undefined FUN_1800a1928(void)
 * Address ranges: 1800a1928-1800a1a7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_1800a1928(longlong param_1,int *param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined8 uStack_dc;
  undefined8 uStack_d4;
  undefined8 uStack_cc;
  undefined8 local_c4;
  undefined8 uStack_bc;
  undefined8 uStack_b4;
  undefined8 uStack_ac;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined4 local_84;
  undefined1 auStack_80 [88];
  undefined8 local_28;
  
  puVar6 = *(undefined8 **)(param_1 + 0x30);
  local_f0 = (longlong *)0x0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[0] = 0;
  param_2[1] = 0;
  plVar4 = (longlong *)*puVar6;
  param_2[4] = 0;
  param_2[5] = 0;
  iVar2 = (**(code **)(*plVar4 + 0x38))(plVar4,param_3,&local_f0);
  if (-1 < iVar2) {
    iVar2 = (**(code **)(*local_f0 + 0x38))(local_f0,auStack_80);
    if (-1 < iVar2) {
      uStack_dc = 0;
      local_e4 = 0;
      uStack_cc = 0;
      uStack_d4 = 0;
      uStack_bc = 0;
      local_c4 = 0;
      uStack_ac = 0;
      uStack_b4 = 0;
      uStack_9c = 0;
      local_a4 = 0;
      uStack_8c = 0;
      uStack_94 = 0;
      local_84 = 0;
      local_e8 = 0x68;
      iVar2 = (*__imp_USER32_dll_GetMonitorInfoW)(local_28,&local_e8);
      if ((iVar2 != 0) &&
         (lVar5 = (*__imp_GDI32_dll_CreateDCW)(0,(longlong)&local_c4 + 4,0,0), lVar5 != 0)) {
        *param_2 = (int)uStack_dc - (int)local_e4;
        param_2[1] = uStack_dc._4_4_ - local_e4._4_4_;
        iVar2 = (*__imp_GDI32_dll_GetDeviceCaps)(lVar5,0xc);
        iVar3 = (*__imp_GDI32_dll_GetDeviceCaps)(lVar5,0xe);
        param_2[5] = iVar3 * iVar2;
        iVar3 = (*__imp_GDI32_dll_GetDeviceCaps)(lVar5,0x74);
        iVar2 = 0;
        if (iVar3 != 1) {
          iVar2 = iVar3;
        }
        param_2[2] = iVar2;
        param_2[3] = 1;
        pcVar1 = __imp_GDI32_dll_DeleteDC;
        param_2[4] = iVar2;
        (*pcVar1)(lVar5);
      }
    }
    (**(code **)(*local_f0 + 0x10))();
  }
  return param_2;
}

