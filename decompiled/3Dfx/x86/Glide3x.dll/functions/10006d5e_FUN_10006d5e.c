/*
 * FUN_10006d5e at 10006d5e
 * undefined __thiscall FUN_10006d5e(void * this, int param_1, uint param_2, undefined4 param_3, uint param_4, int param_5, int param_6, int param_7, uint param_8)
 * Address ranges: 10006d5e-10006e55
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10006d5e(void *this,int param_1,uint param_2,undefined4 param_3,uint param_4,int param_5,
            int param_6,int param_7,uint param_8)

{
  int *piVar1;
  uint uVar2;
  int extraout_ECX;
  int iVar3;
  uint extraout_EDX;
  uint uVar4;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if ((param_1 < *(int *)(*(int *)((int)this + 0x1c) + 0x797)) &&
       (uVar2 = FUN_1000419c(param_5,param_6,param_7,param_8), (char)uVar2 != '\0')) {
      uVar2 = extraout_EDX;
      if (*(uint *)(extraout_ECX + 0x793) < extraout_EDX) {
        uVar2 = *(uint *)(extraout_ECX + 0x793);
      }
      iVar3 = param_1 * 0x55 + 399 + *(int *)((int)this + 0xc);
      if ((((*(byte *)(iVar3 + 0x53) == param_4) &&
           (uVar4 = 3 - param_2,
           *(uint *)(iVar3 + 0x33 + (~-(uint)(3 < param_2) & uVar4) * 4) == uVar2)) &&
          (*(int *)(iVar3 + 0x4b) == param_7)) &&
         (((*(uint *)(iVar3 + 0x4f) == param_8 && (*(int *)(iVar3 + 0x47) == param_6)) &&
          (*(int *)(iVar3 + 0x43) == param_5)))) {
        param_3._0_1_ = '\0';
      }
      else {
        param_3._0_1_ = '\x01';
        uVar4 = 3 - param_2;
      }
      *(uint *)(iVar3 + 0x33 + (~-(uint)(3 < param_2) & uVar4) * 4) = uVar2;
      *(char *)(iVar3 + 0x53) = (char)param_4;
      *(int *)(iVar3 + 0x4b) = param_7;
      *(uint *)(iVar3 + 0x4f) = param_8;
      *(int *)(iVar3 + 0x47) = param_6;
      *(int *)(iVar3 + 0x43) = param_5;
      FUN_10005015(this,param_1,(char)param_3);
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    return;
  }
  return;
}

