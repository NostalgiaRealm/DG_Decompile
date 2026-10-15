/*
 * FUN_1801b1b10 at 1801b1b10
 * undefined FUN_1801b1b10(void)
 * Address ranges: 1801b1b10-1801b1c0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801b1b10(longlong param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_60 [16];
  int local_50;
  undefined8 local_4c;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  if ((param_2 & 1) == 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x48);
  }
  else {
    if (*(int *)(param_1 + 0x4c) == -1) {
      FUN_1801bad48(&local_50,*(undefined4 *)(param_1 + 0x14));
      if ((int)local_4c == 0x1c) {
        local_50 = 0x1d;
      }
      else if ((int)local_4c == 0x47) {
        local_50 = 0x48;
      }
      else if ((int)local_4c == 0x4a) {
        local_50 = 0x4b;
      }
      else {
        local_50 = (int)local_4c;
        if ((int)local_4c == 0x4d) {
          local_50 = 0x4e;
        }
      }
      lVar5 = *(longlong *)(param_1 + 0x38);
      uVar2 = *(uint *)(lVar5 + 0x28);
      lVar6 = *(longlong *)(lVar5 + 0x1cf10);
      local_30 = 0;
      uStack_38 = 0;
      iVar1 = *(int *)(param_1 + 0x48) + 1;
      *(int *)(param_1 + 0x4c) = iVar1;
      local_4c = 0x168800000008;
      local_40 = 0xffffffff00000000;
      uVar3 = *(undefined4 *)(lVar5 + 0x28);
      puVar4 = (undefined8 *)
               FUN_18020d168(*(undefined8 *)(lVar6 + (ulonglong)uVar2 * 0x1ac0 + 0x2230),auStack_60,
                             iVar1,0);
      FUN_18020d3a0(lVar6 + 0x6d0,uVar3,*(undefined8 *)(param_1 + 0x40),&local_50,*puVar4);
    }
    uVar3 = *(undefined4 *)(param_1 + 0x4c);
  }
  return uVar3;
}

