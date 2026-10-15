/*
 * FUN_18003c870 at 18003c870
 * uint __fastcall FUN_18003c870(longlong param_1, longlong param_2, int param_3, int param_4)
 * Address ranges: 18003c870-18003c938
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18003c870(longlong param_1,longlong param_2,int param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  sbyte sVar3;
  uint uVar4;
  uint uVar5;
  longlong local_48 [3];
  
  sVar3 = (*(char *)(param_1 + 0x34) != '\0') + 1;
  uVar5 = param_4 << sVar3;
  uVar4 = 0xffffffff;
  if (uVar5 <= *(uint *)(param_1 + 0x28)) {
    uVar4 = *(int *)(param_1 + 0x2c) + uVar5;
    if (*(uint *)(param_1 + 0x28) < uVar4) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 8);
    iVar2 = (**(code **)(*plVar1 + 0x70))
                      (plVar1,*(undefined8 *)(param_1 + 0x20),0,
                       5 - (uint)(*(uint *)(param_1 + 0x28) < uVar4),0,local_48);
    uVar4 = 0xffffffff;
    if (-1 < iVar2) {
      FUN_1800fbec0((undefined8 *)((ulonglong)*(uint *)(param_1 + 0x2c) + local_48[0]),
                    (undefined8 *)((ulonglong)(uint)(param_3 << sVar3) + param_2),(ulonglong)uVar5);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 8);
      (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(param_1 + 0x20),0);
      uVar4 = *(uint *)(param_1 + 0x2c) >> sVar3;
      *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + uVar5;
    }
  }
  return uVar4;
}

