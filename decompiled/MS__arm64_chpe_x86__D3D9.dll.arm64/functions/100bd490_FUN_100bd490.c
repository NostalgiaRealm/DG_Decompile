/*
 * FUN_100bd490 at 100bd490
 * undefined FUN_100bd490(void)
 * Address ranges: 100bd490-100bd697
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1
FUN_100bd490(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 *param_6,int param_7,char *param_8,undefined4 param_9,undefined4 param_10,
            undefined4 param_11)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  char *local_f0;
  char *local_ec;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined1 local_c0;
  undefined4 *local_bc;
  int local_b8;
  char *local_b4;
  undefined4 *local_b0;
  undefined4 *local_ac;
  undefined4 *local_a8;
  undefined4 local_a4;
  uint *local_a0;
  undefined4 local_98;
  uint local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  uint local_88;
  undefined4 uStack_84;
  undefined1 auStack_70 [4];
  int local_6c;
  
  local_e0 = param_11;
  local_e8 = 0;
  local_f0 = param_8;
  local_bc = (undefined4 *)param_4;
  local_b4 = param_8;
  local_a4 = param_4;
  auVar6 = FUN_100bb748(param_1,&local_98,*(undefined4 *)(param_1 + 0x44),param_2,param_3,param_5,
                        param_6,param_7);
  local_c0 = 1;
  local_b8 = param_1;
  if (local_94 == 0) {
    iVar3 = FUN_10118bd8(auVar6._0_8_,auVar6._8_8_,param_6,param_3);
    pcVar2 = local_b4;
    local_94 = param_6[1];
    uVar4 = (ulonglong)local_94;
    local_a0 = param_6 + 4;
    uVar5 = *local_a0;
    if (local_94 < uVar5) {
      local_bc = param_6 + 2;
      local_b0 = param_6 + 3;
      local_c0 = 1;
      local_ac = param_6 + 5;
      local_a8 = (undefined4 *)(param_1 + 0x44);
      do {
        local_98 = *param_6;
        local_e8 = 0;
        local_f0 = pcVar2;
        uVar1 = local_94 + iVar3;
        local_90 = *local_bc;
        uStack_8c = *local_b0;
        local_88 = uVar1;
        if (uVar5 <= uVar1) {
          local_88 = uVar5;
        }
        uStack_84 = *local_ac;
        local_e0 = param_11;
        FUN_100bb748(uVar4,auStack_70,*local_a8,param_2,param_3,param_5,&local_98,param_7);
        if (local_6c == 0) {
          local_ec = s_an_upload_heap_buffer_10161d60;
          local_f0 = s_Q_dgVoodoo__D3D12_Core__FATAL_ER_1016589f + 1;
          FUN_100f46a0(&local_f0,8);
          (*(code *)PTR_FUN_1016c068)();
          return 0;
        }
        uVar4 = FUN_100bd698(&local_b8,param_2,param_3,local_a4,param_5,auStack_70,param_6);
        param_7 = param_7 + iVar3 * (int)pcVar2;
        uVar5 = *local_a0;
        local_94 = uVar1;
      } while (uVar1 < uVar5);
    }
  }
  else {
    FUN_100bd698(&local_b8,param_2,param_3,local_bc,param_5,&local_98,param_6);
  }
  return local_c0;
}

