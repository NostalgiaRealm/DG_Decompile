/*
 * FUN_1001a1e9 at 1001a1e9
 * uint __thiscall FUN_1001a1e9(void * this, int param_1)
 * Address ranges: 1001a1e9-1001a246
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1001a1e9(void *this,int param_1)

{
  int iVar1;
  void *this_00;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = 0;
  uVar4 = 0;
  if (*(uint *)((int)this + 8) != 0) {
    iVar1 = *(int *)((int)this + 4);
    uVar5 = *(uint *)((int)this + 8);
    do {
      uVar4 = uVar5 + uVar3 >> 1;
      this_00 = (void *)(uVar4 * 0x40 + iVar1);
      uVar2 = FUN_10019d9a(this_00,param_1);
      uVar6 = uVar4;
      if ((char)uVar2 == '\0') {
        uVar3 = FUN_10019d5a(this_00,param_1);
        if ((char)uVar3 == '\0') {
          return uVar4;
        }
        uVar3 = uVar4 + 1;
        uVar4 = uVar3;
        uVar6 = uVar5;
      }
      uVar5 = uVar6;
    } while (uVar6 != uVar3);
  }
  return uVar4;
}

