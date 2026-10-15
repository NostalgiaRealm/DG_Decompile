/*
 * FUN_1003e451 at 1003e451
 * undefined __thiscall FUN_1003e451(void * this, int param_1, char param_2, int param_3)
 * Address ranges: 1003e451-1003e51c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003e451(void *this,int param_1,char param_2,int param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char cVar4;
  char cStack0000000b;
  
  if (param_1 != 7) {
    if (*(char *)((int)this + 0x229) != '\0') {
      return;
    }
    FUN_10008d64(this,'\0');
    (**(code **)(**(int **)((int)this + 0x14) + 0x70))(*(int *)((int)this + 0x9cc) + 0x8c0);
    return;
  }
  if (param_2 != '\0') {
    return;
  }
  cStack0000000b = *(char *)((int)this + 0x229);
  cVar1 = *(char *)(param_3 + 0x1c);
  if ((cStack0000000b != '\0') && ((cVar1 != -1) == (bool)*(char *)((int)this + 0x22a))) {
    return;
  }
  if ((cVar1 == -1) && (*(int *)((int)this + 0x4cc) == 0)) {
    cVar4 = '\x01';
    cVar2 = FUN_10008d64(this,'\x01');
    if (cVar2 != '\0') goto LAB_1003e4d7;
  }
  cVar4 = '\0';
LAB_1003e4d7:
  if ((cVar4 != *(char *)((int)this + 0x22c)) || ((cVar4 != '\0' && (cStack0000000b == '\0')))) {
    if (cVar4 == '\0') {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)((int)this + 0x9cc) + 0x8c0;
    }
    (**(code **)(**(int **)((int)this + 0x14) + 0x70))(iVar3);
    *(char *)((int)this + 0x22c) = cVar4;
  }
  *(bool *)((int)this + 0x22a) = cVar1 != -1;
  return;
}

