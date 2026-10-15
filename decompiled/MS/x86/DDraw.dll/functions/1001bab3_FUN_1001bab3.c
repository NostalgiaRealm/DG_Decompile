/*
 * FUN_1001bab3 at 1001bab3
 * undefined __stdcall FUN_1001bab3(undefined4 * param_1)
 * Address ranges: 1001bab3-1001bb7d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001bab3(undefined4 *param_1)

{
  int *this;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  
  this = (int *)*param_1;
  iVar1 = param_1[1];
  iVar2 = param_1[2];
  (**(code **)(*this + 0x1c))
            (iVar1,param_1[3],param_1[4],param_1[5],param_1[6],param_1[7],param_1[8],param_1[9],
             param_1[10],param_1[0xb]);
  FUN_1004939f(this,iVar2,0);
  iVar2 = param_1[0xc];
  if (iVar2 != 0) {
    uVar3 = param_1[0xd];
    iVar4 = param_1[0xe];
    lpCriticalSection = (LPCRITICAL_SECTION)(this + *(int *)(iVar1 + 8) * 0x5b0 + 0x6ec);
    EnterCriticalSection(lpCriticalSection);
    FUN_10056644(lpCriticalSection,iVar4,iVar2,uVar3);
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

