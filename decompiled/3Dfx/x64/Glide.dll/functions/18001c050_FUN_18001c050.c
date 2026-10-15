/*
 * FUN_18001c050 at 18001c050
 * undefined __fastcall FUN_18001c050(longlong param_1)
 * Address ranges: 18001c050-18001c27b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001c050(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  uint local_18;
  uint uStack_14;
  uint local_10;
  uint local_c;
  
  FUN_18001bfc8(param_1);
  if (*(char *)(param_1 + 0x3171) == '\0') goto LAB_18001c159;
  iVar8 = *(int *)(param_1 + 0x2984);
  if (iVar8 == 0) {
    lVar3 = 0x3590;
    lVar4 = 0x3594;
    lVar6 = 0x358c;
    lVar10 = 0x3588;
LAB_18001c0c0:
    iVar8 = *(int *)(param_1 + 0x29b0);
    iVar9 = *(int *)(param_1 + 0x29a8);
    if (*(int *)(param_1 + 0x2bf8) == 1) {
      iVar9 = *(int *)(lVar6 + param_1) - iVar8;
      iVar8 = *(int *)(lVar6 + param_1) - *(int *)(param_1 + 0x29a8);
    }
    local_18 = (uint)(*(int *)(param_1 + 0x29a4) * *(int *)(lVar3 + param_1)) /
               *(uint *)(lVar10 + param_1);
    uStack_14 = (uint)(*(int *)(lVar4 + param_1) * iVar9) / *(uint *)(lVar6 + param_1);
    local_10 = (uint)(*(int *)(param_1 + 0x29ac) * *(int *)(lVar3 + param_1)) /
               *(uint *)(lVar10 + param_1);
    local_c = (uint)(*(int *)(lVar4 + param_1) * iVar8) / *(uint *)(lVar6 + param_1);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x31c0) + 8);
    (**(code **)(*plVar1 + 0x168))(plVar1,1);
  }
  else {
    if (iVar8 == 1) {
      lVar3 = 0x3710;
      lVar4 = 0x3714;
      lVar6 = 0x370c;
      lVar10 = 0x3708;
      goto LAB_18001c0c0;
    }
    if (iVar8 == 2) {
      lVar3 = 0x3890;
      lVar4 = 0x3894;
      lVar6 = 0x388c;
      lVar10 = 0x3888;
      goto LAB_18001c0c0;
    }
  }
  *(undefined1 *)(param_1 + 0x3171) = 0;
LAB_18001c159:
  if (*(char *)(param_1 + 0x3172) != '\0') {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x31c0) + 8);
    iVar8 = (**(code **)(*plVar1 + 0x70))(plVar1,*(undefined8 *)(param_1 + 0x31e8),0,4,0,&local_18);
    if (-1 < iVar8) {
      uVar7 = 0;
      uVar2 = 0;
      if (*(int *)(param_1 + 0xe8) != 0) {
        do {
          *(float *)(CONCAT44(uStack_14,local_18) + uVar7 * 4) =
               (float)*(byte *)(param_1 + 0x22c + uVar7) / 255.0;
          uVar5 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar5;
          uVar2 = *(uint *)(param_1 + 0xe8);
        } while (uVar5 < uVar2);
      }
      *(float *)(CONCAT44(uStack_14,local_18) + (ulonglong)uVar2 * 4) =
           (float)*(byte *)((ulonglong)(uVar2 - 1) + 0x22c + param_1) / 255.0;
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x31c0) + 8);
      (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(param_1 + 0x31e8),0);
      *(undefined1 *)(param_1 + 0x3172) = 0;
    }
  }
  lVar4 = 0;
  do {
    if (*(char *)(param_1 + 0x3173 + lVar4) != '\0') {
      FUN_1800359bc(*(undefined8 **)(param_1 + 0xcf90 + lVar4 * 8));
      *(undefined1 *)(param_1 + 0x3173 + lVar4) = 0;
    }
    if (*(char *)(param_1 + 0x3176 + lVar4) != '\0') {
      FUN_180031070(*(longlong *)(param_1 + 0xcf90 + lVar4 * 8));
      *(undefined1 *)(param_1 + 0x3176 + lVar4) = 0;
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 3);
  return;
}

