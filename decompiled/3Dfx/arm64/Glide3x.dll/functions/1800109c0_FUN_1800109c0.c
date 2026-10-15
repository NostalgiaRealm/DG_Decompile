/*
 * FUN_1800109c0 at 1800109c0
 * undefined __cdecl FUN_1800109c0(longlong param_1)
 * Address ranges: 1800109c0-180010b17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800109c0(longlong param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong local_70;
  undefined1 auStack_68 [56];
  longlong lStack_30;
  
  if (*(char *)(param_1 + 0x2c83) != '\0') {
    uVar2 = *(uint *)(param_1 + 0x2af0);
    if (uVar2 == 0x20) {
      puVar1 = (undefined8 *)(param_1 + 0x33a0);
      do {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x3340) + 8);
        iVar4 = (**(code **)(*plVar5 + 0xe8))(plVar5,*puVar1,auStack_68,0x58,0);
      } while (iVar4 == 1);
      do {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x3340) + 8);
        iVar4 = (**(code **)(*plVar5 + 0xe8))
                          (plVar5,*(undefined8 *)(param_1 + 0x33a8),&local_70,8,0);
      } while (iVar4 == 1);
      *(int *)(param_1 + 0x2c30) = *(int *)(param_1 + 0x2c30) + (int)lStack_30;
      *(int *)(param_1 + 0x2c34) = *(int *)(param_1 + 0x2c34) + (int)lStack_30;
      *(longlong *)(param_1 + 0x2c28) = (*(longlong *)(param_1 + 0x2c28) - local_70) + lStack_30;
      *(int *)(param_1 + 0x2c38) = *(int *)(param_1 + 0x2c38) + (int)auStack_68._8_8_;
      *(int *)(param_1 + 0x2c18) = *(int *)(param_1 + 0x2c18) + (int)auStack_68._48_8_;
      uVar8 = *(undefined8 *)(param_1 + 0x33a8);
      uVar7 = *puVar1;
      uVar6 = 1;
      do {
        lVar3 = uVar6 * 2;
        uVar9 = puVar1[lVar3];
        iVar4 = (int)uVar6;
        uVar2 = iVar4 + 1;
        uVar6 = (ulonglong)uVar2;
        (puVar1 + (ulonglong)(iVar4 - 1) * 2)[1] = (puVar1 + lVar3)[1];
        puVar1[(ulonglong)(iVar4 - 1) * 2] = uVar9;
      } while (uVar2 < 0x20);
      *(undefined8 *)(param_1 + 0x3598) = uVar8;
      *(undefined8 *)(param_1 + 0x3590) = uVar7;
      uVar2 = *(int *)(param_1 + 0x2af0) - 1;
      *(uint *)(param_1 + 0x2af0) = uVar2;
    }
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x3340) + 8);
    (**(code **)(*plVar5 + 0xd8))
              (plVar5,*(undefined8 *)(param_1 + ((ulonglong)uVar2 + 0x33a) * 0x10));
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x3340) + 8);
    (**(code **)(*plVar5 + 0xd8))
              (plVar5,*(undefined8 *)
                       (param_1 + (ulonglong)*(uint *)(param_1 + 0x2af0) * 0x10 + 0x33a8));
  }
  return;
}

