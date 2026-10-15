/*
 * FUN_10005f24 at 10005f24
 * undefined __thiscall FUN_10005f24(void * this, int param_1)
 * Address ranges: 10005f24-10006026
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10005f24(void *this,int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    (**(code **)(**(int **)((int)this + 0xc) + 0x5c))(param_1);
    cVar2 = *(char *)(*(int *)((int)this + 0xc) + 0xe0);
    *(char *)(*(int *)((int)this + 0xc) + 0xe0) = (char)param_1;
    if (param_1 == 6) {
      if ((cVar2 != '\x06') && (iVar3 = *(int *)((int)this + 0xc), *(char *)(iVar3 + 0x18e) == '\0')
         ) {
        *(undefined4 *)(iVar3 + 0x17e) = *(undefined4 *)(iVar3 + 0x10a);
        *(undefined4 *)(iVar3 + 0x182) = *(undefined4 *)(iVar3 + 0x10e);
        *(undefined4 *)(iVar3 + 0x186) = *(undefined4 *)(iVar3 + 0x112);
        *(undefined4 *)(iVar3 + 0x18a) = *(undefined4 *)(iVar3 + 0x116);
        *(undefined1 *)(*(int *)((int)this + 0xc) + 0x18e) = 1;
        iVar3 = *(int *)((int)this + 0xc);
        *(undefined4 *)(iVar3 + 0x17e) = *(undefined4 *)(iVar3 + 0x10a);
        *(undefined4 *)(iVar3 + 0x182) = *(undefined4 *)(iVar3 + 0x10e);
        *(undefined4 *)(iVar3 + 0x186) = *(undefined4 *)(iVar3 + 0x112);
        *(undefined4 *)(iVar3 + 0x18a) = *(undefined4 *)(iVar3 + 0x116);
        iVar3 = *(int *)((int)this + 0xc);
        SetRect((LPRECT)(iVar3 + 0x10a),0,0,*(int *)(iVar3 + 0x156),*(int *)(iVar3 + 0x15a));
        (**(code **)(**(int **)((int)this + 0xc) + 0xdc))((int)*(int **)((int)this + 0xc) + 0x10a);
      }
    }
    else {
      iVar3 = *(int *)((int)this + 0xc);
      if (*(char *)(iVar3 + 0x18e) != '\0') {
        *(undefined4 *)(iVar3 + 0x10a) = *(undefined4 *)(iVar3 + 0x17e);
        *(undefined4 *)(iVar3 + 0x10e) = *(undefined4 *)(iVar3 + 0x182);
        *(undefined4 *)(iVar3 + 0x112) = *(undefined4 *)(iVar3 + 0x186);
        *(undefined4 *)(iVar3 + 0x116) = *(undefined4 *)(iVar3 + 0x18a);
        (**(code **)(**(int **)((int)this + 0xc) + 0xdc))((int)*(int **)((int)this + 0xc) + 0x10a);
        *(undefined1 *)(*(int *)((int)this + 0xc) + 0x18e) = 0;
      }
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

