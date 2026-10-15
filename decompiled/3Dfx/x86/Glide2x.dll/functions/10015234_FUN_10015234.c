/*
 * FUN_10015234 at 10015234
 * undefined __fastcall FUN_10015234(void * param_1)
 * Address ranges: 10015234-1001536c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10015234(void *param_1)

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
      FUN_10013535(param_1,local_414);
      FUN_10013cb2(param_1,3,8,1,1,0);
      FUN_10013bdd(param_1,3,8,1,1,0,0);
      FUN_100139b5(param_1,1,5,4,0);
      FUN_1001392e(param_1,0);
      FUN_10013a5c(param_1,7);
      FUN_10013ec8(param_1,0);
      FUN_10013d67(param_1,1,0);
      FUN_10013dcd(param_1,2);
      FUN_10013aec(param_1,0);
      FUN_10013aa5(param_1,1);
      FUN_10013796(param_1,0);
      FUN_1001375b(param_1,0x40);
      FUN_10013e0e(param_1,0,0,*(int *)(*(int *)((int)param_1 + 0xc) + 0x98),
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
      FUN_100137d4(param_1,(uint)*(byte *)(iVar1 + 0xe0),uVar3,uVar4,local_14,local_c,local_8,
                   local_10,iVar2,1,1);
      FUN_1001357d(param_1,local_414,'\0');
    }
  }
  return;
}

