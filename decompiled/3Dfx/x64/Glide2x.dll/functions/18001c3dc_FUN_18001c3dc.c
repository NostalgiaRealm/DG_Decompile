/*
 * FUN_18001c3dc at 18001c3dc
 * undefined __fastcall FUN_18001c3dc(longlong param_1, char param_2)
 * Address ranges: 18001c3dc-18001c516
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001c3dc(longlong param_1,char param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong local_res8;
  undefined1 local_68 [8];
  int local_60;
  int local_38;
  longlong local_30;
  
  if (*(char *)(param_1 + 0x2beb) != '\0') {
    uVar8 = *(uint *)(param_1 + 0x2a58);
    if (param_2 == '\0') {
      uVar8 = (uint)(uVar8 != 0);
    }
    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
      do {
        plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x31c0) + 8);
        iVar7 = (**(code **)(*plVar3 + 0xe8))
                          (plVar3,*(undefined8 *)(param_1 + 0x3220),local_68,0x58,0);
      } while (iVar7 == 1);
      do {
        plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x31c0) + 8);
        iVar7 = (**(code **)(*plVar3 + 0xe8))
                          (plVar3,*(undefined8 *)(param_1 + 0x3228),&local_res8,8,0);
      } while (iVar7 == 1);
      *(int *)(param_1 + 0x2b98) = *(int *)(param_1 + 0x2b98) + (int)local_30;
      *(int *)(param_1 + 0x2b9c) = *(int *)(param_1 + 0x2b9c) + (int)local_30;
      *(longlong *)(param_1 + 0x2b90) = (*(longlong *)(param_1 + 0x2b90) - local_res8) + local_30;
      *(int *)(param_1 + 0x2ba0) = *(int *)(param_1 + 0x2ba0) + local_60;
      *(int *)(param_1 + 0x2b80) = *(int *)(param_1 + 0x2b80) + local_38;
      uVar4 = *(undefined8 *)(param_1 + 0x3220);
      uVar5 = *(undefined8 *)(param_1 + 0x3228);
      uVar10 = 1;
      do {
        uVar9 = (int)uVar10 + 1;
        puVar1 = (undefined8 *)(param_1 + 0x3220 + uVar10 * 0x10);
        uVar6 = puVar1[1];
        puVar2 = (undefined8 *)(param_1 + 0x3220 + (ulonglong)((int)uVar10 - 1) * 0x10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar6;
        uVar10 = (ulonglong)uVar9;
      } while (uVar9 < 0x20);
      *(undefined8 *)(param_1 + 0x3410) = uVar4;
      *(undefined8 *)(param_1 + 0x3418) = uVar5;
      *(int *)(param_1 + 0x2a58) = *(int *)(param_1 + 0x2a58) + -1;
    }
  }
  return;
}

