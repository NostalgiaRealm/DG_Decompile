/*
 * FUN_1006626b at 1006626b
 * int * __thiscall FUN_1006626b(void * this, uint param_1)
 * Address ranges: 1006626b-10066332
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_1006626b(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *local_1c;
  int local_18;
  int *local_c [2];
  
  uVar2 = param_1;
  piVar6 = (int *)0x0;
  local_c[0] = (int *)0x0;
  if ((int)param_1 < 0) {
    uVar4 = FUN_10007d2a(this,param_1,0);
    if (uVar4 != *(uint *)((int)this + 8)) {
      iVar1 = *(int *)((int)this + 4);
      iVar5 = uVar4 * 0x10;
      if (((*(uint *)(iVar5 + iVar1) == uVar2) && (*(int *)(iVar5 + 4 + iVar1) == 0)) &&
         (puVar7 = (undefined4 *)(iVar1 + 0xc + iVar5), puVar7 != (undefined4 *)0x0)) {
        return (int *)*puVar7;
      }
    }
    iVar1 = *(int *)((int)this + 0x14);
    iVar5 = *(int *)((int)this + 0x10);
    FUN_1002d6f1(&local_1c,0x100);
    cVar3 = FUN_1007658b((0xbfff < *(int *)(iVar1 * 0x16c0 + 0x6c0 + iVar5)) + 0x50,1,param_1,
                         (int *)&local_1c);
    if (cVar3 != '\0') {
      FUN_100a04f1(*(void **)((int)this + 0x10),local_1c,local_18 - (int)local_1c);
      local_c[0] = FUN_100a3a3a(local_18 - (int)local_1c,local_1c);
      FUN_10061343(this,&param_1,local_c);
    }
    piVar6 = local_c[0];
    thunk_FUN_100ad48c(local_1c);
  }
  return piVar6;
}

