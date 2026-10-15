/*
 * FUN_100938f1 at 100938f1
 * int __thiscall FUN_100938f1(void * this, int param_1)
 * Address ranges: 100938f1-10093988
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_100938f1(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(uint *)((int)this + 0xd98) != 0) {
    do {
      iVar1 = *(int *)(*(int *)((int)this + 0xd94) + uVar3 * 4);
      iVar2 = iVar1 + -8;
      if (iVar1 == 0) {
        iVar2 = 0;
      }
      if (((iVar2 != 0) && (param_1 == *(int *)(iVar2 + 0xac))) && (*(char *)(iVar2 + 0xbd) == '\0')
         ) {
        return iVar2;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((int)this + 0xd98));
  }
  uVar3 = 0;
  if (*(uint *)((int)this + 0xdf8) != 0) {
    do {
      iVar1 = *(int *)(*(int *)((int)this + 0xdf4) + uVar3 * 4);
      iVar2 = iVar1 + 0x48;
      if (iVar1 == 0) {
        iVar2 = 0x50;
      }
      if ((param_1 == *(int *)(iVar2 + 0x5c)) && (*(char *)(iVar2 + 0x6d) == '\0')) {
        if (iVar1 != 0) {
          return iVar1 + -8;
        }
        return 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((int)this + 0xdf8));
  }
  return 0;
}

