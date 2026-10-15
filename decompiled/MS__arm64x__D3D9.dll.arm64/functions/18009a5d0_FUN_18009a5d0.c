/*
 * FUN_18009a5d0 at 18009a5d0
 * undefined FUN_18009a5d0(void)
 * Address ranges: 18009a5d0-18009a6d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_18009a5d0(longlong param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_60 [16];
  int local_50;
  undefined8 local_4c;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  if ((param_2 & 1) == 0) {
    uVar4 = *(undefined4 *)(param_1 + 0x48);
  }
  else {
    if (*(int *)(param_1 + 0x4c) == -1) {
      func_0x0001801bad48(&local_50,*(undefined4 *)(param_1 + 0x14));
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
      lVar7 = *(longlong *)(param_1 + 0x38);
      uVar2 = *(uint *)(lVar7 + 0x28);
      lVar8 = *(longlong *)(lVar7 + 0x1cf10);
      local_30 = 0;
      uStack_38 = 0;
      iVar1 = *(int *)(param_1 + 0x48) + 1;
      *(int *)(param_1 + 0x4c) = iVar1;
      local_4c = 0x168800000008;
      local_40 = 0xffffffff00000000;
      uVar3 = *(uint *)(lVar7 + 0x28);
      puVar5 = (undefined8 *)
               FUN_1800e7b48(*(undefined8 *)(lVar8 + (ulonglong)uVar2 * 0x1ac0 + 0x2230),auStack_60,
                             iVar1,0);
      plVar6 = *(longlong **)(lVar8 + (ulonglong)uVar3 * 0x20 + 0x6d0);
      (**(code **)(*plVar6 + 0x90))(plVar6,*(undefined8 *)(param_1 + 0x40),&local_50,*puVar5);
    }
    uVar4 = *(undefined4 *)(param_1 + 0x4c);
  }
  return uVar4;
}

