/*
 * FUN_100292f1 at 100292f1
 * undefined4 __fastcall FUN_100292f1(undefined4 * param_1, int param_2, undefined4 * param_3)
 * Address ranges: 100292f1-100294c4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_100292f1(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  
  FUN_10002949();
  lpCriticalSection = DAT_1006c254;
  if (param_3 == (undefined4 *)0x0) {
    return 0x80070057;
  }
  *param_3 = 0;
  BVar1 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar1 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  iVar3 = 0;
  do {
    if (param_1[iVar3] != (&DAT_10062350)[iVar3]) {
      iVar3 = 0;
      goto LAB_100293bf;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  uVar5 = 0x8007000e;
  if (DAT_1006c27c == (int *)0x0) {
    pvVar2 = (void *)FUN_10060bca(0x58);
    if (pvVar2 == (void *)0x0) {
      DAT_1006c27c = (int *)0x0;
    }
    else {
      DAT_1006c27c = FUN_10029012(pvVar2,*param_1,param_1[1],param_1[2],param_1[3]);
    }
    if (DAT_1006c27c == (int *)0x0) goto LAB_100294b2;
  }
  iVar3 = 0;
  do {
    piVar4 = DAT_1006c27c;
    if (*(int *)(param_2 + iVar3 * 4) != (&DAT_10062570)[iVar3]) goto LAB_1002949f;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  goto LAB_100293ac;
  while (iVar3 = iVar3 + 1, iVar3 != 4) {
LAB_100293bf:
    if (param_1[iVar3] != (&DAT_10062360)[iVar3]) {
      iVar3 = 0;
      goto LAB_10029433;
    }
  }
  uVar5 = 0x8007000e;
  if (DAT_1006c278 == (int *)0x0) {
    pvVar2 = (void *)FUN_10060bca(0x58);
    if (pvVar2 == (void *)0x0) {
      DAT_1006c278 = (int *)0x0;
    }
    else {
      DAT_1006c278 = FUN_10029012(pvVar2,*param_1,param_1[1],param_1[2],param_1[3]);
    }
    if (DAT_1006c278 == (int *)0x0) goto LAB_100294b2;
  }
  iVar3 = 0;
  do {
    piVar4 = DAT_1006c278;
    if (*(int *)(param_2 + iVar3 * 4) != (&DAT_10062570)[iVar3]) goto LAB_1002949f;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  goto LAB_100293ac;
LAB_1002949f:
  uVar5 = (**(code **)(*piVar4 + 0xc))(piVar4,0,param_2,param_3);
  goto LAB_100294b2;
  while (iVar3 = iVar3 + 1, iVar3 != 4) {
LAB_10029433:
    if (param_1[iVar3] != (&DAT_10062370)[iVar3]) {
      uVar5 = 0x80040111;
      goto LAB_100294b2;
    }
  }
  uVar5 = 0x8007000e;
  if (DAT_1006c274 == (int *)0x0) {
    pvVar2 = (void *)FUN_10060bca(0x58);
    if (pvVar2 == (void *)0x0) {
      DAT_1006c274 = (int *)0x0;
    }
    else {
      DAT_1006c274 = FUN_10029012(pvVar2,*param_1,param_1[1],param_1[2],param_1[3]);
    }
    if (DAT_1006c274 == (int *)0x0) goto LAB_100294b2;
  }
  iVar3 = 0;
  do {
    piVar4 = DAT_1006c274;
    if (*(int *)(param_2 + iVar3 * 4) != (&DAT_10062570)[iVar3]) goto LAB_1002949f;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
LAB_100293ac:
  uVar5 = (**(code **)*piVar4)(piVar4,param_2,param_3);
LAB_100294b2:
  LeaveCriticalSection(DAT_1006c254);
  return uVar5;
}

