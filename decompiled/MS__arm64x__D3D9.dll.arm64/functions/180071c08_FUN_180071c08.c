/*
 * FUN_180071c08 at 180071c08
 * undefined FUN_180071c08(void)
 * Address ranges: 180071c08-180071cf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_180071c08(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  uint param_5,ulonglong param_6,ulonglong param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  bool bVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  ulonglong *puVar9;
  ulonglong local_110 [32];
  ulonglong local_10;
  undefined8 uStack_8;
  
  local_10 = param_7;
  uVar3 = local_10;
  uStack_8 = param_8;
  if (*(uint *)(param_2 + 0xe4) == 0) {
    local_110[0] = (ulonglong)param_5 | 0x410200;
    iVar8 = 2;
    iVar7 = 3;
    puVar9 = local_110 + 2;
  }
  else {
    local_110[3] = 0;
    iVar8 = 4;
    puVar9 = local_110 + 4;
    local_110[0] = (ulonglong)(param_5 | *(int *)(param_2 + 0xe8) << 0xe) | 0x40420300;
    iVar7 = 5;
    local_110[2] = (ulonglong)*(uint *)(param_2 + 0xe4);
  }
  local_110[1] = param_6 & 0xff;
  local_10._0_4_ = (int)param_7;
  iVar5 = 0;
  *puVar9 = param_7 & 0xffffffff;
  bVar4 = (int)local_10 != 0x12345678;
  local_10 = uVar3;
  if (bVar4) {
    puVar6 = (uint *)&uStack_8;
    do {
      uVar2 = *puVar6;
      uVar1 = iVar7 + iVar5;
      iVar5 = iVar5 + 1;
      local_110[uVar1] = (ulonglong)uVar2;
      puVar6 = puVar6 + 2;
    } while (uVar2 != 0x12345678);
  }
  local_110[(uint)(iVar5 + iVar8)] = 0;
  FUN_1800f4a38(param_2 + 0x20,param_3,param_4,local_110);
  return;
}

