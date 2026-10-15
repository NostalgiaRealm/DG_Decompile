/*
 * FUN_1800a3a68 at 1800a3a68
 * undefined4 __fastcall FUN_1800a3a68(longlong param_1, char param_2)
 * Address ranges: 1800a3a68-1800a3b6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800a3a68(longlong param_1,char param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  longlong local_res18 [2];
  int local_38 [4];
  longlong local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if (param_2 == '\0') {
    uVar5 = *(undefined4 *)(param_1 + 0x48);
  }
  else {
    uVar9 = 0xffffffff;
    if (*(int *)(param_1 + 0x4c) == -1) {
      puVar6 = FUN_1800ac1a8((undefined8 *)local_38,*(uint *)(param_1 + 0x14));
      local_38[0] = *(int *)((longlong)puVar6 + 4);
      if (local_38[0] == 0x1c) {
        local_38[0] = 0x1d;
      }
      else if (local_38[0] == 0x47) {
        local_38[0] = 0x48;
      }
      else if (local_38[0] == 0x4a) {
        local_38[0] = 0x4b;
      }
      else if (local_38[0] == 0x4d) {
        local_38[0] = 0x4e;
      }
      lVar2 = *(longlong *)(param_1 + 0x38);
      uVar8 = *(int *)(param_1 + 0x48) + 1;
      uVar1 = *(uint *)(lVar2 + 0x28);
      lVar3 = *(longlong *)(lVar2 + 0x1cf10);
      *(uint *)(param_1 + 0x4c) = uVar8;
      local_38[1] = 8;
      local_38[2] = 0x1688;
      local_18 = 0;
      local_28 = (ulonglong)uVar9 << 0x20;
      uStack_20 = 0;
      uVar9 = *(uint *)(lVar2 + 0x28);
      plVar7 = FUN_1800e1d04(*(longlong *)((ulonglong)uVar1 * 0x1ac0 + 0x2230 + lVar3),local_res18,
                             uVar8,0);
      plVar4 = *(longlong **)((ulonglong)uVar9 * 0x20 + 0x6d0 + lVar3);
      (**(code **)(*plVar4 + 0x90))(plVar4,*(undefined8 *)(param_1 + 0x40),local_38,*plVar7);
    }
    uVar5 = *(undefined4 *)(param_1 + 0x4c);
  }
  return uVar5;
}

