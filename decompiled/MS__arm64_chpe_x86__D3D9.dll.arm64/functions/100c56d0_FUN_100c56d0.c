/*
 * FUN_100c56d0 at 100c56d0
 * undefined FUN_100c56d0(void)
 * Address ranges: 100c56d0-100c5803
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100c56d0(int param_1,ulonglong param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 auStack_60 [16];
  int local_50;
  undefined8 local_4c;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  if ((param_2 & 1) == 0) {
    iVar3 = *(int *)(param_1 + 0x38);
  }
  else {
    piVar1 = (int *)(param_1 + 0x3c);
    if (*piVar1 == -1) {
      FUN_100ce8c8(*(undefined4 *)(param_1 + 0x10));
      local_50 = (int)local_4c;
      if ((int)local_4c < 0x4a) {
        if ((int)local_4c == 0x1c) {
          local_50 = 0x1d;
        }
        else if ((int)local_4c == 0x47) {
          local_50 = 0x48;
        }
      }
      else if ((int)local_4c < 0x4b) {
        local_50 = 0x4b;
      }
      else if ((int)local_4c == 0x4d) {
        local_50 = 0x4e;
      }
      piVar2 = (int *)(*(int *)(param_1 + 0x30) + 0x14);
      iVar4 = *piVar2;
      iVar5 = *(int *)(*(int *)(param_1 + 0x30) + 0x1cf00);
      local_30 = 0;
      uStack_38 = 0;
      iVar3 = *(int *)(param_1 + 0x38) + 1;
      *piVar1 = iVar3;
      local_4c = 0x168800000008;
      local_40 = 0xffffffff00000000;
      iVar6 = *piVar2;
      puVar7 = (undefined4 *)
               FUN_10112730(*(undefined4 *)(iVar5 + iVar4 * 0x16c0 + 0x1c98),auStack_60,iVar3,0);
      FUN_101129b8(iVar5 + 0x520,iVar6,*(undefined4 *)(param_1 + 0x34),&local_50,*puVar7);
    }
    iVar3 = *piVar1;
  }
  return iVar3;
}

