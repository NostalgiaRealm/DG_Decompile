/*
 * FUN_10006319 at 10006319
 * undefined __thiscall FUN_10006319(void * this, int param_1)
 * Address ranges: 10006319-1000641b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10006319(void *this,int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    (**(code **)(**(int **)((int)this + 0xc) + 0x58))(param_1);
    cVar2 = *(char *)(*(int *)((int)this + 0xc) + 0xe4);
    *(char *)(*(int *)((int)this + 0xc) + 0xe4) = (char)param_1;
    if (param_1 == 6) {
      if ((cVar2 != '\x06') && (iVar3 = *(int *)((int)this + 0xc), *(char *)(iVar3 + 0x1f1) == '\0')
         ) {
        *(undefined4 *)(iVar3 + 0x1e1) = *(undefined4 *)(iVar3 + 0x12d);
        *(undefined4 *)(iVar3 + 0x1e5) = *(undefined4 *)(iVar3 + 0x131);
        *(undefined4 *)(iVar3 + 0x1e9) = *(undefined4 *)(iVar3 + 0x135);
        *(undefined4 *)(iVar3 + 0x1ed) = *(undefined4 *)(iVar3 + 0x139);
        *(undefined1 *)(*(int *)((int)this + 0xc) + 0x1f1) = 1;
        iVar3 = *(int *)((int)this + 0xc);
        *(undefined4 *)(iVar3 + 0x1e1) = *(undefined4 *)(iVar3 + 0x12d);
        *(undefined4 *)(iVar3 + 0x1e5) = *(undefined4 *)(iVar3 + 0x131);
        *(undefined4 *)(iVar3 + 0x1e9) = *(undefined4 *)(iVar3 + 0x135);
        *(undefined4 *)(iVar3 + 0x1ed) = *(undefined4 *)(iVar3 + 0x139);
        iVar3 = *(int *)((int)this + 0xc);
        SetRect((LPRECT)(iVar3 + 0x12d),0,0,*(int *)(iVar3 + 0x1b9),*(int *)(iVar3 + 0x1bd));
        (**(code **)(**(int **)((int)this + 0xc) + 0xd0))((int)*(int **)((int)this + 0xc) + 0x12d);
      }
    }
    else {
      iVar3 = *(int *)((int)this + 0xc);
      if (*(char *)(iVar3 + 0x1f1) != '\0') {
        *(undefined4 *)(iVar3 + 0x12d) = *(undefined4 *)(iVar3 + 0x1e1);
        *(undefined4 *)(iVar3 + 0x131) = *(undefined4 *)(iVar3 + 0x1e5);
        *(undefined4 *)(iVar3 + 0x135) = *(undefined4 *)(iVar3 + 0x1e9);
        *(undefined4 *)(iVar3 + 0x139) = *(undefined4 *)(iVar3 + 0x1ed);
        (**(code **)(**(int **)((int)this + 0xc) + 0xd0))((int)*(int **)((int)this + 0xc) + 0x12d);
        *(undefined1 *)(*(int *)((int)this + 0xc) + 0x1f1) = 0;
      }
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

