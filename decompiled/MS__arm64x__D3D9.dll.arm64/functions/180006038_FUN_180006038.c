/*
 * FUN_180006038 at 180006038
 * undefined FUN_180006038(void)
 * Address ranges: 180006038-1800060c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180006038(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar5 = *(int *)(param_1 + 0xe38);
  param_2[1] = 0x100000001;
  *param_2 = 0x100000001;
  if (iVar5 != 0) {
    if (*(char *)(param_1 + 0xe60) == '\0') {
      uVar2 = *(undefined4 *)(param_1 + 0xe40);
      uVar3 = *(undefined4 *)(param_1 + 0xe44);
      uVar4 = *(undefined4 *)(param_1 + 0xe5c);
      *(undefined4 *)param_2 = *(undefined4 *)(param_1 + 0xe58);
      *(undefined4 *)((longlong)param_2 + 4) = uVar2;
      *(undefined4 *)(param_2 + 1) = uVar4;
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
    }
    else if (*(uint *)(param_1 + 0xeb8) != 0) {
      uVar7 = 0;
      do {
        lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xeb0) + uVar7 * 8);
        if (*(char *)(lVar8 + 0xf9) == '\0') {
          lVar6 = (ulonglong)*(uint *)(param_1 + 0xea8) * 600;
          uVar3 = *(undefined4 *)(&DAT_180253a00 + lVar6);
          uVar2 = *(undefined4 *)(lVar8 + 0x90);
          uVar4 = *(undefined4 *)(lVar8 + 0x94);
          *(undefined4 *)param_2 = *(undefined4 *)(&DAT_1802539fc + lVar6);
          *(undefined4 *)((longlong)param_2 + 4) = uVar2;
          *(undefined4 *)(param_2 + 1) = uVar3;
          *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
          return param_2;
        }
        uVar1 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(param_1 + 0xeb8));
    }
  }
  return param_2;
}

