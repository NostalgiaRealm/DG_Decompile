/*
 * FUN_1001a668 at 1001a668
 * undefined FUN_1001a668(void)
 * Address ranges: 1001a668-1001a70b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001a668(int param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined8 uVar8;
  
  uVar7 = 0;
  do {
    uVar4 = (uVar7 + *(int *)(param_1 + 0x38) + 1) % 7;
    plVar1 = (longlong *)(param_1 + (uVar4 + 4) * 0x10);
    lVar6 = *plVar1;
    if (((lVar6 != 0) && (lVar6 <= *param_2)) && (*(longlong *)(param_1 + 0xb0) < lVar6)) {
      iVar5 = 6;
      do {
        puVar2 = (undefined8 *)(param_1 + (iVar5 + 10) * 0x10);
        puVar3 = (undefined8 *)(param_1 + (iVar5 + 0xb) * 0x10);
        iVar5 = iVar5 + -1;
        uVar8 = *puVar2;
        puVar3[1] = puVar2[1];
        *puVar3 = uVar8;
      } while (iVar5 != 0);
      *(longlong *)(param_1 + 0xb0) = *plVar1;
      *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + uVar4 * 0x10 + 0x48);
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 7);
  return;
}

