/*
 * FUN_10049743 at 10049743
 * undefined4 __stdcall FUN_10049743(int param_1, undefined * param_2, undefined4 param_3)
 * Address ranges: 10049743-10049927
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10049743(int param_1,undefined *param_2,undefined4 param_3)

{
  BOOL BVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  int local_20 [5];
  int local_c;
  char local_6;
  char local_5;
  
  BVar1 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar1 == 0) {
    FUN_1003c603();
  }
  iVar2 = local_c;
  uVar6 = 0x80070057;
  if (param_2 != (undefined *)0x0) {
    local_20[4] = (**(code **)(**(int **)(local_c + 0x90) + 0x44))();
    uVar5 = 0;
    local_20[0] = 0;
    local_20[1] = 0;
    local_20[2] = 0;
    local_20[3] = 0;
LAB_1004978f:
    puVar7 = (&PTR_DAT_1005dcec)[*(int *)(iVar2 + 0x98)] + uVar5 * 0x298;
    iVar2 = 0;
    local_6 = puVar7[0x20];
    do {
      if (*(int *)(param_1 + iVar2 * 4) != (&DAT_1005d0f0)[iVar2]) {
        iVar2 = 0;
        goto LAB_100497c6;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 4);
    goto LAB_100497f0;
  }
LAB_10049915:
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar6;
  while (iVar2 = iVar2 + 1, iVar2 != 4) {
LAB_100497c6:
    if (*(int *)(param_1 + iVar2 * 4) != (&DAT_1005d100)[iVar2]) {
      iVar2 = 0;
      goto LAB_100497dd;
    }
  }
  goto LAB_100497f0;
  while (iVar2 = iVar2 + 1, iVar2 != 4) {
LAB_100497dd:
    if (*(int *)(param_1 + iVar2 * 4) != (&DAT_1005d110)[iVar2]) {
      local_5 = '\0';
      goto LAB_100497fa;
    }
  }
LAB_100497f0:
  local_5 = '\x01';
LAB_100497fa:
  iVar2 = 0;
  do {
    if (*(int *)(puVar7 + iVar2 * 4) != local_20[iVar2]) {
      iVar2 = 0;
      goto LAB_10049817;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 4);
  goto LAB_10049907;
  while (iVar2 = iVar2 + 1, iVar2 != 4) {
LAB_10049817:
    if (*(int *)(param_1 + iVar2 * 4) != (&DAT_1005d0f0)[iVar2]) {
      iVar2 = 0;
      goto LAB_1004985d;
    }
  }
  iVar2 = 0;
  do {
    if (*(int *)(puVar7 + iVar2 * 4) != (&DAT_1005d160)[iVar2]) {
      iVar2 = local_c + 0x1c08;
      iVar3 = uVar5 * 0xfc + 0xe8;
      goto LAB_100498c7;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 4);
  goto LAB_10049907;
  while (iVar2 = iVar2 + 1, iVar2 != 4) {
LAB_1004985d:
    if (*(int *)(param_1 + iVar2 * 4) != (&DAT_1005d100)[iVar2]) {
      iVar2 = 0;
      goto LAB_1004988e;
    }
  }
  iVar2 = local_c + 0x1d04;
  iVar3 = uVar5 * 0xfc + 0x7cc;
LAB_100498c7:
  iVar3 = iVar3 + local_c;
  if (iVar3 != 0) {
    if ((local_5 == '\0') && (*(char *)(local_20[4] + 0x957) == '\0')) {
      uVar6 = *(undefined4 *)(puVar7 + 0x28);
    }
    else {
      uVar6 = *(undefined4 *)(puVar7 + 0x24);
    }
    iVar4 = iVar3;
    if (local_6 != '\0') {
      iVar4 = iVar2;
      iVar2 = iVar3;
    }
    iVar2 = (*(code *)param_2)(puVar7,*(undefined4 *)(puVar7 + 0x2c),uVar6,iVar4,iVar2,param_3);
    if (iVar2 == 0) goto LAB_10049911;
  }
LAB_10049907:
  uVar5 = uVar5 + 1;
  iVar2 = local_c;
  if (6 < uVar5) goto LAB_10049911;
  goto LAB_1004978f;
  while (iVar2 = iVar2 + 1, iVar2 != 4) {
LAB_1004988e:
    if (*(int *)(puVar7 + iVar2 * 4) != (&DAT_1005d130)[iVar2]) {
      iVar2 = 0;
      goto LAB_100498a5;
    }
  }
  goto LAB_10049907;
  while (iVar2 = iVar2 + 1, iVar2 != 4) {
LAB_100498a5:
    if (*(int *)(puVar7 + iVar2 * 4) != (&DAT_1005d160)[iVar2]) {
      iVar2 = local_c + 0x1e00;
      iVar3 = uVar5 * 0xfc + 0xeb0;
      goto LAB_100498c7;
    }
  }
  goto LAB_10049907;
LAB_10049911:
  uVar6 = 0;
  goto LAB_10049915;
}

