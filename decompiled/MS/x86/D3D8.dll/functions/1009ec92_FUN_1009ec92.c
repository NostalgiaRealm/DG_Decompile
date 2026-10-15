/*
 * FUN_1009ec92 at 1009ec92
 * undefined __thiscall FUN_1009ec92(void * this, undefined4 param_1, int param_2, int param_3, int param_4, int param_5)
 * Address ranges: 1009ec92-1009ed72
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1009ec92(void *this,undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined8 uVar7;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  LPCRITICAL_SECTION local_c;
  
  local_c = (LPCRITICAL_SECTION)((int)this + 0x1c);
  EnterCriticalSection(local_c);
  piVar5 = (int *)FUN_1009f406((void *)((int)this + 0xc),&param_1);
  if (piVar5 == (int *)0x0) {
    local_20 = param_2;
    local_1c = param_3;
    local_18 = param_4;
    local_14 = param_5;
    FUN_1009f4aa((void *)((int)this + 0xc),&param_1,&local_20);
  }
  else {
    uVar7 = (**(code **)(**(int **)(*piVar5 + 0xc) + 0x20))(*(int **)(*piVar5 + 0xc));
    iVar4 = param_3;
    iVar3 = param_2;
    uVar6 = (uint)((ulonglong)uVar7 >> 0x20);
    if ((uVar6 <= (uint)piVar5[3]) && ((uVar6 < (uint)piVar5[3] || ((uint)uVar7 < (uint)piVar5[2])))
       ) {
      iVar1 = piVar5[1];
      if (param_2 == *piVar5) {
        if ((param_3 != iVar1) && (iVar1 != -1)) {
          FUN_10098768((void *)(iVar1 + 4),'\0');
        }
      }
      else {
        if (iVar1 != -1) {
          FUN_10098768((void *)(iVar1 + 4),'\0');
        }
        if (iVar4 != -1) {
          FUN_10098768((void *)(iVar4 + 4),'\0');
        }
        piVar2 = *(int **)(iVar3 + 8);
        (**(code **)(*piVar2 + 0x3c))(piVar2,*(undefined4 *)(*piVar5 + 0xc),piVar5[2],piVar5[3]);
      }
    }
    *piVar5 = iVar3;
    piVar5[1] = iVar4;
    piVar5[2] = param_4;
    piVar5[3] = param_5;
  }
  LeaveCriticalSection(local_c);
  return;
}

