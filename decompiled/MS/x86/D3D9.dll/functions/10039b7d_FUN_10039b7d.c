/*
 * FUN_10039b7d at 10039b7d
 * undefined __thiscall FUN_10039b7d(void * this, uint param_1)
 * Address ranges: 10039b7d-10039c69
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10039b7d(void *this,uint param_1)

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
  FUN_100cef50(iVar1 + iVar4 + 0x1880);
  uVar3 = param_1;
  iVar2 = *(int *)(*(int *)((int)this + 8) + 0x172c0);
  if (*(char *)(param_1 + 0x34) == '\0') {
    FUN_100c1824(iVar2);
    iVar1 = *(int *)(*(int *)(iVar4 + 0x19c4 + iVar1) + 0x910);
    *(bool *)(uVar3 + 0x34) = iVar1 != -1;
    if ((*(undefined4 **)((int)this + 0xc) != (undefined4 *)0x0) && (iVar1 != -1)) {
      (**(code **)**(undefined4 **)((int)this + 0xc))(this);
    }
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0x1c));
    piVar5 = (int *)FUN_100c19ce((void *)(iVar2 + 0xc),&param_1);
    if (piVar5 != (int *)0x0) {
      FUN_100c0dac(piVar5,'\0');
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0x1c));
    iVar2 = *(int *)(iVar4 + 0x19c4 + iVar1);
    uVar8 = FUN_100c967b(*(void **)(iVar2 + 0x900),*(int *)(iVar2 + 0x910));
    uVar7 = (uint)((ulonglong)uVar8 >> 0x20);
    uVar6 = (uint)uVar8;
    if (uVar7 <= *(uint *)(uVar3 + 0x24)) {
      if (*(uint *)(uVar3 + 0x24) <= uVar7) goto LAB_10039c27;
      do {
        do {
          iVar2 = *(int *)(iVar4 + 0x19c4 + iVar1);
          uVar8 = FUN_100c967b(*(void **)(iVar2 + 0x900),*(int *)(iVar2 + 0x910));
          uVar7 = (uint)((ulonglong)uVar8 >> 0x20);
          uVar6 = (uint)uVar8;
        } while (uVar7 < *(uint *)(uVar3 + 0x24));
        if (*(uint *)(uVar3 + 0x24) < uVar7) {
          return;
        }
LAB_10039c27:
      } while (uVar6 < *(uint *)(uVar3 + 0x20));
    }
  }
  return;
}

