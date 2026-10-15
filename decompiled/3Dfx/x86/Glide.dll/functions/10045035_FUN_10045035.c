/*
 * FUN_10045035 at 10045035
 * undefined4 __thiscall FUN_10045035(void * this, int param_1)
 * Address ranges: 10045035-100451e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10045035(void *this,int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = param_1 * 0x16c0 + 0x6c0 + (int)this;
  iVar2 = FUN_10045248(this,param_1);
  *(int *)(iVar5 + 0x10) = iVar2;
  uVar4 = 0;
  if (iVar2 != 0) {
    iVar2 = FUN_10045313(this,param_1);
    *(int *)(iVar5 + 0x80) = iVar2;
    if (iVar2 != 0) {
      bVar1 = FUN_1003ba6c(*(HMODULE *)((int)this + 0x298),2,0x100593d8,iVar5 + 0x119c);
      if (bVar1) {
        bVar1 = FUN_1003ba6c(*(HMODULE *)((int)this + 0x298),0x2b,0x100593e0,iVar5 + 0x10f0);
        if (bVar1) {
          bVar1 = FUN_1003ba6c(*(HMODULE *)((int)this + 0x298),4,0x10059438,iVar5 + 0x10e0);
          if (bVar1) {
            puVar3 = (undefined4 *)FUN_1004f99f(8);
            *(undefined4 **)(iVar5 + 0x11a8) = puVar3;
            *(undefined4 **)(iVar5 + 0x11a4) = puVar3;
            if (puVar3 != (undefined4 *)0x0) {
              *puVar3 = &PTR_s_POSITION_100545b3_1_10059678;
              iVar2 = (int)this + 0x520;
              *(undefined4 *)(*(int *)(iVar5 + 0x11a4) + 4) = 1;
              if (this == (void *)0x0) {
                iVar2 = 0;
              }
              puVar3 = FUN_10038f51(iVar2,param_1,iVar5 + 0x1310,0x1040,0);
              *(undefined4 **)(iVar5 + 0xc) = puVar3;
              if (puVar3 != (undefined4 *)0x0) {
                puVar3 = FUN_10038f51(iVar2,param_1,iVar5 + 0x1370,0x200,
                                      -(uint)(this != (void *)0x0) & (int)this + 0x508U);
                *(undefined4 **)(iVar5 + 8) = puVar3;
                if (puVar3 != (undefined4 *)0x0) {
                  return CONCAT31((int3)((uint)puVar3 >> 8),1);
                }
                puVar3 = *(undefined4 **)(iVar5 + 0xc);
                if (puVar3 != (undefined4 *)0x0) {
                  FUN_10038ecc(puVar3);
                  FUN_1004f9b6(puVar3);
                }
                *(undefined4 *)(iVar5 + 0xc) = 0;
              }
              FUN_100453dd(iVar5);
            }
            FUN_1003bb19(4,iVar5 + 0x10e0);
          }
          FUN_1003bb19(0x2b,iVar5 + 0x10f0);
        }
        FUN_1003bb19(2,iVar5 + 0x119c);
      }
      (**(code **)(**(int **)(iVar5 + 0x80) + 8))(*(int **)(iVar5 + 0x80));
      *(undefined4 *)(iVar5 + 0x80) = 0;
    }
    uVar4 = (**(code **)(**(int **)(iVar5 + 0x10) + 8))(*(int **)(iVar5 + 0x10));
    *(undefined4 *)(iVar5 + 0x10) = 0;
  }
  return uVar4 & 0xffffff00;
}

