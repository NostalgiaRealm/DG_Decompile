/*
 * FUN_1002fd6c at 1002fd6c
 * undefined __thiscall FUN_1002fd6c(void * this, uint param_1)
 * Address ranges: 1002fd6c-1002fe58
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002fd6c(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  
  iVar4 = *(int *)((int)this + 0x10) * 0x16c0;
  iVar1 = *(int *)((int)this + 8);
  FUN_100ac680(iVar1 + iVar4 + 0x1880);
  uVar3 = param_1;
  iVar2 = *(int *)(*(int *)((int)this + 8) + 0x172c0);
  if (*(char *)(param_1 + 0x34) == '\0') {
    FUN_1009f25c(iVar2);
    iVar1 = *(int *)(*(int *)(iVar4 + 0x19c4 + iVar1) + 0x910);
    *(bool *)(uVar3 + 0x34) = iVar1 != -1;
    if ((*(undefined4 **)((int)this + 0xc) != (undefined4 *)0x0) && (iVar1 != -1)) {
      (**(code **)**(undefined4 **)((int)this + 0xc))(this);
    }
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0x1c));
    piVar5 = (int *)FUN_1009f406((void *)(iVar2 + 0xc),&param_1);
    if (piVar5 != (int *)0x0) {
      FUN_1009e7e4(piVar5,'\0');
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0x1c));
    iVar2 = *(int *)(iVar4 + 0x19c4 + iVar1);
    uVar8 = FUN_100a6dac(*(void **)(iVar2 + 0x900),*(int *)(iVar2 + 0x910));
    uVar7 = (uint)((ulonglong)uVar8 >> 0x20);
    uVar6 = (uint)uVar8;
    if (uVar7 <= *(uint *)(uVar3 + 0x24)) {
      if (*(uint *)(uVar3 + 0x24) <= uVar7) goto LAB_1002fe16;
      do {
        do {
          iVar2 = *(int *)(iVar4 + 0x19c4 + iVar1);
          uVar8 = FUN_100a6dac(*(void **)(iVar2 + 0x900),*(int *)(iVar2 + 0x910));
          uVar7 = (uint)((ulonglong)uVar8 >> 0x20);
          uVar6 = (uint)uVar8;
        } while (uVar7 < *(uint *)(uVar3 + 0x24));
        if (*(uint *)(uVar3 + 0x24) < uVar7) {
          return;
        }
LAB_1002fe16:
      } while (uVar6 < *(uint *)(uVar3 + 0x20));
    }
  }
  return;
}

