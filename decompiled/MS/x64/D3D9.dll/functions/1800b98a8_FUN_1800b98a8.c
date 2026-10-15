/*
 * FUN_1800b98a8 at 1800b98a8
 * undefined __fastcall FUN_1800b98a8(longlong param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 1800b98a8-1800b9a60
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800b98a8(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  float fVar7;
  uint local_res8 [8];
  
  FUN_1800fa780(local_res8);
  FUN_18000452c(param_1,param_2,param_3);
  FUN_1800fbea0((undefined1 *)(param_1 + 0x6ad0),0,0x380);
  uVar4 = 0;
  do {
    uVar3 = 0;
    do {
      uVar2 = (&DAT_180111954)[uVar3 * 2];
      *(uint *)((ulonglong)uVar4 * 0x38 + param_1 + 0x6ad0 + uVar3 * 4) = uVar2;
      if ((&DAT_180111950)[uVar3 * 8] != '\0') {
        FUN_1800b0a64(param_1,uVar4,(int)uVar3,(ulonglong)uVar2);
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < 0xe);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x10);
  uVar4 = 0;
  do {
    uVar3 = 0;
    do {
      uVar2 = (&DAT_180111954)[uVar3 * 2];
      *(uint *)((ulonglong)uVar4 * 0x38 + param_1 + 0x6e50 + uVar3 * 4) = uVar2;
      iVar5 = (int)uVar3;
      if (((&DAT_180111950)[uVar3 * 8] != '\0') && (iVar5 != 10)) {
        FUN_1800b0a64(param_1,uVar4 + 0x100,iVar5,(ulonglong)uVar2);
      }
      uVar3 = (ulonglong)(iVar5 + 1U);
    } while (iVar5 + 1U < 0xe);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 5);
  FUN_1800b5fe4(param_1,0,0);
  FUN_1800b6cd4(param_1,0,0);
  FUN_1800b7bc4(param_1 + 0x6838,0);
  iVar5 = *(int *)(param_1 + 0xe68);
  if (iVar5 == 1) {
    if ((*(byte *)(param_1 + 0xe78) & 0x20) == 0) goto LAB_1800b99ec;
    *(undefined4 *)(param_1 + 0xc4e4) = 1;
LAB_1800b99f1:
    if ((*(byte *)(param_1 + 0xe78) & 0x20) == 0) {
      if ((*(byte *)(param_1 + 0xe78) & 0x80) == 0) {
        bVar6 = false;
      }
      else {
        bVar6 = *(int *)(param_1 + 0xc4e4) != 0;
      }
      goto LAB_1800b99b8;
    }
  }
  else if (iVar5 == 3) {
    *(undefined4 *)(param_1 + 0xc4e4) = 1;
  }
  else {
LAB_1800b99ec:
    if (iVar5 != 3) goto LAB_1800b99f1;
  }
  bVar6 = true;
LAB_1800b99b8:
  *(bool *)(param_1 + 0x681b) = bVar6;
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar4 = *(uint *)(lVar1 + 0x9eb);
  if (uVar4 < 9) {
    if (uVar4 == 0) {
      fVar7 = 1.0;
    }
    else {
      fVar7 = (float)uVar4;
    }
  }
  else {
    fVar7 = 8.0;
  }
  *(float *)(param_1 + 0xc4e0) = fVar7;
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x138))
            (*(longlong **)(param_1 + 0x28),lVar1,*(int *)(lVar1 + 0x9eb) != 0);
  FUN_1800fa7bc();
  return;
}

