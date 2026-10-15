/*
 * FUN_18000ea30 at 18000ea30
 * undefined __fastcall FUN_18000ea30(longlong param_1)
 * Address ranges: 18000ea30-18000ec50
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000ea30(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  uint local_18;
  uint uStack_14;
  uint local_10;
  uint local_c;
  
  FUN_18000e9a8(param_1);
  if (*(char *)(param_1 + 0x32f1) != '\0') {
    uVar4 = FUN_180014854((longlong *)(param_1 + 0x35a0),*(int *)(param_1 + 0x29fc));
    if (uVar4 != 0xffffffff) {
      iVar9 = *(int *)(param_1 + 0x2a28);
      lVar7 = (longlong)(int)uVar4 * 0x180;
      iVar5 = *(int *)(param_1 + 0x2a20);
      if (*(int *)(param_1 + 0x2c98) == 1) {
        iVar1 = *(int *)(lVar7 + 0x370c + param_1);
        iVar5 = iVar1 - iVar9;
        iVar9 = iVar1 - *(int *)(param_1 + 0x2a20);
      }
      iVar1 = *(int *)(lVar7 + 0x3710 + param_1);
      local_10 = *(uint *)(lVar7 + 0x3708 + param_1);
      local_c = *(uint *)(lVar7 + 0x370c + param_1);
      iVar2 = *(int *)(lVar7 + 0x3714 + param_1);
      local_18 = (uint)(*(int *)(param_1 + 0x2a1c) * iVar1) / local_10;
      uStack_14 = (uint)(iVar2 * iVar5) / local_c;
      local_10 = (uint)(*(int *)(param_1 + 0x2a24) * iVar1) / local_10;
      local_c = (uint)(iVar2 * iVar9) / local_c;
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x3340) + 8);
      (**(code **)(*plVar3 + 0x168))(plVar3,1);
    }
    *(undefined1 *)(param_1 + 0x32f1) = 0;
  }
  if (*(char *)(param_1 + 0x32f2) != '\0') {
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x3340) + 8);
    iVar9 = (**(code **)(*plVar3 + 0x70))(plVar3,*(undefined8 *)(param_1 + 0x3368),0,4,0,&local_18);
    if (-1 < iVar9) {
      uVar8 = 0;
      uVar4 = 0;
      if (*(int *)(param_1 + 0xe8) != 0) {
        do {
          *(float *)(CONCAT44(uStack_14,local_18) + uVar8 * 4) =
               (float)*(byte *)(param_1 + 0x2a8 + uVar8) / 255.0;
          uVar6 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar6;
          uVar4 = *(uint *)(param_1 + 0xe8);
        } while (uVar6 < uVar4);
      }
      *(float *)(CONCAT44(uStack_14,local_18) + (ulonglong)uVar4 * 4) =
           (float)*(byte *)((ulonglong)(uVar4 - 1) + 0x2a8 + param_1) / 255.0;
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x3340) + 8);
      (**(code **)(*plVar3 + 0x78))(plVar3,*(undefined8 *)(param_1 + 0x3368),0);
      *(undefined1 *)(param_1 + 0x32f2) = 0;
    }
  }
  lVar7 = 0;
  do {
    if (*(char *)(param_1 + 0x32f3 + lVar7) != '\0') {
      FUN_180028160(*(undefined8 **)(param_1 + 0xd940 + lVar7 * 8));
      *(undefined1 *)(param_1 + 0x32f3 + lVar7) = 0;
    }
    if (*(char *)(param_1 + 0x32f6 + lVar7) != '\0') {
      FUN_180023620(*(longlong *)(param_1 + 0xd940 + lVar7 * 8));
      *(undefined1 *)(param_1 + 0x32f6 + lVar7) = 0;
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 3);
  return;
}

