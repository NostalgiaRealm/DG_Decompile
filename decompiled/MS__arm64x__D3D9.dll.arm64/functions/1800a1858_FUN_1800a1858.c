/*
 * FUN_1800a1858 at 1800a1858
 * undefined FUN_1800a1858(void)
 * Address ranges: 1800a1858-1800a1923
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800a1858(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
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
  
  (*__imp_USER32_dll_SetRectEmpty)(param_2);
  local_f0 = (longlong *)0x0;
  iVar1 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x30) + 0x38))
                    ((longlong *)**(undefined8 **)(param_1 + 0x30),param_3,&local_f0);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*local_f0 + 0x38))(local_f0,auStack_80);
    if (-1 < iVar1) {
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
      iVar1 = (*__imp_USER32_dll_GetMonitorInfoW)(local_28,&local_e8);
      if (iVar1 != 0) {
        param_2[1] = uStack_dc;
        *param_2 = local_e4;
      }
    }
    (**(code **)(*local_f0 + 0x10))();
  }
  return param_2;
}

