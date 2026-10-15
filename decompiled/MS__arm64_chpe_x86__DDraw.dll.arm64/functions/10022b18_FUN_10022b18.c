/*
 * FUN_10022b18 at 10022b18
 * undefined FUN_10022b18(void)
 * Address ranges: 10022b18-10022db7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1
FUN_10022b18(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,int *param_6,int param_7,char *param_8,undefined4 param_9,undefined4 param_10,
            undefined4 param_11)

{
  uint uVar1;
  char *pcVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  code *extraout_w11;
  int extraout_w11_00;
  int extraout_w12;
  ulonglong extraout_x12;
  char *local_120;
  char *local_11c;
  undefined4 local_110;
  undefined1 local_f0;
  int *local_ec;
  int local_e8;
  char *local_e4;
  int *local_e0;
  int *local_dc;
  undefined4 *local_d8;
  undefined4 local_d4;
  uint *local_d0;
  int local_c8;
  uint local_c4;
  int local_c0;
  int iStack_bc;
  uint local_b8;
  int iStack_b4;
  undefined1 auStack_a0 [4];
  int local_9c;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  
  local_ec = (int *)(param_1 + 0x44);
  local_110 = param_11;
  local_120 = param_8;
  local_e4 = param_8;
  local_d4 = param_4;
  FUN_10021050(param_1,&local_c8,*local_ec,param_2,param_3,param_5,param_6,param_7);
  local_f0 = 1;
  local_e8 = param_1;
  if (local_c4 == 0) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_3,auStack_78);
    FUN_100728b8(local_58);
    iVar4 = FUN_10072970(extraout_x12 & 0xffffffff);
    pcVar2 = local_e4;
    if (extraout_w12 - 0x44U < 2) {
      uVar6 = 2;
    }
    else {
      uVar6 = 4;
      if (0xe < extraout_w12 - 0x46U) {
        uVar6 = 1;
      }
    }
    if (iVar4 == 0) {
      iVar4 = extraout_w11_00;
    }
    local_d0 = (uint *)(param_6 + 4);
    local_c4 = param_6[1];
    uVar5 = (ulonglong)local_c4;
    uVar7 = *local_d0;
    if (local_c4 < uVar7) {
      local_e0 = param_6 + 3;
      if (uVar6 == 0) {
                    /* WARNING: Does not return */
        uVar3 = SoftwareBreakpoint(0xf004,0x10022c6c);
        (*(code *)uVar3)();
      }
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = (uint)((*local_e0 - *param_6) * iVar4) / uVar6;
      }
      uVar6 = uVar1 + 0xff & 0xffffff00;
      if (uVar6 == 0) {
                    /* WARNING: Does not return */
        uVar3 = SoftwareBreakpoint(0xf004,0x10022c84);
        (*(code *)uVar3)();
      }
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = 0x1000000 / uVar6;
      }
      local_f0 = 1;
      local_dc = param_6 + 5;
      local_d8 = local_ec;
      local_ec = param_6 + 2;
      do {
        local_c8 = *param_6;
        local_120 = pcVar2;
        uVar6 = local_c4 + uVar1;
        local_c0 = *local_ec;
        iStack_bc = *local_e0;
        local_b8 = uVar6;
        if (uVar7 <= uVar6) {
          local_b8 = uVar7;
        }
        iStack_b4 = *local_dc;
        local_110 = param_11;
        FUN_10021050(uVar5,auStack_a0,*local_d8,param_2,param_3,param_5,&local_c8,param_7);
        if (local_9c == 0) {
          local_11c = s_an_upload_heap_buffer_100b34f0;
          local_120 = s__dgVoodoo__D3D12_Core__FATAL_ERR_100b5690;
          FUN_100557b0(&local_120,8);
          (*(code *)PTR_FUN_100ba090)();
          return 0;
        }
        uVar5 = FUN_10022db8(&local_e8,param_2,param_3,local_d4,param_5,auStack_a0,param_6);
        param_7 = param_7 + uVar1 * (int)pcVar2;
        uVar7 = *local_d0;
        local_c4 = uVar6;
      } while (uVar6 < uVar7);
    }
  }
  else {
    FUN_10022db8(&local_e8,param_2,param_3,param_4,param_5,&local_c8,param_6);
  }
  return local_f0;
}

