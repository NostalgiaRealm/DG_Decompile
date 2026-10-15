/*
 * FUN_10054749 at 10054749
 * bool __thiscall FUN_10054749(void * this, uint param_1, void * param_2, int param_3, int param_4, undefined4 * param_5)
 * Address ranges: 10054749-100547bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall
FUN_10054749(void *this,uint param_1,void *param_2,int param_3,int param_4,undefined4 *param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 **ppuVar4;
  undefined4 *local_30;
  int local_2c;
  uint local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  uVar3 = param_4 - param_3;
  ppuVar4 = &local_30;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppuVar4 = (undefined4 *)0x0;
    ppuVar4 = ppuVar4 + 1;
  }
  if ((*(int *)((int)this + 0x8e0) != 0) &&
     (bVar1 = FUN_1005a616(param_2,uVar3,(int *)&local_30), bVar1)) {
    FUN_10060d80(local_30,param_5,uVar3);
    local_10 = 0;
    local_14 = 0;
    local_18 = uVar3;
  }
  if (local_2c != 0) {
    FUN_100546b9(this,param_1,param_2,(int)&local_30,param_3);
  }
  return local_2c != 0;
}

