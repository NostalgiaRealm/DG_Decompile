/*
 * FUN_100492ad at 100492ad
 * int __thiscall FUN_100492ad(void * this, uint param_1)
 * Address ranges: 100492ad-1004942c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_100492ad(void *this,uint param_1)

{
  uint uVar1;
  int *piVar2;
  LPVOID pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  LPVOID *ppvVar8;
  undefined4 *puVar9;
  LPVOID local_48 [2];
  uint local_40;
  undefined4 local_3c;
  int *local_38;
  int *local_34;
  uint local_30;
  SIZE_T local_2c;
  undefined4 local_28;
  int local_20;
  undefined4 local_1c;
  SIZE_T local_18;
  SIZE_T local_14;
  LPVOID local_10;
  uint local_c;
  
  uVar7 = *(uint *)((int)this + 0x1c);
  if (uVar7 < param_1 * 2) {
    uVar7 = (3 - (uint)(uVar7 * 3 < param_1)) * param_1;
  }
  uVar1 = *(uint *)((int)this + 0x18);
  uVar7 = (uVar1 - 1) + uVar7 & -uVar1;
  if ((*(int *)((int)this + 0x20) != 0) &&
     (*(uint *)((int)this + 0x20) < *(int *)((int)this + 0x24) + uVar7)) {
    return 0;
  }
  local_3c = 0;
  local_40 = uVar7;
  FUN_1004fbf6(&local_20,uVar7 / uVar1);
  local_38 = (int *)FUN_10052293(local_18);
  piVar2 = (int *)FUN_10052293(local_14);
  local_28 = 0;
  local_2c = local_14;
  local_30 = local_18;
  local_34 = piVar2;
  if ((local_38 == (int *)0x0) || (piVar2 == (int *)0x0)) goto LAB_10049416;
  FUN_10052de1(local_38,0,local_18);
  FUN_10052de1(piVar2,0,local_14);
  *(int *)((int)local_38 + ((local_18 & 0xfffffffc) - 4)) = local_20;
  *(undefined4 *)((int)piVar2 + ((local_14 & 0xfffffffc) - 4)) = local_1c;
  pvVar3 = (LPVOID)FUN_10052293(uVar7);
  local_48[0] = pvVar3;
  if (pvVar3 == (LPVOID)0x0) goto LAB_10049416;
  local_10 = pvVar3;
  local_c = FUN_100497e8((void *)((int)this + 0x28),(uint)pvVar3,0);
  if (local_c == *(uint *)((int)this + 0x30)) {
LAB_100493dd:
    FUN_1004970f((void *)((int)this + 0x28),local_c,pvVar3,0,&local_10,local_48);
  }
  else {
    iVar4 = *(int *)((int)this + 0x2c);
    iVar5 = local_c * 0x38;
    if ((*(LPVOID *)(iVar5 + iVar4) != pvVar3) || (*(int *)(iVar5 + 4 + iVar4) != 0))
    goto LAB_100493dd;
    ppvVar8 = local_48;
    puVar9 = (undefined4 *)(iVar4 + 0x10 + iVar5);
    for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *ppvVar8;
      ppvVar8 = ppvVar8 + 1;
      puVar9 = puVar9 + 1;
    }
  }
  iVar4 = FUN_100496a1((void *)((int)this + 0x28),(uint *)&local_10);
  if (iVar4 != 0) {
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + uVar7;
    return iVar4;
  }
  thunk_FUN_10052276(local_48[0]);
LAB_10049416:
  piVar2 = local_34;
  thunk_FUN_10052276(local_38);
  thunk_FUN_10052276(piVar2);
  return 0;
}

