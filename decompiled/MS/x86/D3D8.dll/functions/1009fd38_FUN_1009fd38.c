/*
 * FUN_1009fd38 at 1009fd38
 * int __thiscall FUN_1009fd38(void * this, uint param_1)
 * Address ranges: 1009fd38-1009fee1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1009fd38(void *this,uint param_1)

{
  int *piVar1;
  LPVOID pvVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  LPVOID *ppvVar8;
  undefined4 *puVar9;
  LPVOID local_44;
  int local_40;
  undefined4 local_3c;
  SIZE_T local_38;
  SIZE_T local_34;
  LPVOID local_30 [2];
  uint local_28;
  undefined4 local_24;
  int *local_20;
  int *local_1c;
  uint local_18;
  SIZE_T local_14;
  undefined4 local_10;
  
  uVar7 = *(uint *)((int)this + 0x1c);
  if (uVar7 < param_1 * 2) {
    uVar7 = (3 - (uint)(uVar7 * 3 < param_1)) * param_1;
  }
  uVar3 = *(uint *)((int)this + 0x18);
  uVar7 = (uVar3 - 1) + uVar7 & -uVar3;
  if ((*(int *)((int)this + 0x20) != 0) &&
     (*(uint *)((int)this + 0x20) < *(int *)((int)this + 0x24) + uVar7)) {
    return 0;
  }
  local_24 = 0;
  local_28 = uVar7;
  FUN_100a6895(&local_40,uVar7 / uVar3);
  local_20 = (int *)FUN_100ad4a9(local_38);
  piVar1 = (int *)FUN_100ad4a9(local_34);
  local_10 = 0;
  local_14 = local_34;
  local_18 = local_38;
  local_1c = piVar1;
  if ((local_20 == (int *)0x0) || (piVar1 == (int *)0x0)) goto LAB_1009fec9;
  FUN_100ada8e(local_20,0,local_38);
  FUN_100ada8e(piVar1,0,local_34);
  *(int *)((int)local_20 + ((local_38 & 0xfffffffc) - 4)) = local_40;
  *(undefined4 *)((int)piVar1 + ((local_34 & 0xfffffffc) - 4)) = local_3c;
  pvVar2 = (LPVOID)FUN_100ad4a9(uVar7);
  local_30[0] = pvVar2;
  if (pvVar2 == (LPVOID)0x0) goto LAB_1009fec9;
  local_44 = pvVar2;
  uVar3 = FUN_1009e71a((void *)((int)this + 0x28),(uint)pvVar2,0);
  if (uVar3 == *(uint *)((int)this + 0x30)) {
LAB_1009fe8a:
    FUN_100a0190((void *)((int)this + 0x28),uVar3,pvVar2,0,&local_44,local_30);
  }
  else {
    iVar4 = *(int *)((int)this + 0x2c);
    iVar5 = uVar3 * 0x38;
    if ((*(LPVOID *)(iVar5 + iVar4) != pvVar2) || (*(int *)(iVar5 + 4 + iVar4) != 0))
    goto LAB_1009fe8a;
    ppvVar8 = local_30;
    puVar9 = (undefined4 *)(iVar4 + 0x10 + iVar5);
    for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *ppvVar8;
      ppvVar8 = ppvVar8 + 1;
      puVar9 = puVar9 + 1;
    }
  }
  iVar4 = FUN_100a0156((void *)((int)this + 0x28),(uint *)&local_44);
  if (iVar4 != 0) {
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + uVar7;
    return iVar4;
  }
  thunk_FUN_100ad48c(local_30[0]);
LAB_1009fec9:
  piVar1 = local_1c;
  thunk_FUN_100ad48c(local_20);
  thunk_FUN_100ad48c(piVar1);
  return 0;
}

