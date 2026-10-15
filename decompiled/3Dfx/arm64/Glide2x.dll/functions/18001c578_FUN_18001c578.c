/*
 * FUN_18001c578 at 18001c578
 * undefined __cdecl FUN_18001c578(longlong param_1, byte param_2)
 * Address ranges: 18001c578-18001c6f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001c578(longlong param_1,byte param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong local_80;
  undefined1 auStack_78 [56];
  longlong lStack_40;
  
  if (*(char *)(param_1 + 0x2beb) != '\0') {
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x31c0) + 8);
    (**(code **)(*plVar5 + 0xe0))
              (plVar5,*(undefined8 *)
                       (param_1 + ((ulonglong)*(uint *)(param_1 + 0x2a58) + 0x322) * 0x10));
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x31c0) + 8);
    (**(code **)(*plVar5 + 0xe0))
              (plVar5,*(undefined8 *)
                       (param_1 + (ulonglong)*(uint *)(param_1 + 0x2a58) * 0x10 + 0x3228));
    iVar7 = *(int *)(param_1 + 0x2a58) + 1;
    *(int *)(param_1 + 0x2a58) = iVar7;
    if ((((param_2 & 1) != 0) && (*(char *)(param_1 + 0x2beb) != '\0')) && (iVar7 != 0)) {
      puVar2 = (undefined8 *)(param_1 + 0x3220);
      do {
        do {
          plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x31c0) + 8);
          iVar4 = (**(code **)(*plVar5 + 0xe8))(plVar5,*puVar2,auStack_78,0x58,0);
        } while (iVar4 == 1);
        do {
          plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x31c0) + 8);
          iVar4 = (**(code **)(*plVar5 + 0xe8))
                            (plVar5,*(undefined8 *)(param_1 + 0x3228),&local_80,8,0);
        } while (iVar4 == 1);
        *(int *)(param_1 + 0x2b98) = *(int *)(param_1 + 0x2b98) + (int)lStack_40;
        *(int *)(param_1 + 0x2b9c) = *(int *)(param_1 + 0x2b9c) + (int)lStack_40;
        *(longlong *)(param_1 + 0x2b90) = (*(longlong *)(param_1 + 0x2b90) - local_80) + lStack_40;
        *(int *)(param_1 + 0x2ba0) = *(int *)(param_1 + 0x2ba0) + (int)auStack_78._8_8_;
        *(int *)(param_1 + 0x2b80) = *(int *)(param_1 + 0x2b80) + (int)auStack_78._48_8_;
        uVar9 = *(undefined8 *)(param_1 + 0x3228);
        uVar8 = *puVar2;
        uVar6 = 1;
        do {
          lVar3 = uVar6 * 2;
          uVar10 = puVar2[lVar3];
          iVar4 = (int)uVar6;
          uVar1 = iVar4 + 1;
          uVar6 = (ulonglong)uVar1;
          (puVar2 + (ulonglong)(iVar4 - 1) * 2)[1] = (puVar2 + lVar3)[1];
          puVar2[(ulonglong)(iVar4 - 1) * 2] = uVar10;
        } while (uVar1 < 0x20);
        *(undefined8 *)(param_1 + 0x3418) = uVar9;
        *(undefined8 *)(param_1 + 0x3410) = uVar8;
        iVar7 = iVar7 + -1;
        *(int *)(param_1 + 0x2a58) = *(int *)(param_1 + 0x2a58) + -1;
      } while (iVar7 != 0);
    }
  }
  return;
}

