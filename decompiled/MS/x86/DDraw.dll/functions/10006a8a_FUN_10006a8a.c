/*
 * FUN_10006a8a at 10006a8a
 * undefined4 __thiscall FUN_10006a8a(void * this, uint param_1)
 * Address ranges: 10006a8a-10006b6c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10006a8a(void *this,uint param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  LPVOID local_24;
  int local_20;
  int local_14;
  int local_10;
  undefined4 local_c [2];
  
  uVar3 = param_1;
  local_c[0] = 0;
  uVar7 = 0;
  if ((int)param_1 < 0) {
    uVar5 = FUN_1000a73c(this,param_1,0);
    if (uVar5 != *(uint *)((int)this + 8)) {
      iVar1 = *(int *)((int)this + 4);
      iVar6 = uVar5 * 0x10;
      if (((*(uint *)(iVar6 + iVar1) == uVar3) && (*(int *)(iVar6 + 4 + iVar1) == 0)) &&
         (puVar8 = (undefined4 *)(iVar1 + 0xc + iVar6), puVar8 != (undefined4 *)0x0)) {
        return *puVar8;
      }
    }
    iVar6 = *(int *)((int)this + 0x14) * 0x1510;
    iVar1 = *(int *)((int)this + 0x10);
    local_14 = iVar1;
    local_10 = iVar6;
    FUN_100069a7(&local_24,0x100);
    uVar7 = 0x40;
    if (0xafff < *(int *)(iVar6 + 0x520 + iVar1)) {
      uVar7 = 0x50;
    }
    cVar4 = FUN_1001f5ba(uVar7,0,param_1,(int *)&local_24);
    if (cVar4 != '\0') {
      FUN_1004adfc(*(void **)((int)this + 0x10),local_24,local_20 - (int)local_24);
      piVar2 = *(int **)(local_10 + 0x510 + local_14);
      (**(code **)(*piVar2 + 0x3c))(piVar2,local_24,local_20 - (int)local_24,0,local_c);
      FUN_1000a46b(this,&param_1,local_c);
    }
    thunk_FUN_10060be1(local_24);
    uVar7 = local_c[0];
  }
  return uVar7;
}

