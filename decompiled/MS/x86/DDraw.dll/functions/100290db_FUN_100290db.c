/*
 * FUN_100290db at 100290db
 * int __stdcall FUN_100290db(undefined4 * param_1)
 * Address ranges: 100290db-100291ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100290db(undefined4 *param_1)

{
  int *this;
  int *piVar1;
  int iVar2;
  BOOL BVar3;
  int iVar4;
  
  this = param_1 + 1;
  if (*(char *)((int)param_1 + 0xb) != '\0') {
    return 0;
  }
  iVar2 = FUN_1002356c(this,0x10062560);
  if (iVar2 == 0) {
    return 0;
  }
  piVar1 = *(int **)(iVar2 + 0x10);
  LOCK();
  iVar4 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  iVar4 = iVar4 + -1;
  FUN_10022ecc(this);
  if ((iVar4 == 0) && (*(char *)((int)param_1 + 10) == '\0')) {
    *(undefined4 *)(iVar2 + 0x18) = 0;
  }
  iVar2 = FUN_10023519((int)this);
  if (iVar2 == 0) {
    *(undefined1 *)((int)param_1 + 0xb) = 1;
  }
  *this = 0;
  if (iVar2 != 0) {
    return iVar4;
  }
  BVar3 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar3 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  iVar2 = 0;
  do {
    if (param_1[iVar2 + 0x12] != (&DAT_10062350)[iVar2]) {
      iVar2 = 0;
      goto LAB_1002918e;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 4);
  DAT_1006c27c = 0;
  goto LAB_100291c1;
  while (iVar2 = iVar2 + 1, iVar2 != 4) {
LAB_1002918e:
    if (param_1[iVar2 + 0x12] != (&DAT_10062360)[iVar2]) {
      iVar2 = 0;
      goto LAB_100291ac;
    }
  }
  DAT_1006c278 = 0;
  goto LAB_100291c1;
  while (iVar2 = iVar2 + 1, iVar2 != 4) {
LAB_100291ac:
    if (param_1[iVar2 + 0x12] != (&DAT_10062370)[iVar2]) goto LAB_100291c1;
  }
  DAT_1006c274 = 0;
LAB_100291c1:
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_1006460c;
    FUN_10060be1(param_1);
  }
  LeaveCriticalSection(DAT_1006c254);
  return iVar4;
}

