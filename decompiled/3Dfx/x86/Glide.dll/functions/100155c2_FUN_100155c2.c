/*
 * FUN_100155c2 at 100155c2
 * undefined __fastcall FUN_100155c2(void * param_1)
 * Address ranges: 100155c2-100156fa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100155c2(void *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_414 [256];
  undefined4 local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  if (*(int *)((int)param_1 + 0x44) != 0) {
    local_c = 0;
    local_8 = 0;
    local_10 = 0;
    iVar2 = (**(code **)((int)param_1 + 0x50))(&local_c,&local_8,&local_10,&local_14);
    if (iVar2 != 0) {
      FUN_10013828(param_1,local_414);
      FUN_10014040(param_1,3,8,1,1,0);
      FUN_10013f6b(param_1,3,8,1,1,0,0);
      FUN_10013d43(param_1,1,5,4,0);
      FUN_10013cbc(param_1,0);
      FUN_10013dea(param_1,7);
      FUN_10014256(param_1,0);
      FUN_100140f5(param_1,1,0);
      FUN_1001415b(param_1,2);
      FUN_10013e7a(param_1,0);
      FUN_10013e33(param_1,1);
      FUN_10013a89(param_1,0);
      FUN_10013a4e(param_1,0x40);
      FUN_1001419c(param_1,0,0,*(int *)(*(int *)((int)param_1 + 0xc) + 0x98),
                   *(int *)(*(int *)((int)param_1 + 0xc) + 0x9c));
      iVar1 = *(int *)((int)param_1 + 0xc);
      uVar4 = *(int *)(iVar1 + 0x9c) - local_8;
      uVar3 = *(int *)(iVar1 + 0x98) - local_c;
      if ((int)uVar4 < 1) {
        uVar4 = 0;
      }
      if ((int)uVar3 < 1) {
        uVar3 = 0;
      }
      FUN_10013b62(param_1,(uint)*(byte *)(iVar1 + 0xe0),uVar3,uVar4,local_14,local_c,local_8,
                   local_10,iVar2,1,1);
      FUN_10013870(param_1,local_414,'\0');
    }
  }
  return;
}

